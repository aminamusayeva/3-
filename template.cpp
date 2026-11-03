#include <iostream>
using namespace std;
template <typename type>
struct elem
{
	type val;
	elem<type> *next;
};
template <typename type>
class list
{
	elem<type> *base;
	elem<type> *current;
	public:
	list()
	{
		try
		{
			base=new elem<type>;
		}
		catch (...)
		{
		cout<<"error"<<endl;
		exit(1);
		}
		base->next=base;
		current=base;
	}
	~list()
	{
		elem<type> *c=base->next;
		while(c!=base)
		{
			elem<type> *newc=c->next;
			delete c;
			c=newc;
		} 
		delete base;
	}
bool Insert(type val)
{
    elem<type> *c;
	try
	{
	   c=new elem<type>;
	}
	catch(...)
	{
	  return 1;
	}
    c->val=val;
    c->next=current->next;
    current->next=c;
    return 0;
    }
bool Delete()
{
	if (current->next==base)
	    { return 1; }
	elem<type> *del=current->next;
	current->next=del->next;
	delete del;
	return 0;
}
bool Get(type *val)
{
 if (AtBeg()) return 1;
 *val=current->val;
 return 0;
}
bool Set(type val)
{
if(AtBeg()) { return 1; }
current->val=val;
return 0;
}
bool StepForward()
{
if(current->next==base)
{ return 1; }
current=current->next;
return 0;
}
void GotoBeg()
{
current=base;
}
bool AtBeg()
{
 return current==base;
}
bool IsEmpty()
{
 return base->next==base;
}
void show()
{
 if (IsEmpty())
 {
	 cout<<"Base";
     if (current==base)
     cout<<"<-current ";
     cout<<endl;
  }
 else
 {
  elem<type> *c=base->next;
  while(c!=base)
    {
     cout<<c->val;
     if(c==current)
     cout<<"<-current ";
     cout<<endl;
     c=c->next;
    }
  }
cout<<endl;
}
}; 
template <typename type1,typename type2> 
class book { 
	type1 pages;
	type2 price;
	public:
	template <typename U1,typename U2> 
	friend istream &operator>>(istream &cin,book<U1,U2> &ob);
    template <typename U1,typename U2>
    friend ostream &operator<<(ostream &cout,const book<U1, U2> &ob);
};
template <typename type1,typename type2>
ostream &operator<<(ostream &cout,const book<type1, type2> &ob)
{
	cout<<"pages-"<<ob.pages<<" "<<"price-"<<ob.price;
	return cout;
	}
template <typename type1,typename type2>
istream &operator>>(istream &cin,book<type1,type2> &ob)
{
	cin>>ob.pages>>ob.price;
	return cin;
	}
int main(void)
{
	using MyBook=book<int, double>;
	using BookList=list<MyBook>;
BookList l;
int number=-1;
MyBook v;
cout<<"3-Insert"<<endl;
cout<<"4-Delete"<<endl;
cout<<"5-Get"<<endl;
cout<<"6-Set"<<endl;
cout<<"7-StepForward"<<endl;
cout<<"8-GotoBeg"<<endl;
cout<<"11-show"<<endl;
cout<<"0-End"<<endl;
while(number!=0) 
{
    cin>>number;
    switch(number) 
    {
        case 3:
        cin>>v;l.Insert(v);break;
        case 4:
        l.Delete();break;
        case 5:
        l.Get(&v);
        cout<<v<<endl;break;
        case 6:
        cin>>v;l.Set(v);break;
        case 7:
        l.StepForward();break;
        case 8:
        l.GotoBeg();break;
        case 11:
        l.show();break;
        case 0:
        cout<<"end"<<endl;break;
        default:
        cout<<"number isn't correct"<<endl;
    }
}
return 0;
}
