/*
Autorinės teisės (C) 2021, Linas Aleksandravičius, <me@linux123123.com>

Sukurta: 13:13 03 02 2021

whileLyginiuSuma
*/

#include <algorithm>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  cout << "Ivedamu lyginiu skaiciu sumavimas" << endl;
  int sk, sum;
  sum = 0;
  cout << "Iveskite skaiciu" << endl;
  cin >> sk;
  while (sk != 999) {
    if (sk % 2 == 0)
      sum += sk;
    else
      cout << "Skaičius ne lyginis!" << endl;
    cout << "Iveskite dar viena skaiciu" << endl;
    cin >> sk;
  }
  cout << "Ivestu lyginiu skaiciu suma bus lygi " << sum << endl;
}
