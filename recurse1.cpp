#include <stdio.h>
 

int findSum(int A[], int N)
{
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}
 

int main()
{
    int A[] = { 5,6,7,8,9,10 };
    int N = sizeof(A) / sizeof(A[0]);
    printf("%d", findSum(A, N));
    return 0;
}