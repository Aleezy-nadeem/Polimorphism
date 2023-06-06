#include <iostream>
using namespace std;
class subject{
	public:
	virtual	void show()
		{	cout<<"Subjects:\n";}
};
class maths : public subject 
{
	public: 
	void show()
	{	cout<<"Maths\n";   }
};
class English : public subject 
{
	public:
		void show()
		{	cout<<"English\n";}
};
main()
{
	subject *s1=new subject();
	s1->show();
	s1=new maths();
	s1->show();
	s1= new English();
	s1->show();
} 
