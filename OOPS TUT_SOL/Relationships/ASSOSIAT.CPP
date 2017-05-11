#include<iostream.h>
#include<conio.h>
#include<string.h>
class Course
{
	char *coursecode;
	public:
	Course(char *c_code)
	{
		cout<<"Course : Constructor\n";
		coursecode=new char[strlen(c_code)];
		coursecode=c_code;
	}
	char* getCode(){return coursecode;}
	~Course()
	{
		cout<<"\nDestructing Course";
		delete(coursecode);
	}
};
class School
{
	char *name,*address;
	public:
	School(char *nm,char *addrs)
	{
		cout<<"School Constructor \n";
		name=new char[strlen(nm)];
		name=nm;
		address=new char[strlen(addrs)];
		address=addrs;
	}
	char* getName(){return name;}
	char* getAddrs(){return address;}
	~School()
	{
		cout<<"\n Destructing Student" ;
		delete(name);
		delete(address);
	}
};
class Student
{
	Course c;  //Assosiation here only the object is used.
	School s; //Assosiation
	char *name,*address,*faculty,*sn,*sa,*cc;
	static unsigned int index;
	static Student *student_list[4];
	public:
	Student(char *nm,char *addrs,char *fac,Course cc,School ss)
	:name(0),address(0),faculty(0),c(cc),s(ss)
	{
		if(index<4)
		{
			name = new char[strlen(nm)];
			name=nm;
			address=new char[strlen(addrs)];
			address=addrs;
		 }
		 else
		 cout<<"\nSorry no of students greater than 4";
	}
	char* getName(){return name;}
	char* getAddress(){return address;}
	char* getFaculty(){return faculty;}

	char* getSclname()
	{
		sn=s.getName();
		return sn;
	}
	 char* getScladd()
	{
		sa=s.getAddrs();
		return sa;
	}
	char* getCoursecode()
	{
		cc=c.getCode();
		return cc;
	}

	void Increament(){index++;}
	/*void display()
	{
		cout<<"\n-----Student Data -------";
		cout<<getName()<<"\n"<<getAddress()<<"\n"<<getFaculty();
		cout<<getSclname()<<"\n"<<getScladd()<<"\n"<<getCourseCode();
	} */
/*	void findStudent(char *n,char *a)
	{
		for(int i=0;i<index;i++)
		{
			if(student_list[i].Sclname==nm && student_list[i].Scladd()==addrs)
			{
				cout<<student_list[i].getName();
			}
		}

	}

*/
	~Student()
	{
		cout<<"Destructing Student\n";
	}
};
int main()
{
	clrscr();
	//Course *c[1]={new Course("Java")};
	//School *s[1]={new School("ABN","Indore")};
	Course c("Java");
	School s("ABN","Indore");
	Student s11("Burhan","Indore","Adarsh Sir",c,s);
	//s11.display();
	//delete c[1];
	//delete s[1];
	getch();
	return 0;
}