#include<bits/stdc++.h>
using namespace std;

class Student{

	public:
		int roll_no;
		long long int phone_no;
		string address;
};

int main()
{
	Student Sam;
	Student John;
	
	Sam.roll_no = 219;
	John.roll_no= 409;
	Sam.phone_no = 943782974;
	John.phone_no = 9483927437;
	Sam.address = "23 Queen Street, London";
	John.address = "Kingston, London";
	
	
	cout << "Sam Roll Number: "<<Sam.roll_no<<endl;
	cout << "Sam Phone Number: "<<Sam.phone_no<<endl;
	cout << "Sam Address: "<<Sam.address<<endl;
	cout << "John Roll Number: "<<John.roll_no<<endl;
	cout << "John Phone Number: "<<John.phone_no<<endl;
	cout << "John Address: "<<John.address<<endl;

	return 0;

}
