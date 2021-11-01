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

//Необходимо найти все «пифагоровы тройки» в заданном диапазоне чисел — натуральные решения уравнения x2+y2=k2, где x, y и k лежат в интервале от l до r включительно.
#include <iostream>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  int m[a][b];
  for(int i = a; i <= b; i++) {
    for (int y = a; y <= b; y++) {
      for ( int j = a; j <= b; j++) {
        if ( i*i + y*y == j*j) cout << i << " " << y << " " << j << endl;
      }
    }
  }
}

//Дано натуральное число n. Укажите все тройки x, y, z таких натуральных чисел, что x2+y2+z2=n.
#include <iostream>
#include <math.h> 
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    if(n>0){
    for(float i=1; i<n; i++)
    {
        for(float j=1; j<n; j++)
        {
            for(float q=1; q<n; q++)
            {
                if( pow(i,2)+ pow(j,2)+ pow(q,2)==n)
                    cout<< i <<" "<< j << " " << q <<endl;
            }
        }
    }
    }
    system("pause");
}
