# include <stdio.h>

int main(void) {
  int age=0,etudiant=0;
  printf("Quel est votre âge ? \n");
  scanf("%d",&age);
  if (age>=0 && age<12) {
    printf("Tarif enfant (4€) \n");
  } else if (age>=12 && age<=17) {
    printf("Tarif jeune (6€) \n");
  } else if (age>=18 && age<27) {
    printf("êtres vous étudiant ? oui=0, non=1 \n");
    scanf("%d",&etudiant);
    if (etudiant==1) {
      printf("Tarif jeune (6€) \n");
    } else printf("Plein tarif (15 €) \n");
  } else if (age>=27 && age<65) {
    printf("Plein tarif (15 €) \n");
  } else if (age>=65) {
    printf("Tarif senior (6 €) \n");
  } else printf("Plein tarif (15 €) \n");
  return 0;
}
