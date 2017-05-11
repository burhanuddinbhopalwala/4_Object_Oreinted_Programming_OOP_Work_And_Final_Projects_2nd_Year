// A Function Friendly to 2 Class
#include<iostream.h>
#include<conio.h>
class ABC; // Forward Declaration
class XYZ
{
	int x;
	public:
	XYZ(int y):x(y){}
	friend void max(ABC m,XYZ n);
};
class ABC
{
	int a;
	public:
	ABC(int b):a(b){}
	friend void max(ABC m,XYZ n);
};
void max(ABC m,XYZ n)
{
	if(m.a>n.x)
	cout<<"Private variable of ABC class is greater then XYZ class";
	else if(m.a<n.x)
	cout<<"Private variable of ABC class is smaller then XYZ class";
	else
	cout<<"Private variables of Both class are equal";
}
int main()
{
clrscr();
ABC m(50);
XYZ n(50);
max(m,n);
getch();
return 0;
}
