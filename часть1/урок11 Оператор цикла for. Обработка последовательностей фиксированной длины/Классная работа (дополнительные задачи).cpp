//Известен рост каждого разбойника из банды. На сколько рост самого высокого из них превышает рост самого низкого?
#include <iostream>
using namespace std;
int main() {
  int n, a, min = 401, max = 49;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a > max) max = a;
    if (a < min) min = a;
  }
  cout << max - min;
}
