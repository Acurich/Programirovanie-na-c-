//Определите значение z=sign(x)+sign(y), где sign(a) — функция, возвращающая знак числа a, то есть
//sign(a)=⎛⎝⎜−1,0,1,если a<0;если a=0;если a>0.⎞⎠⎟
//Задачу требуется решить, определив и использовав функцию sign.
#include <iostream>
 
using namespace std;
 
int sign(int a) {
  if (a > 0) {
    return 1;
  } else if (a == 0) {
    return 0;
  } else {
    return -1;
  }
}
 
int main() {
  int x;
  int y;
  cin >> x >> y;
 
  int z = sign(x) + sign(y);
 
  cout << z;
}

//Стандартная функция swap() принимает два числа и меняет значения этих переменных местами.
//Обратите внимание, функция ничего не возвращает!
//Реализуйте свою функцию swap(), но чтобы имена не пересекались, давайте ее назовем mySwap().
#include <iostream>
using namespace std;
void swap(int& a, int& b) {
  int c = a;
  a = b;
  b = c;
}
int main() {
  int a, b;
  cin >> a >> b;
  swap(a, b);
  cout << a << " " << b;
  return 0;
}

//Напишите функцию void reduce_fraction(int &N, int &M), которая сократит дробь &N / &M , то есть изменит числа, которые лежат по ссылкам N и M таким образом, что значение дроби останется прежним, но она будет несократимой.
//После написания функции требуется решить задачу, в которой вводятся натуральные числа A и B, после чего дробь A / B сокращается, и выводится уже в сокращенном виде.
#include <iostream>
using namespace std;
void reduce_fraction(int& a, int& b) {
  for (int i = a; i > 0; i--) {
    if ((a % i == 0) && (b % i == 0)) {
      a /= i;
      b /= i;
    }
  }
}
int main(){
    int a, b;
    cin >> a >> b;
    reduce_fraction(a, b);
    cout << a << " " << b;
    return 0;
}

//Напишите функцию int sum(int a[], int size), которая будет находить сумму всех элементов массива.
#include <iostream>

using namespace std;

int main()

{
  int arr[100];

  long long sum = 0;

  int length;

  cin >> length;

  for (int i = 0; i < length; i++)

  {
    cin >> arr[i];
  }

  for (int i = 0; i < length; i++)

  {
    sum += arr[i];
  }

  cout << sum;
}

//В этой задаче от вас потребуется написать функцию void reverse_array(int A[], int size) { ... }, которая будет переворачивать массив A, в котором находятся size элементов задом наперед.
//С помощью этой функции считайте массив с клавиатуры и выведите его на экран уже перевернутым.
//Разумеется, также рекомендуется
//создать функцию void read_array(int A[], int& size), которая считает массив A;
//создать функцию void print_array(int A[], int size), которая выведет массив на экран.
#include <iostream>
using namespace std;
 
void reverse_array(int *a, int size) {
 
    int t=0;
    for (int i = 0; i < size / 2; i++){
    t=a[i];
    a[i]=a[size-i-1];
    a[size-i-1]=t;
        }
}
 
void read_array(int *a, int size) {
    for (int i = 0; i < size; i++) {
        cin>> a[i];
    }
    }
    
void print_array(int *a, int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << ' ';
    }
}
 
int main()
{
    int a[10000] = {};
    int n; cin>>n;
    read_array(a, n);
    reverse_array(a, n);
    print_array(a, n);
}

//Дана последовательность натуральных чисел 1, 2, 3, ..., N. Необходимо сначала расположить в обратном порядке часть этой последовательности от элемента с номером A до элемента с номером B, а затем от C до D.
#include <iostream>
using namespace std;
main() {
  int x[1001], i, N, A, B, C, D, y;
  cin >> N >> A >> B >> C >> D;

  for (i = 1; i <= N; i++) x[i] = i;

  for (i = A; i <= (A + B) / 2; i++) {
    y = x[i];
    x[i] = x[B + A - i];
    x[B + A - i] = y;
  }

  for (i = C; i <= (C + D) / 2; i++) {
    y = x[i];
    x[i] = x[D + C - i];
    x[D + C - i] = y;
  }
  for (i = 1; i <= N; i++) cout << x[i] << ' ';
}
