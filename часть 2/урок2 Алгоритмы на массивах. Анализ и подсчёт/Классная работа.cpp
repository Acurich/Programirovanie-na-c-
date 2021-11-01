//Дан массив из n элементов. Вывести элементы массива, кратные k.
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[n], k;
  for (int i = 0; i < n; i++) cin >> arr[i];
  cin >> k;
  for (int i = 0; i < n; i++)
    if (arr[i] % k == 0) cout << arr[i] << " ";
}

//Дан массив a из n натуральных чисел. Требуется вывести все элементы массива, являющиеся двузначными числами.
#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int n, x;
  cin >> n;
  while (n--) {
    cin >> x;
    int X = x, cnt = 0;
    while (X > 0) {
      X /= 10;
      cnt++;
    }
    if (cnt == 2) {
      cout << x << " ";
    }
  }
}

//Дан массив из n элементов. Необходимо найти сумму первых пяти элементов. Для решения данной задачи вам дана программа, в которую требуется дописать фрагмент кода.
#include <iostream>
using namespace std;

int main() {
  int a[100], n;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
int sum = 0;
  for (int i = 0; i <5; i++)
    sum += a[i];
  cout << sum;
  return 0;
}

//Вам дана программа, в которой вводится массив из N элементов. Допишите в эту программу фрагмент кода, который позволяет из уже существующего массива вывести только положительные элементы.
#include <iostream>
using namespace std;

int main() {
  int a[100], n;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];
for (int i = 0; i < n; i++)
  if (a[i] > 0) cout << a[i] << " ";
  return 0;
}

//Дан массив из n элементов и числа k1 и k2. Необходимо найти сумму элементов массива с k1-го по k2-й включительно.
#include <iostream>
using namespace std;
int main() {
  int n, sum = 0;
  int k1, k2;
  cin >> n;
  int hub[n];
  for (int i = 0; i < n; i++) {
    cin >> hub[i];
  }
  cin >> k1 >> k2;
  for (int i = k1; i <= k2; i++)  {
      sum += hub[i];
    }
    cout << sum;
  }

//Даны оценки ученика по n предметам. Требуется определить общее количество пятерок и четверок.
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  int a[100], n, b, c, cnt =0;
  cin>> n;
  for(int i =0;i <n; i++) cin >> a[i];
  for(int i =0;i <n; i++){
  if (a[i] >= 4) cnt += 1;
  }
  cout << cnt;
}

//Дан массив из n элементов. Необходимо найти количество элементов массива, значения которых больше заданного числа A и кратны 5.
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  const int size =100;
  int mas[size];
  int n, o=0;
  cin >> n;
  for (int i =0; i < n; i++) {
    cin >> mas[i];}
  int a;
  cin >> a;
  for (int i =0; i<n; i++)
  if ( mas[i] > a && mas[i] % 5 == 0) {
  o++;}
  cout << o;
}

//Дан массив из n элементов. Необходимо вывести количество элементов, которые больше своих «соседей» (следующего и предыдущего элементов).
#include <stdio.h>

int main(void)
 {int arr[100],n,k;
 scanf("%d",&n);
 k=0;
 for(int i=0;i<n;i++)
  scanf("%d",&arr[i]);
 for(int i=0;i<n;i++)
  if(i==0 && arr[i]>arr[i+1])k++;
  else
  if(i==n-1 && arr[i]>arr[i-1])k++;
  else
  if(arr[i]>arr[i-1] && arr[i]>arr[i+1])k++;
 printf("%d",k);
 return 0;}

//Дан массив из n элементов. Необходимо найти количество элементов массива, значения которых неотрицательны и меньше заданного числа A.
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  const int size =100;
  int mas[size];
  int n, o=0;
  cin >> n;
  for (int i =0; i < n; i++) {
    cin >> mas[i];}
  int a;
  cin >> a;
  for (int i =0; i<n; i++)
  if ( mas[i] < a && mas[i] >= 0) {
  o++;}
  cout << o;
}

//Напишите программу, выводящую k-ю цифру в последовательности квадратов натуральных чисел
//14916253649...
#include <iostream>
#include <sstream>
using namespace std;

int main() {
  size_t n, i = 1;
  stringstream s;

  cin >> n;
  while (s.str().length() < n) {
    s << i * i;
    i++;
  }
  cout << s.str()[n - 1];
  system("pause");
  return 0;
}
