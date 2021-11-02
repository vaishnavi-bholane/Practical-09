
#include<bits/stdc++.h>
using namespace std;

class College
{
	int x;//By default x is private
};

struct student
{
	int a;// By default a is public
};

/*When deriving a struct from a class/struct,the default access-specifier
for a base class/struct is public.
And when deriving a class, the default access specifier is private.
*/

struct Derived: College {};

int main()
{
	College t;
	student y;
	
	t.x = 20;
	y.a = 30;

	return 0;
}
