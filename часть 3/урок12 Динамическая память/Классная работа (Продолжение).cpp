//Напишите функцию int* naturals(int n), которая создаст динамический массив, состящий из n натуральных чисел и вернёт его из функции.
#include <iostream>
#include <vector>
 
using namespace std;
vector<int> naturals(int n){
  vector<int> a(n);
  for ( int i =0; i < n; i++){
    a[i] = i+1;
  }
  return a;
}
int main() {
  int n;
  cin >> n;
  vector<int> a = naturals(n);
  for (int i = 0; i < a.size(); i++)
    cout << a[i] << " ";
  return 0;
}

//Напишите функцию int* sum_arrays(int *a, int *b, int n), которая складывает соответствующие элементы двух массивов a и b одинаковой длины n и возвращает новый массив
#include <iostream>
using namespace std;

int *sum_arrays(int *a, int *b, int n) {
int *r = new int[n];
for (int i = 0; i < n; ++i) r[i] = a[i] + b[i];
return r;
}

int main() {
int i, n; cin >> n;
int *a1 = new int[n];
for (i = 0; i < n; ++i) cin >> a1[i];
int *a2 = new int[n];
for (i = 0; i < n; ++i) cin >> a2[i];
int *s = sum_arrays(a1, a2, n);
for (i = 0; i < n; ++i) cout << s[i] << ' ';
delete[] a1;
delete[] a2;
delete[] s;
}

//Дан массив a из n элементов. Удалить из этого массива все повторяющиеся элементы, оставив первые появления повторяющихся элементов. Порядок элементов должен сохраниться в соответствии с тем, когда значение встретилось первый раз в массиве.
#include <iostream>
using namespace std;
 
int main()
{
    int n;
  cin >>n;
 
    int*a = new int[n];
    for (int i = 0; i < n; i++)
      cin >>a[i];      
      
    for (int i = 0; i < n - 1; i++) 
    for (int j = i + 1; j < n; j++) 
    if (a[i] == a[j]) 
      { 
      for (int k = j; k < n; k++) 
      a[k] = a[k + 1]; 
      n--;
      j--;
    }   
 
    for (int i = 0; i < n; i++)
      cout <<a[i]<<" ";
      cout <<endl;
 
    delete[]a;
system("pause");
return 0;
}
