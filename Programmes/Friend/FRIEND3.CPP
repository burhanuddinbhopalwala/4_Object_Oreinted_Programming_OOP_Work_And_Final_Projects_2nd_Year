//Swapping private data of classes using Friend Function;
//Against the principle of data hiding should be done when necessary;
#include<iostream.h>
#include<conio.h>
class ABC; //Forward Declaration
class XYZ
{
	int x;
	public:
	XYZ(int y):x(y){}
	friend void exchange(ABC &m,XYZ &n);
};
class ABC
{
	int a;
	public:
	ABC(int b):a(b){}
	friend void exchange(ABC &m,XYZ &n);
};
void exchange(ABC &m,XYZ &n)
{
	int temp=m.a;
	m.a=n.x;
	n.x=temp;
	cout<<"\n After Swapping a= "<<m.a<<" and "<<" x= "<<n.x;
};
int main()
{
	clrscr();
	int p,q;
	cout<<"\n Enter a = ";
	cin>>p;
	cout<<"\n Enter x = ";
	cin>>q;
	ABC m(p);
	XYZ n(q);
	exchange(m,n);
	getch();
	return 0;
}


