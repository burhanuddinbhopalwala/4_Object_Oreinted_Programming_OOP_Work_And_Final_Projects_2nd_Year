#include<conio.h>
#include<iostream.h>
#include<fstream.h>
class stream
{
   private:
	int a;
	int b;
   public:
    stream(){
	a = 0;
	b = 0;
    }
    stream(int x, int y):a(x),b(y){}
    friend ostream& operator<<( ostream& output,stream& s ) //& should be their
    {
		output << "\na : " << s.a << " and b : " << s.b;
		return output;
    }
	friend istream& operator>>( istream& input, stream& s ) //& should be their
    {
		input >> s.a >> s.b;
		return input;
    }
};
int main()
{
   clrscr();
   stream s;
   cout << "Enter the value of object a(int) and b(int) : " << endl;
   cin >> s;
   cout << "You Entered : "<<s;
   getch();
   return 0;
}