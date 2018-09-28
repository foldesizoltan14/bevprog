#include <iostream>

using namespace std;

int main()
{
    int a=7;
    int b=1;

    cout<<"A valtozok a csere elott:"<<"a= "<<a<<" b= "<<b<<endl;

    a=a*b;
    b=a/b;
    a=b/a;

    cout<<"A valtozok a csere utan:"<<"a= "<<a<<" b= "<<b<<endl;
    return 0;
}
