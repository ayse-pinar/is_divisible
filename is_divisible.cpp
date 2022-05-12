#include <iostream>
using namespace std;
bool is_divisible(int a) {
	//finding digit sum
	int sum = 0;
	int div = 1;
	while (div <= a) {
		sum += ((a/div)%10);
		div = div * 10;
	}
	if (a % sum == 0) {
		cout << a << " is divisible by " << sum << endl;
		return true;
	}
	else {
		cout << a << " is not divisible by " << sum << endl;
		return false;
	}
}
