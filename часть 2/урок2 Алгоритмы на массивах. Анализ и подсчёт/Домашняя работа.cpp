//Тест
№1 Ответ:5 1 2 3 4 5;5 3 0 1 9 11
№2 Ответ:5 -3 -12 -1 -9 -11;1 -1
№3 Ответ:5 -2 -12 -14 -6 -10; 6 0 -14 2 -2 8 -32

//Дан массив из n элементов. Необходимо сравнить k-й и s-й элементы массива.
#include <iostream>
using namespace std;
int main()
{
	int ar[100],n,k,s;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> ar[i];
	}
	cin >> k >> s;
	if(ar[k-1]>=ar[s-1]) cout << "YES";
	else cout << "NO";
	return 0;
}

//Дан массив из n элементов. Необходимо найти количество элементов, кратных 3 или 5.
#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int i, a[100], n;
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> a[i];
  }
  int count = 0;
  for (i = 0; i < n; i++) {
    if (a[i] % 3 == 0 or a[i] % 5 == 0) {
      count++;
    }
  }
  cout << count;
}

//Дан массив из n целых чисел. Найдите сумму элементов этого массива, значения которых не превышают 20. Для решения этой задачи вам дана программа, в которую необходимо дописать тот фрагмент, который находит саму сумму элементов.
#include <iostream>
using namespace std;
int main() {
  int n, a[100];
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
int sum = 0;
  for(int i =0; i < n; i++)
    if (a[i] <= 20) 
      sum = sum + a[i];
  cout << sum;
  return 0;
}

//Дан массив, состоящий из n элементов. Требуется написать программу, которая будет выводить все элементы этого массива, которые превосходят сумму всех элементов. Если таких элементов нет, то ничего выводить не нужно.
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  const int size =100;
  int mas[size];
  int n;
  cin >> n;
  for (int i =0; i < n; i++) {
    cin >> mas[i];}
  int a=0;
  for (int i =0; i<n; i++){
  if (mas[i] > a) {a += mas[i];}
    cout << mas[i] << " ";
  }
}
