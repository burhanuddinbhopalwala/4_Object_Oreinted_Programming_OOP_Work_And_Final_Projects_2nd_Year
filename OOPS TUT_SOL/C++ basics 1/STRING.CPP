#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iostream.h>
class String
{
public:
int i;
int strlen(char *src);
void strcpy(char *dest,char *src);
int strcmp(char *src,char *dest);
void strcat(char *src,char *dest);
void strrev(char *str);
};
int String::strlen(char *src)
{
int count=0;
for(i=0;src[i];i++)               // *(str+i) =str[i]
	    count++;
i=0;
return count;
}
void String::strcpy(char *dest,char *src)
{
i=0;
	while(src[i])
	{
		dest[i]=src[i];
		i++;
	}
	dest[i]='\0';
	cout<<"dest="<<dest;
}
void String::strrev(char *src)
{
	char s;
  int j= strlen(src)-1;
  for(i=0;i<j;i++,j--)
  {
	s=src[i];
	src[i]=src[j];
	src[j]=s;
  }
  puts(src);
}
int String::strcmp(char *src,char *dest)
{
  int f=0;
  while(src[f]==dest[f])
  {
	if(src[f]=='\0'||dest[f]=='\0')
	break;
	f++;
  }
  if(src[f]=='\0'&&dest[f]=='\0')
  return 0;
  else
  return -1;
}
void String::strcat(char *src,char *dest)
{
i=0;
	while(src[i])
	i++;
int j=0;
	while(dest[j])
	{
		src[i]=dest[j];
		i++;
		j++;
	}
	src[i]='\0';
puts(src);
}                     //here dest added on src;

int main()
{
clrscr();
char choice;
String s;
char *src,*dest;
do{
fflush(stdin);
cout<<"Enter 1 String : ";
gets(src);
cout<<"Enter 2 String : ";
gets(dest);
cout<<"strlen() of 1st String : "<<strlen(src)<<"\n";
cout<<"After copy  1string  into  2string ";
s.strcpy(dest,src);
cout<<"\n"<<"On comparing 1 and 2 : "<<s.strcmp(src,dest);
cout<<"\n"<<"After concatinating 1 and 2";
cout<<"  ";
s.strcat(src,dest);
cout<<"\n"<<"After reversing 1  ";
s.strrev(src);
cout<<"do you want to continue (y/n)";
cin>>choice;
}while(choice!='n');
getch();
return 0;
}
