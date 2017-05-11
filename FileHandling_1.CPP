//program to write and read records from a text file
#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
    class student
	  {
	     public:
		int roll;	//id
		float e,m,tot;  //bs,da,hra,gs,tax,net;
		char name[20];  //char name[20];
	  }s;//global object

class students
{
public:
void write1()
  {
	  ofstream fout;//to write in file
	  fout.open("stud.txt",ios::app); //opened the file in append mode
	  cout<<"enter the roll no,english & math marks & name=";
	  cin>>s.roll>>s.e>>s.m>>s.name;
	  s.tot=s.e+s.m;
  fout.write((char*)&s,sizeof(s));//binary mode
  //fout<<s.roll<<"\t"<<s.e<<"\t"<<s.m<<"\t"<<s.tot<<"\t"<<s.name<<endl;
  fout.close();//file closed
  }
void read1()
	{
	  ifstream fin;
	  fin.open("stud.txt");
	  while(1) //infin. loop
		{
	  //fin.read((char*)&s,sizeof(s));//binary mode
	  fin>>s.roll>>s.e>>s.m>>s.tot>>s.name;
		 if(fin.eof())break;
	  cout<<"\nRoll no="<<s.roll<<"eng="<<s.e<<" math="<<s.m<<" total="<<s.tot<<"\t"<<s.name;
		}
	  fin.close();
	 }
void search()
      {
		int wantedRoll,found=0;
		cout<<"enter the roll no to search=";
		cin>>wantedRoll;//102
		ifstream fin("stud.txt");
	  while(1)
	      {
	  //fin.read((char*)&s,sizeof(s));//binary mode
	    fin>>s.roll>>s.e>>s.m>>s.tot>>s.name;
		 if(fin.eof())break;
	  if(s.roll==wantedRoll)
		 {
	  cout<<"\nRoll no="<<s.roll<<"eng="<<s.e
	<<" math="<<s.m<<" total="<<s.tot<<"\t"<<s.name;
		found=1;
		break;
		 } //if closed
	 }//while loop closed
	  if(found==0)
		 cout<<"\n\n*******Not Found******\n\n";
	  fin.close();
	  }
 void del()
	  {
		int wantedRoll,found=0;
		cout<<"enter the roll no to Delete=";
		cin>>wantedRoll;//102
		ifstream fin("stud.txt");//reading
		ofstream fout("temp.txt"); //wrt.
   while(1)
	{
	  //fin.read((char*)&s,sizeof(s));//binary mode
	    fin>>s.roll>>s.e>>s.m>>s.tot>>s.name;
		 if(fin.eof())break;
	  if(s.roll!=wantedRoll)
		 {
		   fout<<s.roll<<"\t"<<s.e<<"\t"<<s.m<<"\t"<<s.tot<<"\t"<<s.name<<endl;

		 // fout.write((char*)&s,sizeof(s));
		 } //if closed
	      else
		{ found=1;
		}
	 }//while loop closed
	  if(found==0)
		 cout<<"\n\n*******Not Found******\n\n";
		 else
	       cout<<"\nRecord deleted....";
	  fin.close();
	  fout.close();
	 remove("stud.txt");
	 rename("temp.txt","stud.txt");
   }
 void update()
	  {
		int wantedRoll,found=0;
		cout<<"enter the roll no to Update=";
		cin>>wantedRoll;//103
		ifstream fin("stud.txt");
		ofstream fout("temp.txt");
   while(1)
	{
	 // fin.read((char*)&s,sizeof(s));//binary mode
	 fin>>s.roll>>s.e>>s.m>>s.tot>>s.name;

		 if(fin.eof())break;
	  if(s.roll!=wantedRoll)
		 {
	 fout<<s.roll<<"\t"<<s.e<<"\t"<<s.m<<"\t"<<s.tot<<"\t"<<s.name<<endl;
	    //	  fout.write((char*)&s,sizeof(s));
		 } //if closed
	      else
		{
		s.roll=wantedRoll;
	  cout<<"enter the english & math marks & name=";
	  cin>>s.e>>s.m>>s.name;
	  s.tot=s.e+s.m;
	//  fout.write((char*)&s,sizeof(s));//binary mode
	   fout<<s.roll<<"\t"<<s.e<<"\t"<<s.m<<"\t"<<s.tot<<"\t"<<s.name<<endl;

		found=1;
		}
	 }//while loop closed
	  if(found==0)
		 cout<<"\n\n*******Not Found******\n\n";
		 else
	       cout<<"\nRecord Updated....";
	  fin.close();
	  fout.close();
	 remove("stud.txt");
	 rename("temp.txt","stud.txt");
   }
  };//class closed
void main()
     {
	  clrscr();
	  char choice;
	  students obj;
  do{
		 clrscr();
	cout<<"\n\n\t------MENU------\n";
	cout<<"\n \tPress w to  write";
	cout<<"\n \tPress R to read";
	cout<<"\n \tPress s to search";
	cout<<"\n \tPress d to delete";
	cout<<"\n \tPress u to Update";
	cout<<"\n \tPress x to exit :";
	choice=getch();
	fflush(stdin);
	switch(choice)
		{
		  case 'w':obj.write1();break;
		  case 'r':obj.read1();break;
		  case 's':obj.search();break;
		  case 'd':obj.del();break;
		  case 'u':obj.update();
		}
	cout<<"\n\n************* ***************\n";
	getch();
	fflush(stdin); //clear the buffer
  }while(choice!='x');
}


