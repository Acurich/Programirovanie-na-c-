//Мальчик Егор на досуге пишет свой текстовый редактор Блокнот++. В базовые возможности редактора уже заложено два основных режима, которые позволяют быстрее набирать текст.
//В первом режиме текстовый редактор бибикает при нажатии любой клавиши.
//Во втором режиме текстовый редактор портит текст при нажатии любой клавиши.
//При этом Егор решил, что его редактор будет портить текст следующим образом: он переставит все символы так, что сначала будут стоять символы стоявшие на четных местах (0, 2, 4, 6, 8...), а затем символы, стоящие на нечетных местах (1, 3, 5, 7, 9...).
//Смоделируйте вывод редактора, если пользователь нажмет на клавишу во втором режиме K раз.
#include <iostream>
using namespace std;
int* rearrange(int* A, int Asize) {
  int* result = new int[Asize];

  int p = 0;

  for (int i = 0; i < Asize; i += 2) {
    result[p] = A[i];

    ++p;
  }

  for (int i = 1; i < Asize; i += 2) {
    result[p] = A[i];

    ++p;
  }

  return result;
}

void print_arr(const int* A, int Asise) {
  for (int i = 0; i < Asise; ++i) {
    cout << A[i] << " ";
  }
  cout << endl;
}

int* change_it_k_times(int* const A, int Asize, int K) {
  int* result = A;

  for (auto i = 0; i < K; ++i) {
    result = rearrange(result, Asize);

    print_arr(result, Asize);
  }

  return result;
}

template <typename T>

void get_sequence(T* A, int N) {
  for (auto i = 0; i < N; ++i) {
    cin >> A[i];
  }
}

int main() {
  int N, K;

  cin >> N;

  auto A = new int[N];

  get_sequence(A, N);

  cin >> K;

  auto R = change_it_k_times(A, N, K);

  delete[] A;

  delete[] R;

  return 0;
}
