#include <bits/stdc++.h>

using namespace std;

uint maxCycleLenght(uint i, uint j) 
{
	uint maxCount = 0;
	for (uint it = i; it <= j; it ++) {
		uint count{1}, result = it;
		while (result != 1) {
			if (result % 2) {
				result = result * 3 + 1;
			} else {
				result /= 2;
			}
			count ++;
		}
		maxCount = (count > maxCount) ? count : maxCount;
	}
	return maxCount;
}

int main()
{
	cout << "(1, 10) = " << maxCycleLenght(1, 10) << endl;
	cout << "(100, 200) = " << maxCycleLenght(100, 200) << endl;
	cout << "(201, 210) = " << maxCycleLenght(201, 210) << endl;
	cout << "(900, 1000) = " << maxCycleLenght(900, 1000) << endl;
	return 0;
}
