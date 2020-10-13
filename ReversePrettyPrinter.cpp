#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class  Reverse
{
	int l,i,F=0;
	char string[50];
public:
    void string_IN()
    {
	cout<<"Enter a pretty printed string"<<endl;
	cin.getline(string,50);

	 l=strlen(string);
    }
    void reverseString()
    {
	for(i=0;i<=l;i++)
	{
		cout<<string[i];
		F++;

		if(F==5)
		{
			i++;
			F=0;
		}
	}
    }
};
int main()
{
	Reverse r1;
	r1.string_IN();
	r1.reverseString();
	return 1;
}
