//Write a Program of Two 1D Matrix Addition using Operator Overloading.........

#include<iostream>
using namespace std;

class Matrix
{
public :
int a[1][1],b[1][1],c[1][1],d[1][1],i,j;

void Matrix_get()
{
for(int i=0;i<1;i++)
        {
                for(int j=0;j<1;j++)
                {
                        cout<<"";
                        cin>>a[i][j];
                        cin>>b[i][j];
                }
        }
}
void Matrix_data()
{
for(int i=0;i<1;i++)
        {
                for(int j=0;j<1;j++)
                {
                        cout<<"";
                        cout<<a[i][j]<<"\t";
                        cout<<b[i][j]<<"\t";
                }
        }
}
void operator +(Matrix x)
{
        for(int i=0;i<1;i++)
        {
                for(int j=0;j<1;j++)
                {
                    c[i][j]=a[i][j]+x.a[i][j];
d[i][j]=b[i][j]+x.b[i][j];
                }
        }
cout<<"\nAddition of Matrix :\n";
        for(int i=0;i<1;i++)
        {
                cout<<" ";
                for(int j=0;j<1;j++)
                {
                        cout<<c[i][j]<<"\t";
                        cout<<d[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
};
main()
{
Matrix c1,c2;
c1.Matrix_get();
c2.Matrix_get();
cout<<"\nFirst Matrix :\n";
c1.Matrix_data();
cout<<"\nSecond Matrix :\n";
c2.Matrix_data();
c1+c2;
}


