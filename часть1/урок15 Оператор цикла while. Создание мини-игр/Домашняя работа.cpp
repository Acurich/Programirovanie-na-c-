//Дана непустая последовательность целых чисел, оканчивающаяся отрицательным числом. Необходимо определить, равны ли между собой все элементы последовательности. Отрицательное число членом последовательности не является.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
bool eq = true;
int x, y;
cin >> x;
while (true) {
cin >> y;
if (y < 0) break;
if (y != x) {
eq = false;
break;
}
x = y;
}
cout << (eq ? "YES" : "NO") << endl;
return 0;
}
