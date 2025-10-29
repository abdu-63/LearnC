# include <stdio.h>

int main(void) {
  int n;
  do {
  printf("Saisir un nombre : \n");
  scanf("%d",&n);
  } while (n%2!=0 && n%7!=0);
    printf("%d est un multiple de 7 et 2",n);
  return 0;
}
