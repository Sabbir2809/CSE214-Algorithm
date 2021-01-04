// 5 + 10 + 15.........+ 100 =?
//Every Problem has sevral solutions
#include <stdio.h>
int main()
{
/*
    int i, sum = 0;

    for(i = 1; i <= 100; i++){
        if(i % 5 == 0){
            sum = sum + i;
        }
    }
    printf("%d\n",sum);


    int i,sum = 0;
    for(i = 5; i <= 100; i = i + 5){
        
        sum = sum + i;
    }
    printf("%d\n",sum);
           

    printf("%d\n",5 * ((20 * (20 + 1))/2));

return 0;
}
/*
-Run in less time(But computational resources (time complexity) is usually more important)
-Consume less memory

-Hardware
-Operating System
-Compiler
-Size of input
-Nature of Input
-Algorithm
*/
#include <stdio.h>
    int main()
    {
        int n, a[100];
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 1; i < n; i++)
        {
            int k = a[i];
            int j = i - 1;
            while (j >= 0 && a[j] > k)
            {
                a[j + 1] = a[j];
                j = j - 1;
            }
            a[j + 1] = k;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        if (n % 2 == 0)
        {
            printf("\n%d\n", a[(n / 2)]);
        }
        else
            printf("\n%d\n", a[((n + 1) / 2) - 1]);
        return 0;
    }