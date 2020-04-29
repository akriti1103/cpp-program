#include<iostream.>
#include<string.h>
void main()
     {
       clrscr();
       int age;
       cout<<"please enter your age:";
       cin>>age;
       if(age>=18)
       {
       cout<<"you are eligible for voting:";
       }
       else
       {
       cout<<"you are non-eligible for voting:";
       cout<<"wait for"<<18-age<<"year(s):";
       }
       getch();
       }
