#include "std_lib_facilities.h"

int main()

{

string first_name;
string friend_name;
char friend_sex=0;
int age;

cout<<"Enter the name of the person you want to write to(followed by 'enter'):\n";
cin>>first_name;
cout<<"Please enter the name of one your other friend\n";
cin>>friend_name;
cout<<"Please enter an m if your other friend is a male or enter an f if female\n";
cin>>friend_sex;
cout<<"Please enter the age of your friend\n";
cin>>age;
if (age<=0 || age>=110) {simple_error("You're kidding\n");}


cout<<"Dear,"<<first_name<<"!\n";
cout<<"How are you ? I am fine. I really miss you. How's your life going ? \n";
cout<<"Have you seen "<<friend_name<<" lately?\n";
if (friend_sex=='m') cout<<"If you see "<<friend_name<<" please ask him to call me.\n";
	else if (friend_sex=='f') cout <<"If you see "<<friend_name<<" please ask her to call me\n";
cout<<"I hear you just had a birthday and you are "<<age<<" years old\n";
if (age<12) cout<<"Next year you will be "<<age+1<<" .\n";
	else if (age==17) cout<<"Next year you will be able to vote.\n";
	else if (age>70) cout<<" I hope you're enjoying retirement\n";
cout<<"Yours sincerely\n\n";
cout<<first_name<<"\n";
keep_window_open();
}
