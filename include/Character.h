#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include "Bag.h"

class Character
{
    public:
        Character(std::string name, int legs, int feet, int arms, int hands);
        virtual ~Character();

        // Actions
        void introduction();
        bool isDead();
        bool isOutOfMana();
        int hit();
        void increaseHealth(int increase);
        void increaseMana(int increase);
        void decreaseHealth(int decrease);
        void decreaseMana(int decrease);

        // Setters
        void setLegs(int legs);
        void setArms(int arms);
        void setHands(int hands);
        void setFeet(int feet);

        void setMaxHealth(int max_health);
        void setMaxMana(int max_mana);
        void setHealth(int health);
        void setMana(int mana);
        void setStrength(int strength);

        void setName(std::string name);

        // Getters
        int getLegs();
        int getArms();
        int getHands();
        int getFeet();

        int getMaxHealth();
        int getMaxMana();
        int getHealth();
        int getMana();
        int getStrength();

        std::string getName();

    protected:

    private:
        // Body
        int m_legs;
        int m_arms;
        int m_hands;
        int m_feet;

        // Stats
        int m_max_health;
        int m_max_mana;
        int m_health;
        int m_mana;
        int m_strength;

        // The person itself
        std::string m_name;

        // Bag
        Bag m_bag;
};

#endif // CHARACTER_H
