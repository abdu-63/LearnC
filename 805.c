# include <stdio.h>

int main(void) {
  int a=0;
  printf("Saisissez un nombre entier : \n");
  scanf("%d",&a);
  printf("Les %d premiers entiers naturels impairs sont : \n",a);
  
  for (int i=0; i<a; i++) {
    printf("%d \n",i*2+1);
  }
  return 0;
}
