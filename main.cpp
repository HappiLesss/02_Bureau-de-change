/* --------------------------- 
Laboratoire : 03
Auteur(s) : Maxime Schmidhauser
Date : 23.09.2026
But : Bureau de change 
Remarque(s) : 
--------------------------- */
#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
    //Definition des constantes
    const double taux_change = 1.024;
    const double frais_operation = 5.00;
    int numero_compte = 0;
    double solde_compte = 1000.00;

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
    double somme_retiree_euro =0;
    cin >>somme_retiree_euro;
    double somme_retiree_franc= somme_retiree_euro/taux_change;
    solde_compte -= somme_retiree_franc+frais_operation;
    cout<< "Somme CHF : "<< somme_retiree_franc<<", Solde compte : " <<solde_compte << endl;

    //Définition des variables du ticket
    string cadre = "+-------------------------------+";
    char seprateur_colonne = '|';
    string ligne_somme_euro = "Somme Euro             : ";
    string ligne_taux_change = "1 CHF en Euro          : ";
    string ligne_somme_chf  ="Somme CHF              : ";
    string ligne_frais = "Frais                  : ";
    string ligne_solde_compte = "Solde Compte           : ";

    //Affichage du ticket
    cout<<cadre<<endl;
    cout<<seprateur_colonne<<endl;
    cout<<seprateur_colonne<< nom_famille<<endl;
    cout<<seprateur_colonne<<numero_compte<<endl;
    cout<<seprateur_colonne<<endl;
    cout<<seprateur_colonne<<" "<<ligne_somme_euro<<somme_retiree_euro<<endl;
    cout<<seprateur_colonne<<" "<<ligne_taux_change<<taux_change<<endl;
    cout<<seprateur_colonne<<endl;
    cout<<seprateur_colonne<<" "<<ligne_somme_chf<<somme_retiree_franc<<endl;
    cout<<seprateur_colonne<<" "<<ligne_frais<< frais_operation<<endl;
    cout<<seprateur_colonne<<endl;
    cout<<seprateur_colonne<<" "<<ligne_solde_compte<<solde_compte<<endl;
    cout<<seprateur_colonne<<endl;
    cout<<cadre<<endl;

return EXIT_SUCCESS;
}