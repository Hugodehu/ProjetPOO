#pragma once
#include "Header.h"
#include "pch.h"

namespace NS_BDDservice
{
    ref class Service_Authentification
    {
    private:
        NS_load::CLload^ oCad;
        NS_BDD::Authentification^ oMappTB;

    public:
        System::Data::DataSet^ CheckAuthentification(System::String^, System::String^);
        System::Data::DataSet^ CheckSup();
    };

    ref class service_Personnel
    {
    private:
        NS_load::CLload^ oCad;
        NS_BDD::Personnel^ oPersonnel; 
        NS_BDD::Authentification^ oAuth;
        NS_BDD::Adresse^ oAdress;
        NS_BDD::Ville^ oVill;
    public:
        void Ajouter_personnel(System::String^ Nom, System::String^ Prenom, System::String^ Date_embauche, System::String^ id_sup, System::String^ email, System::String^ mdp, System::String^ rue, System::String^ Ville, System::String^ code_postal, System::String^ superieur);
        void Modifier_personnel(System::String^ id, System::String^ Nom, System::String^ Prenom, System::String^ Date_embauche, System::String^ id_sup, System::String^ email, System::String^ mdp, System::String^ rue, System::String^ Ville, System::String^ code_postal, System::String^ superieur);
        void effacer_personnel(System::String^ id, System::String^ Nom, System::String^ Prenom);
        System::Data::DataSet^ Afficher_personnel(System::String^, System::String^);
    };


    ref class service_Client
    {
    private:
        NS_load::CLload^ oCad;
        NS_BDD::Ville^ oVillle;
        NS_BDD::Client^ oClient;
        NS_BDD::Adresse^ oAdressse;
    public:
        void Ajouter_client(System::String^ ,System::String^ , System::String^ , System::String^, System::String^ , System::String^, System::String^, System::String^, System::String^, System::String^);
        void Modifier_client(System::String^ id, System::String^ Date_premiere_commande, System::String^ Nom, System::String^ Prenom, System::String^ Date_de_naissance, System::String^ rue_livraison, System::String^ ville_livraison, System::String^ Code_postal_livraison, System::String^ rue_facturation, System::String^ Ville_facturation, System::String^ code_postal_facturation);
        void effacer_client(System::String^, System::String^, System::String^);
        System::Data::DataSet^ Afficher_client(System::String^, System::String^);
    };

    ref class service_Article
    {
    private:
        NS_load::CLload^ oCad;
        NS_BDD::Article^ oArticle;
    public:
        void Ajouter_article(System::String^ Nom, System::String^ Quantit�, System::String^ Couleur, System::String^ tva, System::String^ remise, System::String^ moyen_paiement, System::String^ Date_paiment);
        void Modifier_article(System::String^ Id,System::String^ Nom, System::String^ Quantit�, System::String^ Couleur, System::String^ tva, System::String^ remise, System::String^ moyen_paiement, System::String^ Date_paiment);
        void effacer_article(System::String^, System::String^);
        System::Data::DataSet^ Afficher_article(System::String^ Nom, System::String^ couleur);
    };

    ref class service_Commande
    {
    private:
        NS_load::CLload^ oCad;
        NS_BDD::Commande^ oCommande;
        NS_BDD::Article^ oArticl;
        NS_BDD::Paiement^ oPaiement;
    public:
        void Ajouter_commande(System::String^ Nom, System::String^ Quantit�, System::String^ Couleur, System::String^ tva, System::String^ remise, System::String^ moyen_paiement, System::String^ Nbr_paiement, System::String^ Date_prem_paiment, System::String^ Date_paiement);
        void Modifier_commande(System::String^ Reference, System::String^ Nom, System::String^ Quantit�, System::String^ Couleur, System::String^ tva, System::String^ remise, System::String^ moyen_paiement, System::String^ Nbr_paiement, System::String^ Date_prem_paiment, System::String^ Date_paiement);
        void effacer_commande(System::String^);
        System::Data::DataSet^ Afficher_commande(System::String^);
    };
}
