# include <stdio.h>

int main(void) {
  int l=0,L=0,perimetre=0,aire=0;
  printf("Saisissez la longueur et largeur du rectangle: \n");
  scanf("%d %d",&l,&L);

  perimetre = L*l;
  aire = 2*(L+l);
  printf("Périmètre: %d, Aire: %d \n",perimetre,aire);

  for (int i=0; i<L; i++) {
    for (int j=0; j<l; j++) {
      printf("o ",i);
    }
    printf("\n");
  }
  return 0;
}
