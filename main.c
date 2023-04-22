#include <stdio.h>

// Fonction pour additionner deux nombres
int addition(int a, int b) {
    return a + b;
}

// Fonction pour soustraire deux nombres
int soustraction(int a, int b) {
    return a - b;
}

// Fonction pour multiplier deux nombres
int multiplication(int a, int b) {
    return a * b;
}

// Fonction pour diviser deux nombres
int division(int a, int b) {
    if (b == 0) {
        printf("Erreur : division par zero !\n");
        return 0;
    } else {
        return a / b;
    }
}

int main() {
    int choix;
    int nombre1, nombre2;
    int resultat;

    // Boucle pour afficher le menu et obtenir le choix de l'utilisateur
    while (1) {
        printf("=== Calculatrice ===\n");
        printf("1. Addition\n");
        printf("2. Soustraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        // Quitter le programme si choix == 5
        if (choix == 5) {
            printf("Au revoir !\n");
            break;
        }

        // Obtenir les nombres de l'utilisateur
        printf("Entrez le nombre 1 : ");
        scanf("%d", &nombre1);
        printf("Entrez le nombre 2 : ");
        scanf("%d", &nombre2);

        // Effectuer l'opération en fonction du choix de l'utilisateur
        switch (choix) {
            case 1:
                resultat = addition(nombre1, nombre2);
                printf("Le resultat de l'addition est : %d\n", resultat);
                break;
            case 2:
                resultat = soustraction(nombre1, nombre2);
                printf("Le resultat de la soustraction est : %d\n", resultat);
                break;
            case 3:
                resultat = multiplication(nombre1, nombre2);
                printf("Le resultat de la multiplication est : %d\n", resultat);
                break;
            case 4:
                resultat = division(nombre1, nombre2);
                printf("Le resultat de la division est : %d\n", resultat);
                break;
            default:
                printf("Erreur : choix invalide !\n");
                break;
        }
    }

    return 0;
}
