//Даны два целых числа D (день) и M (месяц), задающие правильную дату невисокосного года. Требуется вывести значения D и M для даты, предшествующей указанной.
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int D = 0, M = 0, D1 = 0, M1 = 0;
  cin >> D >> M;

  if (D != 1) {
    D1 = D - 1;
    M1 = M;
  } else {
    if (M == 3) {
      M1 = 2;
      D1 = 28;
    } else if ((M == 2) || (M == 4) || (M == 6) || (M == 8) || (M == 9) ||
               (M == 11)) {
      M1 = M - 1;
      D1 = 31;
    } else if (M == 1) {
      M1 = 12;
      D1 = 31;
    } else {
      M1 = M - 1;
      D1 = 30;
    }
  }

  cout << D1 << " " << M1 << endl;

  system("pause");
  return 0;
}
