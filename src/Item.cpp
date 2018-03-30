#include <iostream>

#include "Item.h"

using namespace std;

/**************
 *
 * Constructor
 *
 **************/
Item::Item(string name, int amount) : m_name{name}, m_amount{amount}{
}

/**************
 *
 * Destructor
 *
 **************/
Item::~Item(){}

/**************
 *
 * Getters
 *
 **************/
string Item::getName() const{
    return m_name;
}

/**************
 *
 * Actions
 *
 **************/
/**
 *  Shows the item's informations
 */
void Item::informations() const{
    cout << m_name << " (" << m_amount << ")" << endl;
}

/**
 *  Returns the amount of the item
 *  @return The amount
 */
int Item::getAmount() const{
    return m_amount;
}

/**
 *  Adds a certain amount
 *  @param  amount  The amount
 *  @return The new amount
 */
int Item::add(int amount) const{
    m_amount += amount;
    return m_amount;
}

/**
 *  Removes a certain amount
 *  @param  amount  The amount
 *  @return -1  If the amount to delete is higher than the current amount
 *          The new amount else
 */
int Item::rem(int amount) const{
    int retcode = m_amount - amount >= 0 ? -1 : m_amount - amount;

    m_amount = retcode == -1 ? m_amount : retcode;

    return retcode;
}

/**
 *  Controls if the item doesn't have an amount anymore
 *  @return TRUE    If the item has a null amount
 *          FALSE   Else
 */
bool Item::isEmpty() const{
    return m_amount == 0;
}

bool Item::operator< (const Item & item) const{
    return (m_name < item.m_name) && (m_amount < item.m_amount);
}
ostream& operator<<(ostream& os, const Item& obj){
	os<< obj.m_name << " (" << obj.m_amount << ")" << endl;
	return os;
}
