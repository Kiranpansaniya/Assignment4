//Write a program of to sort the array using templates....

#include<iostream>
using namespace std;

template<class D>
class Shortarray
{
	public:
		D a[10];
		int i,j,temp;
		
		void input()
		{
			for(i=0;i<10;i++)
			{
				cout<<"enter the value : ";
				cin>>a[i];
			}
	   }
		void diplay()
		{
			for(i=0;i<=10;i++)
			{
				for(j=i+1;j<=10;j++)
				{
					if(a[j]<a[i])
					{
						temp=a[j];
						a[j]=a[i];
						a[i]=temp;
					}
				}
			}
			for(i=0;i<10;i++)
			{
				cout<<"Sotlist of array : "<<a[i];
			}
		}
};
int main()
{
	Shortarray <int>S1;
	S1.input();
	S1.diplay();
}

