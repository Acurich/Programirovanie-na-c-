//Напишите функцию void sort_three_numbers(int &a, int &b, int &c), которой передаются по ссылке 3 различных числа, и она переупорядочивает их по возрастанию.
#include <iostream>

using namespace std;

void sort_three_numbers(int &a, int &b, int &c)

{
  if (b < a) swap(a, b);

  if (c < a) swap(a, c);

  if (b > c) swap(b, c);
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  sort_three_numbers(a, b, c);

  cout << a << " " << b << " " << c << endl;

  return 0;
}

//Напишите функцию, проверяющую есть ли элемент со значением value в массиве:
//Вариант С++:
//bool isIn(int arr[], int size, int value);
//Вариант Python
//isIn(l, val)
#include <iostream>

using namespace std;
bool isIn(int arr[], int size, int value) {
for(int i=0;i<size;++i)
if(arr[i]==value)
return true;
return false;
}
 
  
int main() {
    int n;
    int mas[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }
    int val;
    cin >> val;
    if (isIn(mas, n, val)){
        cout << "Yes";
    } else{
        cout << "No";
    }
}

//Напишите функцию int positive_sum(int a[], int size), которая будет находить сумму только положительных элементов массива.
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
    if(arr[i] >=0)
    sum += arr[i];
  }

  cout << sum;
}
