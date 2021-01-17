#include <stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int n, i, k, l, t;
    float d;
    int A[100];
    printf("Введите K, L, N, A[N]\nN=");
    scanf_s("%d", &n);
    printf("K=");
    scanf_s("%d", &k);
    printf("L=");
    scanf_s("%d", &l);
    d = 0;
    t = 0;
    for (i = 1; i <= n; i++)
    {
        printf("A[%d", i);
        printf("]=");
        scanf_s("%d", &A[i]);
    }
    for (k; k <= l; k++)
    {
        d = d + A[k];
        t++;
    }
    d = d / t;
    printf("Среднее арифметическое элементов от K до L=%f", d);
    return 0;
}
