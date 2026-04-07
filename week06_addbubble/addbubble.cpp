#include <iostream>
using namespace std;

class Bubble {
	int radius;
public:
	Bubble(int radius) { this->radius = radius; };
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	Bubble& addBubble(Bubble y) {
		radius += y.getRadius();
		return *this;
	}
};

int main() {
	Bubble a(5), b(10), c(130);
	c.addBubble(a).addBubble(b).addBubble(Bubble(200));
	cout << "버블 c의 반지름" << c.getRadius() << endl;
}