#include<iostream.h>
#include<string.h>
#include<conio.h>
class String
{
char *str;
int len;
public:
String(){}
String(char *s)
{
len=strlen(s);
str=new char[len+1];
str=s;
}
//String using Copy Constructor
String(String & s)
{
	len=s.len;
	str=new char[len+1];
	strcpy(str,s.str);
}
//str3=str1+str2
friend String operator+(String s1,String s2)
{
	String temp;
	temp.len=s1.len+s2.len;
	strcpy(s2.str,s1.str);
	strcat(temp.str,s2.str);
	//cout<<s1.str<<s2.str<<temp.len<<temp.str<<s1.len;
	return temp;
}
//(str1==str2)
friend int operator==(String s1,String s2)
	{
		int flag=0;
		if(strcmp(s1.str,s2.str)==0)
		flag=1;
		return flag;
	}
//(str1!=str2)
friend int operator!=(String s1,String s2)
{
	int flag=0;
	if(strcmp(s1.str,s2.str)!=0)
	flag=1;
	return flag;
}
//(str1<str2)
friend int operator<(String s1,String s2)
{
	int flag=0;
	if(strcmp(s1.str,s2.str)<0)
	flag=1;
	//cout<<flag<<s1.str<<s2.str;
	return flag;
}
//(str1<str2)
friend int operator>(String s1,String s2)
{
	int flag=0;
	if(strcmp(s1.str,s2.str)>0)
	flag=1;
	return flag;
}
//(str1<=str2)
friend int operator>=(String s1,String s2)
{
int flag=0;
int result=0;
result=strcmp(s1.str,s2.str);
if(result>0 || result==0)
flag=1;
return flag;
}
//(str1>=str2)
friend int operator<=(String s1,String s2)
{
int flag=0;
int result=0;
result=strcmp(s1.str,s2.str);
if(result<0 || result==0)
flag=1;
return flag;
}
//[],(),=,->operator only through member function possible not through friend and static function ;
char operator[](int n)
{
	if(n<0)
	return str[0];
	else if(n>=len)
	return str[len-1]; //last character
	return str[n];
}
void operator()(char *c , int num) // only overload using member function ;
{
	if(num>len) num=len; // full string copied
	else if(num<len) num=1; // only 1st character copied
	for(int i=0;i<num;i++)
	c[i]=str[i];
}
char* operator=(char *s)
{
	if(str!=NULL)  { if(s==NULL) s=str; }
	else s="something is wrong";
	return s;
}
//char* operator->(){return str;}
void show()
{
	if(len==0)
	cout<<"\n String is Empty \n";
	else
	cout<<"\nThe result is:"<<str<<"\n";
}
	};
int main()
{
	clrscr();
	String s1("Operator");
	String s2("Overloading");
	/*s1.show();
	s2.show();*/
	String s3;
	s3=s1+s2;
	s3.show();
	cout<<"\n== Operator Checking : ";
	if(s1==s2)
	cout<<"s1==s2";
	else
	cout<<"s1!=s2";
	cout<<"\n!= Operator Checking : ";
	if(s1!=s2)
	cout<<"s1!=s2";
	else
	cout<<"s1==s2";
	cout<<"\n< Operator Checking : ";
	if(s1<s2)
	cout<<"s1<s2";
	else
	cout<<"s1>s2";
	cout<<"\n> Operator Checking : ";
	if(s1>s2)
	cout<<"s1>s2";
	else
	cout<<"s1<s2";
	cout<<"\n<= Operator Checking : ";
	if(s1<=s2)
	cout<<"s1<=s2";
	else
	cout<<"s1>s2";
	cout<<"\n>= Operator Checking : ";
	if(s1>=s2)
	cout<<"s1>=s2";
	else
	cout<<"s1<s2";
	cout<<"\n[] Operator Checking : ";
	cout<<s1[2];//operator[]() returns char;
	cout<<"\n() Operator Checking : ";
	char *c;
	s1(c,5);
	cout<<"copying character of s1 to c using function call operator and c= "<<c;
	cout<<"\n= Operator Checking : ";
	char *s;
	s1.operator=(s);
	cout<<"copying character of s1 to s using assingment operator and s= "<<c;
	/*cout<<"\n-> Operator Checking : ";
	char *sc;
	sc=s1.operator->();
	cout<<"copying character of s1 to sc using ->(arrow) operator and sc= "<<c;*/
	getch();
	return 0;
}
