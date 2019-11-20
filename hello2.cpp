#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a[3][3];
  int s1 = 0, s2 = 0, i, j;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      scanf("%d", &a[i][j]);
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
      printf("%d\t", a[i][j]);
    printf("\n");
  }
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
    {
      if (i == j)
        s1 = s1 + a[i][j];
    }
  for (i = 0; i < 3; i++)
    for (j = 3; j >= 0; j--)
      if (i + j == 2)
        s2 = s2 + a[i][j];
  printf("s1=%d,s2=%d\n", s1, s2);
  system("pause");
  return 0;
}