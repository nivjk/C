
/* Créer le 22 mai 2023
* par Nivetha Jeyakumar
* Master IRS P33
*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{

    int qualites1;
    int defaut1;
    int qualites2;
    int defaut2;

    printf("Choixpeau magique : << Difficile, très difficile… Je vois beaucoup de courage et des qualités intellectuelles aussi. Il y a du talent, oh oui, et un grand désir de faire ses preuves. Alors, où vais-je te mettre ? >>\n\n");
    printf("Le choixpeau magique a quelques question à vous poser, veuillez-y répondre en choisissant le nombre associé au caractère. A la fin, nous vous revelerons la maison que vous rejoindrais.\n\n");

    printf(" Êtes-vous plutôt : \n");
    printf("                     1. Ambitieux\n");
    printf("                     2. Courageux\n");
    printf("                     3. Loyal\n");
    printf("                     4. Curieux\n");
    printf("\n Choisir un nombre entre 1, 2, 3 et 4 : ");
    scanf("%d", &qualites1);

    printf(" Êtes-vous plutôt : \n");
    printf("                     1. Rusé\n");
    printf("                     2. Audacieux\n");
    printf("                     3. Travailleur\n");
    printf("                     4. Intelligent\n");
    printf("\n Choisir un nombre entre 1, 2, 3 et 4 : ");
    scanf("%d", &qualites2);

    printf("\n Êtes-vous plutôt : \n");
    printf("                     1. Manipulateur\n");
    printf("                     2. Téméraire\n");
    printf("                     3. Trop prudent\n");
    printf("                     4. Rêveur\n");

    printf("\n Choisir un nombre entre 1, 2, 3 et 4 : ");
    scanf("%d", &defaut1);

        printf("\n Êtes-vous plutôt : \n");
    printf("                     1. Egocentrique\n");
    printf("                     2. Impulsif\n");
    printf("                     3. Réservé\n");
    printf("                     4. Introverti\n");

    printf("\n Choisir un nombre entre 1, 2, 3 et 4 : ");
    scanf("%d", &defaut2);

    if (qualites1 + qualites2 + defaut1 + defaut2 <= 4) {
        printf("<< SERPENTARD !!! >> cria le choixpeau.\n");
    }

    else if (qualites1 + qualites2 + defaut1 + defaut2 > 4 && qualites1 + qualites2 + defaut1 + defaut2 <= 8) {
        printf("<< GRYFFONDOR !!! >> cria le choixpeau.\n");
    }

    else if (qualites1 + qualites2 + defaut1 + defaut2 > 8 && qualites1 + qualites2 + defaut1 + defaut2 <= 12) {
        printf("<< POUFFSOUFLE !!! >> cria le choixpeau.\n");
    }

    else {
        printf("<< SERDAIGLE !!! >> cria le choixpeau.\n");
    }

    return 0;

}


