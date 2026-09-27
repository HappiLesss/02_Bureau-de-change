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

using namespace std;

int main () {
    //Definition des constantes
    const float taux_change = 1.024;
    const float frais_operation = 5.00;
    int numero_compte = 0;
    float solde_compte = 1000.00;

    //Demande de saisie de par l'utilisateur
    cout<<"Quel est votre numéro de compte ?"<<endl;
    cin>>numero_compte;
    string nom_famille;
    cout<<"Quel est votre nom de famille ?"<<endl;
    cin>>nom_famille;

    //Affichage des informations du compte (Solde, taux de changge, frais opération
    cout<<"Solde de votre compte CHF : "<<solde_compte<<endl;
    cout<<"Taux de change : 1 CHF = "<<taux_change<<" Euro"<<endl;
    cout<<"Frais d'opération : "<< frais_operation<<" CHF"<<endl;

    //Demande de saisie du montant souhaité en euro à l'utilisateur
    cout <<"Entrez la somme souhaitée en Euro : "<<endl;

    //Initilialisation des frais retirés en euro
    float somme_retiree_euro =0;
    cin >>setprecision(2)>>somme_retiree_euro;
    float somme_retiree_franc= somme_retiree_euro/taux_change;
    solde_compte -= somme_retiree_franc+frais_operation;
    cout<<std::fixed<<setprecision(2);
    cout<< "Somme CHF : "<<somme_retiree_franc<<", Solde compte : " <<solde_compte << endl;

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
    cout<<cadre<<endl;
    cout<<separateur_ligne<<endl;
    cout<<separateur_ligne<< " "<<nom_famille<<endl;
    cout<<separateur_ligne<<" "<<numero_compte<<endl;
    cout<<separateur_ligne<<endl;
    cout<<separateur_ligne<<" "<<ligne_somme_euro<<separateur_colonne<<" "<<somme_retiree_euro<<endl;
    cout<<setprecision(3)<<separateur_ligne<<" "<<ligne_taux_change<<separateur_colonne<<" "<<taux_change<<endl;
    cout<<separateur_ligne<<endl;
    cout<<setprecision(2)<<separateur_ligne<<" "<<ligne_somme_chf<<separateur_colonne<<" "<<somme_retiree_franc<<endl;
    cout<<separateur_ligne<<" "<<ligne_frais<<separateur_colonne<<" "<<frais_operation<<endl;
    cout<<separateur_ligne<<endl;
    cout<<separateur_ligne<<" "<<ligne_solde_compte<<separateur_colonne<<" "<<solde_compte<<endl;
    cout<<separateur_ligne<<endl;
    cout<<cadre<<endl;

return EXIT_SUCCESS;
}