#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//1
	/*int hp;
	cin >> hp;
	bool res = hp > 0;
	if (hp <= 0) {
		res = false;
 }
	else {
		res = true;
	}
	cout << boolalpha << res << endl;*/
	//2
	/*int t;
	cin >> t;
	if (t > 20) {
		cout << "on" << endl;
	}
	else {
		cout << "off" << endl;
	}*/
	//4
	/*
	double x, y;
	cin >> x;
	if (x > 0) {
		y = sqrt(x - 2);
		cout << y << endl;
	}
	if (x == 0) {
		y = 0;
		cout << y << endl;
	}
	else {
		y = abs(x);
		cout << y << endl;
	}*/
	//5
	int a;
	cin >> a;
	switch (a) {
	case 1:cout << "�������" << endl; break;
	case 2:cout << "������������" << endl; break;
	case 3:cout << "�������" << endl; break;
	case 4:cout << "����������" << endl; break;
	case 5:cout << "�������" << endl; break;
	default: cout << "������" << endl;
	}
	//3
	/*int t, v;
	int g = 25;
	cin >> t >> v;
	if (t > g && v <= 80) {
		cout << "on" << endl;
		
	}
	else {
		cout << "off" << endl;
	}*/
}