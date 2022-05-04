#include <iostream>
using namespace std;

class BasisA
{
	public:
		void print() { cout << "ich bin A" << endl; }	
};

class BasisB
{
	public:
		void print() { cout << "ich bin B" << endl; }	
	
};

class ChildC : public BasisA, public BasisB
{
	public:
		ChildC() { };
	
};


int main()
{
	ChildC c;
	c.BasisA::print();
	c.BasisB::print();
	
	return 0;
}
