#include<iostream>
using namespace std;
class A
{
	private:
	int a,b;
	public:
	void get_data()
	{
		cout<<"enter the value of a : ";
		cin>>a;
		cout<<"enter the value of b : ";
		cin>>b;
	}
	//Declaration of friend fuction
	friend void maxno(A &s);
};
//compare two value using friend function
void maxno(A &m)
{
	if(m.a>m.b)
	{
		cout<<"a is max";
	}
	else
	{
		cout<<"b is max";
	}
}
int main()
{
	A m;
	m.get_data();
	maxno(m);
}
