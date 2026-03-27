#include <iostream>
#include <string>
using  namespace std;

//객체 선언
class Picture {
	int width;
	int height;
	string place;
public:
	Picture();
	Picture(int w, int h, string pl);
	int getWidth();
	int getHeight();
	string getPlace();
};

//구현부
Picture::Picture() {
	width = 5; height = 7; place = "모름";
}

Picture::Picture(int w, int h, string pl) {
	width = w; height = h; place = pl;
}

int Picture::getWidth() { return width; }
int Picture::getHeight() { return height; }
string Picture::getPlace() { return place; }

//메인
int main() {
	Picture pic; //Picture(); 5 * 7, 장소 모름
	Picture mt(10, 14, "한라산"); // 10 X 14, 한라산
	cout << pic.getWidth() << 'X' << pic.getHeight() << pic.getPlace() << endl;
	cout << mt.getWidth() << 'X' << mt.getHeight() << mt.getPlace() << endl;
	return 0;
}
