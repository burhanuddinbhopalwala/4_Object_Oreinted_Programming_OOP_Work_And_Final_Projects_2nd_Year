#include<iostream.h>
#include<conio.h>
class invent
{
	int code,items;
	float price;
	public:
	invent(int x,int y,float z)
	{
		code=x;
		items=y;
		price=z;
	}
	void putdata()
	{
		cout<<"\nCode :  "<<code;
		cout<<"Items : "<<items;
		cout<<"Value : "<<price;
	}
	void getCode(){return code;}
	void getItems(){return items;}
	float getPrice(){return price;}
	operator float(){return (items*price);}
	operator invent()
	{
		invent temp;
		temp.code=code;
		temp.items=items;
		temp.price=price;
		return temp;
	}
	int  main()
	{
		clrscr();
		invent i1(100,5,140.0);
		i1.putdata();
		float total_value=i1; //Type Conversion
		cout<<"\n And total value = "<<total_value;
		invent i2;
		i2=i1;
		cout<<"\n for invent 2nd object data";
		i2.putdata();
		getch();
		return 0;
	}
};
