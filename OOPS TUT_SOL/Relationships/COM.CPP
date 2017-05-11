#include<iostream.h>
#include<conio.h>
#include<string.h>
class Car;
class Engine
{
     char *ename;
     Car *c;
     public:
     Engine(){}
     Engine(char *namee,Car *cc)
     {
	  c=cc;
	  if(c!=NULL)
	  {
	       ename=new char[sizeof(strlen(namee)-1)];
	       ename=namee;

	  }
	  else
	  cout<<"OOP's Car not yet created";
     }
     ~Engine()
     {
	  cout<<"\n Engine Destructor";
	  c=NULL;
	  delete(ename);

     }
     static void installEngine(char *ename1,Car *c2,Engine *e1)
     {
	  e1=new Engine(ename1,c2);//"static" method to call it without object in Car.
     }
     char* getEngine()
     {
	  return ename;
     }
     static void init(Engine *enginelist[2])
     {
	  enginelist[2]=new Engine[2];//for this default constructor is required.
     }
};
class Car
{
     char *cname;
     Engine *enginelst[2];
     public:
     Car(char *namec)
     {
	  cname=new char[strlen(namec)-1];
	  cname=namec;
	  Engine::init(enginelst);
	  Engine *eng;

	  Engine::installEngine("Main Engine Pro",this,eng);
	  enginelst[0]=eng;


	  Engine::installEngine("Emergency Engine Pack",this,eng);
	  enginelst[1]=eng;

     }
     ~Car()
     {
	  cout<<"\n Car Destructor";
	  unsigned int i;
	  cout<<"\nCar destroy but first its Engines are Destroyed . ";//Car Destroys Engine Automatically Destroys.
	  for(i=0;i<2;i++)
	  {
	       if(enginelst[i]!=NULL)
	       delete(enginelst[i]);

	  }
	  delete []enginelst;// for deleting the Array first braces should
	  delete(cname);     // coming ensuring that it is Array to delete op.
	  cout<<"\n Finally Car was destroyed . ";
     }
     void getCar()
     {
	  cout<<"\n Car name is "<<cname;
	  cout<<"\n It contains 2 Engine .";
	  unsigned int i;
	  for(i=0;i<2;i++)
	  {
	       if(enginelst[i]!=NULL)
	       cout<<"\n"<<i+1<<" is"<<enginelst[i]->getEngine();

	  }

     }
};
int main()
{
     clrscr();
     cout<<"\n-----------Composition Example-----------";
     Car c("Ferrari");
     c.getCar();
     cout<<"\n Here Car destroys automatically destroys Engine";
     getch();
     return 0;
}