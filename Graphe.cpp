#include "Graphe.h"

Graphe::Graphe(std::string nomFichier)
{

std::ifstream monFlux("graphe.txt");  //On essaye d'ouvrir le fichier

if(monFlux)  //On teste si tout est OK
{
    std::cout << "fichier ouvert" << std::endl;
    std::string ligne;
    getline(monFlux, ligne);
    if(ligne=="1")
        m_orient=1;
    if(ligne=="0")
    m_orient==0;
    getline(monFlux, ligne);
    m_ordre=std::stoi(ligne);
    getline(monFlux, ligne);
    m_taille=std::stoi(ligne);
for(int i=0;i<m_taille;i++)
{
int a, b;
monFlux>>a;
std::cout<<a;
monFlux>>b;
std::cout<<b;
}
}
else
{
    std::cout << "ERREUR: Impossible d'ouvrir le fichier." << std::endl;
}

}

Graphe::~Graphe()
{
    //dtor
}



void Graphe::Afficher() const{
std::cout << m_orient<< std::endl;
std::cout << m_ordre<< std::endl;
std::cout << m_taille<<std::endl;

}


