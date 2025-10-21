# include <stdio.h>

int main(void) {
  // affichant les n premiers entiers impairs
  int n;
  do {
    printf("Saisissez un nombre entier :\n");
    scanf("%d",&n);
  } while (n<0);

  printf("Les %d premiers entiers naturels impairs sont :\n",n);
  for (int i=0;i<n;i++) {
    printf("%d \n",2*i+1);
  }
  return 0;
}
