
/* Créer le 22 mai 2023
* dernière modification le 24 mai 2023 : amélioration
* par Nivetha Jeyakumar
* Master IRS P33
*
* C vs Python (Mini-jeu)
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i;

    int reponse;
    int totalPoints = 0;

    char * serpentard[] = {"Ambitieux", "Rusé", "Manipulateur", "Franc", "Egocentrique"};
    char * gryffondor[] = {"Audacieux", "Aventurié", "Impulsif", "Courageux", "Protecteur"};
    char * poufsouffle[] = {"Trop prudent", "Travailleur", "Dévoué", "Loyal", "Réservé"};
    char * serdaigle[] = {"Rêveur", "Réfléchi", "Introverti", "Créatif", "Observateur"};

    printf("Choixpeau magique : << Difficile, très difficile… Je vois beaucoup de courage et des qualités intellectuelles aussi. Il y a du talent, oh oui, et un grand désir de faire ses preuves. Alors, où vais-je te mettre ? >>\n\n");
    printf("Le choixpeau magique a quelques questions à vous poser, veuillez y répondre en choisissant le nombre associé au caractère. À la fin, nous vous révélerons la maison que vous rejoindrez.\n\n");

    for (i = 0; i <= 4; i ++) {
        
        printf("Êtes-vous plutôt :\n");

        printf("    1. %s\n", serpentard[i]);
        printf("    2. %s\n", gryffondor[i]);
        printf("    3. %s\n", poufsouffle[i]);
        printf("    4. %s\n", serdaigle[i]);

        printf("\nChoisissez un nombre entre 1, 2, 3 et 4 : ");
        scanf("%d", &reponse);

        totalPoints += reponse;

    }

    if (totalPoints > 0 && totalPoints < 6) {
        printf("<< SERPENTARD !!! >> cria le choixpeau.\n");
    } 
    else if (totalPoints >= 6 && totalPoints < 11) {
        printf("<< GRYFFONDOR !!! >> cria le choixpeau.\n");
    } 
    else if (totalPoints >= 11 && totalPoints < 16) {
        printf("<< POUFFSOUFFLE !!! >> cria le choixpeau.\n");
    } 
    else {
        printf("<< SERDAIGLE !!! >> cria le choixpeau.\n");
    }

    return 0;
}
