#ifndef Circle_H
#define Circle_H

class Circle {
	int radius;
public:
	Circle() { this->radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea();
	void setRadius(int radius) { this->radius = radius; }
};

#endif