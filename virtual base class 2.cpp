//virtual base class
#include<iostream>
using namespace std;
class student
{
public:
int rollno;
char name[30];
void get()
{
cout<<" enter the roll no of student";
cin>>rollno;
cout<<"enter the name of student";
cin>>name;
}
};
class test: virtual public student
{
public:
float s1,s2;
void get2()
{
cout<<"enter the marks of subject 1 =";
cin>>s1;
cout<<"enter the marks of subject 2 =";
cin>>s2;
}
};
class sport: public virtual student
{
public:
int id;
char game;
int score;
void get3()
{
cout<<"enter the id =";
cin>>id;
cout<<"enter the name of sports ";
cin>>game;
cout<<"enter the score of sports =";
cin>>score;
}
};
class print: public test, public sport
{
public:
void get4()
{
cout<<rollno<<endl<<name<<endl;
cout<<"average marks ="<<(s1+s2)/2<<endl;
cout<<"sports score ="<<score<<endl;
}
};
main()
{
print obj;
obj.get();
obj.get2();
obj.get3();
obj.get4();
}
