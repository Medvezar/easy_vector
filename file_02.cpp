#include "easy_list.h"


void itc_rev_list(vector <int> &mass){
	int numTest, len = mass.size();
	if (len > 0){
        for (int n1 = 0; n1 < len / 2; n1++) {
            numTest = mass[len - n1 - 1];
            mass[len - n1 - 1] = mass[n1];
            mass[n1] = numTest;
        }
	}
}


void itc_rev_par_list(vector <int>& mass) {
	int numTest, len = mass.size();
	if (len % 2 == 1)
		len--;
    if (len > 0){
        for (int n1 = 1; n1 < len; n1++)
            if ((n1 + 1) % 2 == 0){
                numTest = mass[n1 - 1];
                mass[n1 - 1] = mass[n1];
                mass[n1] = numTest;
            }
    }
}


void itc_rshift_list(vector <int>& mass) {
	int numTest, len = mass.size();
	vector <int> mass1(len);
    if (len > 0){
        for (int n1 = 0; n1 < len; n1++)
            mass1[(n1 + 1) % len] = mass[n1];
        mass = mass1;
    }
}


void itc_super_shift_list(vector <int>& mass, int n) {
	int numTest, len = mass.size();
	vector <int> mass1(len);
	if (len > 0){
        for (int n1 = 0; n1 < len; n1++)
            mass1[(n1 + n) % len] = mass[n1];
        mass = mass1;
	}
}
