#include <stdio.h>
#include <stdlib.h>

int main()
{
  // array with numbers
  int luckyNumbers[] = {4, 9, 34, 95, 23, 502};
  // number of elements in the array
  int countLuckyNumbers = sizeof(luckyNumbers) / sizeof(luckyNumbers[0]);

  /* sorting through an array */
  for (int i = 0; i < countLuckyNumbers; i++) {
    printf("%d\n", luckyNumbers[i]);
  }
  
  return 0;
}
