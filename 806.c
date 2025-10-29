# include <stdio.h>

int main(void) {
  int n=0;
  printf("Saisissez un nombre entier : \n");
  scanf("%d",&n);
  printf("Les premiers entiers naturels impairs inférieurs à %d sont : \n",n);

  for (int i=1; i<n; i+=2) {
    printf("%d \n",i);
  }
  return 0;
}
