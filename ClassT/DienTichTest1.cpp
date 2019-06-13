#include<iostream>
#include<math.h>

using namespace std;

class Shape
{
	public:
		virtual void printArea()
		{
			cout<<"No Data"<<endl;
		}
};

class HinhThang: public Shape
{
	private:
		double width,height;
	public:
		HinhThang(double _width,double _height)
		{
			width = _width;
			height = _height;
		}
		void printArea()
		{
			cout<<width*height<<endl;
		}

};

class Circle : public Shape
{

	private:
		double radiar;
	public:
		Circle(double _radiar)
		{
			radiar = _radiar;
		}

		void printArea()
		{
			cout<<radiar*radiar*3.14<<endl;
		}
};

class Triangle : public Shape
{
	private:
		double a,b,c;
	public:
		Triangle(double _a,double _b,double _c)
		{
			a=_a;
			b=_b;
			c=_c;
		}
		void printArea()
		{
			double p=(a+b+c)/2;
			cout<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
		}
};

Shape *allShape[]={
	new HinhThang(3,4),
	new Circle(1),
	new Triangle(3,4,5)
};

int main(int argc, char const *argv[])
{
	for (int i = 0; i < 3; ++i)
	{
		allShape[i]->printArea();
	}
	return 0;
}
