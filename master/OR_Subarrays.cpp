#include <iostream>
using namespace std;
int main()
{
    int n, t, sr, r = 0, c;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int total_sum = 0, or_sum;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i+1; j++)
        {
            or_sum = 0;
            for (int k = j; k < j + i; k++)
            {
                or_sum |= A[k];
            }
            total_sum += or_sum;
        }
    }

    cout << total_sum;
    return 0;
}
