#include <set>
#include <iostream>
#include <conio.h>

using namespace std;

class A
{
public: 
	struct B
	{
		int a;
		bool operator<(const B& op);
	};
};

int main()
{
	set<A::B> a;
	A::B c;
	a.insert(c);
	set<int> b;
	_getch();
	return 0;
}

bool A::B::operator<(const B & op)
{
	return a < op.a;
}
