#include <iostream>

using namespace std;

class Animal
{
	protected:
		string type, area;
};

class Cat: protected Animal           
{
	private:
		string name;
		int age;

	public:
		string getType()
		{
			return type;
		}
		void setType(string _type)
		{
			type= _type;
		}
};

class MeoTamThe: public Cat
{
	public:
		string color[3];
		string	getArea()
		{
			return area;
		}
		void setArea(string _area)
		{
			area  = _area;
		}

};

int main(int argc, char const *argv[])
{
	Cat cat1;
	MeoTamThe cat2;
	cat1.setType("Cat");
	cout<<cat1.getType();
	cat2.setArea("Cattttttttttt");
	cout<<cat2.getArea();
	
	return 0;
}

//https://cowboycoder.tech/article/c-co-ban-phan-23-tinh-thua-ke-class-con-subclass
