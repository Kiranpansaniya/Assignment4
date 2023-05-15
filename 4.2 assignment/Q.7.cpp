
/*Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the marks 
obtained in two subjects and class result contains the total marks obtained in 
the test. The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance)*/

#include<iostream>
using namespace std;
class student
{
	public :
		
	int roll_no;
	void get_details()
	{
		cout<<"enter the student roll number : ";
		cin>>roll_no;
	}
};
class test : public student//inherite the base class
{
	public :
		
		int maths,english;
		
		void store_marks()
		{
			cout<<"enter the marks of maths : ";
			cin>>maths;
			
			cout<<"enter the marks of english : ";
			cin>>english;
		}
};
class result : public test//inherite the derive class its called multilevel inheritance..
{
	public :
	
	int total;
	
	void cal_marks()
		{	
			total = maths + english;
			
			cout<<"two subject total marks is : "<<total;
		}
	void print_data()
	{
		cout<<"\n\n============display student result==============\n";
		cout<<"\nroll number is : "<<roll_no;
		cout<<"\nmaths marks is : "<<maths;
		cout<<"\nenglish marks is : "<<english;
		cout<<"\ntotal is : "<<total;
	}
};
main()
{
	result r1;
	
	r1.get_details();
	r1.store_marks();
	r1.cal_marks();
	r1.print_data();
}
