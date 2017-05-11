#include<conio.h>
#include<iostream.h>
template<class x>
inline x getMax(x const &a,x const &b)// Function Overloading with Templates.
{ return a>b?a:b; }
x getMax(x const &a,x const &b,x const &c)// Not Working.
{ return getMax(::getMax(a,b),c); }
int main()
{
	clrscr();
	cout<<::getMax(7,42,48);
	cout<<"\n"<<::getMax(7.1,42.42,48.48);
	cout<<"\n"<<::getMax(1024.1024,2048.2048);
	cout<<"\n"<<::getMax('c','d');
	getch();
	return 0;
}