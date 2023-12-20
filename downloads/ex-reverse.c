#include <stdio.h>

// 定義反轉整數的函式
int reverse(int n) {
    int d, y = 0;
    while (n) {
        d = n % 10;
        // 檢查溢位情況，以確保反轉後的整數仍在 int 範圍內
        if ((n > 0 && y > (0x7fffffff - d) / 10) ||
            (n < 0 && y < ((signed)0x80000000 - d) / 10)) {
            return 0;  // 如果溢位，則返回 0
        }
        y = y * 10 + d;
        n = n / 10;
    }
    return y;  // 返回反轉後的整數
}

int main(void)
{
    int i = 123;
    printf("原始整數: %d  ", i);
    printf("\n反轉後的整數: %d  ", reverse(i));

    return 0;
}
