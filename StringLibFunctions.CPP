#include<stdio.h>
#include<conio.h>
#include<string.h>
 #include<ctype.h>
 #include<dos.h>
 #include<iostream.h>
	  //string library functions
/*
strcmp(): 
 it is used to compare the contents
 of two strings.if both string are same
 then returns zero value else returns
 non zero value.
*/
main()
	{
		char s[20],d[20];
        int r;
		clrscr();
		printf("enter any String=");//abc
		gets(s); //cin.getline(s,20);
		printf("enter any String=");//adc
		gets(d); //cin.getline(d,20);

      r=strcmp(s,d);
		if(r==0)
		 printf("Same");
		  else
		 puts("not same");
	}
 
/*
strcpy():
it is used to copy the contents of one
string variable  to other string variable.
*/
main()
	{
	    char s[20],d[20];
		printf("enter the  string=");
		gets(s);//cin.getline(s,20);//bce
		strcpy(d,s);
		puts(d);//cout<<d;//bce
		getch();
	}
 
/*strrev():
it is used to make reverse of a string.
*/
 void main()
  {
	char s[]="banglore";
	strrev(s);
	puts(s);//cout<<s;//erolgnab
  }
 /*
 strupr():
this function is used to convert all the
characters of a string from lower case
to upper case.
*/
void main()
  {
		char s[]="bAnglore";
		strupr(s);
        puts(s);//cout<<s;//BANGLORE
  }

/*
 strlwr():
this function is used to convert all the
characters of a string from upper case
to lower case.
*/
  void main()
  {
	char s[]="COMPUTER";
	 strlwr(s);
	 puts(s);//cout<<s;//computer
  }

/*
strcat():
 It used to join the contents of two strings.
*/
  void main()
	{ char s[40],d[20];
		printf("enter ist String=");
		gets(s); //cin.getline(s,40);//bce
		printf("enter iind String=");
		gets(d); //cin.getline(d,20);//bti
         strcat(s," ");//bce   
        strcat(s,d); //to join 2 strings
		puts(s);//bce bti
      getch();
    }
  /*
toupper()
it is used to convert a character from
lower case to upper case. To use this
function include file ctype.h;
*/
void main()
	 {
	  char ch='a',ch1;
	  ch1=toupper(ch); //ctype.h
     //or
     ch1=ch-32;
	  putchar(ch1);printf("%c",ch1);//cout<<ch1;//A
	  char name[]="india";
	  name[0]=toupper(name[0]);
	 puts(name);  //cout<<name; //India
     getch();
	 }
/*
  void main()
	 {
		char ch='A';
		ch=tolower(ch); //ctype.h
		putchar(ch);//cout<<ch;  //a
	 }
*
/*strlen()
this function is used to get the no. of
characters in a string.
*/
  /*void main()
	 {
	  char s[20];
     int n;
	  puts("enter any string=");
	  gets(s);//cin.getline(s); //india
     n=strlen(s);
     printf("\nNo. of chars=%d",n);
	  cout<<"length of string="<<n; //5
	 }
  */


//store a list of strings
 /* void main()
	{
char name[4][20]={"bce","bti","pb","india"};
	puts("output");
	for(int r=0;r<4;r++)
		{
		 puts(name[r]);
		}
  }
 */
/*  main()
	{

	  char nam[]="banglore";

	  for( int i=0;i<strlen(nam);i++)
		 {
			cout<<nam[i]<<"   ";
			//printf("%c     ",nam[i]); //putchar(nam[i]);
			//delay(500);//dos.h
		 }
  }

  */











