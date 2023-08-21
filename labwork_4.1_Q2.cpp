#include<iostream>
using namespace std;

class P{
	public:
		float Celsius;
		float Fahrenheit;
		float Kelvin;
		
		setData()
		{
			cout << "Enter temprature in celsius : ";
			cin >> Celsius;
		}
		
};

class Q : public P{
	public:
		
		toFahrenheit()
		{
				Fahrenheit = Celsius * 1.8 + 32;

			cout << "Celsius convert into Fahrenheit : " << Fahrenheit << endl;			
		}
		
};

class R : public Q{
	public:
		
		tokelvin()
		{
			Kelvin = (Fahrenheit + 459.67) * 5/9;
			
			cout << "Fahrenheit convert into Kelvin : " << Kelvin << endl;
			
		}
};

int main()
{
	R object;
	
	object.setData();
	object.toFahrenheit();
	object.tokelvin();	
	
	return 0;
	
}
