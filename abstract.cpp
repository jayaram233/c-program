#include<iostream>
using namespace std;
class Shapes
{
	public:
		virtual void Area(int x)=0;
};
class Square:public Shapes
{
	public:
		void Area(int x)
		{
			cout<<"Area of square = "<<x*x<<endl;
		}
};
class circle:public Shapes
{
	public:
		void Area(int x)
		{
			cout<<"Area of circle = "<<3.14*x*x<<endl;
		}
};
class rectangle:public Shapes
{
	public:
		void Area(int x)
		{
			int b=2;
			cout<<"Area of rectangle = "<<x*b<<endl;
		}
};
int main()
{
	circle c, *cptr;
	cptr = &c;
	cptr -> Area(4);
	Square s, *sptr;
	sptr = &s;
	sptr -> Area(3);
	rectangle r, *rptr;
	rptr = &r;
	rptr -> Area(5);
	return 0;
}
