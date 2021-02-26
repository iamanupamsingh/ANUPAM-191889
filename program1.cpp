#include<iostream>
using namespace std;
int read_matrix(int a[10][10],int x,int y);
int display_matrix( int a[10][10] ,int x, int y);
int main()
{
int m,n;
cout <<"Enter the value of M and N:";
cin >>m >> n;
cout << endl;
int a[10][10];
read_matrix(a,m,n);
display_matrix(a,m,n);
}
int read_matrix( int a[10][10],int x,int y)
{
cout<<" enter the values of the matrix" <<"\t";
int i,j;
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
cin>>a[i][j];
}
}
}
int display_matrix( int a[10][10] ,int x, int y)
{
int i,j;
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
cout<< a[i][j]<<"\t";
}
cout<< endl;
}
return 0;
}
