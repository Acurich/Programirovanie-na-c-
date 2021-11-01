//В начале файла in.txt содержатся два целых числа. Если сложить их, то вы получите, позицию в файле, начиная с которой находится третье число, которое вам нужно вывести.
#include <cstdio>
#include <fstream>
#include <iostream>
#include <map>
using namespace std;
int main() {
  fstream in;
  fstream out;
  in.open("in.txt", ios::in);
  int a, b, c;
  in >> a >> b;
  c = a + b;
  in.seekg(c, ios::beg);
  int f;
  in >> f;
  cout << f << endl;
  in.close();
  out.close();
}

//Дан файл middle.txt, в котором содержится текст.
//Напишите программу, которая найдет символ, который находится в середине файла.
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string buf;
    short k=0, n = 0;
    ifstream infile;
    infile.open("middle.txt", ios::in);
    if(infile.is_open()){
        infile >> buf;
        n = buf.size();
         k = n/2;
        if(n%2 == 1) {
            cout << buf[k];
        }
        else cout << buf[k-1] << " " << buf[k];
    }
    else{
        cout << "File error."<< endl;
        return 1;
    }
    infile.close();

return 0;
}
