#include <iostream> //iostream 클래스를 사용하기 위해 import합니다
using namespace std; //std 안에 있는 함수들의 이름공간을 생략합니다

class Coffee { //커피들의 재료들을 관리하는 클래스
	int coffee; int sugar; int milk; int water; //각각의 재료들을 저장하는 변수
public: //접근 가능 멤버 선언부
	Coffee(); //매개변수 없이 객체를 호출되는 커피
	Coffee(int coffeeAmount, int sugarAmount, int milkAmount, int waterAmount); //각각의 재료들을 매개변수로한 커피
	void show(); //현재 객체에 저장된 재료의 양의 갯수만큼 *을 출력하는 함수
};

Coffee::Coffee() { //커피 생성자 구현부
	coffee = 10; sugar = 0; milk = 0; water = 0; //커피 10 나머지 0으로 초기화
}

Coffee::Coffee(int coffeeAmount, int sugarAmount, int milkAmount, int waterAmount) {  //재료의 양을 받은 커피 생성자 구현부
	coffee = coffeeAmount; sugar = sugarAmount; milk = milkAmount; water = waterAmount; //입력받은 각각의 재료의 양을 대입
}

void Coffee::show() { //들어가는 재료의 갯수만큼 *을 출력한다.
	int i; //반복문을 위한 변수 생성
	cout << "Coffee "; // 커피 출력
	// 커피의 값만큼 실행
	for (i = coffee; i > 0; i--) {
		cout << "*"; //*출력
	}
	cout << endl; //줄바꿈
	cout << "sugar "; //설탕 출력
	//설탕의 값만큼 실행
	for (i = sugar; i > 0; i--) {
		cout << "*"; //*출력
	}
	cout << endl; //줄바꿈
	cout << "milk "; //우유 출력
	for (i = milk; i > 0; i--) {//우유의 값만큼 실행
		cout << "*"; //*출력
	}
	cout << endl; //줄바꿈
	cout << "water "; //물 출력
	for (i = water; i > 0; i--) {//물의 값만큼 실행
		cout << "*"; //*출력
	}
	cout << endl; //줄바꿈
}

int main() {
	Coffee espresso; // 커피 10, 설탕 0, 우유 0, 물 0으로 만든 커피
	Coffee americano(5, 0, 0, 10); // 커피 5, 물 10으로 만든 커피
	Coffee cappucchino(5, 1, 5, 2); // 커피 5, 설탕 1, 우유 5, 물 2로 만든 커피
	Coffee mySweet(3, 7, 5, 5); // 커피 3, 설탕 7, 우유 5, 물 5로 만든 커피

	espresso.show(); //에스프레소에 들어가는 재료들의 양 출력
	cout << endl; //줄바꿈
	mySweet.show(); //mySweet에 들어가는 재료들의 양 출력
}