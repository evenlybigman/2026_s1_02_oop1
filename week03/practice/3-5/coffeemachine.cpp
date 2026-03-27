#include <iostream>
using namespace std;

class CoffeeMachine {
	int coffee;
	int water;
	int sugar;
public:
	CoffeeMachine(int c, int w, int s);
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void show();
	void fill();
};

CoffeeMachine::CoffeeMachine(int c, int w, int s) {
	coffee = c;
	water = w;
	sugar = s;
}

void CoffeeMachine::drinkEspresso() {
	if (coffee < 1 || water < 1) {
		cout << "재료가 부족합니다. 다음에 오세요." << endl;
		return;
	}
	coffee--; water--;
	cout << "에스프레소 나왔습니다." << endl;
}

void CoffeeMachine::drinkAmericano() { // 커피 1, 물 2 소비
	if (coffee < 1 || water <= 1) {
		cout << "재료가 부족합니다. 다음에 오세요." << endl;
		return;
	}
	coffee--; water-=2;
	cout << "아메리카노 나왔습니다." << endl;
}

void CoffeeMachine::drinkSugarCoffee() { // 커피 1, 물 2, 설탕 1 소비
	if (coffee <1|| water <2 || sugar <1) {
		cout << "재료가 부족합니다. 다음에 오세요." << endl;
		return;
	}
	coffee--; water -= 2; sugar--;
	cout << "설탕커피 나왔습니다." << endl;
}

void CoffeeMachine::show() {
	cout << "[머신상태]";
	cout << "커피:" << coffee << "\t";
	cout << "물:" << water << "\t";
	cout << "설탕:" << sugar << "\t";
	cout << endl;
}

void CoffeeMachine::fill() {
	coffee = 10; water = 10; sugar = 10;
	cout << "재료들을 다시 채웠습니다." << endl;
}

/*
int main() {
	CoffeeMachine java(5, 10, 6); //커피:5, 물:10, 설탕:6으로 초기화
	java.show();
	java.drinkEspresso(); // 커피 1, 물 1 소비
	java.show(); // 현재 커피 머신의 상태 출력4
	java.drinkAmericano();
	java.drinkSugarCoffee(); // 커피 1, 물 2, 설탕 1 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.fill(); // 커피 10, 물 10, 설탕 10으로 채우기
	java.show(); // 현재 커피 머신의 상태 출력
}
*/

int main() { //메뉴화
	CoffeeMachine java(2, 3, 1);
	
	while (true) {
		cout << "1:에, 2:아, 3:설, 4:머신상태, 5: 채우기, 6: 끝내기" << endl;
		int menu;
		cin >> menu;
		switch (menu) {
		case 1:java.drinkEspresso(); break;
		case 2:java.drinkAmericano(); break;
		case 3:java.drinkSugarCoffee(); break;
		case 4:java.show(); break;
		case 5:java.fill(); break;
		case 6:return 0;
		}
		java.show();
	}
}