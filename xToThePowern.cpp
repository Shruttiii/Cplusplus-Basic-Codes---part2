#include<iostream>
#include<math.h>
using namespace std;

class X_to_N
{
int a,b,c;
public:
    void enter()
    {


cout<<"enter any positive number\n";
cin>>a;
cout<<"enter its power(positive):";
cin>>b;

c=pow(a,b);
    }
    void result()
    {


cout<<"the result of "<< a <<" to the power of "<< b <<" is "<< c;
}
int pow(int n,int m)
{if(m==0)
return 1;
else
return n*pow(n,m-1);
}
};
int main ()
{
    X_to_N x1;
    x1.enter();
    x1.result();
    return 1;
}
