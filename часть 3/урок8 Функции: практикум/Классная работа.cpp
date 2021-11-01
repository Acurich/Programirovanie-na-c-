//Напишите функцию int getDigitCount(long long), которая по заданному длинному числу определит кол-во цифр в нем.
#include <iostream>
using namespace std;
int getDigitCount(long long acur){
      int kr=0;
    if(acur<0)
    {
        acur=acur*(-1);
    }
    if(acur==0)
    {
        return 1;
    }
    while(acur>0)
    {
        kr=kr+1;
        acur=acur/10;
    }
    return (int(kr));
}
int main() {
    long long num;
    cin >> num;
    cout << getDigitCount(num);
    return 0;
}

//На самом деле номера банковских карт проверяются на корректность немного сложнее, чем просто по количеству цифр. Существует специальный алгоритм Луна, который выявляет ошибку, даже если при вводе номер ошиблись хотя бы в одной цифре. Его-то нам и предстоит реализовать!
//Создайте функцию bool isLuhnCorrect(long long), проверяющую, является ли 16-значное число корректным с точки зрения этого алгоритма.
#include <iostream>
using namespace std;
bool isLuhnCorrect(long long n) {

 int mas_digit[16];

 int pos = 0;

 while (n > 0) {

  int digit = n % 10;

  mas_digit[pos] = digit;

  pos++;

  n /= 10;

 }

 for (int i = 0; i < 16; i++) {

  if (i % 2 != 0) {

   int digit = mas_digit[i] * 2;

   if (digit > 9) {

    mas_digit[i] = digit / 10 + digit % 10;

   }

   else {

    mas_digit[i] = digit;

   }

  }

 }

 int sum = 0;

 for (int i = 0; i < 16; i++) {

  sum += mas_digit[i];

 }

 return ((sum % 10) == 0) ? true : false;

} 
int main() {
    long long n;
    cin >>  n;
    if (isLuhnCorrect(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

//Используя две предыдущие функции, напишите функцию bool isNumberCorrect(long long), проверяющую, является ли введенное значение правильным номером банковской карты, т.е. проверяющую, что в числе 16 цифр и что это число подходит под алгоритм Луна.
#include <iostream>
using namespace std;
int getDigitCount(long long num) {
 if (num != 0) {
  return getDigitCount(num / 10) + 1;
 }
 else return 0;
}
bool isLuhnCorrect(long long num) {
 int mas_digit[16];
 int pos = 0;
 while (num > 0) {
  int digit = num % 10;
  mas_digit[pos] = digit;
  pos++;
  num /= 10;
 }
 for (int i = 0; i < 16; i++) {
  if (i % 2 != 0) {
   int digit = mas_digit[i] * 2;
   if (digit > 9) {
    mas_digit[i] = digit / 10 + digit % 10;
   }
   else {
    mas_digit[i] = digit;
   }
  }
 }
 int sum = 0;
 for (int i = 0; i < 16; i++) {
  sum += mas_digit[i];
 }
 return ((sum % 10) == 0) ? true : false;
}
bool isNumberCorrect(long long num) {
 if ((getDigitCount(num) == 16) && (isLuhnCorrect(num)))
  return true;
 else return false;
}
int main() {
    long long n;
    cin >>  n;
    if (isNumberCorrect(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

//Напишите функцию int findAccount(long long number, long long arr[], int size), находящую индекс первого вхождения значения number в массив. Если такого элемента в массиве нет, то функция должна вернуть значение -1.
#include <iostream>
using namespace std;
int findAccount(long long number, long long arr[], int size) {
  for (int i = 0; i < size; ++i)
    if (number == arr[i]) return i;

  return -1;
}
int main() {
    long long arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    long long x;
    cin >> x;
    cout << findAccount(x, arr, n);
    return 0;
}
