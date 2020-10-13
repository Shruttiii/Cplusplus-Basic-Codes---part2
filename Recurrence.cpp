#include<iostream>
using namespace std;

class Reccurence
{
    int n;
public:
    void enter()
    {


    cout << "Enter amount of nos: ";
    cin >> n;

}
void Sum(){    cout << "Sum =  " << add(n);}

int add(int n)
{
    if(n != 0)
        return n + add(n - 1);
    return 0;
}

};

int main()
{
    Reccurence r1;
    r1.enter();
    r1.Sum();
    return 1;
}
