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
    d = 0;
    for (i = 1; i <= n; i++)
        if (A[i] > d)
            d = A[i];
    for (i = 2; i <= n; i += 2)
        if (A[i] < d)
            d = A[i];
    printf("Минимальный элемент массива с четным номером=%d", d);
    return 0;
}
