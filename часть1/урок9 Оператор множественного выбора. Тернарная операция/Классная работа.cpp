//Дано целое число d. Требуется вывести строку — название d-го дня недели.
#include <iostream>
using namespace std;
int main() {
  int x;
  cin >> x;
  switch(x) {
    case 1: {
      cout << "MONDAY";
      break;
    }
    case 2: {
      cout << "TUESDAY";
      break;
    }
    case 3: {
      cout << "WEDNESDAY";
      break;
    }
    case 4: {
      cout << "THURSDAY";
      break;
    }
    case 5: {
      cout << "FRIDAY";
      break;
    }
    case 6: {
      cout << "SATURDAY";
      break;
    }
     case 7: {
      cout << "SUNDAY";
      break;
    }
  }
      return 0;
  }

//Среди гуманоидов вселенной попадаются земляне с двумя глазами, одноглазые циклопы с планеты Циклопея и многоглазые (>2 глаз) представители расы глазунов. Определите расу гуманоида по числу глаз.
#include <iostream>
using namespace std;
int main() {
  int d;
  cin >> d;
  switch (d) {
    case 1:
      cout << "Cyclop";
      break;
    case 2:
      cout << "Earthman";
      break;
    default:
      cout << "Multieye";
  }
  return 0;
}

//ТЕСТ
№1 Ответ: int a; int a, b =5; int a, b=5; int a = 5, b;
№2 Ответ: 6 6 36
№3 Ответ: if(a%2 != 0)
№4 Ответ: 2
№5 Ответ: if (x >= -10 && x <= 10); if (x >= -10 and x <= 10)
 
//В новом учебном году в Хогвартсе на факультет Гриффиндор были распределены a учеников, на факультет Слизерин — b учеников, на Когтевран — c учеников, а на Пуффендуй — d учеников. Выведите на экран, сколько учеников были распределены на наименее популярный факультет.
#include <iostream>
using namespace std;
int main() {
  long long a, b, c, d, min;
  cin >> a >> b >> c >> d;
  min = a;
  if (b < min) { 
    min = b;
  }
  if (c < min) { 
    min = c;
  }
  if (d < min) { 
    min = d;
  }
  cout << min;
  return 0;
}

//Дано 5 целых чисел. Необходимо определить, сколькие из этих чисел являются максимальными.
#include <iostream>
using namespace std;
int main () {
  
  int x1, x2, x3, x4, x5;
  cin >> x1 >> x2 >> x3 >> x4 >> x5;
  int max = x1;
  int count = 0;
  if (max < x2) max = x2;
  if (max < x3) max = x3;
  if (max < x4) max = x4;
  if (max < x5) max = x5;
  if (max == x1) count++;
  if (max == x2) count++;
  if (max == x3) count++;
  if (max == x4) count++;
  if (max == x5) count++;
  cout << count;
  return 0;
}

//В кафе мороженое продают по три шарика и по пять шариков. Можно ли купить ровно k шариков мороженого?
#include <iostream>
using namespace std;
int main() {
  int x;
  cin >> x;
  if (x != 1 and x != 2 and x != 4 and x != 7)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}

//Даны два натуральных числа a и b. Требуется проверить, являются ли они оба однозначными, то есть содержат ровно одну цифру.
#include <iostream>
using namespace std;
int main () {
  int a, b;
  cin >> a;
  cin >> b;
  if ((a /10 < 1) && (b / 10 < 1)) 
    cout <<"True";
  else cout << "False";
  return 0;
}

//Яша плавал в бассейне размером N×M метров и устал. В этот момент он обнаружил, что находится на расстоянии x метров от одного из длинных бортиков (не обязательно от ближайшего) и y метров от одного из коротких бортиков. Какое минимальное расстояние должен проплыть Яша, чтобы выбраться из бассейна на бортик?
#include <iostream>
using namespace std;
int main() {
  int n, m, x, y, k, l, u, i;
  cin >> n >> m >> x >> y;
  if (n > m) {
    k = n;
    n = m;
    m = k;
  }
  if ((n - x < x) && (n - x < m - y) && (n - x < y)) {
    cout << n - x;
  } else if ((x < n - x) && (x < m - y) && (x < y)) {
    cout << x;
  } else if ((m - y < x) && (m - y < y) && (m - y < n - x)) {
    cout << m - y;
  } else {
    cout << y;
  }
  return 0;
}

//Дано целое число A и цифра N. Требуется определить, оканчивается ли число A на цифру N или нет.
#include <iostream>
using namespace std;
int main() {
  int a, n;
  cin >> a >> n;
  if ((a % 10 == n) || (a % 10 == -n))
      cout << "YES";
  else cout << "NO";
      return 0;
}

//Дано 3 цифры: сотни, десятки и единицы. Ваша задача собрать из этих цифр число и умножить его на 2.
#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  a = a * 100;
  b = b * 10;
  cout << (a + b + c) * 2;
  return 0;
}

//Необходимо по заданной стороне квадрата узнать его периметр и площадь.
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  cout << n * 4 << "  " << n * n;
  return 0;
}

//Сегодня всем учащимся Хогвартса объявили, что аудитории с четными номерами временно закрыты на ремонт, а занятия в них переносятся на другой день.
//«Вот это новости!» — подумал Гарри и заглянул в расписание. «И сколько же уроков у меня сегодня будет?». Помогите Гарри ответить на его вопрос, если вам даны пять чисел — номера аудиторий, в которых обычно проходят занятия у Гарри.
#include <iostream>
using namespace std;
int main() {
  int a, b, c, d, e, cnt = 0;
  cin >> a >> b >> c >> d >> e;
  if (a % 2 == 1) 
    cnt += 1;
  if (b % 2 == 1)
    cnt += 1;
  if (c % 2 == 1)
    cnt += 1;
  if (d % 2 == 1)
    cnt += 1;
  if (e % 2 == 1)
    cnt += 1;
  cout << cnt;
  return 0;
}
