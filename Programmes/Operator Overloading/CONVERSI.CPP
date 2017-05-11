#include<iostream.h>
#include<string.h>
#include<conio.h>
class String
{
	char *str;
	int len;
	public:
	String(char* s)
	{
		str=s;
		len=strlen(str);
	}
	operator char*()
	{return str;}
	operator int()
	{return len;}
};
int main()
{
	clrscr();
	String s("Operator Overloading . ");
	char *s1;
	int l;
	s1=s; // compiler automatically detect datatype and call function
	l=s;                             // according to this.
	cout<<s1<<"\n"<<l;
	getch();
	return 0;
}
