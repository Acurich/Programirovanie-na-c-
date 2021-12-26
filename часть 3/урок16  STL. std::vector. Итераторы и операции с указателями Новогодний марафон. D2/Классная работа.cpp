//Дан массив a, состоящий из n целых чисел. Требуется вставить в него число x на позицию k, после чего вывести его.
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned n;
    cin >> n;
    vector<int> v(n);
    auto it = v.begin();
    for(; it < v.end(); it++){
        cin >> *it;
    }
    int k, x;
    cin >> k >> x;
    v.insert(v.begin()+k, x);
    for(it = v.begin(); it < v.end(); it++){
        cout << *it << " ";
    }
    return 0;
}

//Дан массив a из n элементов. Удалить из этого массива все повторяющиеся элементы, оставив первые появления повторяющихся элементов. Порядок элементов должен сохраниться в соответствии с тем, когда значение встретилось первый раз в массиве.
#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >>n;
 
    int*a = new int[n];
    for (int i = 0; i < n; i++)
      cin >>a[i];      
      
    for (int i = 0; i < n - 1; i++) 
    for (int j = i + 1; j < n; j++) 
    if (a[i] == a[j]) 
      { 
      for (int k = j; k < n; k++) 
      a[k] = a[k + 1]; 
      n--;
      j--;
    }   
 
    for (int i = 0; i < n; i++)
      cout <<a[i]<<" ";
      cout <<endl;
 
    delete[]a;
return 0;
}

//Дан массив целых чисел. Замените все максимальное значения в этом массиве на минимальное в нем же.
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
    if (a[i] == max){
      a[i] = min;
    }
  }
  for (int i = 0; i<n; i++){
    cout << a[i] << " ";
  }
}

//Дана последовательность чисел, оканчивающаяся нулем. Найти два минимальных элемента заданной последовательности.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int min1, min2, value = 1;
  vector<int> values(0);
 
  while (value) {
    cin >> value;
    values.push_back(value);    
  }
  
  values.pop_back();
 
  for (const auto& i : values)
    cout << i << " ";
 
  min1 = *min_element(values.begin(), values.end());
  values.erase(remove(values.begin(), values.end(), min1), values.end());
  min2 = *min_element(values.begin(), values.end());
 
  cout << endl << min1 << " " << min2 << endl;   
 
  return 0;
}

//Дан массив из N целых чисел. Необходимо посчитать, сколько раз в этом массиве встречается минимальный элемент.
#include <iostream>

using namespace std;

int main() {
  int n, min = NULL, minCount = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (NULL == min) {
      min = x;
      minCount++;
    } else {
      if (x == min) {
        minCount++;
      } else if (x < min) {
        min = x;
        minCount = 1;
      }
    }
  }
  cout  << minCount << endl;
  return 0;
}

//Отсортируйте заданный массив.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void in(int& value) {
	cin >> value;
}

void out(int& value) {
	cout << value << " ";
}
int main() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for_each(vec.begin(), vec.end(), in);
	sort(vec.begin(), vec.end());
	for_each(vec.begin(), vec.end(), out);
	return 0;
}

//Дан массив из N элементов (N < 1000), причем N - четное. Вставить в середину массива сумму всех элементов, все элементы справа сдвинуть в сторону.
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i != n; i++) {
    cin >> v[i];
  }
  v.insert(v.begin() + v.size() / 2,
           accumulate(v.cbegin(), v.cend(), 0,
                      [](const int &x, const int &y) { return x + y; }));
  copy(v.cbegin(), v.cend(), ostream_iterator<int>(cout, " "));
}

//Имеется массив из N элементов (N < 101). Измените исходный массив, удалив каждый K-ый элемент.
#include <iostream>
using namespace std;

int main() {
  int n, K, m = 0;
  cin >> n;

  int* a = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> K;

  for (int i = 0; i < n; i++)
    if ((i + 1) % K != 0) a[m++] = a[i];

  n = m;

  for (int i = 0; i < n; i++) cout << a[i] << " ";

  delete[] a;
  system("pause");
  return 0;
}
