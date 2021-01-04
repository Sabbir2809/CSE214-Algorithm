#include <bits/stdc++.h>
using namespace std;

void knapsack(int n, float weight[], float value[], float capacity)
{
    float x[20], benifit = 0;
    int i, j, u;
    u = capacity;

    for (i = 0; i < n; i++)
    {
        x[i] = 0.0;
    }

    for (i = 0; i < n && u > 0; i++)

    {
        if (weight[i] > u)
        {
            benifit = benifit + value[i] * (u / weight[i]);
            u = u - u;
        }
        else
        {
            x[i] = 1.0;
            benifit = benifit + value[i];
            u = u - weight[i];
        }
    }

    cout << benifit << endl;
}

int main()
{
    int num, i, j;
    cin >> num;
    float weight[num], value[num], capacity, density[num], temp;

    for (i = 0; i < num; i++)
        cin >> weight[i] >> value[i];

    cin >> capacity;

    for (i = 0; i < num; i++)
        density[i] = value[i] / weight[i];

    for (i = 0; i < num; i++)
        for (j = i + 1; j < num; j++)
            if (density[i] < density[j])
            {
                temp = density[j];
                density[j] = density[i];
                density[i] = temp;

                temp = weight[j];
                weight[j] = weight[i];
                weight[i] = temp;

                temp = value[j];
                value[j] = value[i];
                value[i] = temp;
            }

    // for (i = 0; i < num; i++)
    //  cout<<weight[i]<<" ";

    knapsack(num, weight, value, capacity);

return (0);
}
