//Тест
№1 Ответ:8;3;5
№2 Ответ:Из-за того, что переменная i объявлена как unsigned int, условие i >= 0 будет всегда истинным.;for (unsigned int i = 0; i <= 9; i++) cout << i << " ";
№3 Ответ:14,50
№4 Ответ:9
№5 Ответ:5
  
//Дан массив из N элементов. Вывести на экран предпоследний элемент.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
  int a;
  cin >> a;
  float  arr[a], n;
  for (int i = 0; i < a; i++) {
    cin >> n;
    arr[i] = n;
  }
  cout << fixed << setprecision(3) << arr[a-2];
  return 0;
}

//Дан массив из 10 элементов. Вывести на экран девятый элемент. Точность чисел - 2 знака после запятой.
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
int main() {
  float arr[10];
  for (int i = 0; i < 10; i++) {
    cin >> arr[i];
  }
  cout << fixed << setprecision(2) << arr[8];
  return 0;
}

//Дан массив из 10 элементов. Вывести на экран через пробел четвертый, седьмой и второй элементы. Точность чисел - 2 знака после запятой.
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
int main() {
  float arr[10];
  for (int i = 0; i < 10; i++) {
    cin >> arr[i];
  }
  cout << fixed << setprecision(2) << arr[3] <<" " << arr[6] << " " << arr[1];
  return 0;
}
