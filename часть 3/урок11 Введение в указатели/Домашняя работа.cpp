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
#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int n;
  cin >> n;
  double a[100];
  double max = 0;
  double min = 0;
  for(int i =0; i < n; i++){
    cin >> a[i];
    if ( a[i] < min ){
            min = a[i];
        }
        if (a[i] > max){
            max = a[i];
        }
  }
  for (int i = 0; i<n; i++){
    if (a[i] == min){
      a[i] = max;
    }
  }
  for (int i = 0; i<n; i++){
    cout << a[i] << " ";
  }
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

   for (int i = 0; i < n; ++i){

       cin >> v[i];

   }

   for (int i = 0; i < n; ++i){

       bool flag = false;

       for (int j = 0; j < i; ++j){

           if (v[i] == v[j]){

               flag = true;

           }

       }

       for (int j = i + 1; j < n; ++j){

           if (v[i] == v[j]){

               flag = true;

           }

       }

       if (flag == false){
         count++;

       }

   }
  cout << count << " " ;
   return 0;

}

//Дан массив из N целых чисел. Необходимо посчитать, сколько раз в этом массиве встречается максимальный элемент.
#include <iostream>

using namespace std;


int main()
{
    int N;
    cin >> N;
    if (N == 0) 
    {
        cout << "0\n";
        return 0;
    }
    int max, maxcount = 1;
    cin >> max;
    for(int i = 1, m; i < N; ++i)
    {
        cin >> m;
        if (max < m)
        {
            max = m;
            maxcount = 1;
        }
        else if (max == m)
        {
            maxcount++;
        }
    }
    cout << maxcount << endl;
}
