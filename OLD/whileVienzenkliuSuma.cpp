/*
Autorinės teisės (C) 2021, Linas Aleksandravičius, <me@linux123123.com>

Sukurta: 13:14 03 02 2021

whileVienzenkliuSuma
*/

#include <algorithm>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  cout << "Ivedamu vienzekliu skaiciu sumavimas" << endl;
  int sk, sum;
  sum = 0;
  cout << "Iveskite skaiciu" << endl;
  cin >> sk;
  while (sk != 999) {
    if ((abs(sk) >= 0) && (abs(sk) < 10))
      sum += sk;
    else
      cout << "Skaičius ne vienzenklis!" << endl;
    cout << "Iveskite dar viena skaiciu" << endl;
    cin >> sk;
  }
  cout << "Ivestu vienzenkliu skaiciu suma bus lygi " << sum << endl;
  return 0;
}
