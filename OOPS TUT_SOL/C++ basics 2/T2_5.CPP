#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<time.h>
#include<stdio.h>
class Message
{
	char *from;
	char *to;
	char *text;
	public:
	Message(char *frm,char *too)
	{
		strcpy(from,frm);
		strcpy(to,too);
		text="";

	}
	void append(char *s);
	friend void display(Message m);
};
void Message::append(char* s)
{
	int i=0;
	while(text[i])
	i++;
	int j=0;
	while(s[j])
	{
		text[i]=s[j];
		i++;
		j++;
	}
	text[i]='\0';
}
void display(Message m)
{
	struct tm *local;
	time_t t;
	t=time(NULL);
	local=localtime(&t);
cout<<"\nEMAIL RECEIVED\nfrom : "<<m.from<<"\n to : "<<m.to;
cout<<"\n Date/Time : "<<asctime(local)<<"body : "<<m.text;
}
int main()
{
	clrscr();
	char *s,*to,*from;
	cout<<"\n Your name : ";
	gets(from);
	cout<<"\n Receiver's name : ";
	gets(to);
	cout<<"\n Enter the string or message you want : ";
	gets(s);
	Message m(from,to);
	m.append(s);
	display(m);
	getch();
	return 0;
}