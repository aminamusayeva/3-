#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
	ifstream fin("input.txt");
	if(!fin.is_open()) { return 1;}
	string s;
	if(!(fin>>s)) {return 2;}
	while(fin>>s)
	{
		size_t pos=0;
		while((pos=s.find("ab", pos))!=string::npos)
		{
			s.replace(pos,2,"klm");
			pos+=3;
		}
		cout<<s<<" ";
	}
	return 0;
}
