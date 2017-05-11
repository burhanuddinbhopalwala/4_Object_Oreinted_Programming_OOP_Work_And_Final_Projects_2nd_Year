// Demonstration of Friend Fuction;
#include<iostream.h>
#include<conio.h>
class Friend1
{
	int a,b,c;
	public:
	Friend1(int x=0,int y=0)
	{
		a=x;
		b=y;
	}
	friend void mean(Friend1 f);
};
void mean(Friend1 f)
{
	f.c=((f.a+f.b)/2);
	cout<<"The mean of a and b = "<<f.c;
}
int main()
{
	clrscr();
	Friend1 f(50,60);
	mean(f);
	getch();
	return 0;
}