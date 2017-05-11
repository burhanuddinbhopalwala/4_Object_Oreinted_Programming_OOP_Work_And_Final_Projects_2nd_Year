#include<iostream.h>
#include<conio.h>
class Complex
{
int r,i;
public:
	Complex();
	void add();
	void sub();
};
Complex::Complex()
{
	r=0;
	i=0;
}
void Complex::add()
{
	Complex c1,c2;
	cout<<"Enter r1 : ";
	cin>>c1.r;
	cout<<"Enter i1 : ";
	cin>>c1.i;
	cout<<"Enter r2 : ";
	cin>>c2.r;
	cout<<"Enter i2 : ";
	cin>>c2.i;
cout<<"Addition= "<<c1.r+c2.r<<" + i"<<c1.i+c2.i;
}

void Complex::sub()
{
	Complex c1,c2;
	cout<<"Enter r1 : \n";
	cin>>c1.r;
	cout<<"Enter i1 : \n";
	cin>>c1.i;
	cout<<"Enter r2 : \n";
	cin>>c2.r;
	cout<<"Enter i2 : \n";
	cin>>c2.i;
cout<<"Substraction= "<<c1.r-c2.r<<" + i"<<c1.i-c2.i;
}
int main()
{
clrscr();
Complex c;
char cc;
int choice;
do{
cout<<"Enter 1 for addition of Compex number \n 2 for substraction of complex numbers";
cin>>choice;
switch (choice)
{
case 1:
{
  c.add();
  break;
}
case 2:
{
 c.sub();
 break;
}
default:
{
 cout<<"\n Sorry invalid Entry";
 break;
}
 }
cout<<"\n do you want to continue (y/n)" ;
cin>>cc;
}while(cc=='y');
getch();
return 0;
}