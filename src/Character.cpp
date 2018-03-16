#include <iostream>

#include "Character.h"

using namespace std;

/**************
 *
 * Constructor
 *
 **************/
Character::Character(string name, int legs, int feet, int arms, int hands)
{
    m_name = name;
    m_legs = legs;
    m_feet = feet;
    m_arms = arms;
    m_hands = hands;

    m_max_health = 100;
    m_max_mana = 100;
    m_health = 100;
    m_mana = 100;
    m_strength = 10;
}

/**************
 *
 * Destructor
 *
 **************/
Character::~Character(){}

/**************
 *
 * Setters
 *
 **************/
void Character::setArms(int arms){m_arms = arms;}
void Character::setLegs(int legs){m_legs = legs;}
void Character::setHands(int hands){m_hands = hands;}
void Character::setFeet(int feet){m_feet = feet;}
void Character::setMaxHealth(int max_health){m_max_health = max_health;}
void Character::setMaxMana(int max_mana){m_max_mana = max_mana;}
void Character::setHealth(int health){m_health = health;}
void Character::setMana(int mana){m_mana = mana;}
void Character::setStrength(int strength){m_strength = strength;}
void Character::setName(string name){m_name = name;}

/**************
 *
 * Getters
 *
 **************/
int Character::getArms(){return m_arms;}
int Character::getLegs(){return m_legs;}
int Character::getHands(){return m_hands;}
int Character::getFeet(){return m_feet;}
int Character::getMaxHealth(){return m_max_health;}
int Character::getMaxMana(){return m_max_mana;}
int Character::getMana(){return m_mana;}
int Character::getStrength(){return m_strength;}
string Character::getName(){return m_name;}

/**************
 *
 * Actions
 *
 **************/
/**
 *  Introduces the character
 */
void Character::introduction(){
    cout << "Hello, I am " << m_name << endl;
}
/**
 *  Controls if the character is dead or not
 *  @return    bool    TRUE    If it is dead
 *                      FALSE   Else
 */
bool Character::isDead(){
    return m_health <= 0;
}
/**
 *  Controls if the character is out of mana or not
 *  @return    bool    TRUE    If it is out of mana
 *                      FALSE   Else
 */
bool Character::isOutOfMana(){
    return m_mana <= 0;
}
/**
 *  Get the damages of the character when it hits something/someone
 *  @return    int     The health to decrease on the other thing/one
 */
int Character::hit(){
    return m_strength;
}
/**
 *  Increases the health by [increase]
 *  @param increase    The amount to increase
 */
void Character::increaseHealth(int increase){
    m_health = (m_health + increase > m_max_health ? m_max_health : m_health + increase);
}
/**
 *  Increases the mana by [increase]
 *  @param increase    The amount to increase
 */
void Character::increaseMana(int increase){
    m_mana = (m_mana + increase > m_max_mana ? m_max_mana : m_mana + increase);
}
/**
 *  Decreases the health by [decrease]
 *  @param decrease    The amount to decrease
 */
void Character::decreaseHealth(int decrease){
    m_health = (m_health - decrease < 0 ? 0 : m_health - decrease);
}
/**
 *  Decreases the health by [decrease]
 *  @param decrease    The amount to decrease
 */
void Character::decreaseMana(int decrease){
    m_mana = (m_mana - decrease < 0 ? 0 : m_mana - decrease);
}
