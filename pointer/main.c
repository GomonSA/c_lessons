#include <stdio.h>
#include <stdlib.h>


int main()
{
  int age = 30;
  /* copy the address of one varibale to another */
  int *pAge = &age;
  double gpa = 3.4;
  /* copy the address of one varibale to another */
  double *pGpa = &gpa;
  char grade = 'A';
  /* copy the address of one varibale to another */
  char *aGrade = &grade;

  /* display the variables */
  printf("age: %d\n", age);
  printf("pAge: %d\n", *pAge);

  printf("gpa: %lf\n", gpa);
  printf("pGpa: %lf\n", *pGpa);

  printf("grade: %c\n", grade);
  printf("aGrade: %c\n", *aGrade);
  
  /* print the pthysical address variables age. */
  printf("age's memory address: %p\n", &age);


  return 0;
}
