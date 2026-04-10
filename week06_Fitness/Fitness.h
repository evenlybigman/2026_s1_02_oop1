#ifndef FITNESS_H //한번도 정의되지 않았다면 아래 코드 포함
#define FITNESS_H //FITNESS_H 정의 시작

#include <iostream> //입출력 라이브러리 헤더파일 포함
#include <string> //문자열 헤더파일 포함

class Fitness { //Fitness 구현부
	std::string man = "남"; //남자인지 구별하기 위한 변수 man 선언
	std::string woman = "여"; //여자인지 구별하기 위한 변수 woman 선언
	int countMan = 0; //남자 명수를 세는 변수 선언
	int countWoman = 0; //여자 명수를 세는 변수 선언
public: //클래스 외부에서 사용가능한 함수 선언
	Fitness& arrive(std::string gender, int count); //성별을 받아서 명수를 추가하는 함수 선언
	int& at(std::string gender); //원하는 성별을 읽고 쓸 수 있는 참조 함수 선언
	void count(std::string gender, int& count); //성별의 명수를 세주는 함수 선언
};

#endif //여기까지를 FITNESS_H로 정의