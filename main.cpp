/* --------------------------- 
Laboratoire : 03
Auteur(s) : Maxime Schmidhauser
Date : 23.09.2026
But : Bureau de change 
Remarque(s) : 
--------------------------- */
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
    //Definition des constantes
    const float taux_change = 1.024f;
    const float frais_operation = 5.00f;
    int numero_compte = 0;
    float solde_compte = 1000.00f;

    //Demande de saisie de par l'utilisateur
    std::cout<<"Quel est votre numéro de compte ?"<<std::endl;
    std::cin>>numero_compte;
    string nom_famille;
    std::cout<<"Quel est votre nom de famille ?"<<std::endl;
    std::cin>>nom_famille;

    //Affichage des informations du compte (Solde, taux de changge, frais opération
    std::cout<<"Solde de votre compte CHF : "<<solde_compte<<std::endl;
    std::cout<<"Taux de change : 1 CHF = "<<taux_change<<" Euro"<<std::endl;
    std::cout<<"Frais d'opération : "<< frais_operation<<" CHF"<<std::endl;

    //Demande de saisie du montant souhaité en euro à l'utilisateur
    std::cout <<"Entrez la somme souhaitée en Euro : "<<std::endl;

    //Initilialisation des frais retirés en euro
    float somme_retiree_euro =0.f;
    std::cin>>somme_retiree_euro;
    //On multiplie la valeur saisie par l'utilisateur par 100 pour récupérer les deux chiffres après la virgule et on arrondit au int supérieur
    float somme_retiree_franc= round((somme_retiree_euro/taux_change)*100);
    //On redivise notre résultat par 100 pour récupérer les deux chiffres après la virgule
    somme_retiree_franc /=100;
    solde_compte -= somme_retiree_franc+frais_operation;
    std::cout<<std::fixed<<setprecision(2);
    std::cout<< "Somme CHF : "<<somme_retiree_franc<<", Solde compte : " <<solde_compte << std::endl;

    //Définition des variables du ticket
    string cadre = "+-------------------------------+";
    char separateur_ligne= '|';
    char separateur_colonne= ':';
    string ligne_somme_euro = "Somme Euro             ";
    string ligne_taux_change = "1 CHF en Euro          ";
    string ligne_somme_chf  ="Somme CHF              ";
    string ligne_frais = "Frais                  ";
    string ligne_solde_compte = "Solde Compte           ";

    //Affichage du ticket
    std::cout<<cadre<<std::endl;
    std::cout<<separateur_ligne<<std::endl;
    std::cout<<separateur_ligne<< " "<<nom_famille<<std::endl;
    std::cout<<separateur_ligne<<" "<<numero_compte<<std::endl;
    std::cout<<separateur_ligne<<std::endl;
    std::cout<<separateur_ligne<<" "<<ligne_somme_euro<<separateur_colonne<<" "<<somme_retiree_euro<<std::endl;
    std::cout<<setprecision(3)<<separateur_ligne<<" "<<ligne_taux_change<<separateur_colonne<<" "<<taux_change<<std::endl;
    std::cout<<separateur_ligne<<std::endl;
    std::cout<<setprecision(2)<<separateur_ligne<<" "<<ligne_somme_chf<<separateur_colonne<<" "<<somme_retiree_franc<<std::endl;
    std::cout<<separateur_ligne<<" "<<ligne_frais<<separateur_colonne<<" "<<frais_operation<<std::endl;
    std::cout<<separateur_ligne<<std::endl;
    std::cout<<separateur_ligne<<" "<<ligne_solde_compte<<separateur_colonne<<" "<<solde_compte<<std::endl;
    std::cout<<separateur_ligne<<std::endl;
    std::cout<<cadre<<std::endl;

return EXIT_SUCCESS;
}