#include<stdio.h>

// 宣告函式原型
int sumOfRange(int);

int main() 
{
   int n1;
   int sum;

   // 提示用戶輸入範圍的最後一個數字
   printf("\n\n 遞迴 : 計算從1到n的數字總和 :\n");
   printf("-----------------------------------------------------------\n");    

   printf(" 輸入範圍的最後一個數字（起始數字為1） : ");
   scanf("%d", &n1);

   // 呼叫函式計算總和
   sum = sumOfRange(n1); 
   printf("\n 1 到 %d 的數字總和 : %d\n\n", n1, sum);

   return (0);
}

// 定義計算範圍內數字總和的函式
int sumOfRange(int n1) 
{
   int res;
   if (n1 == 1) 
   {
      return (1);
   } 
   else 
   {
      // 遞迴呼叫 sumOfRange 函式
      res = n1 + sumOfRange(n1 - 1);
   }
   return (res);
}
