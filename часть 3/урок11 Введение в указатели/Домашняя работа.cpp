//Дан массив из N целых чисел и значение X. Необходимо посчитать, сколько раз это значение встречается в массиве.
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
size_t n;
cin >> n;
auto box = new int[n];
for (auto i = 0U; i < n; ++i) cin >> box[i];
int x;
cin >> x;
auto count = 0U;
for (auto i = 0U; i < n; ++i) if (box[i] == x) ++count;
cout << count << '\n';
delete[] box;
}

//Отсортируйте заданный массив.
#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int a;
    cin >> a;
    int* arr = new int[a];
    for (int i = 0; i < a; i++) { cin >> arr[i]; }
    sort(arr, arr + a);
    for (int i = 0; i < a; i++) { cout << arr[i] << ' '; }
}

//Дан массив целых чисел. Замените все минимальные значения в этом массиве на максимальные в нем же.
