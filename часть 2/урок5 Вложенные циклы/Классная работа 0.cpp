//Что творится-то! С неба сегодня упал целый прямоугольник звезд! Да честное слово, всё так и было.
//Помогите Артёму сделать фото для местной газеты.
//Ну как фото... Нужно написать программу, которая выведет прямоугольник n×m.
#include <iostream>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) cout << "*";
    cout << "\n";
  }
}

//Вам дан алгоритм, выводящий "лесенку" текста.
//Под каждым комментарием напишите соответствующий код на C++.
#include <iostream>
using namespace std;
int main() {
int N, K;
cin >> N >> K;
for (int i = 0; i < N; i++) {
  cout << "Iteration of the outer loop\n";
  for (int j = 0; j < K; j++) cout << "    Iteration of the inner loop\n";
}
}

//Вам дан алгоритм, выводящий "лесенку" текста.
//Под каждым комментарием напишите соответствующий код на C++.
#include <iostream>
using namespace std;
int main() {
  int N, K, M;
  cin >> N >> K >> M;
  for (int i = 0; i < N; i++) {
    cout << "Iteration of the outer loop\n";
    for (int j = 0; j < K; j++) {
      cout << "    Iteration of the inner loop\n";
      for (int q = 0; q < M; q++)
        cout << "        Iteration of the very inner loop\n";
    }
  }
}

//Вам дан алгоритм, выводящий прямоугольник из N строк и M столбцов из заданных цифр K.
//Под каждым комментарием напишите соответствующий код на C++.
#include <iostream>
using namespace std;
int main() {
  int N, K, M;
  cin >> N >> K >> M;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < K; j++) {
      cout << M;
    }
    cout << "\n";
  }
}

//Вам дан алгоритм, выводящий прямоугольник "решеток".
//Под каждым комментарием напишите соответствующий код на C++.
#include <iostream>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  for (int i = 1; i <= a; i++) {
      if (i == 1 || i == a){
          for (int y =1 ; y <= b; y++){
        cout << "#";
          }
      }
      else{
        cout << "#";
    for (int j = 2; j <= b - 1; j++) {
      cout << " ";
    }
    cout << "#";
      }
    cout << "\n";
  }
}

//Даны два натуральных числа N и M. Треубется вывести N строк чисел от 0 до M-1.
#include <iostream>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      cout << j << " ";
    }
    cout << "\n";
  }
}

//Даны два натуральных числа N и M. Треубется вывести N строк чисел от 0 до M-1, но каждую строку необходимо начать с индекса этой строки и двоеточия.
#include <iostream>
using namespace std;
int main() {
int a, b;
  cin >> a>> b;
  for (int i = 0; i < a; i++) {
    cout << i << ": ";
  for ( int j = 0; j < b ; j++) {
    cout << j << " ";
  }
    cout << "\n";
  }
}


  
