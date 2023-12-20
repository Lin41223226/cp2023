#include <stdio.h>

// 函式原型：檢查一個數字是否為質數
int PrimeOrNot(int);

int main()
{
    int n1, prime;

    // 提示用戶輸入正整數
    printf("\n\n 函式：檢查一個數字是否為質數：\n");
    printf("---------------------------------------------------------------\n");    

    printf(" 輸入一個正整數 : ");
    scanf("%d", &n1);

    // 呼叫函式 PrimeOrNot 檢查是否為質數
    prime = PrimeOrNot(n1);

    if (prime == 1)
        printf(" 數字 %d 是一個質數。\n", n1);
    else
        printf(" 數字 %d 不是質數。\n", n1);

    return 0;
}

// 函式定義：檢查一個數字是否為質數
int PrimeOrNot(int n1)
{
    int i = 2;

    // 使用迴圈從2開始檢查是否有因數
    while (i <= n1 / 2)
    {
        if (n1 % i == 0)
            return 0; // 若有因數，返回0表示不是質數
        else
            i++;
    }

    return 1; // 若沒有因數，返回1表示是質數
}
