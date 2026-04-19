#include <iostream>
using namespace std;

class Container {
	int* p;
	int size;
public:
	Container(int size);
	~Container();
	void read();
	void write();
	void rotate();
	double avg();
};

Container::Container(int size) {
	this->size = size;
	this->p = new int[size];
}

void Container::read() {
	cout << "정수 " << this->size << "개 입력>>";
	for (int i = 0; i < size; i++) {
	cin >> p[i];
	}
}

Container::~Container() {
	delete[] p;
}

void Container::write() {
	for (int i = 0; i < size; i++) {
		cout << p[i] << " ";
	}
	cout << endl;
}

void Container::rotate() { //0-> 9 / 1 -> 8 / 2-> 7 3 -> 6 4 5
	for (int i = 0; i < size / 2; i++) { // size 만큼 반복
		int temp = p[i];
		p[i] = p[size - 1 - i];
		p[size - 1 - i] = temp;
	}
}

double Container::avg() {
	double avg = 0;
	for (int i = 0; i < size; i++) {
		avg += p[i];
	}
	return avg / size;
}

int main() {
	Container c(10);
	c.read();
	c.write();
	c.rotate();
	c.write();
	cout << "평균은 " << c.avg() << endl;
}