//Мальчик Костя учится считать от 1 до 109. Чтобы запомнить число, он повторяет его K раз. Составьте программу, которая выводит в строку K одинаковых чисел N.
#include <iostream>
using namespace std;
int main() {
  int n, k;
  cin >> n >> k;
  while (k--){
    cout << n << " " ;
  }
  
}

//Дано натуральное число. Необходимо найти сумму цифр данного числа.
#include <iostream>
using namespace std;  
int main() {   
  int n;   
  int sum=0;  
  
  cin >> n;     
  while (n!=0)   
  {         
    sum += n%10; 
    n /= 10;     }   
  cout  << sum << endl; 
  return 0; }

//Одноклеточная амёба каждые 3 часа делится на 2 такие же амёбы. Необходимо определить, сколько будет амёб через n часов, если первоначально была только одна амёба.
#include <iostream>
using namespace std;
int main() {

int n, amoebas = 1;

cin >> n;

while (n >= 3) {

amoebas *= 2;

n -= 3;

}

cout << amoebas;

return 0;

}

//Вывести на экран числа от A до B, сохраняя заданный порядок.
#include <iostream>
using namespace std;

int main() {
long long a, b;
cin >> a >> b;
long long r = 1;
if (a > b) r = -1;
long long x = a;
while (x != b) {
cout << x << endl;
x += r;
}
cout << x << endl;
return 0;
}

//Дано N чисел. Необходимо найти сумму тех из них, которые больше A и делятся на B.
#include <iostream>

using namespace std;

int main() {
  int x, s = 0, n, a, b;

  cin >> n >> a >> b;

  for (int i = 0; i < n; i++) {
    cin >> x;

    if (x > a && x % b == 0) {
      s += x;
    }
  }

  cout << s;

  return 0;
}

//Дано натуральное число n. Необходимо найти максимальную цифру этого числа.
#include <iostream>
using namespace std;
int max_digit(int n) {
  if (n < 0) n *= -1;
  int result = 0;
  for (; n != 0; n /= 10) {
    if (n % 10 > result) {
      result = n % 10;
    }
  }
  return result;
}

int main() {
  int n;
  cin >> n;
  cout << max_digit(n) << std::endl;
}
