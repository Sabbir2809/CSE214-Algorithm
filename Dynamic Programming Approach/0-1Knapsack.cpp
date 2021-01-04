#include <bits/stdc++.h>

using namespace std;

void knapsack(int S, int s[], int v[], int n)
{
    int i, j;
    int V[n + 1][S + 1];
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= S; j++)
        {
            if (i == 0 || j == 0)
                V[i][j] = 0;
            else if (s[i - 1] <= j)
                V[i][j] = max((v[i - 1] + V[i - 1][j - s[i - 1]]), V[i - 1][j]);
            else
                V[i][j] = V[i - 1][j];
        }
    }
    int ans = V[i - 1][j - 1];

    cout << ans << endl;

    i = 4;
    j = 5;
    while (i > 0 && j > 0)
    {
        if (V[i][j] == V[i - 1][j])
            i--;
        else
        {
            cout << i << " ";
            i--;
            j = j - s[i - 1];
        }
    }
}

int main()
{
    int v[] = {3, 4, 5, 6};
    int s[] = {2, 3, 4, 5};
    int n = 4;
    int S = 5;
    knapsack(S, s, v, n);
    return 0;
}

/*
#include<stdio.h>

int max(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
        return b;
}

void backtracking(int n, int S, int V[n+1][S+1], int s[])
{
    int i, j;
    
    i = n, j = S;
    
    while(i > 0 && j > 0)
    {
        if(V[i][j] == V[i - 1][j])
        {
            i--;
        }
        else
        {
            printf("%d ", i);
            i--;
            j = j - s[i - 1]; 
        }
    }
}

int zero_one_Knapsack(int S, int s[], int v[], int n)
{
     int V[n+1][S+1], i, j;
     
     for(i = 0; i <= n; i++)
    {
        for( j = 0; j <= S; j++)
        {
            if(i == 0 || j == 0)
            {
                V[i][j] = 0;
            }
            else if(s[i - 1] <= j)
            {
                V[i][j] = max(v[i - 1] + V[i-1][j - s[i - 1]], V[i - 1][j]);
            }
            else
            {
                V[i][j] = V[i -1][j];
            }
        }
    }
    backtracking(n, S, V, s);
    return V[n][S];
}

int main()
{
    int S = 5, n = 4;
    int s[] = {2, 3, 4, 5};
    int v[] = {3, 4, 5, 6};
    
    printf("%d\n", zero_one_Knapsack(S, s, v, n));

    return 0;
}
*/