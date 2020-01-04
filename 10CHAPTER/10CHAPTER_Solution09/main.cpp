#include <iostream>
#include <vector>
using namespace std;

void main(){
	vector<int> v;
	int num, cnt = 0, sum = 0;

	while (true) 
	{
		sum = 0;
		cout << "정수를 입력하세요. (0을 입력하면 종료) >> ";
		cin >> num;

		if (num == 0)
			exit(0);

		v.push_back(num);

		for (int i = 0; i < v.size(); i++) {
			cout << v.at(i) << " ";
			sum += v.at(i);
		}

		cout << endl << "평균 = " << (double)sum / v.size() << endl;
	}
}