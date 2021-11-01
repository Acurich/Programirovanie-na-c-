//Дано 3 целых неотрицательных числа: N, x, y. Выведите все числа от 1 до N включительно, которые при делении на x дают остаток, равный y.
#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  for (int i = 1; i <= a; i++) {
    if (i % b == c) cout << i << " ";
  }
  system("pause");
  return 0;
}

//Дано четырехзначное число N. Необходимо удалить из его записи цифры 0 и 5, оставив прежним порядок цифр. Например, число 1509 после преобразования должно превратиться в 19.
#include <iostream>
using namespace std;
int main() {
unsigned min = 1000;
const unsigned max = 9999;
unsigned num;
do cin >> num; while (num < min || num > max);
unsigned box = 0;
for (size_t i = 0; i < 4; ++i) {
const auto tmp = num / min % 10;
if (tmp && tmp != 5) {
box *= 10;
box += tmp;
}
min /= 10;
}
num = box;
if (num) cout << num << endl;
system("pause");
}
