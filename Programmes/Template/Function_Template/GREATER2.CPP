#include<conio.h>
#include<iostream.h>
template<class t>
t const& getMax(t const &a,t const &b) //Function Template //Here Refrence Arguments are also valid.
{
	if(a==b) cout<<"Numbers are Equals : ";
	return a>b?a:b;//NOTE : Use "const" keyword if a and b are not
}                      // inside the function.
int main()
{
	clrscr();
	int i1=10,i2=10,i3;
	float f1=5.5,f2=10.10,f3;
	long l1=50,l2=100,l3;
	double d1=1024.1024,d2=2048.2048,d3;
	char c1='c',c2='d',c3;
	i3=::getMax(i1,i2);//i3=getMax<int>(i,j); //NOT WORKING
	f3=::getMax(f1,f2);
	l3=::getMax(l1,l2);
	d3=::getMax(d1,d2);
	c3=::getMax(c1,c2);
	cout<<i3<<"\n"<<f3<<"\n"<<l3<<"\n"<<d3<<"\n"<<c3;
	getch();
	return 0;
}

