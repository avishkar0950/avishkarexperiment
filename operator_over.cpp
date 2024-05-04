#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
		void getvaue();
		void operator-();
		void operator++();
		void operator++(int);
		complex operator+(complex obj);
		complex operator-(complex obj);
		void display();
		
};
void complex::getvaue()
{
	cout<<"enter the value of compex number a,b";
	cin>>a>>b;
	
}
void complex::operator-()
{
	a=-a;
	b=-b;
}
void complex::operator++()
{
	++a;
	++b;
}
void complex::operator++(int)
{
	a++;
	b++;
}
complex complex::operator+(complex obj)
{
	complex t;
	t.a=a+obj.a;
	t.b=b+obj.b;
	return (t);
	
}
complex complex::operator-(complex obj)
{
	complex t;
	t.a=a-obj.a;
	t.b=b-obj.b;
	return (t);
}
void complex::display()
{
	cout<<a<<"+"<<b<<"i"<<"\n";
}
int main()
{
	complex obj1,obj2,result,result1;
	obj1.getvaue();
	obj2.getvaue();
	cout<<"input values:\n";
	obj1.display();
	obj2.display();
	result=obj1+obj2;
	cout<<"result";
	result.display();
	result.display();
	++obj1;
	obj2++;
	cout<<"after increment:\n";
	obj1.display();
	obj2.display();
	-obj1;
	-obj2;
	cout<<"\n after negation:";
	obj1.display();
	obj2.display();
	return 0;
}
