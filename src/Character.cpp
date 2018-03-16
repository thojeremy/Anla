#include <iostream>

#include "Character.h"

using namespace std;

Character::Character(string name, int legs, int arms)
{
    m_name = name;
    m_legs = legs;
    m_arms = arms;
}

Character::~Character()
{
    //dtor
}

void Character::introduction(){
    cout << "Hello, my name is " << m_name << " and I have " << m_legs << " legs and " << m_arms << " arms." << endl;
}
