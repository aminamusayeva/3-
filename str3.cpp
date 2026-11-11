#include <iostream>
#include <fstream>
using namespace std;
void f(string s, int &sum)
{
	size_t pos;
	try{ auto a=stoi(s,&pos);
		if(pos==s.length())
		{
			sum+=a;
	}
	   }
catch(...)
			{ return;}
	   }
int main(void)
{
	ifstream fin("input.txt");
	if(!fin.is_open()) { return 1;}
	string s;
	if(!(fin>>s)) {return 2;}
	int sum=0;
	f(s,sum);
	while(fin>>s)
	{
		f(s,sum);
	}
	cout<<sum<<endl;
	return 0;
}
