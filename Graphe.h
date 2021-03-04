#ifndef GRAPHE_H
#define GRAPHE_H
#include <vector>
#include "Sommet.h"
#include <string>

class Graphe
{
    public:
        Graphe();
        ~Graphe();
       Charger(std::string m_nomFichier);
       void Afficher() const;
    private:
    int m_orient; // graphe oriente 1 ou non orient� 0
    std::vector<Sommet*>m_sommets;
    int m_ordre; //nombre de sommets
    int m_taille; // nombre d'ar�tes d'arcs

    };

#endif // GRAPHE_H
