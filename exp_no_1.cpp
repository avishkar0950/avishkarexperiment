#include<iostream>
#include<string>
using namespace std;
class student
{
	public:
		int age;
		int PRN;
		string name;
		void set_data()
		{
			cout<<"enter student age"<<endl;
			cin>>age;
			cout<<"enter PRN no."<<endl;
			cin>>PRN;
			cout<<"enter name of stud"<<endl;
			cin>>name;
		}
};
int main()
{
	student s1;
	cout<<"information of student is:"<<endl;
	s1.set_data();
	return 0;
}
