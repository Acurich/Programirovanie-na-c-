//Необходимо вывести таблицу умножения на заданное число x.
#include <iostream>
using namespace std;
int main(){
  int x;
  cin >> x;
  for (int i = 1; i <= 10; ++i) {
    cout << i << " * " << x << " = " << i * x << endl;
  }
  return 0;
}

//Необходимо напечатать таблицу соответствия между весом в фунтах и весом в граммах для значений от 1 до 10 (1 фунт = 453 грамм).
#include <iostream>
using namespace std;
int main() {
  int x;
  cin >> x;
  for (int i = 1; i <= 10; ++i) {
    cout << i << " lb " << "=" << " " << i * 453 << " g" << endl;
  }

  return 0;
}

//Родители разрешили мальчику Косте выбрать себе игрушку. Костя идет вдоль полки, на которой стоят наборы солдатиков. При том в первом наборе X солдатиков, во втором X+1, в третьем X+2 и так далее. Каждый раз, видя более крупный набор, Костя восклицает: "I want this set with X soldiers!". Напишите программу, выводящую восклицания Кости на отдельных строках, если известно, что в последнем наборе на полке Z солдатиков.
#include <iostream>
using namespace std;

int main()
{
    int x, z;
    cin >> x >> z;
    for (int i=x; i<=z; i++) {
     cout << "I want this set with " << i << " soldiers!\n";
    }
    return 0;
}

//С клавиатуры вводится 10 чисел – стороны квадратов. Вывести на экран через пробел их площадь и периметр.
#include <iostream>
using namespace std;
int main() {
  for (int i = 0; i < 10; i++) {
    int x;
    cin >> x;
    int S = x * x;
    int P = 4 * x;
    cout << S << " " << P << endl;
  }
  system("pause");
  return 0;
}

//С клавиатуры вводится число N и далее N чисел - стороны квадратов. Необходимо для каждого из них вывести на экран площадь и периметр.
#include <iostream>
using namespace std;
int main() {
  int x;
  cin >> x;
  for (int i = 0; i < x; i++) {
    int n;
    cin >> n;
    int S = n * n;
    int P = 4 * n;
    cout << S << " " << P << endl;
  }
  system("pause");
  return 0;
}

//Вводится N пар чисел. Определить какое из чисел в паре больше.
#include <iostream>
using namespace std;
int main() {
  int x;
  cin >> x;
  for (int i = 0; i < x; i++) {
    int a, b;
    cin >> a >> b;
    if (a < b) {
      cout << "2" << endl;
    } else if (a > b) {
      cout << "1" << endl;
    }
  }
  return 0;
}

//С клавиатуры вводится натуральное число N, а дальше N пар целых чисел. Ваша задача для каждой пары чисел вывести их сумму.
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    ostringstream oss;
    while (n-- > 0)
    {
        int a, b;
        cin >> a >> b;
        oss << a + b << " ";
    }
    cout << oss.str() << endl;
    return 0;
}
