/*
Read an integer N (2 < N < 1000). Print the multiplication table of N.
1 x N = N      2 x N = 2N        ...       10 x N = 10N

Input
The input is an integer N (1 < N < 1000).

Output
Print the multiplication table of N., like the following example.


*/


#include<stdio.h>

void multiplicationTable(int n)
{
    for(int i = 1 ; i < 11 ; i++){
        printf("%d x %d = %d\n", i , n , i*n);
    }
}

int main()
{
    int n ;
    scanf("%d",&n);
    multiplicationTable(n);
}
