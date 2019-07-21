#include <iostream>
#include "RAM.h"
#include "ROM.h"
using namespace std;

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