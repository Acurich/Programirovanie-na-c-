//Дана последовательность из N целых чисел и пара значений. Необходимо заменить в последовательности чисел все элементы, равные первому числу, на второе.
#include <iostream>

int main()

{
  int n, i, s, k;

  std::cin >> n;

  int *arr = new int[n];

  for (i = 0; i < n; i++) std::cin >> arr[i];

  std::cin >> s >> k;

  for (i = 0; i < n; i++)

  {
    if (arr[i] == s) arr[i] = k;

    std::cout << arr[i] << " ";
  }
}

//Дан массив a из n элементов. Перенесите s-й элемент массива на место k-го элемента (s<k). При этом (s+1)-й, (s+2)-й, ... , k-й элементы сдвинуть влево на 1 позицию.
#include <iostream>

using namespace std;

int main() {
  int n, s, k;
  cin >> n;

  double *a = new double[n], temp;

  for (int i = 0; i < n; i++) cin >> a[i];
  cin >> s >> k;

  temp = a[s - 1];
  for (int i = s - 1; i < k - 1; i++) a[i] = a[i + 1];
  a[k - 1] = temp;

  for (int i = 0; i < n; i++) cout << a[i] << " ";
  cout << endl;
  delete[] a;
  system("pause");
  return 0;
}

//Дан массив из N целых чисел. Необходимо посчитать, сколько элементов в этом массиве являются уникальными, т.е. встречаются только один раз.
#include <iostream>

#include <vector>

using namespace std;

int main()

{
  int n, count = 0;

  cin >> n;

  vector<int> v(n);

  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }

  for (int i = 0; i < n; ++i) {
    bool flag = false;

    for (int j = 0; j < i; ++j) {
      if (v[i] == v[j]) {
        flag = true;
      }
    }

    for (int j = i + 1; j < n; ++j) {
      if (v[i] == v[j]) {
        flag = true;
      }
    }

    if (flag == false) {
      count++;
    }
  }

  cout << count << " ";

  return 0;
}
