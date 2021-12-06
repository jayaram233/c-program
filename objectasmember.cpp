#include<iostream>
using namespace std;
class DOB
{
	private:
		int dd,mm,yy;
	public:
		void show()
		{
			cout<<"enter date,month and year:";
			cin>>dd>>mm>>yy;
			cout<<dd<<"-"<<mm<<"-"<<yy;
		}
};
class student
{
	private:
		string name;
		int pin_no;
		DOB d;
	public:
		void display()
		{
			cout<<"enter name and pin number :";;
			cin>>name>>pin_no;
			cout<<"name = "<<name<<endl;
			cout<<"pin_no = "<<pin_no<<endl;
			d.show();
		}
};
int main()
{
	student s;
	s.display();
	return 0;
}
