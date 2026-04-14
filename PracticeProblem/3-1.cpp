#include <iostream>
#include <string>
using namespace std;

class Picture {
	int width;
	int height;
	string place;
public:
	Picture() { this->width = 5; this->height = 7; this->place = "모름"; }
	Picture(int width, int height, string place);
	int getWidth() { return this->width; }
	int getHeight() { return this->height; }
	string getPlace() { return this->place; }

};

Picture::Picture(int width, int height, string place) {
	this->width = width;
	this->height = height;
	this->place = place;
}

int main() {
	Picture pic;
	Picture mt(10, 14, "한라산");
	cout << pic.getWidth() << "x" << pic.getHeight() << " " << pic.getPlace() << endl;
	cout << mt.getWidth() << "x" << mt.getHeight() << " " << mt.getPlace() << endl;
}