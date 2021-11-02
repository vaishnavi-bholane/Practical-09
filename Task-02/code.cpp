#include<iostream>
using namespace std;

class Area{

	public:
		int a;
		
	Area(): a(0)
	{}
	
	void Area_sq_rect(int l, int b)
	{
		a = l*b;
		cout<<"Area of Rectangle is: "<<a<<endl;
	}
	
	void Area_sq_rect(int x)
	{
		a = x*x;
		cout<<"Area of square is: "<<a<<endl;
	}
};

int main()
{
	Area obj;
	obj.Area_sq_rect(8,9);
	obj.Area_sq_rect(4);
	
	return 0;

}
