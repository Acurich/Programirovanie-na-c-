//Дан массив из N целых чисел. Требуется найти индекс минимального элемента в этом массиве.
//Если таких элементов несколько, выведите индекс самого левого из них
#include <iostream>
using namespace std;
int main() {
	int a[100], n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int max = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < a[max]) max = i;
    cout << max<< endl;
}

//Дан массив целых чисел. Требуется отсортировать элементы этого массива в неубывающем порядке.
#include <iostream>
using namespace std;
int main()
{
    int a[1000];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int x;
    for(int i=1;i<=n-1;i++)
    for(int j=i+1;j<=n;j++)
        if (a[i]>a[j])
        {
            x=a[i];
            a[i]=a[j];
            a[j]=x;
        }
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}

//Дан массив из N целых чисел. Отсортируйте его по невозрастанию любым способом и выведите все элементы по порядку.
#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    long long N;
    cin >> N;
    int A[N];
    for(int i = 0; i < N; i++)
        cin >> A[i];
    sort(A, A + N);
    for(int i = N - 1; i >= 0; i--)
        cout << A[i] << " ";
    return 0;
}
