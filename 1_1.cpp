#include <iostream> 
using namespace std;
void price(double price)
{
	 cout<<"price:"<<price<<" AZN"<<endl;
	 }
void price(const char*text)
{
	cout<<"price:"<<text<<endl;
	}
int main()
{
	price(15.50);
	price("free");
	return 0;
}
