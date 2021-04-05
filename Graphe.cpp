#include "Graphe.h"

Graphe::Graphe()
{
    //ctor
}

Graphe::~Graphe()
{
    //dtor
}
Graphe::Graphe(std::string nomFichier)
        {
            std::ifstream ifs{nomFichier};
            if (!ifs)
                throw std::runtime_error( "Impossible d'ouvrir en lecture " + nomFichier );
            ifs >> m_orientation;
            if ( ifs.fail() )
                throw std::runtime_error("Probleme lecture orientation du graphe");
            int ordre;
            ifs >> ordre;
            if ( ifs.fail() )
                throw std::runtime_error("Probleme lecture ordre du graphe");
            int taille;
            ifs >> taille;
            if ( ifs.fail() )
                throw std::runtime_error("Probleme lecture taille du graphe");
            for (int i=0; i<ordre; ++i)
                m_sommets.push_back( new Sommet{i} );
            int num1,num2;
            for (int i=0;i<taille;++i){
                ifs>>num1>>num2;
                if ( ifs.fail() )
                throw std::runtime_error("Probleme lecture arc");
                m_sommets[num1]->ajouterSucc(m_sommets[num2]);
                if(!m_orientation) m_sommets[num2]->ajouterSucc(m_sommets[num1]);
            }
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
