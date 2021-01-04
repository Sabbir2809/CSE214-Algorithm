+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++#include <bits/stdc++.h>
using namespace std;
int INF = 100000;
void DPCoinchange(int coins[], int total, int n)
{
    int arr[10000];
    int brr[10000];
    int count = -1;
    int T[total + 1];
    T[0] = 0;
    int S[total + 1];
    int i, j;
    for (j = 1; j <= total; j++)
    {
        int mini = INF;
        int coin_position = 0;
        for (i = 0; i <= n; i++)
        {
            if (j >= coins[i])
            {
                if ((1 + T[j - coins[i]]) < mini)
                {
                    mini = 1 + T[j - coins[i]];
                    coin_position = i;
                }
            }
        }
        T[j] = mini;
        S[j] = coin_position;
    }
    int l = total;
    int x = 0;
    int y = 1;
    while (l > 0)
    {
        arr[x] = coins[S[l]];
        l = l - coins[S[l]];

        if (arr[x] != arr[x - 1])
        {
            x++;
            count++;
        }
        else
        {
            y++;
        }
        brr[count] = y;
    }
    cout << T[total] << endl;
    for (int m = x - 1; m >= 0; m--)
    {
        cout << brr[m] << " coins of " << arr[m] << endl;
    }
}

int main()
{
    int N, C, K;
    cin >> K;
    cin >> C;
    cin >> N;
    int coins[N];
    for (int i = 0; i < N; i++)
    {
        cin >> coins[i];
    }
    DPCoinchange(coins, K - C, N);
    return 0;
}
