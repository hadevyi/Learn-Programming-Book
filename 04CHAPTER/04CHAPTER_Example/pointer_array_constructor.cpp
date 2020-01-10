#include <iostream>
using namespace std;

class Circle{
	int radius;
public:
	Circle();
	~Circle();
	void setRadius(int r);
	double getArea();
};

Circle::Circle() { radius = 1; }
Circle::~Circle() {}
void Circle::setRadius(int r) { radius = r; }
double Circle::getArea() { return 3.14*radius*radius; }

void main(){
	cout << "생성하고자 하는 원의 개수?";
	int n, radius;
	cin >> n;

	if (n <= 0) { exit(0); }

	Circle *pArray = new Circle[n];

	for (int i = 0; i < n; i++)	{
		cout << "원" << i + 1 << " : ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}

	int count = 0;
	Circle* p = pArray;

	for (int i = 0; i < n; i++)	{
		cout << p->getArea() << ' ';

		if (p->getArea() >= 100 && p->getArea() <= 200)		{
			count++;
		}
		p++;
	}

	cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;

	delete[]pArray;
}