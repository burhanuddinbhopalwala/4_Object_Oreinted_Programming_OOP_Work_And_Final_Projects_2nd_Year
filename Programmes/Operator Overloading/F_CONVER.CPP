#include<iostream.h>
#include<conio.h>
class Float
{
	float fl;
	public:
	Float(){}
	Float(float f):fl(f){}
	operator float()
	{return int(fl);}
};
int main()
{
	Float f(2.685);
	int i;
	i=f;
	cout<<i;
	return 0;
}
