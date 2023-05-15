
//Write a program of Addition, Subtraction, Division, Multiplication using constructor... 

#include<iostream>
using namespace std;
class calculator
{
	public :
	float a,b,sum,sub,div,mul;
	//using constructor.....
	calculator()
	{
		cout<<"enter the value of a : ";
		cin>>a;
		
		cout<<"enter the value of b : ";
		cin>>b;
		
		sum=a+b;
		sub=a-b;
		div=a/b;
		mul=a*b;
	}
	//Print data....
	void print_data()
	{
		 cout<<"\nsum of two value is : "<<sum;
		 cout<<"\nsub of two value is : "<<sub;
		 cout<<"\ndiv of two value is : "<<div;
		 cout<<"\nmul of two value is : "<<mul;
	}
};
main()
{
	calculator c1;
	c1.print_data();
}
