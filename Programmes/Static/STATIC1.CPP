// Demonstration of static data member ;
#include<iostream.h>
#include<conio.h>
class item
{
	static int count;
	int number;
	public:
	void getdata(int x)
	{
		number=x;
		count++;
	}
	void getcount()
	{
		cout<<"count = "<<count<<"\n";
	}
};
int item::count;
int main()
{
	item i1,i2,i3;
	clrscr();
	i1.getcount();
	i2.getcount();
	i3.getcount();

	cout<<"After reading the data : \n";

	i1.getdata(100);
	i2.getdata(200);
	i3.getdata(300);

	i1.getcount();
	i2.getcount();
	i3.getcount();

	getch();
	return 0;

}