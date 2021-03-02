//swapping of two numbers without using 3rd veriable.
#include <iostream>
using namespace std;

int main()
{
	int a=3,b=5;
	cout<<"a =" <<a<<endl;
	cout<<"b =" <<b<<endl;
	a= a+b;
	b= a- b;
	a= a-b;
	cout<<"a =" <<a<<endl;
	cout<<"b =" <<b<<endl;
}
