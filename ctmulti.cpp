#include<iostream>
using namespace std;
template<class T1,class T2>
class sample
{
	private:
		T1 x;
		T2 y;
	public:
		void get()
		{
			cout<<"enter x , y values : "<<endl;
			cin>>x>>y;
		}
		void display()
		{
			cout<<" x = "<<x<<endl;
			cout<<" y = "<<y<<endl;
		}
};
int main()
{
	sample <int,int> s1;
	s1.get();
	cout<<"Two integer values :"<<endl;
	s1.display();
	sample <int,float> s2;
	s2.get();
	cout<<"Integer and float values :"<<endl;
	s2.display();
	sample <int,char> s3;
	s3.get();
	cout<<"integer and character values :"<<endl;
	s3.display();
	return 0;
}
