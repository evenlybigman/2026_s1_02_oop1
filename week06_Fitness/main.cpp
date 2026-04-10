#include <iostream> //입출력 라이브러리 헤더파일 포함
#include <string> //문자열 라이브러리 헤더파일 포함
#include "Fitness.h" //Fitness.h 헤더파일 포함
using namespace std; //std 이름공간 지칭 생략

int main() { //메인 함수 구현
	Fitness altong; //Fitness 클래스 altong 객체 생성
	altong.arrive("남", 3).arrive("여", 6).arrive("남", 9); //각각의 성별의 count 추가


	int m = 0, w = 0; //남자 회원수와 여자 회원수 변수 선언
	altong.count("남", m); //m에 countMan 불러오기
	altong.count("여", w); //w에 countWoman 불러오기
	cout << "남자 회원 " << m << "명, 여자 회원 " << w << "명" << endl; //성별별 회원 수 출력

	altong.at("남") = 100; //countMan을 100으로 저장
	m = altong.at("남"); //남자 회원수에 countMan값 대입
	w = altong.at("여"); //여자 회원수에 countWoman값 대입
	cout << "남자 회원 " << m << "명, 여자 회원 " << w << "명" << endl;//성별별 회원수 출력
}