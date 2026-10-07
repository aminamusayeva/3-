#include <iostream> 
using namespace std;
class Battery;
class Flashlight {
  private:
int power;
  public:
Flashlight(int p):power(p) {}
int check(Battery b);
};
class Battery { 
  private:
int capacity;
  public:
Battery(int c):capacity(c) {}
friend class Flashlight;
};
int Flashlight::check(Battery b)
{ 
	 return b.capacity-power;
}
int main()
{
	Flashlight light(30);
	Battery b1(50);       
	Battery b2(20);      
int res1=light.check(b1);
if (res1>=0)
{
    cout<<"battery 1 is ok,left: "<<res1<<endl;
} else 
{
    cout<<"battery 1 is low"<<endl;
}
int res2=light.check(b2);
if (res2>=0) 
{
    cout<<"battery 2 is ok,left: "<<res2<<endl;
}
else
{
    cout<<"battery 2 is low"<<endl;
}
return 0;
}
