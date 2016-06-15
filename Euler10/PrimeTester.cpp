#include "PrimeTester.h"
#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;

bool pTest(long long int k) {
	for (long long int i = 2; i <= sqrt(k); i++) {
		if (k % i == 0) {
			//cout << k << " done." << endl;
			return false;
		}
	}
	//cout << k << " done." << endl;
	return true;
}