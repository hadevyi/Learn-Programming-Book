#include <iostream>
#include <string>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	Person();
	Person(int id, string name);
	Person(int id, string name, double weight);
	void show();
};

Person::Person()
{
	id = 1;
	weight = 20.5;
	name = "Grace";
}

Person::Person(int id, string name)
{
	this->id = id;
	this->weight = 20.5;
	this->name = name;
}

Person::Person(int id, string name, double weight)
{
	this->id = id;
	this->weight = weight;
	this->name = name;
}

void Person::show()
{
	cout << id << ' ' << weight << ' ' << name << endl;
}

void main()
{
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}