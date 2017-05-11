#include<iostream.h>
#include<conio.h>
#include<string.h>
class Address
{
	char *arean;
	char *pin;
public:
	Address(char *narea,char *p)
	{
		cout<<"\n Address Constructor";
		arean=new char[sizeof(strlen(narea)-1)];
		arean=narea;
		pin=new char[sizeof(strlen(p)-1)];
		pin=p;

	}
	~Address()
	{
		cout<<"\n Address Destructor";
		delete(arean,pin);
	}
	char* getArea(){return arean;}
	char* getPin(){return pin;}
};
class Person
{
	char *pname;
	Address *adrs;
public:
	Person(char *namep,Address *ad):pname(0),adrs(ad)
	{
		cout<<"\n Person Constructor ";
		pname=new char[sizeof(strlen(namep)-1)];
		pname=namep;
	}
	~Person()
	{
		cout<<"\n Person Destructor";
		adrs=NULL;
		delete(pname);
	}
};
int main()
{
	clrscr();
	cout<<"----------Aggregation Example----------";
	cout<<"\nBurhan lives in Sector-62 and the pin is 201301 . ";
	{
	Address a("Sector-62","201301");
	{
		Person p("Burhan",&a);   //Using codeblocks;
	}
	cout<<"\n Here Person Burhan Destroyed but Address still remains .";
	cout<<"\nAddress = "<<a.getArea()<<" and pin is  "<<a.getPin()<<" .";
	}
	cout<<"\n Finally Address class is Destroyed . ";
	getch();
	return 0;
	/*NOTE: the Destructor only calls if the object is SIMPLE not POINTER
	type and should be declare in main() inside the codeblock.*/
}