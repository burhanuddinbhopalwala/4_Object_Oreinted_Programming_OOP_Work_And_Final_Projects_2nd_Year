#include<conio.h>
#include<iostream.h>
class Test
{
const int a;
const int b;
public:
Test(int x=0,int y=0);
void show() const
{
	//a=a+1;//ERROR
	//b=b+1;//ERROR also wrong b/c constant member function cannot modify either
	//constant or non-constant variable;
	cout<<"\na = "<<a;               //this.a works in java here not;
	cout<<"\nthis->a = "<<this->a;
	cout<<"\n(*this).x = "<<(*this).a;
	cout<<"\nb = "<<this->b<<"\n";
}
	};
Test::Test(int x,int y):a(x),b(y){}// constant variable initialization
int main()                         // only 1 way for this .
{
	clrscr();
	Test t;
	Test t1(10,10);
	t.show();
	t1.show();
	getch();
	return 0;
}
/*NOTE:- A constant object cannot invoke non-constant function. Untill
you doen't initialize with the above syntax/pattern .*/