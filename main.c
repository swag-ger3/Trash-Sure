#include <stdio.h>              // Inclusion de la bibliothèque standard d'entrée/sortie

int main() {                    // Fonction principale du programme
    int choixPrincipal;         // Variable pour stocker le choix du menu principal
    int choixSecondaire;        // Variable pour stocker le choix du menu secondaire
    float valeur;               // Variable pour stocker la valeur à convertir
    float resultat;             // Variable pour stocker le résultat de la conversion
    char confirmation;          // Variable pour confirmer la valeur saisie
    char recommencer;           // Variable pour recommencer ou quitter le programme

    do {                        // Début de la boucle principale (reprise du programme)

        printf("\n===== CLEED CONVERT_X =====\n");   // Affichage du titre du programme
        printf("1. Longueur\n");                    // Option 1 : Longueur
        printf("2. Temperature\n");                 // Option 2 : Température
        printf("3. Masse\n");                       // Option 3 : Masse
        printf("Choisissez une option : ");          // Demande du choix utilisateur
        scanf("%d", &choixPrincipal);               // Lecture du choix utilisateur

        if (choixPrincipal < 1 || choixPrincipal > 3) { // Vérification de la validité du choix
            printf("❌ Choix invalide. Veuillez reessayer.\n"); // Message d'erreur
            continue;                               // Retour au début de la boucle
        }

        if (choixPrincipal == 1) {                  // Si l'utilisateur choisit Longueur
            printf("\n--- Conversion de Longueur ---\n"); // Titre du menu longueur
            printf("1. m -> km\n");                 // Option mètres vers kilomètres
            printf("2. km -> m\n");                 // Option kilomètres vers mètres
            printf("Choisissez : ");                // Demande du choix
            scanf("%d", &choixSecondaire);          // Lecture du choix

            if (choixSecondaire < 1 || choixSecondaire > 2) { // Validation du choix
                printf("❌ Choix invalide.\n");      // Message d'erreur
                continue;                           // Retour au menu principal
            }

            do {                                    // Début de la confirmation de valeur
                printf("Entrez la valeur : ");      // Demande de la valeur
                scanf("%f", &valeur);               // Lecture de la valeur
                printf("Confirmez la valeur %.2f ? (o/n) : ", valeur); // Confirmation
                scanf(" %c", &confirmation);        // Lecture de la confirmation
            } while (confirmation != 'o' && confirmation != 'O'); // Répéter si non confirmé

            if (choixSecondaire == 1)               // Si m -> km
                resultat = valeur / 1000;           // Conversion mètres en kilomètres
            else                                    // Sinon km -> m
                resultat = valeur * 1000;           // Conversion kilomètres en mètres

            printf("✅ Resultat : %.2f\n", resultat); // Affichage du résultat
        }

        else if (choixPrincipal == 2) {              // Si l'utilisateur choisit Température
            printf("\n--- Conversion de Temperature ---\n"); // Titre du menu
            printf("1. Celsius -> Fahrenheit\n");    // Option C vers F
            printf("2. Fahrenheit -> Celsius\n");    // Option F vers C
            printf("Choisissez : ");                 // Demande du choix
            scanf("%d", &choixSecondaire);           // Lecture du choix

            if (choixSecondaire < 1 || choixSecondaire > 2) { // Validation
                printf("❌ Choix invalide.\n");      // Message d'erreur
                continue;                           // Retour au menu principal
            }

            do {                                    // Début confirmation valeur
                printf("Entrez la valeur : ");      // Demande de la valeur
                scanf("%f", &valeur);               // Lecture de la valeur
                printf("Confirmez la valeur %.2f ? (o/n) : ", valeur); // Confirmation
                scanf(" %c", &confirmation);        // Lecture confirmation
            } while (confirmation != 'o' && confirmation != 'O'); // Répéter si non confirmé

            if (choixSecondaire == 1)               // Si Celsius -> Fahrenheit
                resultat = (valeur * 9 / 5) + 32;   // Formule de conversion
            else                                    // Sinon Fahrenheit -> Celsius
                resultat = (valeur - 32) * 5 / 9;   // Formule de conversion

            printf("✅ Resultat : %.2f\n", resultat); // Affichage du résultat
        }

        else if (choixPrincipal == 3) {              // Si l'utilisateur choisit Masse
            printf("\n--- Conversion de Masse ---\n"); // Titre du menu masse
            printf("1. kg -> g\n");                 // Option kilogrammes vers grammes
            printf("2. g -> kg\n");                 // Option grammes vers kilogrammes
            printf("Choisissez : ");                // Demande du choix
            scanf("%d", &choixSecondaire);          // Lecture du choix

            if (choixSecondaire < 1 || choixSecondaire > 2) { // Validation
                printf("❌ Choix invalide.\n");      // Message d'erreur
                continue;                           // Retour au menu principal
            }

            do {                                    // Début confirmation valeur
                printf("Entrez la valeur : ");      // Demande valeur
                scanf("%f", &valeur);               // Lecture valeur
                printf("Confirmez la valeur %.2f ? (o/n) : ", valeur); // Confirmation
                scanf(" %c", &confirmation);        // Lecture confirmation
            } while (confirmation != 'o' && confirmation != 'O'); // Répéter si non confirmé

            if (choixSecondaire == 1)               // Si kg -> g
                resultat = valeur * 1000;           // Conversion en grammes
            else                                    // Sinon g -> kg
                resultat = valeur / 1000;           // Conversion en kilogrammes

            printf("✅ Resultat : %.2f\n", resultat); // Affichage du résultat
        }

        printf("\nVoulez-vous effectuer une autre conversion ? (o/n) : "); // Question de reprise
        scanf(" %c", &recommencer);                 // Lecture de la réponse

    } while (recommencer == 'o' || recommencer == 'O'); // Condition de répétition

    printf("\n🙏 Merci d’avoir utilise CLEED CONVERT_X\n"); // Message de fin

    return 0;                                       // Fin normale du programme
}
