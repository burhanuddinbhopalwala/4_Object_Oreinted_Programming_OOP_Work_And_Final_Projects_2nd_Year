#include<iostream.h>
#include<conio.h>
class Box
{
	int l,b,h;
	public:
	Box(){}
	Box(int x,int y,int z):l(x),b(y),h(z){}
	void show(){cout<<"\nlength= "<<l<<" breadth= "<<b<<" height= "<<h;}
	Box operator++();
	Box operator++(int);
};
Box Box::operator++()
{
	Box temp;
	temp.l=++l;
	temp.b=++b;
	temp.h=++h;
	return temp;
}
Box Box::operator++(int n)
{
	Box temp;
	n=l++;
	temp.l=l;
	n=b++;
	temp.b=b;
	n=h++;
	temp.h=h;
	return temp;
}
int main()
{
	clrscr();
	Box b1(1,2,3),b2(1,2,3);
	Box b3,b4;
	b3=++b1;
	b4=b2++;
	b2.show();
	b3.show();
	getch();
	return 0;
}