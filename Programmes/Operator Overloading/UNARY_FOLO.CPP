// This is to be followed by me.
#include<iostream.h>
#include<conio.h>
class Unary
{
	int a;
	public:
	Unary(){}
	Unary(int x):a(x){}
	void show(){cout<<"\n a = "<<a;}
	Unary operator--();
	Unary operator++();
	Unary operator++(int);
};
Unary Unary::operator--() // PRE decrement operator
{
	Unary temp;
	temp.a=--a;
	return temp;
}
Unary Unary::operator++(int n) // POST increament operator
{                              // here 1 argument is required
	Unary temp;
	n=a++;
	temp.a=a;
	return temp;
}
Unary Unary::operator++()
{
	Unary temp;
	temp.a=++a;
	return temp;
}
int main()
{
	clrscr();
	Unary u1(5),u2(10);
	Unary u3,u4;
	u3=--u1;
	u3.show();
	u4=u2++;
	u4.show();
	u4=++u2;
	u4.show();
	getch();
	return 0;
}
