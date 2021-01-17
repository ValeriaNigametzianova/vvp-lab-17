#include <stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int n, i, d;
    int A[100];
    printf("Введите N и массив A[N]- не содержащий повторяющихся чисел\nN=");
    scanf_s("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("A[%d", i);
        printf("]=");
        scanf_s("%d", &A[i]);
    }
    for (i = 2; i < n; i++)
        if ((A[i] > A[i - 1]) && (A[i] > A[i + 1]))
            d = i;
    printf("Последний локальный максимум массива имеет номер=%d", d);
    return 0;
}
