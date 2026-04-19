//예제 6 - 2 함수 간소화 문제

#include <iostream>
using namespace std;

/* 원래 함수
void fillLine() {
	for (int i = 0; i < 25; i++) cout << '*';
	cout << endl;
}

void fillLine(int n, char c) {
	for (int i = 0; i < n; i++) cout << c;
	cout << endl;
}
*/

//간소화 한 함수
void fillLine(int n=25, char c='*') {
	for (int i = 0; i < n; i++) cout << c;
	cout << endl;
}

int main() {
	fillLine();
	fillLine(10, '%');
}