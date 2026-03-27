#include <iostream> 
#include <string>
using namespace std;

class Memo {
	string date;
	string content;
public:
	Memo(string date, string content);
	void show();
	bool isSameDate(Memo b);
	string getDate();
	string getContent();
};

Memo::Memo(string d, string c) {
	date = d;
	content = c;
}
void Memo::show() {
	cout << date << ", " << content << endl;
}

bool Memo::isSameDate(Memo b) { //매개 변수의 date와 비교해서 같으면 true 다르면 false 반환
	if (date == b.date) { return true; }
	else { return false; }
}

string Memo::getDate() {
	return date;
}

string Memo::getContent() {
	return content;
}

int main() {
	Memo a("1:20", "동계 프로그래밍 캠프");
	Memo b("2:20", "김경미 독일 송별회");
	Memo c("2:21", "박채원 졸업식, 대학원 간대");
	a.show();
	if (a.isSameDate(b)) cout << "같은 날입니다." << endl;
	else cout << "다른 날입니다." << endl;
	cout << b.getDate() << "에 " << b.getContent() << endl;
}