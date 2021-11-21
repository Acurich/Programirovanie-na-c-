//Напишите функцию void dec(int*), которая уменьшает на 1 значение, переданное по указателю.
#include <iostream>
using namespace std;
void dec(int* a) {
 *a -= 1;
}
int main() {
  int num;
  cin >> num;
  dec(&num);
  cout << num;
  return 0;
}

//В этой задаче вы должны написать функцию void numswap(int *a, int *b)или void numswap(int &a, int &b) которая поменяет два числа, которые лежат по указателям a и b, местами.
#include <iostream>
using namespace std;
void numswap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int a, b;
    cin >> a >> b;
    numswap(&a, &b);
    cout << a << ' ' << b << '\n';
}

//Напишите функцию void push_back(int[], int*, int), которая будет добавлять в конец массива новое значение, указанное последним параметром функции. Размер массива также должен измениться.
#include <iostream>
using namespace std;
  void push_back(int arr[], int *n, int d){
 arr[*n] = d;
 *n += 1;
}
int main() {
  int n, arr[101], x;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cin >> x;
  push_back(arr, &n, x);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}

//Напишите функцю void reduce_fraction(int *n, int *m) или void reduce_fraction(int &n, int &m), которая сократит дробь , то есть изменит числа, которые лежат по указателям n и m таким образом, что значение дроби останется прежним, но она будет несократимой.
#include <iostream>
using namespace std;

int reduce_fraction(int n, int m)
{
if (m == 0) {
return n;
}
return reduce_fraction(m, n % m);
}

int main()
{
int num, dem;
cin >> num;
cin >> dem;
int nod = reduce_fraction(num, dem);
cout << (num / nod) << " " << (dem / nod) <<
endl;
return 0;
}


//Напишите функцию void insert(int[], int*, int position, int number), которая будет добавлять в массив на позицию position новое значение number. Размер массива таже должен измениться.
#include <iostream>
using namespace std;
void insert(int arr[], int* n, int position, int number){
for (int i = (*n); i > position -1; --i){
  arr[i+1] = arr[i];
}
  arr[position] = number;
  (*n)++;
}
int main() {
  int n, arr[101], position, number;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cin >> position >> number;
  insert(arr, &n, position, number);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}
