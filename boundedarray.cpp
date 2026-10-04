#include <iostream> 
using namespace std;
class BoundedArray {
	 int startclass;
	 int endclass;
	 int size;
	 int* students;
public:
BoundedArray(int startclass,int endclass):startclass(startclass),endclass(endclass)
{
	size=endclass-startclass+1;
	students=new int [size];
	}
void put(int clas,int count)
{
    students[clas-startclass]=count;
}
void show() 
{
    for(int i=startclass;i<=endclass;i++) 
    {
        cout<<"class "<<i<<":"<<students[i-startclass]<<" student"<<endl;
    }
}
~BoundedArray()
{
    cout<<"before delete"<<endl;
    delete [] students;
    cout<<"after delete"<<endl;
}
};
int main(void)
{
BoundedArray ob(1,3);
ob.put(1,25);
ob.put(2,28);
ob.put(3,30);
ob.show();
return 0;
}
