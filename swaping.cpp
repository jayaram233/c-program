#include<iostream>
using namespace std;
template <typename T>
void Swap(T &x, T &y) 
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
 {
    int x, y;
    cout << "Enter two numbers:";
    cin >> x>>y;
    cout << "Before Swap:"<<endl;
    cout << "x value is:" << x<<endl;
    cout << "y value is:" << y<<endl;
    Swap(x, y);
    cout << "after swap:"<<endl;
    cout << "x value is:" << x<<endl;
    cout << "y value is:" << y<<endl;
    return 0;
}