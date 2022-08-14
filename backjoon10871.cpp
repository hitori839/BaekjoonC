#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
    int n, m, s;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &s);

        if (m > s)
            printf("%d ", s);
    }
}