#include<iostream.h>
#include<conio.h>
class Arrays2
{
int a[4][2],b[4][2],c[8];
public:
void getArrays();
void setArrays();
void show();
void sorting();
};
void Arrays2::getArrays()
{
for(int i=0;i<4;i++)
{
	for(int j=0;j<2;j++)
	{
		if(j==0)
		a[i][j]=i+1;
		else
		{cout<<"Enter a["<<i<<"][1] : ";
		cin>>a[i][j];
	}
}
for(int i=0;i<4;i++)
{
	for(int j=0;j<2;j++)
	{
		if(j==0)
		b[i][j]=i+1;
		else
		{cout<<"Enter b["<<i<<"][1] : ";
		cin>>b[i][j];
	}
}
  }
void Arrays2::setArrays()
{
int j=1;
int k=0;
	for(int i=0;i<4;i++)
	{
		c[k]=a[i][j];
	}
	for(int j=0;j<4;j++)
	{
		c[k]=b[i][j];
	}
}
void Arrays2::sorting()
{
int s;
	for(int i=0; i<7 ;i++)
	{
		for(int j=i+1;j<7;j++)
		{
			if(a[i]>a[j])
			{
				s=c[i];
				c[i]=c[j];
				c[j]=s;
			}
	}
}
   }
void Arrays2::show()
{
	int k=0;
  for(int i=0;i<4;i++)
  {
	for(int j=0;j<4;j++)
	{
		if(a[i][j]==c[k])
			cout<<c[k]<<"["+i+"]"<<"["<<j<<"]";
		if(b[i][j]==c[k])
			cout<<c[k]<<"["+i+"]"<<"["<<j<<"]";
	}
	k++;
}
  }
int main()
{
clrscr();
Arrays2 a;
a.getArrays();
a.setArrays();
a.sorting();
a.show();
getch();
return 0;
}