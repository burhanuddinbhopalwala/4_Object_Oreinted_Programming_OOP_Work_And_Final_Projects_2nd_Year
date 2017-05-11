#include<conio.h>
#include<iostream.h>
#include<string.h>
class publication
{
	protected:
	char *title;
	float price;
	public:
	publication(char *t,float p):price(p){strcpy(title,t);}
	void display()
	{
		cout<<"\ntitle= "<<title;
		cout<<" price= "<<price;
	}
	~publication(){delete(title);}
};
class publication2 : public publication
{
	protected:
	char *date;
	public:
	publication2(char *t,float p,char *d):publication(t,p),date(d){}
	void display()
	{
		publication::display();
		cout<<" date of publication = "<<date;
	}
	~publication2(){delete(date);}
};
class disc : public publication2
{
	protected:
	char type;
	public:
	disc(char *t,float p,char *d,char tp):publication2(t,p,d),type(tp){}
	void display()
	{
		publication2::display();
		cout<<"\ntype = "<<type;
	}
	~disc(){}
};
class book : public publication2
{
	protected:
	int pages;
	public:
	book(char *t,float p,char *d,int c):publication2(t,p,d),pages(p){}
	void display()
	{
		publication2::display();
		cout<<"\nno_of_pages= "<<pages;
	}
	~book(){}
};
class tape : public publication2
{
	protected:
	float length; // length in minutes;
	public:
	tape(char *t,float p,char *d,float l):publication2(t,p,d),length(l){}
	void display()
	{
		publication2::display();
		cout<<"\ntape length= "<<length;
	}
	~tape(){}
};
int main()
{
	clrscr();
	{disc d("Book Disc",500,"20-11-12",'d');
	d.display();}
	{book b("Book",500,"20-11-12",400);
	b.display();}
	{tape t("Tape",500,"20-11-12",140);
	t.display();}
	getch();
	return 0;
}