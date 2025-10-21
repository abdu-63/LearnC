# include <stdio.h>

int main(void) {
  // saisir 2 nombres + faire une somme
   int a,b,somme=0;

  // Gérez les cas où A>B et A<0
  do {
      printf("Saisissez l'entier A :");
      scanf("%d",&a);
      printf("Saisissez l'entier B :");
      scanf("%d",&b);
  } while (a>b||a<0);

  // faire la somme entre les nombres choisis
  for (int i=a;i<=b;i++) {
      somme+=i;
  }
  printf("La somme des nombres entre 3 et 10 vaut %d \n",somme);
  return 0;
}
