#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "Bag.h"

class Character
{
    public:
        Character(std::string name, int legs, int arms);
        void introduction();
        virtual ~Character();

    protected:

    private:
        int m_legs;
        int m_arms;
        std::string m_name;
        Bag m_bag;
};

#endif // CHARACTER_H
