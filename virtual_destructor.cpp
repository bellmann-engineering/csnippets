#include <iostream>
using namespace std;

class Base
{
	public:
		Base()
		{
			cout << "Base Konstruktor Aufruf" << endl;		
		}
		virtual ~Base()
		{
			cout << "Base Destruktor Aufruf" << endl;				
		}
};

class Child : public Base
{
	
	public:
		Child()
		{
			cout << "Child Konstruktor Aufruf" << endl;		
		}
		~Child()
		{
			cout << "Child Destruktor Aufruf" << endl;				
		}
};

int main()
{
	Base* b = new Child();
	
	if(b != NULL)
		delete b;
}
