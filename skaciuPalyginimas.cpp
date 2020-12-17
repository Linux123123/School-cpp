/*
Autorinės teisės (C) 2020, Linas Aleksandravičius, <linas.alexx@gmail.com>

Sukurta: 08:42 17 12 2020

skaciuPalyginimas
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int p1, p2, p3;
    ifstream fd("data.txt");
    fd >> p1 >> p2 >> p3;
    cout << "Mažiausias: " << min({p1, p2, p3}) << endl;
    cout << "Didžiausias: " << max({p1, p2, p3}) << endl;
    ofstream fr("res.txt");
    fr << "Mažiausias: " << min({p1, p2, p3}) << endl;
    fr << "Didžiausias: " << max({p1, p2, p3}) << endl;
    fd.close();
    fr.close();
    return 0;
}
