
#include <iostream>
using namespace std;
void dec(int* a) {
 *a -= 1;
}
int main() {
  int num;
  cin >> num;
  dec(&num);
  cout << num;
  return 0;
}
