//Создайте функцию void arraySort(int[], int), упорядочевающую элементы массива по неубыванию любым известным вам способом.
#include <iostream>

using namespace std;
void arraySort(int[], int);
void arraySort(int x[], int n) {
  int temp = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (x[i] > x[j]) {
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
      }
    }
  }
}
int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    arraySort(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
