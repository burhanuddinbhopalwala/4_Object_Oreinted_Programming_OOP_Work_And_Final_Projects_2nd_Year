#include<iostream.h>
#include<conio.h>
class Unary
{
	int a;
	public:
	Unary(){}
	Unary(int x):a(x){}
	void show(){cout<<"\n a = "<<a;}
	friend operator++(Unary u);
 //	friend operator++(Unary u,int);
};
Unary operator++(Unary u)
{
	int a1;
	a1=++u.a;
	return Unary(a1);
}
/*Unary operator++(Unary u,int n)
{
	n=(u.a++);
	return Unary(u.a);
} */
int main()
{
	clrscr();
	Unary u1(5),u2(5);
	Unary u3,u4;
	u3=++u1;
    //	u4=u1++;
	u3.show();
      //	u4.show();
	getch();
	return 0;
}
