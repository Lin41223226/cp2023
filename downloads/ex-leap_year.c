#include <stdio.h>

void main()
{
    int chk_year;   // 宣告一個整數變數 'chk_year'。

    printf("輸入一個年份：");   // 提示使用者輸入年份。
    scanf("%d", &chk_year);   // 讀取並儲存使用者輸入的年份於 'chk_year'。

    if ((chk_year % 400) == 0)   // 檢查 'chk_year' 是否能被400整除且沒有餘數。
        printf("%d 年是閏年。\n", chk_year);   // 印出 'chk_year' 是閏年的訊息。
    else if ((chk_year % 100) == 0)   // 檢查 'chk_year' 是否能被100整除且沒有餘數。
        printf("%d 年不是閏年。\n", chk_year);   // 印出 'chk_year' 不是閏年的訊息。
    else if ((chk_year % 4) == 0)   // 檢查 'chk_year' 是否能被4整除且沒有餘數。
        printf("%d 年是閏年。\n", chk_year);   // 印出 'chk_year' 是閏年的訊息。
    else
        printf("%d 年不是閏年。\n", chk_year);   // 印出 'chk_year' 不是閏年的訊息。
}
