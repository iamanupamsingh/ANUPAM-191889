#include<iostream>
using namespace std;
inline int power(int x,int y);
int main()
{
    cout<<"this program shows the funtioning of inline function"<<endl;
cout<<"the power to be raised to is \n"<<power(3,2)<<endl;
cout<<"the power to be raised to is\n"<<power(3,3)<<endl;
cout<<"the power to be raised to is \n"<<power(3,4)<<endl;
return 0;
}
int power(int m,int n)
{
int result=1,i;
for(i=1;i<=n;i++)
{
result=result*m;
}
return result;
}
