#include <iostream>
#include <cstdlib>
using namespace std;
class Pixel {
	double *color;
	public:
	Pixel(int size)
	{
		color=new(nothrow) double[size];
		if(!color)
		{
			cout<<"error"<<endl;
			exit(1);
		}
	}
	~Pixel() {
		delete[] color;
		cout<<"memory successfully deleted"<<endl;
	}
};
int main() 
{
	Pixel p(500000);
	return 0;
}      
