#include <bits/stdc++.h>
using namespace std;

int ff(int a[], int n, int k)
{
    int r = 0, i, j;
    int bag[n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < r; j++)
        {
            if (bag[j] >= a[i])
            {
                bag[j] -= a[i];
                break;
            }
        }
        if (j == r)
        {
            bag[r] = k - a[i];
            r++;
        }
    }
    return r;
}
int ffd(int a[], int n, int k)
{
    sort(a, a + n, greater<int>());
    return ff(a, n, k);
}
int main()
{
    int n, k, r;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    cout << ffd(a, n, k) << endl;
    return 0;
}