//Напишите программу которая рисует заданное количество звездочек в линию.
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "*";
  }
}

//Напишите программу которая выводит линию из тире длинной N, и вместо каждого M-то тире выводится вертикальная черта.
#include <iostream>
using namespace std;
int main() {
  int n, m;
  cin >> n;
  cin >> m;
  for (int i = 1; i <= n; i++) {
    if (i % m == 0)
      cout << "|";
    else
      cout << "-";
  }
}

//Напишите программу которая выведет в начале строчку из звездочки и пробела, а затем строчку из пробела и звездочки. 
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "* ";
  }
  cout << endl;
  for (int i = 0; i < n; i++) {
    cout << " *";
  }
}

//Напишите программу которая выводит число в рамке. Число, количество цифр в числе, и общая длинна рамки вводится с клавиатуры.
//Гарантируется, что количество цифр и длинна рамки будет введена такая, что число будет ровно посередине.
#include <iostream>
using namespace std;
int main() {
  int chislo, size, len;
  cin >> chislo >> size >> len;
  for (int i = 0; i < len; i++) cout << "*";
  cout << endl;
  int kol_vo = (len - size) / 2;
  for(int j = 0; j < kol_vo; j ++) cout << "*";
  cout << chislo; 
   for(int j = 0; j < kol_vo; j ++) cout << "*";
  cout << endl;
  for (int z = 0; z < len; z++) cout << "*";
  cout << endl;
}

//Напишите программу, которая по заданной стороне рисует квадрат из звездочек.
#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			cout << "*";
		}
		cout << endl;
	}
}
