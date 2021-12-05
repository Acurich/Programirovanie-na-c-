//Дан массив из n элементов. Вывести элементы массива, кратные k.
#include <iostream>
using namespace std;
int main() {
 int n, arr[100];
 cin >> n;
 int* mass = new int[n];

 for (int i = 0; i < n; i++) {
  cin >> mass[i];
 }
 int k;
 cin >> k;
 for (int i = 0; i < n; i++) {
  if ((mass[i] % k) == 0)
   cout << mass[i] << " ";
 }
 delete[] mass;
 return 0;
}

//Дан массив, состоящий из n элементов. Требуется написать программу, которая будет выводить все элементы этого массива, которые превосходят сумму всех элементов. Если таких элементов нет, то ничего выводить не нужно.
#include <iostream>
using namespace std;
int main() {
 int n, arr[100];
 cin >> n;
 int* mass = new int[n];
  int sum = 0;
 for (int i = 0; i < n; i++) {
  cin >> mass[i];
   sum += mass[i];
 }
 int k;
 cin >> k;
 for (int i = 0; i < n; i++) {
   if (mass[i] > sum)
   cout << mass[i] << " ";
 }
 delete[] mass;
 return 0;
}
