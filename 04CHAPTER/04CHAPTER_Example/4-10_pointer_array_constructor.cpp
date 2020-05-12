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
	cin >> n;		// 원의 개수 입력

	if (n <= 0) { exit(0); }

	Circle *pArray = new Circle[n];		// n개의 Circle 배열 생성

	for (int i = 0; i < n; i++)	{
		cout << "원" << i + 1 << " : ";	// 프롬프트 출력
		cin >> radius;					// 반지름 입력
		pArray[i].setRadius(radius);	// 각 Circle 객체를 반지름으로 초기화
	}

	int count = 0;						// 카운트 변수
	Circle* p = pArray;

	for (int i = 0; i < n; i++)	{
		cout << p->getArea() << ' ';	// 원의 면적 출력

		if (p->getArea() >= 100 && p->getArea() <= 200)		{
			count++;
		}
		p++;
	}

	cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;

	delete[]pArray;						// 객체 배열 소멸
}