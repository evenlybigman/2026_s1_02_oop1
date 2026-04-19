#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price;
public:
	Book() { title = ""; price = 0; }
	void set(string title, int price) { this->title = title; this->price = price; }
	string getTitle() { return title; }
	int getPrice() { return price; }
};

class Library {
	string name;
	Book* p;
	int size;
	int next = 0;
public:
	Library(string name, int size);
	~Library();
	void add(string name, int price);
	void show();
	Book* mostExpensive();

};

Library::Library(string name, int size) {
	this->name = name;
	this->size = size;
	this->p = new Book[this->size];
}

Library::~Library() {
	delete[] p;
}

void Library::add(string name, int price) {
	p[next].set(name, price);
	next++;
}

void Library::show() {
	cout << this->name << "에 입고된 책은 다음 " << this->next << "권입니다." << endl;
	for (int i = 0; i < next; i++) {
		cout << "[" << p[i].getTitle() << "]   ";
	}
	cout << endl;
}

Book* Library::mostExpensive() {
	int mostidx = 0;
	for (int i = 0; i < next; i++) {
		if (p[i].getPrice() > p[mostidx].getPrice()) {
			mostidx = i;
		}
	}
	return &p[mostidx];
}

int main() {
	Library* lib = new Library("한국 도서관", 10);
	lib->add("명품 C++", 30000);
	lib->add("라즈베리파이", 34000);
	lib->add("HTML5", 33000);
	lib->show();
	Book* b = lib->mostExpensive();
	cout << "가장 비싼 책:" << b->getTitle() << "," << b->getPrice() << endl;
	delete lib;
}