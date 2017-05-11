#include<conio.h>
#include<iostream.h>
class mainbase
{
protected :
int count;
public:
mainbase()
{
count=0;
}
 };
class base1 : virtual public mainbase
{public:
base1()
{
 count=7;
 cout<<"\n count of base1="<<count;
}
 };                           //now  base1 and base2 having their own copy ,
			     // but derived only have 1 copy of main base;
class base2 : public virtual mainbase
{public:
base2()
{
 count=77;
 cout<<"\n count of base2="<<count;
}
 };
class derived : public base1 , public base2
{
public:
void set()
{
count=1;
cout<<"\n finally the count of mainbase class in derived class is = "<<count;
}
 };
int main()
{
clrscr();
derived d;
d.set();
getch();
return 0;
}