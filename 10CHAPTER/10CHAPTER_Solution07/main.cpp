#include <iostream>
using namespace std;

void main(){
	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << "20과 50 중 큰 값은 " << c << endl;
	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle과 pizza 중 큰 것의 반지름은 " << y.getRadius() << endl;
}