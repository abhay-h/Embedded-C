#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
   int Up_Time;
   char Set_Time_name[100];
   printf("hello\t\n");

   scanf("%[^\n]s",Set_Time_name);

   scanf("%d",&Up_Time);

   printf("%d\n%s",Up_Time, Set_Time_name);



   return 0;
}
