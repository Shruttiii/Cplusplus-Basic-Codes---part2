#include<iostream>
#include<stdio.h>
#include<string.h>


using namespace std;
class Substring
{
int i,j,temp;
char string[100],search[20];
public:
    void input()
               {


cout<<"Enter the string"<<endl;
cin.getline(string,100);
               }
               void inputSub()
               {


cout<<"Enter the substring to search"<<endl;
cin.getline(search,20);
               }
               void check()
               {
for (i=0;string[i]!='\0';i++)
{j=0;
if(string[i]==search[j])
{
temp=i+1;
while(string[i]==search[j])
{
i++;
j++;
}
if(search[j]=='\0')
{
cout<<"Substring found at "<<temp<<endl;

}
else
{
i=temp;
temp=0;
}
}
}
if(temp==0)
cout<<"Substring is not present"<<endl;

}
};
int main()
{

    Substring s1;
    s1.input();
    s1.inputSub();
    s1.check();
    return 1;
}
