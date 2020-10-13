#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
int rno,dist;
char name[30],grade;
float mchem,mmaths,meng,mcs,mphy,percent;
public:
void details()
{
cout<<"Enter Name"<<endl;
cin.getline(name,30);
cout<<"Enter marks"<<endl;
cout    <<"Physics=";
    cin>>mphy;
 cout   <<"Maths=";
 cin>>mmaths;
 cout<<"English=";
 cin>>meng;
 cout<<"Chemistry=";
 cin>>mchem;
  cout<<"Computer Science=";
  cin>>mcs;
  calp();
  grades();
  }
  float calp()
  {
  percent=(mchem+mmaths+meng+mcs+mphy)/5;
  return percent;
  }

  char grades()
  {
  if(percent>90)
  grade='A';
  else
  if((percent>80)&&(percent<90))
  grade='B';
  else
  if((percent>70)&&(percent<80))
  grade='C';
  else
  if((percent>60)&&(percent<70))
     grade='D';
  else
  if(percent<60)
  grade='E';
  return grade;
  }
  void reportcard()
  {

  cout<<"NAME:"<<name<<endl;
  cout<<"PERCENTAGE:"<<percent<<endl;
  cout<<"GRADE:"<<grade<<endl;
  }

  };
  int main()
  {
  student stu[5];
  for(int i=0; i<5;i++){stu[i].details();}
  for(int i=0; i<5;i++){stu[i].reportcard();}
  return 1;

  }

