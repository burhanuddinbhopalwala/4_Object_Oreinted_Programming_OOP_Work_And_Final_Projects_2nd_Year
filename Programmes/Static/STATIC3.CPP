// Demonstration of static data member with Arrays of object;
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
	item i[2];
	clrscr();
	i[0].getcount();
	i[1].getcount();
	i[2].getcount();

	cout<<"After reading the data : \n";

	i[0].getdata(100);
	i[1].getdata(200);
	i[2].getdata(300);

	i[0].getcount();
	i[1].getcount();
	i[2].getcount();

	getch();
	return 0;

}