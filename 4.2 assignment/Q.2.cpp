
//Define a class to represent a bank account....

#include<iostream>
using namespace std;
class Bank
{
	public:
		char name[10];
		char ac_type[20];
		double ac_no;
		float balance;
		//This member functions Assing the value
		void assign_value()
		{
				
				cout<<"enter the name : ";
				cin>>name;
				
				cout<<"enter the type of accout : ";
				cin>>ac_type;
				
				cout<<"enter the account number : ";
				cin>>ac_no;
				
				
				cout<<"enter balance : ";
				cin>>balance;
				
		}
		//This member functions deposit the value..
		void deposite_amount()
		{
				int deposite=0;
				
			cout<<"\nenter the deposite amount : ";
			cin>>deposite;
			
			balance=balance+deposite;
			cout<<"new balance is : "<<balance;
		}
		//This member functions withdraw the value..
		void withdraw_amount()
		{
			int withdraw=0;
			
			cout<<"\n\nenter the withdraw amount : ";
			cin>>withdraw;
			
			if(balance>=withdraw)
			{
				balance=balance-withdraw;
				cout<<"after withdraw new balance is : "<<balance;
			}
			else
			{
				cout<<"\nnot enough balance : ";
			}
		}
		//Data Member....
		void display_info()
		{
			cout<<"\n\ndepositor name : "<<name;
			cout<<"\naccount type : "<<ac_type;
			cout<<"\naccount number : "<<ac_no;
			cout<<"\nenquiry for balance in my account : "<<balance;
		}
};
main()
{
	Bank b1;
	b1.assign_value();
	b1.deposite_amount();
	b1.withdraw_amount();
	b1.display_info();
}




