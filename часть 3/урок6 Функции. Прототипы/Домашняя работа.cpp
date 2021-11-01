//Создайте функцию int arrayMax(int[], int), возвращающую как результат индекс первого максимального значения массива.
#include <iostream>

using namespace std;
int arrayMax(int[], int);
int arrayMax(int a[], int n) {
  int max = a[0];
  int index = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] > max) {
      max = a[i];
      index = i;
    }
  }
  return index;
}
int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    cout << arrayMax(a, n);
    return 0;
}

//Создайте функцию int arraySum(int[], int), возвращающую как результат сумму всех элементов массива.
#include <iostream>

using namespace std;
int arraySum(int[], int);
int arraySum(int a[], int n){
  int s = 0;
  for (int i = 0; i < n; i++){
    s += a[i];
  }
  return s;
}
int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    cout << arraySum(a, n);
    return 0;
}

//Создайте функцию void eraseFromArray(int[], int&, int), удаляющую из массива элемент с заданным индексом. Все элементы массива правее удаляемого должны быть сдвинуты влево, а размер массива должен быть соответствующим образом изменен.
#include <iostream>

using namespace std;
void eraseFromArray(int x[], int& n, int k) {
  copy(x + k + 1, x + n, x + k);
  n--;
}
int main() {
    int a[100], n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;
    eraseFromArray(a, n, x);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
