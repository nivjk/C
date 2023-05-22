
/* Créer le 22 mai 2023
* par Nivetha Jeyakumar
* Master IRS P33
* 
* C vs Python
*
*/

#include <stdio.h>

int sorcier(char *nom, char *maison, int vole);

int main(void) {

    /* Appel des fonctions pour afficher les informations concernant les sorciers */
    sorcier("Harry", "Gryffondor", 1);
    sorcier("Ron", "Gryffondor", 0);
    sorcier("Nivetha", "Poufsouffle", 1);
    return 0;
}

int sorcier(char *nom, char *maison, int vole) {
    printf("\n%s a rejoint la maison %s.\n", nom, maison);

    if (vole == 1) {
        printf("%s peut s'envoler avec son balai magique.\n", nom);
    } else {
        printf("%s n'a pas réussi à s'envoler avec son balai magique.\n", nom);
    }

    return 0;
}




