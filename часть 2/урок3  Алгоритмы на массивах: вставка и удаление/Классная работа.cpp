//Вам дана программа, в которой создается и вводится массив из N целых чисел. Дополните эту программу таким образом, чтобы она считывала два значения: k и s, и меняла в массиве элементы с этими индексами местами
#include <iostream>
using namespace std;
int main() {
  int a[100], n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
int k, s, tmp;
  cin >> k >> s;
  tmp = a[k];
  for ( int i =0; i < n; i++) {
    a[k] = a[s];
  }
  for(int i =0; i < n; i++) {
    a[s] = tmp;
  }
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}

//Дан массив a из n элементов. Перенесите s-й элемент массива на место k-го элемента (s>k). При этом k-й, (k+1)-й, ... , (s−1)-й элементы сдвинуть вправо на 1 позицию.
#include <cmath>
#include <iostream>
using namespace std;
int main() {
int n,k, s, tmp;
  cin >> n;
  int a [1000];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> s >> k;
  tmp = a[s];
  for ( int i =s; i > k; i--) 
    a[i] = a[i-1];
    a[k]= tmp;
  
  
  for(int i =0; i < n; i++) 
    cout << a[i] << " ";
  
  return 0;
}

//Вам дана программа, в которой создается и вводится массив из N целых чисел. Дополните эту программу таким образом, чтобы она поменяла местами первый и второй, третий и четвертый и т.д., т.е. соседние элементы массива.
#include <iostream>
using namespace std;
int main() {
  int a[100], n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
 for (int i = 0; i < n; i+=2){
   int tmp = a[i];
  a[i] = a[i+1];
  a[i+1]= tmp;
}
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}

//Вам дана программа, в которой создается и вводится массив из N целых чисел. Дополните эту программу таким образом, чтобы она перевернула этот массив, т.е. первый элемент должен стать последним, второй предпоследним и так далее.
#include <iostream>
using namespace std;
int main() {
  int a[100], n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
for (int i = 0, j = n - 1; i < j; ++i, --j){
  int t = a[i]; 
  a[i] = a[j];
  a[j] = t;
}
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}

//Вам дана программа, в которой создается и вводится массив из N целых чисел. Дополните эту программу таким образом, из массива удалялся последний элемент.
#include <iostream>
using namespace std;
int main() {
  int a[100], n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
n--;
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}

//Дан массив из n элементов и индекс элемента в этом массиве k. Удалите из массива элемент с индексом k, сдвинув влево все элементы, стоящие правее элемента с индексом k.
#include <iostream> 
using namespace std;
int main() {
  int a[100], n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int k; 
  cin >> k;
  for(int i =k; i < n -1; i++) 
    a[i] = a[i+1];
    n--;
  
  for(int i = 0; i <n; i++) {
    cout << a[i] << " ";
  }
}

//Найдите первый максимальный и первый минимальный элементы в массиве и поменяйте их местами.
#include <iostream>
using namespace std;

int main() {
  int n, imin = 0, imax = 0;
  cin >> n;

  double *a = new double[n], min = 0.0, max = 0.0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i == 0 || a[i] < min) {
      min = a[i];
      imin = i;
    }
    if (i == 0 || a[i] >= max) {
      max = a[i];
      imax = i;
    }
  }

  swap(a[imin], a[imax]);

  for (int i = 0; i < n; i++) cout << a[i] << " ";
  cout << endl;

  delete[] a;
  return 0;
}

//Дан массив a из n элементов. Удалить из этого массива все повторяющиеся элементы, оставив первые появления повторяющихся элементов. Порядок элементов должен сохраниться в соответствии с тем, когда значение встретилось первый раз в массиве.
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int* a = new int[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  for (int i = 0; i < n - 1; i++)
    for (int j = i + 1; j < n; j++)
      if (a[i] == a[j]) {
        for (int k = j; k < n; k++) a[k] = a[k + 1];
        n--;
        j--;
      }

  for (int i = 0; i < n; i++) cout << a[i] << " ";
  cout << endl;

  delete[] a;
  system("pause");
  return 0;
}

//В одной компьютерной игре игрок выставляет в линию шарики разных цветов. Когда образуется непрерывная цепочка из трех и более шариков одного цвета, она удаляется из линии. Все шарики при этом сдвигаются друг к другу, и ситуация может повториться.
//Напишите программу, которая по данной ситуации определяет, сколько шариков будет сейчас уничтожено. Естественно, непрерывных цепочек из трех и более одноцветных шаров в начальный может быть не более одной.
#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
int N, x, y, t, L, h;
cin >> N;
int A[N], l, p;
for (int i = 0; i < N; i++)
{
cin >> A[i];
}
L = N;
h = 0;
while (h < 100)
{
l = 0;
p = 0;
for (int i = p; i < L; i++)
{
if (A[i] == A[i+1])
{
l++;
}
else
{
p = l;
l = 0;
if (p >= 2) 
{
x = abs(p - i);
y = p + 1;
break;
}
}
}
if (p < 2) break;
t = 0;
while (t < y)
{
for (int i = x; i < L - t; i++)
{
A[i] = A[i+1];
}
t++;
}
L = L - t;
h++;
}
cout << N - L << endl;
return 0;
}

//Напишите программу, которая циклически сдвигает элементы массива вправо (например, если элементы нумеруются, начиная с нуля, то 0-й элемент становится 1-м, 1-й становится 2-м, ..., последний становится 0-м, то есть массив {3, 5, 7, 9} превращается в массив {9, 3, 5, 7}).
#include <iostream>
using namespace std;
int main()
{
int n,i;
int arr[101];
cin>>n;
for(i=1;i<=n;i++){
cin>>arr[i];
}
cout<<arr[n]<<" ";
for(i=1;i<=n-1;i++){
cout<<arr[i]<<" ";
}
return 0;
}

//Дана последовательность из N (1≤N≤100000) целых чисел и число K (|K|≤100000). Требуется циклически сдвинуть всю последовательность на |K| элементов вправо, если K — положительное число, и влево, если отрицательное.
#include <iostream>
using namespace std;
int main() {
  int a[100000], i, n, k, L, R, m = 0;
  cin >> n;

  for (i = 0; i < n; i++) cin >> a[i];
  cin >> k;
  if (k > 0)
    k %= n;
  else
    k = n - ((-k) % n);

  for (i = n - k; i < n; i++) cout << a[i] << ' ';

  for (i = 0; i < n - k; i++) cout << a[i] << ' ';
}
