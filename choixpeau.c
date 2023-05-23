
/* Créer le 22 mai 2023
* par Nivetha Jeyakumar
* Master IRS P33
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    /* Déclaration des variables */
    int question1;
    int question2;
    int question3;
    int question4;
    int question5;
    int question6;
    int question7;
    int question8;
    int question9;
    int questionX;

    printf("Choixpeau magique : << Difficile, très difficile… Je vois beaucoup de courage et des qualités intellectuelles aussi. Il y a du talent, oh oui, et un grand désir de faire ses preuves. Alors, où vais-je te mettre ? >>\n\n");
    printf("Le choixpeau magique a quelques questions à vous poser, veuillez y répondre en choisissant le nombre associé au caractère. À la fin, nous vous révélerons la maison que vous rejoindrez.\n\n");

    printf("Êtes-vous plutôt :\n");
    printf("    1. Ambitieux\n");
    printf("    2. Protecteur\n");
    printf("    3. Loyal\n");
    printf("    4. Empathique\n");
    printf("\nChoisissez un nombre entre 1, 2, 3 et 4 : ");
    scanf("%d", &question1);

    printf("Êtes-vous plutôt :\n");
    printf("    1. Rusé\n");
    printf("    2. Aventurié\n");
    printf("    3. Travailleur\n");
    printf("    4. Intelligent\n");
    printf("\nChoisissez un nombre entre 1, 2, 3 et 4 : ");
    scanf("%d", &question2);

    printf("\nÊtes-vous plutôt :\n");
    printf("    1. Manipulateur\n");
    printf("    2. Impulsif\n");
    printf("    3. Trop prudent\n");
    printf("    4. Indépendant\n");

    printf("\nChoisissez un nombre entre 1, 2, 3 et 4 : ");
    scanf("%d", &question3);

    printf("\nÊtes-vous plutôt :\n");
    printf("    1. Egocentrique\n");
    printf("    2. Charismatique\n");
    printf("    3. Réservé\n");
    printf("    4. Introverti\n");

    printf("\nChoisissez un nombre entre 1, 2, 3 et 4 : ");
    scanf("%d", &question4);

    printf("Êtes-vous plutôt :\n");
    printf("    1. Franc\n");
    printf("    2. Courageux\n");
    printf("    3. Loyal\n");
    printf("    4. Réfléchi\n");
    printf("\nChoisissez un nombre entre 1, 2, 3 et 4 : ");
    scanf("%d", &question5);

    printf("Êtes-vous plutôt :\n");
    printf("    1. Ingénieux\n");
    printf("    2. Audacieux\n");
    printf("    3. Travailleur\n");
    printf("    4. Créatif\n");
    printf("\nChoisissez un nombre entre 1, 2, 3 et 4 : ");
    scanf("%d", &question6);

    printf("\nÊtes-vous plutôt :\n");
    printf("    1. Opportuniste\n");
    printf("    2. Téméraire\n");
    printf("    3. Trop prudent\n");
    printf("    4. Rêveur\n");

    printf("\nChoisissez un nombre entre 1, 2, 3 et 4 : ");
    scanf("%d", &question7);

    printf("\nÊtes-vous plutôt :\n");
    printf("    1. Persévérant\n");
    printf("    2. Enthousiaste\n");
    printf("    3. Sincère\n");
    printf("    4. Observateur\n");

    printf("\nChoisissez un nombre entre 1, 2, 3 et 4 : ");
    scanf("%d", &question8);

    printf("Êtes-vous plutôt :\n");
    printf("    1. Ambitieux\n");
    printf("    2. Courageux\n");
    printf("    3. Aimable\n");
    printf("    4. Curieux\n");
    printf("\nChoisissez un nombre entre 1, 2, 3 et 4 : ");
    scanf("%d", &question9);

    printf("Êtes-vous plutôt :\n");
    printf("    1. Rusé\n");
    printf("    2. Audacieux\n");
    printf("    3. Dévoué\n");
    printf("    4. Logique\n");
    printf("\nChoisissez un nombre entre 1, 2, 3 et 4 : ");
    scanf("%d", &questionX);


    int totalPoints = question1 + question2 + question3 + question4 + question5 + question6 + question7 + question8 + question9 + questionX;

    switch (totalPoints)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("<< SERPENTARD !!! >> cria le choixpeau.\n");
            break;
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
            printf("<< GRYFFONDOR !!! >> cria le choixpeau.\n");
            break;
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
            printf("<< POUFFSOUFFLE !!! >> cria le choixpeau.\n");
            break;

        default:
            printf("<< SERDAIGLE !!! >> cria le choixpeau.\n");
            break;
    }

    return 0;
}
