#include<iostream>
#include<string.h>
using namespace std;

class account
{
private:
    int acc_no;
    long phone_no;
    long adhar_no;
    char holder_name[100];
    float balance;
    int ifc_no;
public:
    account(char name[100],int num,float bal,int ifc, long adhar ,long mobile)
    {
        acc_no=num;
        strcpy(holder_name,name);
        balance=bal;
        ifc_no=ifc;
        adhar_no=adhar;
        phone_no=mobile;
    }

    void deposit();
   double interest();
    void withdraw();
    void display();
    };

void account::deposit()
{
    int add;
    cout<<"\n Enter the amount you want to deposit ";
    cin>>add;
    balance+=add;
}

void account::withdraw()
{int deduct;
cout<<"\n Enter the amount you want to withdraw";
cin>>deduct;
    if(deduct>=balance)
        cout<<"\n you do not have sufficent balance in your account";
    else
        balance-=deduct;
}

double account::interest()
{
    double rate;
    cout<<"\n Enter the interest rate-";
    cin>>rate;
    balance=balance*(rate/12);
}

void account::display()
{
    cout<<"YOUR ACCOUNT DETAILS ARE..............";
    cout<<"\n Account holder name is"<<holder_name;
    cout<<"\n Account number is "<<acc_no;
    cout<<"\n Your IFC code is "<<ifc_no;
    cout<<"\n The Interest on your account is"<<balance;
    cout<<"\n Your last 4 digits of adhar card are "<<adhar_no;
    cout<<"\n Your bank linked mobile no is "<<phone_no;


}

int main()
{
    int accnum;
    char hname[100];
    float balance;
    int ifc;
    long adharnum,mobile;
    cout<<"Enter details\n";
    cout<<"---------------------------------------";
    cout<<"\nEnter the account number-";
    cin>>accnum;
    cout<<"\n Enter the account holder name-";
    cin>>hname;
    cout<<"\n Enter the balance-";
    cin>>balance;
    cout<<"\n Enter your branch IFC code -";
    cin>>ifc;
    cout<<"\n Enter your aadhar card number -";
    cin>>adharnum;
    cout<<"\n Enter your mobile number -";
    cin>>mobile;
    cout<<"-------------------------------------------------------------";
    account a1(hname,accnum,balance,ifc,adharnum,mobile);

    a1.deposit();
    a1.withdraw();
    a1.interest();
    a1.display();
    return 0;
    getchar();

}
