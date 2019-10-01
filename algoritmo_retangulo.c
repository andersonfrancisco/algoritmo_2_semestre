#include<stdio.h>
int main()
{
  float a1, b1, a2;

  printf("digite a altura;\n");
  scanf("%f", &a1);
  printf("agora, digite a base(comprimento)\n");
  scanf("%f", &b1);

  a2 = a1 * b1;

  printf("a area do retangulo é %f\n", a2);

   return 0;
}
