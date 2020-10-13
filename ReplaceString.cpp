#include<iostream>
using namespace std;
class ReverseString
{
char string[20], string2[20];
int i,j,m=0,n=0;
public:
    void string_in()
    {
cout<<"Enter a string"<<endl;
cin.getline(string,20);
    }
    void reversed()
    {
for(i=0;string[i]!=0;i++)
n++;
for(i=n-1;i>=0;i--)
    }
void string_out()
{
cout<<string[i+1];
}

};
int main()
{

    ReverseString r1;
    r1.string_in();
    r1.reversed();
    r1.string_out();
    return 1;

}

