#include <stdio.h>

int main()
{
  int num=100, count=1;
  printf("PARES\n");
  while(count<=num)
  {
      if(count%2==0)
      printf("%d\t\n",count);
      count++;
  }
  return 0;
}
