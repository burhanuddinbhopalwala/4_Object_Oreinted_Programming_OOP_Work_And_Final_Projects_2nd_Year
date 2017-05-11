#include<conio.h>
#include<iostream.h>
class roll
{
protected :
int r;
public:
void get1(int x)
{
 r=x;
}
void show1()
{
 cout<<"\n roll is "<<r;
}
 };
class marks : public virtual roll
{
protected :
int m1,m2;
public:
void get2(int x,int y)
{
 m1=x;
 m2=y;
}
void show2()
{
 cout<<"\n marks are "<<m1<<" & "<<m2;
}
 };
class sports : public virtual roll
{
protected:
int s;
public:
void get3(int x)
{
s=x;
}
void show3()
{

 cout<<"\n sports grade="<<s;
}
 };
class result : public marks , public sports
{
protected:
int total , percentage;
public:
void cal()
{
 total=m1+m2+s;
 percentage=total/3;
}
void show4()
{
 show1();
 show2();
 show3();
 cout<<"\n total= "<<total<<"\n percentage="<<percentage;
}
 };
int main()
{
clrscr();
result r;
r.get1(786);
r.get2(80,85);
r.get3(90);
r.cal();
r.show4();
getch();
return 0;
}
