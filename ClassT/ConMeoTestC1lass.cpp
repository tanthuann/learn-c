
#include <iostream>
using namespace std;

class Cat
{
	static int catNumber;

	private:
		static Cat *instance;

	public:
		string name;
		int age;

//		Cat(string _name,int _age)
//		{
//			name = _name;
//			age = _age;
//		}
	//	~Cat()												;destructor
	//	{
	//		cout<<"destroy";
	//	}	
		// Cat(const Cat& cat)									//contructor			
		// {
		// 	cout<<"Copy"<<endl;
		// 	name=cat.name;
		// 	age=cat.age;
		// }
		void printThis()									//con tro this
		{
			cout<< this << endl;
		}
		static void printCatNumber()						//static duy nhat truy cap bangwf  ::
		{
			cout << catNumber << endl;
		}

		static Cat getInstance()
		{
			if (instance == NULL)
			{
				instance = new Cat();
				return *instance;
			}
		}

};

int Cat::catNumber = 0;

Cat *Cat::instance = NULL;

int main()
{
	//Cat cat=Cat("Tom",3);
	//cout<<cat.name<<" "<<cat.age<<endl;
	//cat.printThis();
	//Cat secondCat= Cat("Jerry",4);
	//cout<< secondCat.name << " "<<secondCat.age<<endl;
	//secondCat.printThis();
	//Cat::printCatNumber();
	Cat cat = Cat::getInstance();
	return 0;
}

//https://cowboycoder.tech/article/c-co-ban-phan-22-class-va-object
