#include <iostream>
#include <string>
using namespace std;

class Trace {
	static string* tag;
	static string* info;
	static int num;
public:
	static void put(string s1, string s2);
	static void print(string s1 = "All");
};

int Trace::num = 0;
string* Trace::tag = new string[100];
string* Trace::info = new string[100];

void Trace::put(string s1, string s2)
{
	tag[num] = s1;
	info[num] = s2;
	num++;
}

void Trace::print(string s1)
{
	if (s1 == "All")
		cout << "----------------------------" << s1 << "Outputs Trace information." << "----------------------------" << endl;
	else
		cout << "----------------------------" << s1 << "Outputs Trace information for the tag." << "----------------------------" << endl;

	if (s1 == "All")
	{
		for (int i = 0; i < num; i++)
			cout << tag[i] << " : " << info[i] << endl;
	}
	else
	{
		for (int i = 0; i < num; i++)
			if (tag[i] == s1)
				cout << tag[i] << " : " << info[i] << endl;
	}
}

void f()
{
	int a, b, c;
	cout << "두 개의 정수를 입력하세요 >> ";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}

void main()
{
	Trace::put("main()", "프로그램 시작합니다.");
	f();
	Trace::put("main()", "종료");

	Trace::print("f()");
	Trace::print();
}