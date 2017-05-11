#include<conio.h>
#include<iostream.h>
template<class t>
void swap(t &a,t &b)
{
	t temp;
	temp=a; // a and b are modifying hence cannot use "const" keyword .
	a=b;
	b=temp;
}
int main()
{
	clrscr();
	int i1=5,i2=10;
	float f1=5.5,f2=10.10;
	long l1=50,l2=100;
	double d1=1024.1024,d2=2048.2048;
	char c1='c',c2='d';
	cout<<"\n------------Previous values----------";
	cout<<"\n"<<i1<<"   "<<i2;
	cout<<"\n"<<f1<<"   "<<f2;
	cout<<"\n"<<l1<<"   "<<l2;
	cout<<"\n"<<d1<<"   "<<d2;
	cout<<"\n"<<c1<<"   "<<c2;
	::swap(i1,i2);
	::swap(f1,f2);
	::swap(l1,l2);
	::swap(d1,d2);
	::swap(c1,c2);
	cout<<"\n------------New Values After Swapping----------";
	cout<<"\n"<<i1<<"   "<<i2;
	cout<<"\n"<<f1<<"   "<<f2;
	cout<<"\n"<<l1<<"   "<<l2;
	cout<<"\n"<<d1<<"   "<<d2;
	cout<<"\n"<<c1<<"   "<<c2;
	getch();
	return 0;
}