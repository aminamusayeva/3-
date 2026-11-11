#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
	ifstream fin("input.txt");
	if(!fin.is_open()) { return 1;}
	string s;
	int k=0;
	if(!(fin>>s)) {return 2;}
	if(*s.begin()=='a' && *(s.end()-1)=='a')
	{
		k++;
	}
	while(fin>>s)
	{
	if(*s.begin()=='a' && *(s.end()-1)=='a')
	{
		k++;
	}
}
	cout<<k<<endl;
	return 0;
}
