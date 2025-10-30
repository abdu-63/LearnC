# include <stidio.h>

int main(void) {
  int a=0,b=0;
  printf("Saisir le 1er nombre : \n");
  scanf("%d",&a);
  printf("Saisir le 2e nombre : \n");
  scanf("%d",&b);

  if (a>b) {
    printf("%d est le plus grand",a);
  } else {
    printf("%d est le plus grand",b);
  }

  // printf("%d est le plus grand",a>b?a:b);
  return 0;
}
