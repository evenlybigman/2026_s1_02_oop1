#ifndef POLYGON_H
#define POLYGON_H

class Polygon {
	int size = 0;
	int* xlist, * ylist;
public:
	Polygon(int size);
	~Polygon();
	void read();
	bool get(int n, int& x, int& y);
};

#endif