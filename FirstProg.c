#include <stdio.h>
#include <stdlib.h>

int main()
{
   int Up_Time;
   char Set_Time_name[100];
   printf("hello\t\n");

   gets(Set_Time_name);

   scanf("%d",&Up_Time);

   printf("%d%s",Up_Time, Set_Time_name);


   return 0;
}