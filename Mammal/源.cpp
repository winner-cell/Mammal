#include<iostream>
using namespace std;
class Mammal
{
protected:
	int itsAge;
	int itsWeight;
public:
	Mammal() { itsAge = 0; itsWeight = 0; }
	Mammal(int age, int weight) { itsAge = age; itsWeight = weight; }
	int GetAge() { return itsAge; }
	void SetAge(int age) { itsAge = age; }
	int GetWeight() { return itsWeight; }
	void SetWeight(int weight) { itsWeight = weight; }
	~Mammal(void) { cout << "调用mammal析构\n"; }
};

class Dog : public Mammal
{
public:
	Dog() { Mammal::Mammal(); }
	Dog(int age, int weight, string color)
	{ itsAge = age;itsWeight= weight; Color = color; }

	void SetColor(char color){ Color = color; }
	string GetColor() { return Color; }

	~Dog(void){ cout << "调用dog析构\n"; }
private:
	string Color;
};
int main()
{
	
	Dog d2(5,20, "黄");
	cout<<d2.GetAge();
	
}