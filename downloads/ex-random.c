#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()           // 主函式的開始。
{
    int number, input;   // 宣告兩個整數變數 'number' 和 'input'。

    srand(time(NULL));   // 使用當前時間初始化隨機數種子。

    number = rand() % 10 + 1;   // 生成一個介於1和10之間的隨機數，並將其存儲在 'number' 中。

    do {   // 開始 do-while 迴圈。
        printf("\n猜測數字 (1 到 10): ");   // 印出提示使用者猜測數字的訊息。
        scanf("%d", &input);    // 讀取使用者的輸入並將其存儲在 'input' 中。

        if (number > input)   // 如果隨機數大於使用者的輸入。
            printf("數字較大\n");   // 印出數字較大的訊息。

    } while (number != input);   // 只要使用者的輸入不等於隨機數，就繼續迴圈。

    printf("答對了！\n\n");   // 印出答對的訊息。

    return 0;   // 返回0，表示程序成功執行。
}   // 主函式的結束。
