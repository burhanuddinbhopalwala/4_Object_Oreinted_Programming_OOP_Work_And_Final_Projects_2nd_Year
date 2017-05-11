#include<iostream.h>
#include<conio.h>
#include<string.h>
class Course
{
	char *ccode;
	public:
	Course(char *codec)
	{
		cout<<"\n Course Constructor";
		ccode=new char[sizeof(strlen(codec)-1)];
		ccode=codec;
	}
	~Course()
	{
		cout<<"\n Course Destructor";
		delete(ccode);
	}
	char* getCode(){return ccode;}
};
class School
{
	char *sname;
	char *address;
	public:
	School(char *names,char *adrs)
	{
		cout<<"\n School Constructor";
		sname=new char[sizeof(strlen(names)-1)];
		sname=names;
		address=new char[sizeof(strlen(adrs)-1)];
		address=adrs;
	}
	~School()
	{
		cout<<"\n School Destructor";
		delete(sname,address);
	}
	char* getSname(){return sname;}
	char* getSadrs(){return address;}
};
class Student
{
	char *stname;
	School *s;
	Course *c;
	static unsigned int index; //(i>0 only)
	static Student *stlist[4]; //1 is to many cardinality
	public:
	Student(char *namest,School *ss,Course *cc):stname(0),c(cc),s(ss)
	{
		cout<<"\nStudent Constructor";
		if(index<4)
		{
			stname=new char[sizeof(strlen(namest)-1)];
			stname=namest;
			stlist[index]=this;
			index++;
		}
		else
		cout<<"\nOOPs cannot accomodate more than 4 students .";
	}
	~Student()
	{
		cout<<"\nStudent Destructor";
		delete(stname);
	}
	static char* findStudent(char *schname,char *couname)
	{
		for(int i=0;i<4;i++) //'static'to run w/o object in main() .
		{
			if(stlist[i]->getSchname()==schname&&
			stlist[i]->getCouname()==couname)
			return stlist[i]->getStname();
		}
	}
	char* getSchname(){return(s->getSname());}
	char* getCouname(){return(c->getCode());}
	char* getStname(){return stname;}
	void display()
	{
		cout<<"\n Student Info : ";
		if(index<4)
		{
			cout<<"Student name is : "<<stlist[index]->getStname();
			cout<<", Student school is : "<<s->getSname();
			cout<<", Student course is : "<<c->getCode();
			cout<<"\n";
		}
	}
};
unsigned int Student::index;
Student* Student::stlist[4];//static intialized to 0;
int main()
{
	clrscr();
	int i;
	cout<<"\n------------Assosiation Example------------";
	School *s[4]={new School("School1","Sector1"),
	new School("School2","Sector2"),
	new School("School3","Sector3"),
	new School("School4","Sector4")};
	Course *c[2]={new Course("Java18905"),
	new Course("Perl65877")};

	Student s1("Burhanuddin",s[0],c[0]);
	s1.display();
	Student s2("Amit",s[1],c[1]);
	Student s3("Rahul",s[2],c[1]);
	Student s4("Abhinav",s[3],c[0]);

	cout<<"\n Finding student through its school and coursecode";
	cout<<"\n Ex: a student study in school1 and course is Java18905";
	cout<<"\nthen the student name is "<<Student::findStudent("school1","Java18905");

	cout<<"\n Finally deleting all objects of School and Course . ";
	for(i=0;i<4;i++)
	delete s[i];
	for(i=0;i<2;i++)
	delete c[i];
	getch();
	return 0;
}