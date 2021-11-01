//Напишите программу, которая считывает массив длинной N с клавиатуры. Затем, заменят каждый четный элемент на 0. Затем, выводит получившийся массив.  
#include <iostream>
using namespace std;
int main() {
  int a[100], n, k;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0)
      cout << 0 << " ";
    else
      cout << a[i] << " ";
  }
  return 0;
}

//Напишите программу, которая считывает массив длинной N с клавиатуры и выводит результат деления количества положительных чисел на количество отрицательных чисел. 
//Если в массиве нет отрицательных чисел, программа должна вывести 0. 
#include <iostream>
using namespace std;
int main() {
  int a[100], n, k = 0, s = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    if(a[i] > 0) k++;
    if(a[i] < 0) s++;
  }
  if (s == 0) cout << "0";
  else if (s != 0) cout << k / s;
}

//Напишите программу, которая считывает массив длинной N с клавиатуры и выводит сумму индексов положительных элементов массива. 
#include <iostream>
using namespace std;
 
int main() {
	int n, k=0; 
	double S=0;
	cin >> n;
	double C[n];
	for(int i=0; i<n; i++)
	{
		cin >> C[i];
		if (C[i]<0)
			k++;
		else S+=i;
	}
	cout << S;
	return 0;
}
