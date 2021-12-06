#include <iostream>
using namespace std;

class base {
public:
	virtual void show()
	{
		cout << "show base class" << endl;
	}
};

class derived : public base {
public:
	void show()
	{
		cout << "show derived class" << endl;
	}
};

int main()
{
	base b, *bptr;
	bptr = &b;
	bptr -> show();
	derived d, *dptr;
	bptr = &d;
	bptr -> show();
	return 0;
}

