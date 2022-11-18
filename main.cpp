#include <iostream>
#include <cstdlib>
#include <random>

using namespace std;

void vote(){

    // Déclaration des variables
    unsigned choix_1 = 0;
    unsigned choix_2 = 0;
    unsigned choix_3 = 0;
    unsigned choix_4 = 0;
    unsigned tirage;
    cout << "Quel est le meilleur jeu vidéo parmi :"
         << endl << "1. Counter strike (aka CS GO)"
         << endl << "2. Street Fighter II"
         << endl << "3. Civilization VI"
         << endl << "4. Mario Kart";

    // Génération d'un nombre aléatoire
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 4);

    // Boucle 'for' permettant de voter 112 fois aléatoirement
    for(int i = 0; i < 112; ++i){
        tirage = distr(gen);
        if(tirage == 1){
            ++choix_1;
        } else if (tirage == 2){
            ++choix_2;
        } else if (tirage == 3){
            ++choix_3;
        } else if (tirage == 4){
            ++choix_4;
        }
    }

    // Affichage des résultats
    cout << endl << "--------------------"
         << endl << "Résultat du vote :"
         << endl << "1. Counter strike (aka CS GO) : " << choix_1 << " votes"
         << endl << "2. Street Fighter II : " << choix_2 << " votes"
         << endl << "3. Civilization VI : " << choix_3 << " votes"
         << endl << "4. Mario Kart : " << choix_4 << " votes";
    cout << endl << "--------------------"
         << endl << "Le gagnant et ";

}

int main()
{
    vote();
    return 0;
}
