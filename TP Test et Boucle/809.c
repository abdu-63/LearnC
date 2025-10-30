# include <stdio.h>

int main(void) {
  float note1=0, note2=0, note3=0, moyenne=0;
  printf("Saisir la 1ere note : \n");
  scanf("%f",&note1);
  while (note1<=0 && note1>=20);
  printf("Saisir la 2ere note : \n");
  scanf("%f",&note2);
  while (note2<=0 && note2>=20);
  printf("Saisir la 3ere note : \n");
  scanf("%f",&note3);
  while (note3<=0 && note3>=20);

  moyenne = (note1+note2+note3)/3;
  printf("La moyenne de vos 3 notes est de %.2f \n",moyenne);
  return 0;
}
