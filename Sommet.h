#ifndef SOMMET_H
#define SOMMET_H
#include <vector>

class Sommet
{
    public:
        Sommet();
        ~Sommet();
    private:
        int m_num;
        std::vector<Sommet>m_adjacent;
};

#endif // SOMMET_H
