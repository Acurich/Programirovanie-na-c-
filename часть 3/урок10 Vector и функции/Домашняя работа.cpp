//Напишите функцию void fill(vector<int> &a, int b = 0), которая заполняет вектор заданными значениями или нулем, если параметр не указан.
#include <iostream>
#include <vector>
using namespace std;
void fill(vector<int>& box, int x = 0) {
for (auto& v : box) v = x;
}
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    fill(a, k);
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    fill(a);
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}

