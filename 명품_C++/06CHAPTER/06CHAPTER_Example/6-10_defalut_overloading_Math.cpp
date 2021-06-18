#include <iostream>
using namespace std;

class Math {
public:
	static int abs(int a);
	static int max(int a, int b);
	static int min(int a, int b);
};

int Math::abs(int a) { return a > 0 ? a : -a; }
int Math::max(int a, int b) { return(a > b) ? a : b; }
int Math::min(int a, int b) { return(a > b) ? b : a; }

void main(){
	cout << Math::abs(-5) << endl;
	cout << Math::max(10, 8) << endl;
	cout << Math::min(-3, -8) << endl;
}