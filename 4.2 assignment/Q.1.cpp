
//WAP to create simple calculator using class.....

#include<iostream>
using namespace std;
//using class
class calculator
{
	public:
	float a,b,sum,sub,mul,div;
	
	void get_value()
	{
		cout<<"Enter the value of a : ";
		cin>>a;
		
		cout<<"enter the value of b : ";
		cin>>b;
		
		sum=a+b;
		sub=a-b;
		mul=a*b;
		div=a/b;
				
	} 
	void print_value()
	{	
		cout<<"\nsum of two value is : "<<sum;
		cout<<"\nsub of two value is : "<<sub;
		cout<<"\nmul of two value is : "<<mul;
		cout<<"\ndiv of two value is : "<<div;
	}
};
main()
{
	calculator cal1;
	
	cal1.get_value();
	cal1.print_value();
	
	
	cout<<"=======================\n";
	cout<<"\n";
	
	/*cal1.get_value();
	cal1.print_value();
	
	cout<<"=======================";
	cout<<"\n";
	
	cal1.get_value();
	cal1.print_value();
	
	cout<<"=======================";
	cout<<"\n";
	
	cal1.get_value();
	cal1.print_value();
	
	cout<<"=======================";
	cout<<"\n";*/
	
}
