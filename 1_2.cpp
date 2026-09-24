#include <iostream> 
using namespace std;
void multiply(int a,int b)
{
	 cout<<"product of 2 numbers: "<<a*b<<endl;
	 }
void multiply(int a,int b,int c)
{
	cout<<"product of 3 numbers: "<<a*b*c<<endl;
	}
int main()
{
	multiply(3,4);
	multiply(2,3,4);
	return 0;
}
