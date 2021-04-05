#ifndef GRAPHE_H
#define GRAPHE_H
#include <vector>
#include "Sommet.h"
#include <string>
#include <iostream>
#include <queue>

class Graphe
{
    public:
        Graphe();
        ~Graphe();
       Graphe(std::string m_nomFichier);
       void Afficher() const;
       BFS(int initial);
    private:
    int m_orient; // graphe oriente 1 ou non orienté 0

    int m_ordre; //nombre de sommets
    int m_taille; // nombre d'arêtes d'arcs
  std::vector<Sommet*>m_sommets;
    };

#endif // GRAPHE_H
