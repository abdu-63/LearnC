# include <stdio.h>

int main(void) {
  int a=0,b=0,somme=0;
  do {
    printf("Saisissez l'entier A : \n");
    scanf("%d",&a);
    printf("Saisissez l'entier B : \n");
    scanf("%d",&b);
  } while (a>b || a<0);

  for (int i=a; i<=b; i++) {
    somme+=i;
  }
  printf("La somme des nombres entre %d et %d vaut %d \n",a,b,somme);
  return 0;
}
