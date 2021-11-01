//Тест
№1 Ответ:7
№2 Ответ:32
№3 Ответ:457
№4 Ответ:вправо
№5 Ответ:1

//Дан массив a из n элементов. Перенесите s-й элемент массива на место k-го элемента (s<k). При этом s-й, (s+1)-й, ... , k-й элементы сдвинуть влево на 1 позицию.
#include <iostream>
using namespace std;
int main() {
  int a[100], n, k, s;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> k >> s;
  int tmp = a[k];
  for (int i = k; i < s; i++) a[i] = a[i + 1];
  a[s] = tmp;
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}

//Дан массив a из n элементов. Перенесите последний элемент массива на место k-го элемента. При этом k-й, (k+1)-й, ... , предпоследний элементы сдвинуть вправо на 1 позицию.
#include <iostream>
using namespace std;
int main() {
  int a[100], n, k;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> k;
  int tmp = a[n-1];
  for (int i = n; i > k; i--){
    a[i] = a[i-1];
  }
  a[k] = tmp;
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}

//Дан массив a из n элементов. Перенесите первый элемент в конец массива, сдвинув все последующие на шаг назад.
#include <iostream>
using namespace std;
int main() {
  int a[100], n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int tmp = a[0];
  for (int i = 0; i <n; i++){
    a[i] = a[i+1];
  }
  a[n-1] = tmp;
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}

//Дан массив a из n элементов. Требуется найти максимум массива и вставить его в конец, порядок других элементов сохранить. Если максимальных элементов несколько, переместить первый найденный максимальный элемент массива.
#include <iostream>
using namespace std;
int main() {
	int a[100], n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int max = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > a[max]) max = i;
	int saver = a[max];
	for (int i = max; i < n; i++)
		a[i] = a[i + 1];
	a[n - 1] = saver;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}

//Дан массив a из n элементов. Требуется найти максимум массива и удалить его из массива, порядок других элементов сохранить. Если максимальных элементов несколько, удалить первый найденный максимальный элемент массива.
#include <iostream>
using namespace std;
int main() {
  int a[100], n, g;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  int m = 0, tmp;
  for(int i = 0; i < n; i++)
    if (a[i] > a[m]) m = i;
  for(int i = m; i <=n; i++)
    a[i] = a[i+1];
  n--;
  for(int i = 0; i < n; i++){
    cout << a[i] << " ";
  }
}
