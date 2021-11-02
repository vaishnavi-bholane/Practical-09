#include<iostream>
using namespace std;

class Test{

	int objno;
	static int obj_count;
	
	public:
		Test()
		{
			objno = ++obj_count;
		}
		
		~Test()
		{
			--obj_count;
		}
		
		void print()
		{
			cout <<"Object Number: "<<objno<<endl;
		}
		
		static void print_count()
		{
			cout <<"Count: "<<obj_count<<endl;
		}

};

int Test :: obj_count;

int main()
{
	Test t1,t2,t3;
	Test :: print_count();
	t1.print();
	t2.print();
	t3.print();


	return 0;
}











