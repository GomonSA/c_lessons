#include <stdio.h>

int main()
{
  /* create 2-d array */
  int nums[3][2] = {
    {1, 2},
    {3, 4},
    {9, 22},
  };

  /* sorting throught an array */
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 2; j++) {
      printf("%d, ", nums[i][j]);
    }
    printf("\n");
  }


  return 0;
}
