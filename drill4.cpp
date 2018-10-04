#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    double a,sum=0,sor=0,maxi;
    string unit=" ";
    vector <double> v;



    while (unit!="|"){
            cout<<"Type in a value with an unit(m,cm,ft,in). If you want to quit type a value + | \n";
            cin>>a;
            cin>>unit;

            if (unit=="m"){v.push_back(a);}
            else if (unit=="cm") {v.push_back(a/100);}
            else if (unit=="in") {v.push_back(a*0.0254);}
            else if (unit=="ft") {v.push_back(a*0.3048);}
            else if (unit=="|") {cout<<"";}
            else cout<<"bad unit";



    }
    cout<<"The number of values entered: " <<v.size()<<endl;
    for (int i=0;i<v.size();i++)
    {
        sum=sum+v[i];

    }
cout<<"The sum of the values in m: "<<sum<<endl;

for (int i=0;i<v.size()-1;i++){
    for (int k=i+1;k<v.size();k++){
if(v[i]>v[k]){sor=v[i];
            v[i]=v[k];
            v[k]=sor;}}}

 cout<<"the values in increasing order: ";
 for(int i=0;i<v.size();i++)
                cout<<v[i]<<" ";

                cout<<"min: " <<v[0]<<endl;

 for(int i=0;i<v.size();i++)
           maxi=i;
 cout<<"max: "<<v[maxi];




    return 0;
}
