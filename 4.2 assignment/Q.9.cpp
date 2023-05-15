// Write a Program of Two 1D Matrix Addition using Operator Overloading 

#include<iostream>
using namespace std;
class myobj
{
	private :
		int a;
		int b;
		    public :
			    myobj(int x=0,int y=0)
			    {
			    	a=x;
			    	b=y;
				}
				//passing object to function
				myobj operator +(myobj& other)
				{
					int sum_a= a + other.a;
					int sum_b= b + other.b;
					return myobj(sum_a,sum_b);
				}
				void print()
				{
					cout<<"obj"<<"("<<a<<","<<b<<")";
				}
};
main()
{
       myobj obj1(12,2);
	   myobj obj2(2,4);
	   myobj obj3=obj1+obj2;
	   obj3.print();	
}
