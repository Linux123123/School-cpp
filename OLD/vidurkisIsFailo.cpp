/*
Autorinės teisės (C) 2020, Linas Aleksandravičius, <me@linux123123.com>

Sukurta: 11:23 08 12 2020

vidurkisIsFailo
*/

#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  float a, b, c, d, e, s;
  ifstream fd("data.txt");
  fd >> a >> b >> c >> d >> e;
  s = (a + b + c + d + e) / 5;
  ofstream fr("res.txt");
  fr << "Vidurkis: " << setw(4) << fixed << setprecision(2) << s << endl;
  cout << "Vidurkis: " << setw(4) << fixed << setprecision(2) << s << endl;
  fd.close();
  fr.close();
  return 0;
}
