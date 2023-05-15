//Write a program of to swap the two values using templates.....

#include<iostream>
using namespace std;

template<typename D>//templates define
class Swap
{
	public:
		
		D a,b;//templates variable
		
		void input()//input the a and b value
		{
			cout<<"enter the value of a : ";
			cin>>a;
			
			cout<<"enter the value of b : ";
			cin>>b;
			cout<<"\n";
			
			cout<<"before swapping a value is : "<<a<<endl;
			cout<<"before swapping b value is : "<<b<<endl;
			cout<<"\n";
		}
		void swapnum()//swap the num without using third variable
		{
			a=a+b;
			b=a-b;
			a=a-b;
			
			cout<<"after swapping a value is : "<<a<<endl;
			cout<<"after swapping b value is : "<<b<<endl;
			cout<<"\n";
		}
};
int main()
{
	Swap <int>S1;
	S1.input();
	S1.swapnum();
}
