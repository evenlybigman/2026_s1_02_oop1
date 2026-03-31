#ifndef CircleManager_h
#define CircleManager_h
#include "Circle.h"

class CircleManager {
	int n; //원의 개수
	Circle* p; //Circle 배열에 대한 포인터
	void input();
	void show();
	void decide();
public:
	void run();
};

#endif