#ifndef SOMMET_H
#define SOMMET_H
#include <vector>
#include<iostream>
class Sommet
{
    public:
        Sommet();
        Sommet(int num);
        ~Sommet();
        std::vector<Sommet*>getAdjacent;
    private:
        int m_num;
        std::vector<Sommet*>m_adjacent;
};

#endif // SOMMET_H
