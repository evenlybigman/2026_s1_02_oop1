#include <iostream>
using namespace std;
#include "Circle.h"
#include "CircleManager.h"

int main() {
	CircleManager* pMan = new CircleManager();
	pMan->run();
	delete pMan;
}