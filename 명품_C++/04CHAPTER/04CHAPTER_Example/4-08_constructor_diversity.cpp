#include <iostream>
using namespace std;

class Circle{
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r);
	double getArea();
};

Circle::Circle(){
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r){
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() { cout << "소멸자 실행 radius = " << radius << endl; }

void Circle::setRadius(int r) { radius = r; }
double Circle::getArea() { return 3.14*radius*radius; }

void main(){
	int radius;

	while (true)
	{
		cout << "\n정수 반지름 입력(음수이면 종료)>> ";
		cin >> radius;

		if (radius < 0) { break; }

		Circle *p = new Circle(radius);
		cout << "원의 면적은 " << p->getArea() << endl;

		delete p;
	}
}