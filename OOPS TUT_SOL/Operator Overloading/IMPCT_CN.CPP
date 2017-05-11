#include<conio.h>
#include<iostream.h>
class Point
{
	int a,b;
	public:
	Point(){}
	Point(int x,int y):a(x),b(y){}
	void show(){cout<<"\na = "<<a<<"b = "<<b;}
	Point operator+(Point p);
};
Point Point::operator+(Point p)
{
	Point temp;
	temp.a=this->a+p.a;
	temp.b=(*this).b+p.b;
	return temp;
}
int main()
{
	clrscr();
	Point p(1,2);
	Point p1=p+1; //implicit conversion //ERROR
	p1.show();
	getch();
	return 0;
}
