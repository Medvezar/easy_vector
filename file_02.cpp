#include "easy_list.h"


void itc_rev_list(vector <int> &mass){
	int numTest, len = mass.size();
	for (int n1 = 0; n1 < len / 2; n1++) {
		numTest = mass[len - n1 - 1];
		mass[len - n1 - 1] = mass[n1];
		mass[n1] = numTest;
	}
}


void itc_rev_par_list(vector <int>& mass) {
	int numTest, len = mass.size();
	if (len % 2 == 1)
		len--;
	for (int n1 = 1; n1 < len; n1++)
		if ((n1 + 1) % 2 == 0){
			numTest = mass[n1 - 1];
			mass[n1 - 1] = mass[n1];
			mass[n1] = numTest;
		}
}


void itc_rshift_list(vector <int>& mass) {
	int numTest, len = mass.size();
	for (int n1 = 0; n1 < len; n1++) {
		numTest = mass[n1];
		mass[n1 + 1] = mass[n1];
		mass[n1] = mass[len - n1 - 1];
	}
}


void itc_super_shift_list(vector <int>& mass, int n) {
	cout << "not working UwU" << endl;
}