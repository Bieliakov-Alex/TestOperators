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
		bool operator<(const B& op)const;
	};
};

int main()
{
	A::B op1, op2;
	op1.a = 2;
	op2.a = 3;
	cout << (op1 < op2 ? "Yes" : "No");
	set<A::B> a;
	a.insert(op1);
	_getch();
	return 0;
}

bool A::B::operator<(const B & op)const
{
	return a < op.a;
}
