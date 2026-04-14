#include <iostream>
using namespace std;

class Storage {
	int person = 0;
	double temperature[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
public:
	void put(double temp);
	void dump();
	double getAvg();
};

void Storage::put(double temp) {
	temperature[person] = temp;
	person++;
}

double Storage::getAvg() {
	double average = 0;
	for (int i = 0; i < person; i++) {
		average += temperature[i];
	}
	return average / person;
}

void Storage::dump() {
	for (int i = 0; i<person; i++) 
		cout << this->temperature[i] << '\t';
	cout << endl;
}

int main() {
	Storage a;
	a.put(36.7);
	a.put(36.9);
	a.put(36.4);
	a.dump();
	cout << "평균 체온은 " << a.getAvg() << "입니다." << endl;
}