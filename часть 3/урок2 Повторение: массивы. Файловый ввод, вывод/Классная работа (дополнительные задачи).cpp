//Дан массив a из n элементов. Перенесите последний элемент массива на место k-го элемента. При этом k-й, (k+1)-й, ... , предпоследний элементы сдвинуть вправо на 1 позицию.
#include <iostream>
using namespace std;
int main() {
  int n(0), k(0), temp(0);
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i) cin >> arr[i];
  cin >> k;
  temp = arr[n - 1];
  for (int i = k - 1; i < n; ++i) swap(arr[i], temp);
  for (int i = 0; i < n; ++i) cout << arr[i] << " ";
  cout << endl;
  return 0;
}

//Преподаватель по программированию некоего Центра для одаренных детей, узнав, что его ученики знают математику 3-го класса на 97.001 процентов, решил проверить их знания по курсу математики 1-го класса. Для этого он взял за основу популярнейшую у математиков 1-го класса задачу. Первоклассник должен был продолжить следующую последовательность рядов:
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    string s = to_string(n);
    vector<string> a;
    a.push_back(s);
    while(a.size() < x){
        s = a[a.size() - 1];
        string res = "";
        while(s.size() > 1){
            int i = 1;
            while(s[0] == s[i]){
                ++i;
            }
            res += to_string(i);
            res += s[0];
            s.erase(0, i);
        }
        if(s.size())
            res += "1", res += s[0];
        a.push_back(res);
    }
    cout << a[a.size() - 1];
    return 0;
}

//Дана последовательность целых чисел, оканчивающаяся нулём, НОЛЬ элементом последовательности не является.
//Выведи все элементы в обратном порядке в одну строку через пробел.
#include <iostream>
using namespace std;
void foo() {
  int number;
  cin >> number;
  if (number != 0) {
    foo();
    cout << number << " ";
  }
}

int main() {
  foo();
  return 0;
}
