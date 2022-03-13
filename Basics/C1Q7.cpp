#include<iostream>

using namespace std;

int main(){
	float celcius, fahrenheit;
	cout << "Enter temperatur in Celcius: ";
	cin >> celcius;
	fahrenheit = (celcius * 9 / 5) + 32;
	cout << celcius << "C is equivalent to " << fahrenheit << "F" << endl;
	return 0;
}
