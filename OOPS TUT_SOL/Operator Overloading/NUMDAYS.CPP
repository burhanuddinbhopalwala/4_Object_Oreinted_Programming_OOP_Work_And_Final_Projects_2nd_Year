#include<conio.h>
#include<iostream.h>
class NumDays
{
	int days,hours;
	public:
	NumDays(){}
	NumDays(int d,int h):days(d),hours(h){}
	void show(){cout<<"\nno. of days="<<days<<" and hours="<<hours;}
	void convert();
	friend NumDays operator+(NumDays n1,NumDays n2);
	NumDays operator++();
	NumDays operator++(int);
};
void NumDays::convert()
{
	while(hours>=8)
	{
		days=days+1;
		hours=hours-8;
	}
}
NumDays operator+(NumDays n1,NumDays n2)
{
	NumDays temp;
	temp.days=n1.days+n2.days;
	temp.hours=n1.hours+n2.hours;
	temp.convert();
	return temp;
}
NumDays NumDays::operator++()
{
	NumDays temp;
	temp.days=days;
	temp.hours=++hours;
	temp.convert();
	return temp;
}
NumDays NumDays::operator++(int n)
{
	NumDays temp;
	temp.days=days;
	n=hours++;
	temp.hours=hours;
	temp.convert();
	return temp;
}
int main()
{
	clrscr();
	NumDays n1(1,8),n2(2,8);
	NumDays n3,n4,n5;
	n3=n1+n2;
	n3.show();
	n4=++n1;
	n5=n2++;
	n4.show();
	n5.show();
	getch();
	return 0;
}