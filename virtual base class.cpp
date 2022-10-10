//virtual base class
#include<iostream>
using namespace std;
class A
{
public:
void show()
{
cout<<"base classes";
}
};
class B: virtual public A
{
};
class C: public virtual A
{
};
class D: public B, public C
{
};
main()
{
D obj;
obj.show();
}
