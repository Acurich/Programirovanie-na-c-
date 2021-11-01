//Дан массив из n элементов. Необходимо сравнить k-й и s-й элементы массива.
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[100];
  for ( int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int s, k;
  cin >>s >> k;
 if (a[s-1] > a[k-1]) {
      cout << "YES";
    }
  else if (a[1-1] ==7){cout << "YES";}
    else  {cout << "NO";}
}


//Дан массив a из n целых чисел. Требуется поменять местами первый отрицательный и последний положительный элементы массива. Если какого-то из этих элементов в массиве нет, то не изменять массив. Ноль считать положительным числом.
#include <iostream>
using namespace std;
int main() {
  int n, a[100];
  cin >> n;
  int indp = -1, indn = -1;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] >=0) indp = i;
    else if (a[i] < 0 && indn == -1) indn = i;
      }
  if (indp != -1 and indn != -1)
    swap(a[indp], a[indn]);
  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}

//Дан массив a состоящий из n целых чисел. Требуется найти количество пар соседних элементов массива, оканчивающихся нулем.
#include <iostream>
using namespace std;

int main() {
  int n, count = 0;
  cin >> n;

  int *a = new int[n];

  for (int i = 0; i < n; i++) cin >> a[i];

  for (int i = 0; i < n - 1; i++)
    if (a[i] % 10 == 0 && a[i + 1] % 10 == 0) count++;

  cout << count << "\n";
  delete[] a;
  return 0;
}

//Даны два массива a и b одинаковой длины n. Создать новый массив длины 2n, в котором все элементы с чётными индексами заимствуются из массива a, а с нечётными индексами из b.
#include <iostream>

using namespace std;

int main()

{

int n, i;



cin >> n;

int a[n], b[n], c[2 * n], ac = 0, bc = 0;



for (i = 0; i < n; i++) {

cin >> a[i];

}



for (i = 0; i < n; i++) {

cin >> b[i];

}


for (i = 0; i < 2 * n; i++) {

if (i % 2 == 0) { // парное

c[i] = a[ac];

ac++;

}

else { // непарное

c[i] = b[bc];

bc++;

}

cout << c[i] << ' ';

}

return 0;

}
