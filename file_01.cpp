#include "easy_list.h"


void itc_even_index_list(const vector <int> &mass,  vector <int> &mass1){
    if (mass.size() > 0)
        for (int n1 = 0; n1 < mass.size(); n1++)
            if ((n1 + 1) % 2 == 0)
                mass1.push_back(mass[n1]);
}


void itc_even_parts_list(const vector <int> &mass, vector <int> &mass1){
    if (mass.size() > 0)
        for (int n1 = 0; n1 < mass.size(); n1++)
            if (mass[n1] % 2 == 0)
                mass1.push_back(mass[n1]);
}


int itc_positive_list(const vector <int> &mass) {
    int times = 0;
    if (mass.size() == 0)
        return 0;
    for (int n1 = 0; n1 < mass.size(); n1++)
        if (mass[n1] >= 0)
            times++;
    return times;
}


int itc_sl_list(const vector <int> &mass) {
    int times = 0;
    if (mass.size() == 0)
        return 0;
    for (int n1 = 1; n1 < mass.size(); n1++)
        if (mass[n1 - 1] < mass[n1])
            times++;
    return times;
}


bool itc_same_parts_list(const vector <int> &mass) {
    if (mass.size() == 0)
        return false;
    for (int n1 = 1; n1 < mass.size(); n1++)
        if ((mass[n1 - 1] < 0 and mass[n1] < 0) or (mass[n1 - 1] >= 0 and mass[n1] >= 0))
            return true;
    return false;
}
