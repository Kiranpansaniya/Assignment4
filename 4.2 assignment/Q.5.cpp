/*Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance)*/

#include<iostream>
using namespace std;
class cricket
{
	protected :
		
	int total_run,total_over,i,j,k;
	float total_avg;
	char name[10];
	
	public :
		
	void get_data(int a,int b,float c)
	{
		total_run=a;
		total_over=b;
		total_avg=c;
	}
};
//Batsman class inheritane to cricket class.....
class batsman : public cricket
{
	public :
	void get_data1()
	{
		cout<<"Enter the batsman name : ";
		cin>>name;
		
		cout<<"enter the batsman run : ";
		cin>>total_run;
		i=total_run;
		
		cout<<"enter the over : ";
		cin>>total_over;
	
		total_avg=total_run/total_over;
		print_data();
	}
	void get_data2()
	{
		cout<<"Enter the batsman name : ";
		cin>>name;
		
		cout<<"enter the batsman run : ";
		cin>>total_run;
		j=total_run;
		
		cout<<"enter the over : ";
		cin>>total_over;
	
		total_avg=total_run/total_over;
		print_data();
	}
	void get_data3()
	{
		cout<<"Enter the batsman name : ";
		cin>>name;
		
		cout<<"enter the batsman run : ";
		cin>>total_run;
		k=total_run;
		
		cout<<"enter the over : ";
		cin>>total_over;
	
		total_avg=total_run/total_over;
	}
	void print_data()
	{
		cout<<"\ntotal run : "<<total_run;
		cout<<"\ntotal over : "<<total_over;
		cout<<"\ntotal average : "<<total_avg;
		cout<<"\n\n";
	}
	void best_perf()
	{
		if(i>j && i>k)
		{
			cout<<"i is best"; 
			
		}
		else if(j>i && j>k)
		{
			cout<<"j is best";
		}
		else
		{
			cout<<"k is best";
		}
	}
	
};
main()
{
	batsman b1;
	b1.get_data1();
	b1.get_data2();
	b1.get_data3();
	b1.print_data();
	b1.best_perf();

	
}
