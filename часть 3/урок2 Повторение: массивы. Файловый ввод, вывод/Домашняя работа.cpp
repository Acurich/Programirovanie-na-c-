//Поменяйте местами k1-ый и k2-ой элементы данного массива размерностью N (N < 50). И выведите все элементы по порядку.
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[100];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int temp, k1, k2;
  cin >> k1 >> k2;
  temp = arr[k2-1];

  arr[k2-1] = arr[k1-1];

  arr[k1-1] = temp;

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}

//Дан массив a из n целых чисел. Требуется поменять местами первый и второй, третий и четвертый и т.д., т.е. соседние элементы.
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    fstream input, outuput;
    input.open("input.txt", std::ios::in);
    outuput.open("output.txt",std::ios::out);
  int a[100], i, x, n;
  cin >> n;
  for (i = 0; i < n; i++) cin >> a[i];
  for (i = 0; i < n; i = i + 2) {
    x = a[i];
    a[i] = a[i + 1];
    a[i + 1] = x;
  }
  for (i = 0; i < n; i++) cout << a[i] << " ";
  return 0;
}

//Дан массив из n элементов. Необходимо определить, есть ли в данном массиве элемент, равный заданному числу k? Если есть, то вывести номер первого его вхождения.
#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < -100 || arr[i] > 100)
        {
            i--;
        }
    }
    int k;
    cin >> k;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != k)
        {
            index = -1;
        }
        if (arr[i] == k)
        {
            index = i;
            break;
        }
    }
    cout << index+1 << endl;
    delete arr;
    return 0;
}

//Вам вводится число N — размер двумерного массива. Необходимо вывести массив, где i-я строчка состоит из чисел i.
#include <iostream>
using namespace std;
int main() {
  int i, j, n;
  cin >> n;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) cout << i + 1 << " ";
    cout << endl;
  }
}
