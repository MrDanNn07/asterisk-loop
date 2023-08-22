#include <iostream>
using namespace std;

int main() {

	int row;
	cout << "Please Enter your desired row: ";
	cin >> row;


	for (int i = 0; i <= row; i++)
	{

		for (int x = 0; x < i; x++)
		{
			cout << "*";
		} 
		{
			cout << "\n";
		}
	}
}