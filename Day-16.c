#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int freq[1001] = {0};  
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 0; i < 1001; i++)
    {
        if (freq[i] > 0)
        {
            printf("%d:%d ", i, freq[i]);
        }
    }
    return 0;
}