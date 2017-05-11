#include<iostream.h>
#include<conio.h>
#include<string.h>
class person
{
	protected:
	char* name;
	char* address;
	char gender;
	int age;
	public:
	person(char* n,char* a,char g,int ag):age(ag)
	{
		strcpy(name,n);
		strcpy(address,a);
		gender=g;
	}
	void show()
	{
		cout<<"\n name = "<<name;
		cout<<"\n address= "<<address;
		cout<<"\n gender= "<<gender;
		cout<<"\n age= "<<age;
	}
	virtual void getclass(){cout<<"\n this is Persons class .";}
};
class student : public person
{
	protected:
	char* stroll;
	public:
	student(char* n,char* a,char g,int ag,char* sroll):person(n,a,g,ag)
	{strcpy(stroll,sroll);}
	void show()
	{
		cout<<"\n Person is student : "<<stroll;
		person::show();
	}
	char* getsroll(){return stroll;}
	void getclass(){cout<<"\n this is Students class .";}
};
class faculty : public person
{
	protected:
	char* facid;
	public:
	faculty(char* n,char* a,char g,int ag,char* fid):person(n,a,g,ag)
	{strcpy(facid,fid);}
	void show()
	{
		cout<<"\n Person is faculty : "<<facid;
		person::show();
	}
	char* getfacid(){return facid;}
	void getclass(){cout<<"\n this is faculty class .";}
};
class department
{
	student* s;  //Assosiation
	faculty* f;  //Assosiation
	char* dname;
	static unsigned int index;
	static department* dlist[100];
	public :
	department(char* dnm,student* st,faculty* fac):dname(0),s(st),f(fac)
	{
		if(index<100)
		{
			dname=dnm;
			dlist[index]=this;
			++index;
		}
		else
		cout<<"\n Not accomodate more then 100 student in each dept .";
	}
	~department(){delete(dname);}
	static int numberst(char* dnm)
	{
		int count=0;
		for(int i=0;i<100;i++)
		{
			if(dlist[i]->getdname()==dnm)
			count++;
			else
			cout<<"\n Invalid Department .";
		}
		return count;
	}
	char* getdname(){return dname;}
};
unsigned int department::index=0;
class attendence
{
	protected:
	int anumber;
	public:
	attendence(){anumber=0;}
	void show(){cout<<"\n Number of attendence is "<<anumber;}
};
class rgister : public attendence
{
	student* s;
	/*static unsigned int index1;
	static rgister* rlist[100]; */
	public:
	rgister(student* st):s(st){}
	void sattend(char* srll)
	{
		if(s->getsroll()==srll)
		{
			anumber++;
			cout<<"\n Your attendence is marked" ;
		}
		else
		cout<<"\n Either not register or a faculty";
	}
	void show()
	{
		cout<<"\n Attendence Report";
		attendence::show();
	}

};
class barometric : public attendence
{
	faculty* f;
	/*static unsigned int index1;
	static barometric* blist[100];*/
	public:
	barometric(faculty* fc):f(fc){}
	void fattend(char* fid)
	{
		if(f->getfacid()==fid)
		{
			anumber++;
			cout<<"\n Your attendence is marked" ;
		}
		else
		cout<<"\n Either not register or a student";
	}
	void show()
	{
		cout<<"\n Attendence Report";
		attendence::show();
	}

};
int main()
{
	clrscr();
	student* s[3]={new student("Burhanuddin1","Noida1",'M',19,"13103735"),
	new student("Burhanuddin2","Noida2",'M',19,"13103736"),
	new student("Burhanuddin3","Noida3",'M',19,"13103737")};
	faculty* f[3]={new faculty("Adarsh Kumar1","Noida1",'M',30,"ad12345"),
	new faculty("Adarsh Kumar2","Noida2",'M',30,"ad12346"),
	new faculty("Adarsh Kumar3","Noida3",'M',30,"ad12347")};
	s[0]->show();
	f[0]->show();
	cout<<"\nfinding max number of students in an department : ";
	department("CSE",s[0],f[0]);
	department("CSE",s[1],f[1]);
	department("ECE",s[2],f[2]);
	int number1=department::numberst("CSE");
	int number2=department::numberst("ECE");
	if(number1>number2)cout<<"\nCSE has more students .";
	else cout<<"\nECE has more students .";
	rgister r(s[0]);
	r.sattend("13103735");
	barometric b(f[0]);
	b.fattend("ad12345");
	getch();
	return 0;
}
