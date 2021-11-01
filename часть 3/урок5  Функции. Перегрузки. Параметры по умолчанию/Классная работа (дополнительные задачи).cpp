//Напишите функцию bool is_point_in_circle(double x, double y, double xc, double yc, double r), которая проверит, что точка (x, y) находится строго внутри окружности с центром в точке (xc, yc) и радиусом r.
//Сделайте так, что по умолчанию
//радиус круга равен 1;
//все координаты равны 0.
//С помощью этой функции решите задачу, в которой вам вводятся все 5 чисел, и программа должна вывести «YES», если точка находится внутри окружности, и «NO», если снаружи или на границе.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
bool is_point_in_circle(double x, double y, double xc, double yc, double r)

{
  if ((x - xc) * (x - xc) + (y - yc) * (y - yc) < r * r) return true;

  return false;
}
int main(){
    double x, y, xc, yc, r;
    cin >> x;
    cin >> y;
    cin >> xc;
    cin >> yc;
    cin >> r;
    if (is_point_in_circle(x, y, xc, yc, r)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
