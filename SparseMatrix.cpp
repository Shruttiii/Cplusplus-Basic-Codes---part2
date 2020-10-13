#include <iostream>
#include <stdlib.h>

using namespace std;

struct node{
   int val;
   node *right, *down;
}*head;

int main()
{



int a[10][10]={{0,49,0,0,0,0,0,0,0,88},
            {20,0,0,0,0,0,43,0,0,0},
            {0,0,9,0,0,0,0,0,0,0},
            {0,0,0,99,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,77,0},
            {0,0,0,0,0,0,21,0,0,0},
            {0,50,0,0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0,0,65,0},
            {0,0,0,78,0,0,0,0,0,0},
            {7,0,0,0,0,0,0,0,0,0}};



head=(node*)malloc(sizeof (node ));
head->right=NULL;
head->down=NULL;
head->val=-1;

node *rig, *dow;
rig=(node*)malloc(sizeof(node));
rig->val=-1;
rig->right=NULL;
rig->down=NULL;
dow=(node*)malloc(sizeof(node));
dow->val=-1;
dow->right=NULL;
dow->down=NULL;
head->right=rig;
head->down=dow;
for (int i=0;i<10;i++)
{
    for (int j=0;j<10;j++)
    {
       if(a[i][j]!=0)
       {
           node *r;
              r=(node*)malloc(sizeof(node));
              r->val=a[i][j];
              r->right=NULL;
              r->down=NULL;



           if(rig->val== -1 && dow->val== -1)
           {

               rig->val= j;
               dow->val= i;
               rig->down=r;
               dow->right=r;

           }
else
{
          node *temp;
          temp=head;
          int c=0;
           while(temp!=NULL)
           {

           if(temp->val==j)
           c++;
           temp=temp->right;//counter to check whether column  header exists or not

           }
           if(c==0)                         //add new coloumn header
           {
               node *p;
               p=(node*)malloc(sizeof(node));
                  p->val=j;
                  p->right=NULL;
                  p->down=NULL;

                  rig->right=p;
                  rig=rig->right;
                  rig->down=r;




           }

           else
            if (c==1)                      //if header already exists
           {
               node *temp1, *t;
               temp1=head;
               while(temp1!=NULL)
               {
                   if(temp1->val==j)//finding the existing header
                    {
                    t=temp1;
                    while(t!=NULL)//traversing downwards in column header to add new non zero value
                    {
                    if(t->down==NULL)
                    {t->down=r; break; }
                    t=t->down;
                    }
                    }
                temp1=temp1->right;

           }
           }

           node *tem;
           tem=head;
           int b=0;
           while(tem!=NULL)
           {

           if(tem->val==i)
           b++;//counter to check whether row header exists or not
           tem=tem->down;
           }

                if(b==0)// adding new row header
           {
               node *q;
                  q=(node*)malloc(sizeof(node));
                  q->val=i;
                  q->right=NULL;
                  q->down=NULL;

                  dow->down=q;
                  dow=dow->down;
                  dow->right=r;


}           else
        if(b==1)  // when row header already exists
        {
            node *temp, *t;
               temp=head;
               while(temp!=NULL)
               {
                   if(temp->val==i)
                    {
                    t=temp;
                    while(t!=NULL)// traversing sideways in row header
                    {
                    if(t->right==NULL)
                    {t->right=r; break;}
                    t=t->right;
                    }

                    }temp=temp->down;



               }
       }
    }
}

}
}



cout<<endl;

// displaying the elements of sparse matrix
node*ri, *d, *dr, *rd;


cout<<"row"<<"     "<<"col"<<"     "<<"val"<<endl;

for(int j=0;j<10;j++)
    {
for (int i=0;i<10;i++)
{

        ri=head->right;
        d=head->down;
        while(ri!=NULL)
        {
            if(ri->val==i)
            {
                rd=ri->down;

                break;
            }
            ri=ri->right;
        }

        while(d!=NULL)
        {
            if(d->val==j)
            {
                dr=d->right;

                break;
            }
            d=d->down;
        }

        while(rd!=NULL)
        {
            dr=d->right;
            while(dr!=NULL)
            {
                if(dr->val==rd->val)
                {
                    cout<<j<<"\t"<<i<<"\t"<<dr->val<<endl;
                    break;
                }
                dr=dr->right;
            }
            rd=rd->down;
        }

    }
}


    return 0;
}
