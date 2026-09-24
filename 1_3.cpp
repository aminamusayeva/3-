#include <iostream>
using namespace std;
void calculate_total(double price,double discount=0.0)
{
	double final_price=price*(1.0-discount/100.0);
	cout<<"final price:"<<final_price<<" azn"<<endl;
	}
int main()
{
	 calculate_total(100.0);
     calculate_total(100.0,10.0);
return 0;
}
