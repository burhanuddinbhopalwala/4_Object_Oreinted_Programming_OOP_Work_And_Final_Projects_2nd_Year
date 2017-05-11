// Demonstration of static member function ;
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
	static void getcount()
	{
		cout<<"count = "<<count<<"\n";
	}
};
int item::count;
int main()
{
	item i1,i2,i3;
	clrscr();
	item :: getcount();
	item :: getcount();
	item :: getcount();

	cout<<"After reading the data : \n";

	i1.getdata(100);
	i2.getdata(200);
	i3.getdata(300);

	item :: getcount();
	item :: getcount();
	item :: getcount();

	getch();
	return 0;

}