# include <stdio.h>

int main(void) {
  int hauteur=0;
  printf("Hauteur ? \n");
  scanf("%d",&hauteur);
  for (int i=1;i<=hauteur;i++) {
      printf("%d ",i);
      for (int j=0;j<i;j++) {
          printf("*");
      }
      printf("\n");
  }
  return 0;
}
