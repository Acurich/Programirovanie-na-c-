//Дана последовательность из N целых чисел и пара значений. Необходимо заменить в последовательности чисел все элементы, равные первому числу, на второе
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
 int arr[100], n;
 cin >> n;
 for (int i = 0; i < n; i++)
  cin >> arr[i];
 int replacd, what;
 cin >> replacd >> what;
 replace(arr, arr + n, replacd, what);
 for (int i = 0; i < n; i++)
  cout << arr[i] << " ";
 system("pause");
 return 0;
}
