#include <stdio.h>
int main(void)
{
    int x,y;
    printf("value of x = ?\n");
    scanf("%d", &x);
    printf("value of y = ?\n");
    scanf("%d", &y);
    
    if (x > y)
  printf("x = %d\n",x);
  else
  printf("x = %d, y = %d",x , y);
        return 0;
}

