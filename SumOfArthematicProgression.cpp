#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class APSum
{
float a, d,term,sum=0;
int n;
public:

    void enterDetails()
    {
cout<<"Enter"<<endl
    <<"1. First Term"<<endl;
    cin>>a;
    cout<<"2. Common Difference in this"<<endl;
    cin>>d;
    cout<<"3. No of Terms are"<<endl;
    cin>>n;
    }
    void calculateSum()
    {
for(int i=1; i<n+1;i++)
{
term=a+((i-1)*d);
sum+=term;
}   }

void result()
{cout<<"Sum of AP is="<<sum;
}
};
int main()
{
APSum AP1;
AP1.enterDetails();
AP1.calculateSum();
AP1.result();
return 1;
}
