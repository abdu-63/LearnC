# include <stdio.h>

int main(void) {
  int a;
  printf("Saisissez un nombre entier : \n");
  scanf("%d",&a);
  printf("Les premiers entiers naturels impairs inférieurs à %d sont : \n",a);

  for (int i=1; i<=a; i+=2) {
    printf("%d \n",i);
  }
  return 0;
}
