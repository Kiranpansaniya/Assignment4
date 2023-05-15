
/*Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance)*/

#include<iostream>	
using namespace std;
class person//This is the base class
{
	protected :
		
		int age;
		char name[30];
		
		public:
		void get_details()
		{
			cout<<"\nenter the name : ";
			cin>>name;
			
			cout<<"enter the age : ";
			cin>>age;
		}
};
class student : public person//this is the derive class
{
	public :
		int maths,sci,english,total=0;
		float percantage;
		void std_per()
		{
			cout<<"Enter the marks of maths : ";
			cin>>maths;
			cout<<"Enter the marks of sci : ";
			cin>>sci;
			cout<<"Enter the marks of english : ";
			cin>>english;
			
			total=maths+sci+english;
			percantage=total/3;
			
			cout<<"\nname is : "<<name;
			cout<<"\nage is : "<<age;
			cout<<"\nstudent percantage is : "<<percantage;
			cout<<"\n";
		}
};
class teacher : public person//this is the derive class
{
	public :
		int salary;
		void dis_salary()
		{
			cout<<"enter the teacher salary : ";
			cin>>salary;
			
			cout<<"\nname is : "<<name;
			cout<<"\nage is : "<<age;
			cout<<"\nteacher salary is : "<<salary;
		}
};
main()
{
	student s1;
	teacher t1;
	
	s1.get_details();
	s1.std_per();
	t1.get_details();
	t1.dis_salary();
}
