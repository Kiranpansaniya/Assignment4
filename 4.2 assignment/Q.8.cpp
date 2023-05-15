/*Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading*/
 
#include<iostream>
using namespace std;

double area(double r)
{
		return r*r*3.14;
}
int area(int l,int w)
{
	return l*w;
}
float area(float b,float h)
{
	return 0.5*b*h;
}
main()
{
	float b,h;
	int l,w;
	double r;
	cout<<"enter the radius of circle : ";
	cin>>r;
	cout<<"enter the length of ractangle : ";
	cin>>l;
	cout<<"enter the width of ractangle : ";
	cin>>w;
	cout<<"enter the bredth of tringle : ";
	cin>>b;
	cout<<"enter the height of tringle : ";
	cin>>h;
	cout<<endl<<"the area of circle is : "<<area(r)<<endl;
	cout<<endl<<"the area of ractangle is : "<<area(l,w)<<endl;
	cout<<endl<<"the area of tringle is : "<<area(b,h)<<endl;
}
