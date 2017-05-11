#include<iostream.h>
#include<conio.h>
class student
{
	protected:
	int roll_num;
	public:
	void set_roll(int x){roll_num=x;}
	void display(){cout<<"\n roll number= "<<roll_num;}
	~student(){cout<<"\ndestructing student";}
};
class marks : virtual public student
{
	protected:
	float m1,m2;
	public:
	void set_marks(float x,float y)
	{
		m1=x;
		m2=y;
	}
	void display(){cout<<" marks m1= "<<m1<<" m2= "<<m2;}
	~marks(){cout<<"\ndestructing marks";}
};
class sports : virtual public student
{

	protected:
	float s;
	public:
	void set_sports(float x){s=x;}
	void display(){cout<<" sports s= "<<s;}
	~sports(){cout<<"\ndestructing sports";}
};
class result : public marks , public sports
{
       protected:
       float total;
       public:
       void get_total(){total=(m1+m2+s);}
       void display()
       {
		student::display();
		marks::display();
		sports::display();
		cout<<"\ntotal marks = "<<total;
       }
       ~result(){cout<<"\ndestructing result";}
};
int main()
{
	clrscr();
	{
	result r1;
	r1.set_roll(1210);
	r1.set_marks(80,80);
	r1.set_sports(65.5);
	r1.get_total();
	r1.display();
	}
	{
	result r2;
	r2.set_roll(1211);
	r2.set_marks(90,90);
	r2.set_sports(85.5);
	r2.get_total();
	r2.display();
	}
	getch();
	return 0;
}