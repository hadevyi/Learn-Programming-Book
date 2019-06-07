#include <iostream>
#include "Sample.h"
using namespace std;

void main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "\n\nMost Big number is " << s.big() << endl << endl;
}