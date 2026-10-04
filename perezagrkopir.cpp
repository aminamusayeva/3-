#include <iostream>
using namespace std;
class StudentGrades {
	int count;
	int *grades;
public:
StudentGrades(int count):count(count)
    {
	grades=new int [count];
	}
void put(int i,int mark)
   {
    grades[i]=mark;
   }
void show() 
   {
    for(int i=0;i<count;i++) cout<<i<<": "<<grades[i]<<endl;
   }
StudentGrades(const StudentGrades &temp_ob):count(temp_ob.count),grades(new int [temp_ob.count])
 {
    for(int i=0;i<this->count;i++) this->grades[i]=temp_ob.grades[i];
 }
~StudentGrades()
    {
    cout<<"before delete"<<endl;
    delete [] grades;
    cout<<"after delete"<<endl;
    }
};
int main(void) 
{
StudentGrades st1(5);
for(int i=0;i<5;i++) 
st1.put(i,i+80);
StudentGrades st2=st1;
for(int i=0;i<5;i++)
st2.put(i,100);
st1.show();
cout<<endl;
st2.show();
return 0;
}
