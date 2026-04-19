#include <iostream>
#include "Circle.h"
#include "CircleManager.h"
using namespace std;

void CircleManager::input() {
	//원 개수를 입력받아 동적 할당
	cout << "원의 개수? ";
	cin >> n;
	p = new Circle[n];
	if (p == NULL)
		exit(0);

	//원 배열 입력
	for (int i = 0; i < n; i++) {
		cout << "원" << (i + 1) << ": ";
		int radius;
		cin >> radius;
		p[i].setRadius(radius);
	}
}

void CircleManager::show() {
	for (int i = 0; i < n; i++)
		cout << p[i].getArea() << "\t";
	cout << endl;
}

void CircleManager::decide() {
	for (int i = 0; i < n; i++) {
		double d = p[i].getArea();
		if (d > 100 && d < 200)
			cout << d << "\t";
	}
	cout << endl;
}

void CircleManager::run() {
	input();
	show();
	decide();
}