#include <stdio.h>
#include <limits.h>

// 定義計算 x 的 n 次方的函式
double powxn(double x, int n) {
    double k;
    if (n == 0) return 1;  // 若 n 為 0，則 x 的 0 次方為 1。
    k = powxn(x * x, n / 2);  // 遞迴計算 x^2 的 (n/2) 次方。
    if (n % 2) k = k * x;  // 若 n 為奇數，則乘上額外的 x。
    return k;
}

int main(void)
{
    double x = 7.0;
    int n = 2;
    printf("\nx = %f, y = %d  ", x, n);
    printf("\nResult:(x^n) : %f ", powxn(x, n));

    x = 6.2;
    n = 3;
    printf("\n\nx = %f, y = %d  ", x, n);
    printf("\nResult:(x^n) : %f ", powxn(x, n));

    return 0;
}
