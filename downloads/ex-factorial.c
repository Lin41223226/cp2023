#include <stdio.h>

int main(){
    int i, f = 1, num;  // 宣告變數 'i' 作為迴圈計數器，'f' 用於存儲階乘，'num' 用於接收使用者輸入。

    printf("輸入一個數字 : ");  // 提示使用者輸入。
    scanf("%d", &num);  // 從使用者讀取 'num' 的值。

    for (i = 1; i <= num; i++)  // 開始計算階乘的迴圈。
        f = f * i;  // 計算階乘。

    printf("%d 的階乘是：%d\n", num, f);  // 印出計算得到的階乘。
    return 0;  // 表示程式成功執行。
}
