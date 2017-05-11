#include<iostream.h>
#include<conio.h>
class Income
{
	long main_salary;
	public:
		Income (long x)
		{
			main_salary=x;
		}
		void pay_salary();
		};
	void Income::pay_salary()
	{
		if (main_salary<100000){
			main_salary=((80*main_salary)/100);
			cout<<"\n salary after cutting tax  :  "<<main_salary;  }
		else {
			main_salary=((70*main_salary)/100);
			cout<<"\n salary after cutting tax  : "<<main_salary;   }
	main_salary=((67*main_salary)/100);
	cout<<"\n\n your final salary after all other deductions : "<<main_salary;
	}
	int main()
	{
		clrscr();
		long salary;
		cout<<"\n Plz enter your salary  :  ";
		cin>>salary;
		Income i(salary);
		i.pay_salary();
		getch();
		return 0;
	}