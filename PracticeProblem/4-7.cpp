#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand((unsigned)time(NULL));
	string input;
	string front[8] = { "뛰어난", "사랑스러운", "까불까불", "씩씩한", "철부지",
						"장난끼많은", "떨고있는", "얼렁뚱땅" };
	string back[10] = { "호랑이", "장미", "고양이", "나팔꽃", "종", "연필", "얼박사",
						"프린터", "노트북", "헤드셋" };
	while (1) {
		cout << "사용자 ID 생성 (yes/no)>>";
		cin >> input;
		if (input == "yes") {
			int idxFront = rand() % 8;
			int idxBack = rand() % 10;
			cout << front[idxFront] << " " << back[idxBack] << endl;
		}
		else {
			cout << "ID 생성 종료";
			break;
		}
	}
}

