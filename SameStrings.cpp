#include<iostream>
using namespace std;
class EqualStrings
{
char string1[20], string2[20];
int i,j,m=0,n=0;
public:
    void enterString()
    {
cout<<"Enter a string"<<endl;
cin.getline(string1,20);
    }
void compare()
{


cout<<"Enter a string to compare"<<endl;
cin.getline(string2,20);
}
void result()
{


for(j=0,i=0;string1[i]!=0,string2[j]!=0;i++,j++)
{
if(string1[i]==string2[j])
m++;
else
m--;
}
if(m>0){cout<<"Strings are same";}
else
    cout<<"Strings are different";
}

};
int main()
{
EqualStrings c1;
c1.enterString();
c1.compare();
c1.result();
return 1;
}
