#include<iostream>
#include<math.h>
using namespace std;
class sine
{
	int n;
	float acc,term,den,x,sinx=0,sinval;
public:
    void degrees()
    {
	cout<<"enter the value of x(in degrees):";
	cin>>x;
	x=x*(3.142/180.0);
	sinval=sin(x);
    }
    void accuracy()
    {
	cout<<"enter the accuracy for the result\n";
	cin>>acc;
	term=x;
	sinx=term;
	n=1;
	do
	{
		den=2*n*(2*n+1);
		term= -term*x*x/den;
		sinx=sinx + term;
		n=n +1;

	}while(acc <= fabs(sinval - sinx));
    }
    void result()
    {
	cout<<"sum of the sine function series:     "<<sinx;
}
};
int main ()
{

    sine s1;
    s1.degrees();
    s1.accuracy();
    s1.result();
    return 1;
}
