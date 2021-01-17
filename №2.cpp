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
    d = A[2] - A[1];
    for (i = 3; i < n; i++)
    {
        if (A[i + 1] - A[i] != d)
        {
            d = 0;
            printf("0");
        }
    }
    if (d > 0)
        printf("Массив является арифметической прогрессией, в котором разность прогрессии =%d", d);
    return 0;
}
