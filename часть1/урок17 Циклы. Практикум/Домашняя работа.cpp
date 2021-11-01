//Напишите программу, которая по введенному числу, выводит в столбик все цифры этого числа
#include <iostream>
using namespace std;
int main()
{
    int n, a, b=0;
    cin >> n;
    while (n > 0)
    {
        a = n % 10;
        b = b * 10 + a;
        n = n / 10;
    }
    while (b > 0)
    {
        cout <<  b % 10 << endl;
        b = b / 10;
    }
}

//Напишите программу которая выводит сумму двух последних цифр числа введенного с клавиатуры. 
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  if((n / 1000 + (n / 100) % 10)){
    n = ((n % 100) / 10 + n % 10);
  cout << n;
  }
  return 0;
}

//Напишите программу, которая  находит сумму всех чисел введенных с клавиатуры. Количество чисел вводится с клавиатуры. 
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a, s = 0;
  for (int i = 0; i < n; i++) {
    cin >> a;
    s += a;
  }
  cout  << s;
}

