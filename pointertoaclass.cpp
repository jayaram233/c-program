#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length,breadth;
	public:
		Rectangle(int l,int b)
		{
			length=l;
			breadth=b;
		}
		void getarea()
		{
			cout<<"Area of rectangle = "<<2*length*breadth;
		}
};
int main()
{
	Rectangle r(5,2),*rptr;
	rptr=&r;
	rptr->getarea();
	return 0;
}
