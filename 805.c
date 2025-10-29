# include <stdio.h>

int main(void) {
  int n=0;
  printf("Saisissez un nombre entier : \n");
  scanf("%d",&n);
  printf("Les %d premiers entiers naturels impairs sont : \n",n);
  
  for (int i=0; i<n; i++) {
    printf("%d \n",i*2+1);
  }
  return 0;
}
