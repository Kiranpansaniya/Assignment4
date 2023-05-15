//Two string murge using oprator overloading....

#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;
class A
{
	public:
		
		string i;
		
		A(string num)
		{
			i=num;
		}
		void operator +(A obj)
		{
			cout<<i+obj.i;
		}
};
main()
{
	A obj1("Hello ");
	A obj2("Good Morning");
	
	obj1+obj2;
	cout<<"\n";
	system("pause");
} 
