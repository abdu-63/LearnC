# include <stdio.h>

int main(void) {
  int boisson=0;
  printf("Choisissez votre boisson: 1;2=Coca-Cola, 3=Iced-tea, 4=Fanta, 5;6=Evian, 7=San Pellegrino) \n");
  scanf("%d",&boisson);
  switch (boisson) {
    case 1:
    case 2:
      printf("Coca-Cola");
    break;
    case 3:
      printf("Iced-tea");
    break;
    case 4:
      printf("Fanta");
    break;
    case 5:
    case 6:
      printf("Evian");
    break;
    case 7:
      printf("San Pellegrino");
    break;
    default:
      printf("erreur");
  }
  return 0;
}
