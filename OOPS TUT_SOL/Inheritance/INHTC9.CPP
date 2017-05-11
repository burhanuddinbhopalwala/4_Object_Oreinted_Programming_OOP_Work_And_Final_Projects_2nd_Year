#include<conio.h>
#include<iostream.h>
#include<string.h>
class staff
{
	protected:
	int code;
	public:
	void set_code(int c){code=c;}//Muttator methods
	void display(){cout<<"\ncode= "<<code;}
	~staff(){cout<<"\ndestructing staff";}
};
class teacher : virtual public staff
{
	protected:
	char *sub_pub;
	public:
	void set_sp(char *s){sub_pub=s;}
	void display(){cout<<"\nsub_pub = "<<sub_pub;}
	~teacher()
	{
		cout<<"\ndestructing teacher";
		delete(sub_pub);
	}
};
class officer : virtual public staff
{
	protected:
	char grade;
	public:
	void set_grd(char g){grade=g;}
	void display(){cout<<"\ngrade= "<<grade;}
	~officer(){cout<<"\ndestructing officer ";}
};
class typist : public staff
{
	protected:
	float speed;
	public:
	void set_speed(int s){speed=s;} // should contain mutattor
	void display()//method bc of unavaiblity of cons in base class due
	{                         //to VBC;
		staff::display();
		cout<<"\ntyping_speed "<<speed;
	}
	~typist(){cout<<"\ndestructing typist";}
};
class education : public teacher , public officer
{
	protected:
	char *edu_detail;
	int exp_years; // experience in years;
	public:
	void set_ed(char *ed){strcpy(edu_detail,ed);}
	void set_years(int y){exp_years=y;}
	void display()
	{
		staff::display();
		teacher::display();
		officer::display();
		cout<<"\nedu_detail= "<<edu_detail;
		cout<<" exp_years="<<exp_years;
	}
	~education(){cout<<"\ndestructing education details";}
};
int main()
{
	clrscr();
	{
	education e;
	e.set_code(1210);
	e.set_sp("Arihant");
	e.set_grd('A');
	e.set_ed("M.Tech");
	e.set_years(4);
	e.display();
	}
	{
	typist t;
	t.set_code(2020);
	t.set_speed(10.20);
	t.display();
	}
	getch();
	return 0;
}