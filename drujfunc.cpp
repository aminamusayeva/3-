#include <iostream> 
using namespace std;
class Temperature {
	int c;
 public:
Temperature(int t):c(t) {}
friend bool isFreezing(Temperature t);
};
bool isFreezing(Temperature t) 
{
	return t.c<0;
}
int main() 
{
	 Temperature t1(15),t2(-5);
if (isFreezing(t1))
    cout<<"t1:freezing"<<endl;
else
    cout<<"t1:warm"<<endl;
if (isFreezing(t2))
    cout<<"t2:freezing"<<endl;
else
    cout<<"t2:warm"<<endl;
return 0;
}
