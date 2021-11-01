//Дан треугольник со сторонами a, b и c. Определите, является ли он равносторонним.
#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a == b and b == c) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }
  return 0;
}
  
//Дано натуральное двузначное число n. Требуется определить, входят ли в него цифры 4 или 7.
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a = n /10;
  int b = n % 10;
  if (a == 4 or a == 7 or b == 4 or b == 7) {
     cout << "YES";
    }
  else {
    cout << "NO";
  }
  return 0;
}

//Напишите программу, которая определяет, попадает ли заданная точка в заштрихованную область. Граничные точки входят в область.
#include <iostream> 
using namespace std;
int main() {
  int x;
  cin >> x;
  if (-5<= x and x <= 1 or 7 <= x and x <= 13) {
     cout << "1";
  }
  else {
    cout << "0";
  }
  return 0;
}

//Дан номер года. Требуется определить количество дней в этом году, учитывая, что обычный год насчитывает 365 дней, а високосный –— 366 дней. Високосным считается год, делящийся на 4, но не делящийся на 100, либо делящиеся на 400 (например, годы 700, 1400 и 1800 не являются високосными, а 1600 и 2000 –— являются).
#include <iostream> 
using namespace std;
int main() {
  int y;
  cin >> y;
 if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
    cout << "366";
  }
  else {
    cout << "365";
  }
  return 0;
}
