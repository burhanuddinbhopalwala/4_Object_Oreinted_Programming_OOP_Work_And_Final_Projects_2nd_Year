#include<iostream.h>
#include<conio.h>
class Timer
{
	int h,m;
	public:
	Timer(){}
	Timer(int x,int y):h(x),m(y){}
	void show(){cout<<"hours = "<<h<<" minutes = "<<m;}
	Timer operator+(Timer t) ;
	};
	Timer Timer::operator+(Timer t)
	{
		Timer temp;
		temp.h=(*this).h+t.h; //this->h OK
		temp.m=(*this).m+t.m; //this->m OK
		while(temp.m>=60)
		{
			temp.m=temp.m-60;
			temp.h=temp.h+1;
		}
		return temp;
	}
int main()
{
	clrscr();
	Timer t1(2,50);
	Timer t2(1,10);
	Timer t3;
	t3=t1+t2;
	//t3=t1.operator+(t2); //OK
	t3.show();
	getch();
	return 0;
}

