//Дан массив, состоящий из N целых чисел. Вам требуется изменить этот массив, добавив в конец новое значение, введенное с клавиатуры.
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
size_t n;
cin >> n;
auto box = new int[n];
for (auto i = 0U; i < n; ++i) cin >> box[i];
int m;
cin >> m;
auto tmp = new int[n + 1];
for (auto i = 0U; i < n; ++i) tmp[i] = box[i];
tmp[n] = m;
delete[] box;
++n;
box = new int[n];
for (auto i = 0U; i < n; ++i) box[i] = tmp[i];
delete[] tmp;
tmp = nullptr;
for (auto i = 0U; i < n; ++i) cout << box[i] << ' ';
puts("");
}

//Дан массив из N элементов (N < 1000), причем N - четное. Вставить в середину массива сумму всех элементов, все элементы справа сдвинуть в сторону.
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i!=n; i++) {
        cin>>v[i];
    }
    v.insert(v.begin()+v.size()/2,accumulate(v.cbegin(),v.cend(),0,[](const int &x, const int &y) {
        return x+y;
    }));
    copy(v.cbegin(),v.cend(),ostream_iterator<int>(cout," "));
}

//В этой задаче от вас требуется написать функцию int* merge_arrays(int* A, int Asize, int* B, int Bsize), которой даются два массива A и B размеров Asize и Bsize соответственно, и которая возвращает новый массив из Asize+Bsize элементов, в котором сначала находятся элементы первого массива, а затем элементы второго.
#include <iostream>
#include <cmath>
using namespace std;
 
int* merge_arrays(int* A, int Asize, int* B, int Bsize) {
    int* result = new int[Asize + Bsize];
    int i, l = 0;
    for(i = 0; i < Asize; i++) result[l++] = A[i];
    for(i = 0; i < Bsize; i++) result[l++] = B[i];
    return result;
}
 
int main(){
    int *a, *b, *c, asize, bsize;
    
    do {
        cin >> asize;
    } while (asize > 100);
    a = new int[asize];
    
    do {
        cin >> bsize;
    } while (bsize > 100);
    b = new int[bsize];
    
    for(int i = 0; i < asize; i++) {
        cin >> a[i];
        if(abs(a[i]) > (2 << 29)) exit(1);
    }
    
    for(int i = 0; i < bsize; i++) {
        cin >> b[i];
        if(abs(b[i]) > (2 << 29)) exit(1);
    }
    
    c = merge_arrays(a, asize, b, bsize);
    for(int i = 0; i < asize + bsize; i++) {
        cout << c[i] << " ";
    }
    
    delete[] a;
    delete[] b;
    delete[] c;
    return 0;
}
