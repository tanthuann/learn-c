
#include <iostream>
using namespace std;

class Cat
{
	static int catNumber;

	public:
		string name;
		int age;

		Cat(string _name,int _age)
		{
			name = _name;
			age = _age;
		}
	//	~Cat()
	//	{
	//		cout<<"destroy";
	//	}
		Cat(const Cat& cat)
		{
			cout<<"Copy"<<endl;
			name=cat.name;
			age=cat.age;
		}
		void printThis()
		{
			cout<< this << endl;
		}
		static void printCatNumber()
		{
			cout<<catNumber<<endl;
		}
};

int main(int argc, char const *argv[])
{
	Cat cat=Cat("Tom",3);
	cout<<cat.name<<" "<<cat.age<<endl;
	cat.printThis();
	Cat secondCat=cat;
	cout<< secondCat.name << " "<<secondCat.age<<endl;
	secondCat.printThis();
	Cat::printCatNumber();
	return 0;
}
