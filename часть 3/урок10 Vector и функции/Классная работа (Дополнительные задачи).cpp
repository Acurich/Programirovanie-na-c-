//Напишите функцию vector<int> todigits(int n), которая вернет как результат вектор, состоящий из цифр числа n.
#include <iostream>
#include <ctime>
using namespace std;
 
int* todigits(int n)
{
    int size=1, n1=n;
    while ((n/=10)>0) size++;
    int *a = new int[size];
    
    for (int i = size - 1; i >= 0; --i)
    {
        a[i] = n1 % 10;
        n1 /= 10;
    }
    return a;
}
 
int main()
{
    int n, *a;
  cin >>n;
   
    int size=1, n1=n;
    while ((n1/=10)>0) size++;
    
    a=todigits(n);
  
    for (int i = 0; i < size; i++)
    {
    cout <<a[i]<<" ";
    cout << endl;   
    }
    delete [] a;
system("pause");
return 0;
}
