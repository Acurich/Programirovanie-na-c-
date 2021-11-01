//Дан массив a из n целых чисел. Требуется определить, является ли сумма всех его элементов неотрицательным числом.
#include <iostream>
using namespace std;

int main(){
int sum = 0, n = 0;
cin >> n;
int arr[100];
for (int i = 0; i < n; i++){
cin >> arr[i];
sum+=arr[i];
}
if(sum > 0)
cout << "YES";
else cout << "NO";
return 0;
}

//Дан массив a из n целых чисел — информация о количестве осадков, выпавших за каждый из n дней. Требуется определить, в какие дни осадков не было.
#include <iostream>
using namespace std;
int main() {
  int n, b;
  cin >> n;
  int a[100];
  for (int i = 0; i < n; i++) cin >> a[i];

  for (int i = 0; i < n; i++)
    if (a[i] == 0) {
      b = i;
      cout << b<< " ";
    }
}

//Дан массив из n элементов. Необходимо найти количество элементов массива, значения которых неотрицательны и меньше заданного числа A.
#include <iostream>
using namespace std;
int main() {
  int a[100], n, k = 0, b;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a[i] ;
  }
  cin >> b;
  for(int i = 0; i < n; i++) {
    if (a[i] >= 0 && a[i] < b)k++;
  }
    cout << k;
}

//Дан двумерный массив целых чисел a из n строк и m столбцов. Требуется определить индекс столбца в котором расположен минимальный элемент строки с индексом 3 массива. Если таких элементов несколько, должен быть определён самый первый из них.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for(int i = 0; i <n; i++) 
    for(int j = 0; j < m; j++) 
      cin >> a[i][j];
  int min = a[3][0];
  int ids = 0;
  for(int i = 0; i < m; i++) {
    if ( a[3][i] < min) {
      min = a[3][i];
      ids = i;
    }
  }
  cout << ids << endl;
}


//Власти города решили построить культурный объект. Для этого требуется найти строительную фирму, которая займется решением этой задачи. N строительных компаний подали заявления, в каждом из которых было указано M стоимостей проектов из прошлого опыта компании. Определите в двумерном массиве размерностью N x M значение наибольшего элемента - то есть стоимость самого высокобюджетного проекта из представленных.
#include <iostream>
using namespace std;
int main() {
  int a[100][100], n, m, max = -10000;
  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if ( max < a[i][j]) max = a[i][j];
    }
  }
  cout << max;
}

//Дан массив размера N×N. Необходимо вывести положительные элементы главной диагонали.
#include <iostream>
using namespace std;
int main() {
  int a[50][50],n, k = 0;
  cin >> n;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
   for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if (i == j){
        if(a[i][j] > 0){
          cout << a[i][j] << " ";
          k++;
        }
      }
    }
   }
  if (k ==0) cout << "No such elements";
}
  

//Дано натуральное число N. Выведите все четырехзначные числа в порядке возрастания, сумма цифр которых равна N.
#include <iostream>
using namespace std;
int main()
{
    int n,i1, i2, i3, i4;
  cin >> n;
    for (int i = 1000; i <= 9999; i++)
    {
        i1 = i % 10;
        i2 = i / 10; i2 = i2 % 10;
        i3 = i / 100; i3 = i3 % 10;
        i4 = i / 1000;
        if (i1 + i2 + i3 + i4 == n) cout << i << " ";
    }
    return 0;
}
