#include <iostream>
using namespace std;
class display {
public:
display()
{
    cout<<"dislay created"<<endl;
}
};
class keyboard {
public:
keyboard()
{
    cout<<"keyboard created"<<endl;
}
};
class laptop {
display screen;     
keyboard board;    
int battery_level;
public:
laptop()
{
    battery_level=100;
    cout<<"laptop created"<<endl;
}
};
int main()
{
	laptop myLaptop;
return 0;
}
