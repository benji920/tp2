#ifndef GRAPHE_H
#define GRAPHE_H
#include <vector>
#include "Sommet.h"
#include <string>
#include <fstream>
#include <iostream>

class Graphe
{
    public:
        Graphe(std::string nomFichier);
        ~Graphe();
       Charger(std::string m_nomFichier);
       void Afficher() const;
    private:
    int m_orient=0; // graphe oriente 1 ou non orienté 0
    std::vector<Sommet*>m_sommets;
    int m_ordre=0; //nombre de sommets
    int m_taille=0; // nombre d'arêtes d'arcs

    };

#endif // GRAPHE_H
