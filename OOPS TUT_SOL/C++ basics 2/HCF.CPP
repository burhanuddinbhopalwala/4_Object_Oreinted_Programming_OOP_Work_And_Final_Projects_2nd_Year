#include<conio.h>
#include<iostream.h>
class Fraction
{
	int num,den;
	public:
	Fraction(int x,int y)
	{
		num=x;
		den=y;
	}
	void operation();
};
void Fraction::operation()
	{
		int m;
		if(den==0)
		m=0;
		else if(den>=num)
		m=den;
		else if(num>den)
		m=num;
		else
		m=1;
		for(int i=m;i>=1;i--)
		{
			if(num%i==0&&den%i==0)
			{
				num=num/i;
				den=den/i;
				cout<<"\n Fraction = " <<num<<"/"<<den;
				break;
			}
		}
			if(i==1)
			 cout<<"\n Sorry furthur Fraction is not possible . ";
			else if(i==0)
			 cout<<"\n Sorry fraction is not defined . ";
	}
	int main()
	{
		clrscr();
		int n,d;
		cout<<"\n Enter num : ";
		cin>>n;
		cout<<"\n Enter den : " ;
		cin>>d;
		Fraction f(n,d);
		f.operation();
		getch();
		return 0;

	}
