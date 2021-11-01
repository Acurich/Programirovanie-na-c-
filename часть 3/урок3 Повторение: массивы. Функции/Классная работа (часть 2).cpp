//Дана последовательность из N натуральных чисел. Требуется посчитать, сколько чисел в этой последовательности являются простыми.
#include <cmath>
#include <iostream>
using namespace std;
bool Simple(int n, int i) {
  if (n < 2)
    return false;
  else if (n == 2)
    return true;
  else if (n % i == 0)
    return false;
  else if (i * i <= n)
    return Simple(n, i + 1);
  else
    return true;
}
int main() {
  int N, k;
  cin >> N;
  int *A = new int[N];
  k = 0;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    if (Simple(A[i], 2)) k++;
  }
  cout << k << endl;
  return 0;
}
