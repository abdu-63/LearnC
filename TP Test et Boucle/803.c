# include <stdio.h>

int main(void) {
  int a=0;
  printf("Veuillez saisir un entier : \n");
  scanf("%d",&a);

  if (a%3==0 && a>=10) {
    printf("%d est a la fois multiple de 3 et supérieur ou égal a 10 \n",a);
  } else {
    printf("%d n'est pas multiple de 3 ou n'est pas supérieur ou égal a 10. \n",a);
  }
  return 0;
}
