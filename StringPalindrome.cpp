#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class Palindrome
{
	char string[20];
	int f=1,l;
public:
    void string_in()
    {
	cout<<"Enter the string =";
	cin.getline(string,20);

	 l=strlen(string);
    }
    void check()
    {
	for(int i=0 , j=l-1 ; string[i]!='\0';i++,j--)
	{
		if(string[i]!=string[j])
		{
			f=0;
		}

	}

	if(f==1)
	cout<<"String is a palindrome";

	else
	cout<<"String is not a palindrome";

    }

};
int main()
{
    Palindrome p;
    p.string_in();
    p.check();
    return 1;

}
