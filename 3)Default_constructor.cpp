//Default constructor
#include<iostream>
using namespace std;

class construct
{
    int a,b;
    public:
        construct()
        {
            a=20;
            b=40;
        }
    void putdata()
    {
        cout<<"a = "<<a<<endl<<"b = "<<b;
    }
};

int main()
{
    construct c1;
    c1.putdata();
}

/*
a = 20
b = 40
*/
