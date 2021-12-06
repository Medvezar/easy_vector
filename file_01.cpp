#include "easy_list.h"


void itc_even_index_list(const vector <int> &mass,  vector <int> &mass1){
    for (int n1 = 0; n1 < mass.size(); n1++)
        if ((n1 + 1) % 2 == 0)
            mass1.push_back(mass[n1]);
}


void itc_even_parts_list(const vector <int> &mass, vector <int> &mass1){
    for (int n1 = 0; n1 < mass.size(); n1++)
        if (mass[n1] % 2 == 0)
            mass1.push_back(mass[n1]);
}


int main(){
    vector <int> mass(9);
    for (int n1 = 0; n1 < 9; n1++)
        mass[n1] = n1 + 1;
    vector <int> mass1;
    // ---------------
    itc_even_parts_list(mass, mass1);
    //-------------------
    for (int n1 = 0; n1 < mass.size(); n1++)
        cout << mass[n1] << endl;
    cout << "------------------------------------" << endl;
    for (int n1 = 0; n1 < mass1.size(); n1++)
        cout << mass1[n1] << endl;
}
