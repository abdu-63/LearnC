# include <stdio.h>

int main(void) {
  int a;
  printf("Saisissez un nombre entier : \n");
  scanf("%d",&a);
  printf("Les 4 premiers entiers naturels impairs sont : \n");

  for (int i=0; i<a; i++) {
    printf("%d \n",i*2+1);
  }
  return 0;
}
