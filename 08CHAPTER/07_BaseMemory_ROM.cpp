#include <iostream>
using namespace std;

class BaseMemory {
	char* mem;
protected:
	BaseMemory(int size) { mem = new char[size]; }
	void set(int size, int val) { mem[size] = val; }
	char get(int size) { return mem[size]; }
};

class RAM :public BaseMemory {
public:
	RAM(int size) :BaseMemory(size) { ; }
	void write(int i, int val) { set(i, val); }
	char read(int i) { return get(i); }
};

class ROM :public BaseMemory {
	int leg;
public:
	ROM(int size, char x[], int num) :BaseMemory(size) {
		leg = num;
		for (int i = 0; i < num; i++)
			set(i, x[i]);
	}
	char read(int i) {
		return get(i);
	}
};

void main()
{
	char x[5] = { 'h','e','l','l','o' };
	ROM biosROM(1024 * 10, x, 5);	//10 KB of ROM memory. Initialized with Array x
	RAM mainMemory(1024 * 1024);	//1MB of RAM memory

	//Read from BiosROM from 0 to 4 and copy to mainMemory
	for (int i = 0; i < 5; i++)
		mainMemory.write(i, biosROM.read(i));

	for (int i = 0; i < 5; i++)
		cout << mainMemory.read(i);
}