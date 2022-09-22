 #include <stdio.h>

int main()  {
    int i, n, count = 0, arr[] = {-16, 2.8, -7, -1.5, -2.8,-19};
    n = sizeof(arr)/sizeof(arr[0]);
    printf("%d",n);
    for(i=0; i<n; i++)
    {
        if (arr[i] < 0)
        {
            count++;
        }
    }

    printf("Total number of negative numbers in array: %d", count);
}

