// Overloading binary operator using Friend Function
#include<iostream.h>
#include<conio.h>
class Timer
{
	int h,m;
	public:
	Timer(int x=0,int y=0)
	{
		h=x;
		m=y;
	}
	void show()
	{cout<<"\n hours = "<<h<<" and minutes = "<<m;}//inline funtion inside the class;
	friend Timer operator+(Timer t1,Timer t2);
};
Timer operator+(Timer t1,Timer t2)
{
	int h1,m1;
	h1=t1.h+t2.h;
	m1=t1.m+t2.m;
	while(m1>=60)
	{
		m1=m1-60;
		h1=h1+1;
	}
	return Timer(h1,m1);
}
int main()
{
	clrscr();
	Timer t1(2,60);
	Timer t2(3,60);
	Timer t3;
	t3=t1+t2;//Operator Overloading
	t3.show();
	getch();
	return 0;
}