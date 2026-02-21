#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int *hash = calloc(2*MAX + 1, sizeof(int));
    int offset = MAX;

    int sum = 0, count = 0;
    hash[offset] = 1;  

    for(int i = 0; i < n; i++) {
        sum += arr[i];

        if(hash[sum + offset] > 0)
            count += hash[sum + offset];

        hash[sum + offset]++;
    }

    printf("%d", count);

    free(hash);
    return 0;
}