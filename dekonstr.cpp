#include <iostream>
using namespace std;
class Pixel {
	double *color;
	public:
	Pixel(int size) 
	{
		color=new double[size];
	}
	~Pixel() {
		delete[] color;
		cout<<"in the destructor:pixel memory is cleared"<<endl;
	}
};
int main()
{
  for(int i=0;i<5;i++)
  {
	cout<<"moment "<<i<<":"<<endl;
	Pixel p(1000000);
  }
return 0;
}
