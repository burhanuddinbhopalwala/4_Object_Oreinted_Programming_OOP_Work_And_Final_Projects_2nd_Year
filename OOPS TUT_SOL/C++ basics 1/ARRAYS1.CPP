#include<iostream.h>
#include<conio.h>
class Arrays1
{
	int a[100];
public:
int i,size;
void insertion();
void deletion();
void sorting();
};
void Arrays1::insertion()
{
int index,value;
	cout<<"enter the size of Arrays : ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter a["<<i<<"] : ";
		cin>>a[i];
	}
	cout<<"plz enter the index for insertion : \n";
	cin>>index;
	if(index<=size-1)
	{
		cout<<"enter value for insertion \n" ;
		cin>>value;
		for(i=size-1;i>index;i--)
		a[i]=a[i-1];
		a[index]=value;
	cout<<"Final Array After Insertion is : \n";
	for(i=0;i<size;i++)
	cout<<"a["<<i<<"] is"<<a[i]<<"\n";
	}
	else
	cout<<"Sorry Insertion is Not Possible";

}
void Arrays1::deletion()
{
	int index;
	cout<<"enter the size of Arrays : ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter a["<<i<<"] : ";
		cin>>a[i];
	}
	cout<<"Enter the index for deletion \n";
	cin>>index;
	if(index<=size-1)
	{
	   for(i=index-1;i<size-1;i++)
	   a[i]=a[i+1];
	   cout<<"New Array after deletion is : \n";
	   for(i=0;i<size-1;i++)
	   cout<<"a["<<i<<"] is"<<a[i]<<"\n";
	}
	else
	cout<<"Sorry Deletion is not possible.\n";
}

void Arrays1::sorting()
{
	int s;
	cout<<"enter the size of Arrays : ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter a["<<i<<"] : ";
		cin>>a[i];
	}
	for(i=0;i<size;i++)       // sorting in increasing direction;
	{
		for(int j=i+1;j<size;j++)
		{
		   if(a[i]>a[j])
		   {
			s=a[i];
			a[i]=a[j];
			a[j]=s;
		   }
		}
	}
	cout<<"Sorted array is : " ;
	for(i=0;i<size;i++)
		cout<<"\n a["<<i<<"] is "<<a[i]<<"\n";
}
int main()
{
	clrscr();
	Arrays1 a;
	int choice;
	char c;
	do{
	cout<<"Enter 1 for insertion \n 2 for deletion \n 3 for sorting ";
	cout<<"\n Plz Enter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
		 {
			a.insertion();
			break;
		 }
		 case 2:
		 {
			a.deletion();
			break;
		 }
		 case 3:
		 {
			a.sorting();
			break;
		 }
		 default :
		 {
			cout<<"\n invalid choice";
			break;
		 }
}//switch
		 cout<<"do you want to continue\n";
		 cin>>c;
	}while(c=='y');
	getch();
	return 0;
}


