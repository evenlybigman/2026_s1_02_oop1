#include <iostream>
#include <string>
using namespace std;

//한 라인의 텍스트를 읽고 빈칸이 여러 개 있는 경우 1개로 줄인 새로운 문자열을
//만들고, 이 문자열을 출력하라.
int main() {
	string text;
	string dest;
	int textCount = 0;
	cout << "텍스트 입력>>";
	getline(cin, text); //text를 입력받음 공백포함
	while (textCount <= size(text)) {
		if (text[textCount] == ' ') {
			dest.append(1, text[textCount]);
			while (text[textCount] == ' ') {
				textCount++;
			}
		}
		else {
			dest.append(1, text[textCount]);
			textCount++;
		}
	}
	cout << dest;
}