#include<stdio.h>

int main()
{
  int integer;
  float decemal;
  double decemal2;
  char charecter;

  printf("Input a int type data:\n");
  scanf("%d", &integer);
  printf("Input a float type data:\n");
  scanf("%f", &decemal);
  printf("Input a double type data:\n");
  scanf("%lf", &decemal2);
  printf("Input a char type data:\n");
  scanf(" %c", &charecter);
  
  printf("Your int type data is: %d", integer);
  printf("Your float type data is: %f", decemal);
  printf("Your double type data is: %lf", decemal2);
  printf("Your char type data is: %c", charecter);
  return 0;
}