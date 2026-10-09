#include <iostream>
using namespace std;
class vec {
	int x,y,z;
  public:
  vec():x(0),y(0),z(0) {}
  vec(int x,int y,int z):x(x),y(y),z(z) {}
  void show()
    {
      cout<<"x:"<<x<<endl;
      cout<<"y:"<<y<<endl;
      cout<<"z:"<<z<<endl;
    }
  friend istream &operator>>(istream &in,vec &ob);
  friend ostream &operator<<(ostream &out,vec &ob);
};
istream &operator>>(istream &in,vec &ob)
{
	in>>ob.x>>ob.y>>ob.z;
	return in;
	}
ostream &operator<<(ostream &out,vec &ob)
{
	out<<"x:"<<ob.x<<" y:"<<ob.y<<" z:"<<ob.z<<endl;
	return out;
}
int main(void)
{
	vec ob1(1,2,5),ob2(3,-1,9);
cout<<"ob1 by show():"<<endl;
ob1.show();
cout<<"\nob2 by operator<<:"<<endl;
cout<<ob2;
cout<<"\n ob1 by operator>>:"<<endl;
cin>>ob1;
cout<<"\nnew ob1:"<<endl;
cout<<ob1;
return 0;
}
