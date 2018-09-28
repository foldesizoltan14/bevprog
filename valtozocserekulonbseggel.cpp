#include <iostream>

using namespace std;

int main()
{
    int a=7;
    int b=1;

    cout<<"Valtozok csere elott\n";

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;

    a=a+b;
    b=a-b;
    a=a-b;

     cout<<"Valtozok csere utan\n";

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;



    return 0;
}
