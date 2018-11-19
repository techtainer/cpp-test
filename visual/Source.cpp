#include <iostream>

using namespace std;

int main() {
	int val;
	int result=0;

	for (int i = 0; i < 5; i++)
	{
		cout << i+1 << " Input numbers :";
		cin >> val;

		result += val;

	}


	cout << "Total:" << result << endl;
	return 0;
}