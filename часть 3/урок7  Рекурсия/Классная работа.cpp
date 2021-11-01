//Реализуйте рекурсивную функцию вычисления факториала натурального числа int factorial(int a) для С++ и factorial(a) для Python.
#include <iostream>
using namespace std;
int factorial(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return n*factorial(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}

//Напишите рекурсивную функцию подсчёта количества цифр в натуральном числе.
#include <iostream>
using namespace std;
void rev_num(int num) {
  static int sum = 0, counter = 0;
  counter++;
  if (num / 10)
    rev_num(num / 10);
  else
    cout << counter;
}

int main() {
  int n;
  cin >> n;
  rev_num(n);
}

//Напишите рекурсивную функцию вычисления суммы цифр натурального числа.
#include <iostream>
using namespace std;
static int summa = 0;

int rekurs(int n) {
  if (n == 0)
    return summa;
  else {
    summa += n % 10;
    return rekurs(n /= 10);
  }
}

int main() {
  int number;
  cin >> number;
cout  << rekurs(number) <<endl;
}

//Ваша задача — написать функцию вычисления цифрового корня int digital_root(int n). Цифровой корень числа n получается следующим образом: сложим все цифры числа n, потом сложим все цифры полученной суммы, и т.д, пока не получится одна цифра — она и будет цифровым корнем.
#include <iostream>
using namespace std;
 unsigned int DigitSum( unsigned int n )
 {
   unsigned int sum = 0;
       while ( n )
       {
         sum += n % 10;
         n   /= 10;
       }
   return sum;
 }
 
 unsigned int digital_root( const unsigned int &n )
 {
   unsigned int root = DigitSum( n );
       while ( root > 9 )
         root = DigitSum( root );
   return root ;
 }
int main(){
    int n;
    cin >> n;
    cout << digital_root(n);
    return 0;
}

//Напишите рекурсивную функцию, определяющую, является ли заданное натуральное число простым. Простым называется натуральное число, большее 1, не имеющее других натуральных делителей, кроме единицы и самого себя.
#include <iomanip>
#include <iostream>
using namespace std;
bool isprime(unsigned n, unsigned m = 2) {
  if (m > (n >> 1)) return true;
  return n % m ? isprime(n, ++m) : false;
}
int main() {
  unsigned n;
  cin >> n;
  puts(isprime(n) ? "YES" : "NO");
}

//Напишите рекурсивную функцию перевода целого неотрицательного числа из десятичной системы счисления в двоичную.
#include <iostream>
using namespace std;

void DecToBin(int n) {
  if (n >= 2) {
    DecToBin(n / 2);
  }
  cout << n % 2;

  return;
}

int main() {
  int n;
  cin >> n;

  DecToBin(n);
  return 0;
}
