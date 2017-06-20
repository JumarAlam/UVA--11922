#include <stdio.h>

int main()
{
    int i, j, k, l, m, n, ni, a, b;

    scanf("%d %d",&n,&ni);
    int Arr[n];
    for(j = 0; j < n; j++)
        {
            Arr[j] = j+1;
        }

    for(i = 1; i<=ni; i++)
    {
        scanf("%d %d",&a, &b);
        int revArr[b-a+1];

        for(k = 0; k < b-a+1; k++)
        {
            revArr[b-a-k] = Arr[a-1+k];
        }

        for(l = 0; l<(n-b+1) ; l++)
        {
            Arr[a-1+l] = Arr[b+l];
        }

        for(m = 0 ; m < b-a+1; m++)
        {
            Arr[n-b+a-1+m] = revArr[m];
        }

    }
    for(i = 0; i< n; i++)
        printf("%d\n",Arr[i]);
}
