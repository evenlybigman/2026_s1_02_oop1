#include <iostream>
using namespace std;

class CoffeeMachine{
	int coffee = 0;
	int water = 0;
	int sugar = 0;
public:
	CoffeeMachine(int coffee, int water, int sugar);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void show();
	void fill();
};

CoffeeMachine::CoffeeMachine(int coffee, int water, int sugar) {
	this->coffee = coffee;
	this->water = water;
	this->sugar = sugar;
}

void CoffeeMachine::drinkEspresso() {
	coffee -= 1;
	water -= 1;
}

void CoffeeMachine::drinkAmericano() {
	coffee -= 1;
	water -= 2;
}

void CoffeeMachine::drinkSugarCoffee() {
	coffee -= 1;
	water -= 2;
	sugar -= 1;
}

void CoffeeMachine::show() {
	cout << "[머신 상태] 커피:" << this->coffee << "\t" << "물:" << this->water << "\t" << "설탕:" << this->sugar;
	cout << endl;
}

void CoffeeMachine::fill() {
	this->coffee = 10;
	this->water = 10;
	this->sugar = 10;
}

int main() {
	CoffeeMachine java(5, 10, 6);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}