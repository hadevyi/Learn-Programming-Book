#include <iostream>
#include <string>
#include <string>
using namespace std;

void msg(int id) { cout << id << endl; }
void msg(int id, string s = "") { cout << id << " : " << s << endl; } //만약 디폴트를 사용했을 경우 이도 수행될 것이다.

void main(){
	msg(5, "Good Morning");
	//msg(6);
}