// This is to be followed by me;
#include<iostream.h>
#include<conio.h>
class Timer
{
	int h,m;
public:
Timer(){}
Timer(int x,int y):h(x),m(y){}
void show(){cout<<"hours = "<<h<<" minutes = "<<m;}
friend Timer operator+(Timer t1,Timer t2);
};
Timer operator+(Timer t1,Timer t2)
{
	Timer temp;//for this default constructor in mandatory.
	temp.h=t1.h+t2.h;
	temp.m=t1.m+t2.m;
	while(temp.m>=60)
	{
		temp.m=temp.m-60;
		temp.h=temp.h+1;
	}
	return temp;
}
int main()
{
	clrscr();
	Timer t1(1,50);
	Timer t2(2,10);
	Timer t3;// for this default constructor is mandatory.
	t3=t1+t2;
	t3.show();
	getch();
	return 0;
}