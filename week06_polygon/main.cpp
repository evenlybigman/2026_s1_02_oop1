#include <iostream>
#include "Polygon.h"
using namespace std;

int main() {
	Polygon poly(6);
	poly.read();
	int n = 3, x, y;
	bool res = poly.get(3, x, y);
	if (res == true)
		cout << n << "번째 점은 " << "(" << x << ", " << y << ")" << endl;
	else
		cout << "error";
}