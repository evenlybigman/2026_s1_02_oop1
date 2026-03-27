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
	string ingredient[] = { "Coffee", "Sugar", "Milk", "Water" }; //출력할 문자열 저장 
	int amounts[] = { coffee, sugar, milk, water }; //배열에 재료의 양 저장
	for (int i = 0; i<size(amounts); i++) { //자료 개수만큼 반복
		cout << ingredient[i] << " "; //재료 이름 출력
		for (int j = 0; j < amounts[i]; j++) { //재료의 양 만큼 반복
			cout << "*"; //*출력
		}
		cout << endl; //줄바꿈
	}
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