#include<iostream>
using namespaces std;

class base
{
  public:
    int i;
float f;

void fun()
{
cout<<"inside base fun";
}
virtual void gun()
{
cout<<"inside base gun";
}

};

class derived : public base
{
  public:
    int i;
    double d;

virtual void fun()
{
cout<<"inside derived fun";
}
void gun()
{
cout<<"inside derived gun";
}
virtual void sun()
{
cout<<"inside derived sun";
}

};

int main()
{
derived dobj;

return 0;
}

