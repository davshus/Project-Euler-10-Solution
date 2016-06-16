#include "PrimeTester.h"
#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;
int input;
long long int total;
int progress = 0;
int xProgress = 0;
int main() {
	system("pause");
	cout << progress << "% done.";
	for (long long int j = 2; j < 2000000; j++) {
		if (pTest(j)) {
			total += j;
			//cout << total << endl;
		}
		progress = int(floor(100 * j / 2000000));
		if (progress != xProgress) {
			system("cls");
			cout << endl << progress << "% done.";
			xProgress = progress;
		}
	}
	cout << endl << "The sum of every prime below 2,000,000 is: " << total << endl;
	system("pause");
	return 0;
}