//Какое число окажется в середине, если расставить элементы массива по возрастанию?
#include <iostream>
using namespace std;
int main() {
  int arr[1000], n, tmp;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int j = 0; j < n; j++) {
    for (int i = 0; i < n - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        tmp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = tmp;
      }
    }
  }
  cout << arr[n / 2];
}

//Даны два одномерных массива из n и m элементов соответственно. Найдите общие элементы этих массивов.
#include <cmath>
#include <iostream>

using namespace std;
int main() {
  int a[100], e, d;
  cin >> e;
  for (int j = 0; j < e; j++) cin >> a[j];

  int max;
  for (int i = e - 1; i > 0; i--) {
    max = 0;
    for (int j = 0; j <= i; j++)
      if (a[j] > a[max]) max = j;
    swap(a[max], a[i]);
  }

  int c[100];
  cin >> d;
  for (int j = 0; j < d; j++) cin >> c[j];

  int  cnt2 = 0;
  for (int i = 0; i < e; i++) {
    bool flag = false;
    for (int j = 0; j < d; j++) {
      if (a[i] == c[j]) cout << a[i] <<  " ";
      flag = true;
    }
  }
return 0;
}

//Даны три одномерных массива размеров из n, m и k элементов соответственно. Найдите общие элементы этих массивов.
#include <cmath>
#include <iostream>

using namespace std;
int main() {
  int a[100], e, d, x;
  cin >> e;
  for (int j = 0; j < e; j++) cin >> a[j];

  int max;
  for (int i = e - 1; i > 0; i--) {
    max = 0;
    for (int j = 0; j <= i; j++)
      if (a[j] > a[max]) max = j;
    swap(a[max], a[i]);
  }
  int jp[100];
  cin >> x;
  for (int e = 0; e < x; e++) cin >> jp[e];

  int c[100];
  cin >> d;
  for (int j = 0; j < d; j++) cin >> c[j];

  int cnt2 = 0;
  for (int i = 0; i < e; i++) {
    bool flag = false;
    for (int j = 0; j < d; j++) {
      for (int e = 0; e < x; e++) {
        if (a[i] == c[j] and c[j] == jp[e]) cout << a[i] << " ";
        flag = true;
      }
    }
  }
  return 0;
}
