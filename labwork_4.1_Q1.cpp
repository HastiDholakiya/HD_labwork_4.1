#include<iostream>
using namespace std;

class X{
	public:
	int a;
	int b;
	int c;
	int cubeSum;
	
};

class Y :public X{
	public:
		setData()
		{
			cout << "Enter A value : ";
			cin >> a;
			cout << "Enter B value : ";
			cin >> b;
			cout << "Enter C value : ";
			cin >> c;
		}
		getData()
		{
			cubeSum = ((a*a*a) + (b*b*b) + (c*c*c));
			
			cout << "Sum of all three Cube : " << cubeSum << endl;
		}
		
};

int main()
{
	Y sum;
	
	sum.setData();
	sum.getData();
	
	return 0;
}
