#include <iostream>
using namespace std;
class Pixel {
	int x,y;
	public:
	Pixel(int a,int b):x(a),y(b) {}
	void show() 
	{
		cout<<"Pixel position:x="<<x<<",y="<<y<<endl;
	}
};
int main()
{
	Pixel p(10,20);
	p.show();
	return 0;
}
