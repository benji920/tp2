#include "Graphe.h"

Graphe::Graphe()
{
    //ctor
}

Graphe::~Graphe()
{
    //dtor
}
 Graphe::Charger(std::string nomFichier){


}

void Graphe::Afficher() const{
if(m_orient==1){
    std::cout<<"graphe oriente"<<std::endl;

}
else {

    std::cout<<"graphe non oriente"<<std::endl;
}

std::cout<<"Ordre : "<<m_ordre<<std::endl;

}

Graphe::BFS(int initial){

std::vector<int>lpreds;
std::vector<Sommet>SommetsDecouverts;
std::queue<Sommet>Parcours;

for(int i=0;i<m_ordre;i++){

    //On commence au sommet initial
  //  for(int j=0; j<((Sommet(initial)).m_adjacent).size;j++){
 //   if(Sommet(initial)->m_adjacent[])
  //  }
}
}
