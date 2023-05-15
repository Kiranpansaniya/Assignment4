
/*Write a program to find the multiplication values 
and the cubic values using inline function.....*/

#include<iostream>
using namespace std;
class data
{
	public:
		
		int a,b,mul,cube;
		
		void mul_value()
		{		
			int a,b,mul;
			
			cout<<"enter the value of a : ";
			cin>>a;
			
			cout<<"enter the value of b : ";
			cin>>b;
			
			mul=a*b;
			
			cout<<"multiplication of two value is : "<<mul;
		}
		//cube value finding....
		void cul_cube()
		{
			int x,cube; 
			
			cout<<"\nenter the value of x : ";
			cin>>x;
			
			cube=x*x*x;
			
			cout<<"cube of x is : "<<cube;
		}
};
main()
{
	data d1;
	d1.mul_value();
	d1.cul_cube();
}
