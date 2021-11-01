//Дана последовательность целых чисел A1, A2, A3, ..., An, заканчивающаяся числом 0 (само число 0 в последовательность не входит, то есть Ai ≠ 0).
//Требуется вывести на экран числа этой последовательности, которые были больше среднего арифметического.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a;
    int cnt = 0;
    double average = 0;
    while (true)
    {
        int tmp;
        cin >> tmp;
        if (!tmp)
            break;
        cnt++;
        a.push_back(tmp);
        average += tmp;
    }
    average /= cnt;
    int ans = 0;
    vector<int> b;
    for (int i = 0; i < cnt; i++)
        if (a[i] > average)
            ans++, b.push_back(a[i]);
    cout << ans << endl;
    for (int i = 0; i < b.size(); ++i)
        cout << b[i] << ' ';
}

//Дан массив из N элементов и индекс элемента в списке K. Удалите из списка элемент с индексом K, сдвинув влево все элементы, стоящие правее элемента с индексом K. Считать, что индексы в списке начинаются с 0. После сдвига последний элемент должен быть удален с помощью .pop_back().
 #include<iostream>
    using namespace std;
    int main() {
        int a[10000], x, n, b;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> x;
        b = x;
        for (int j = 0; j < b - x + 1; j++)
        {
            for (int i = x; i < n; i++)
                a[i] = a[i + 1];
            n--;
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        return 0;
    }
