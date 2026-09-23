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
    string nom_famille;
    //Demande de saisie de par l'utilisateur
    cout<<"Quel est votre numéro de compte ?"<<endl;
    cin>>numero_compte;
    cout<<"Quel est votre nom de famille ?"<<endl;
    cin>>nom_famille;
    cout<<"Solde de votre compte "<<solde_compte<<endl;
    cout<<"Taux de change : 1 CHF = "<<taux_change<<" Euro"<<endl;
    cout<<"Frais d'opération :"<< frais_operation<<endl;
    cout <<"Entrez la somme souhaitée en Euro"<<endl;
    double somme_euro =0;
    cin >>somme_euro;
    double somme_franc= somme_euro/frais_operation;


}