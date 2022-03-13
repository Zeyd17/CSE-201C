#include<iostream>

using namespace std;

int main(){
	float dollars;
	cout << "Enter amount in dollars: ";
	cin >> dollars;
	cout << "$" << dollars << " Equivalent to\nPound: " << dollars/1.487 << "\nFranc: " << dollars/0.172 << "\nDeutschemark: " << dollars/0.584 << "\nYen: " << dollars/0.00955 << endl;
	return 0;
}
