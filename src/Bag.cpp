#include <iostream>

#include "Bag.h"

using namespace std;

/**************
 *
 * Constructor
 *
 **************/
Bag::Bag(){}

/**************
 *
 * Destructor
 *
 **************/
Bag::~Bag(){}

/**************
 *
 * Actions
 *
 **************/
/**
 *  Adds an item in the bag
 *  @param  item    The item to add
 *  @param  amount  The amount to add
 */
void Bag::addItem(string name, int amount){
    set<Item>::iterator it;

    // Checking if the item is already in the bag
    bool found = false;
    for(it = m_items.begin(); it != m_items.end() && !found; ++it){
        Item i = *it;
        found = name == i.getName();
    }

    // If it is in...
    if(found){
        // ... then it adds it
        --it;
        it->add(amount);
    } else {
        // ... else it creates it...
        Item item(name, amount);

        // ... and adds it
        m_items.insert(item);
    }
}

/**
 *  Removes an item in the bag
 *  @param  nale    The name of the item to remove
 *  @param  amount  The amount to remove
 *  @return Item    The item removed, or null if none
 */
Item Bag::removeItem(string name, int amount){
    // TODO
    Item item(name, amount);
    return item;
}

/**
 *  Prints the items in the bag
 */
void Bag::printItems(){
    for (set<Item>::iterator it=m_items.begin(); it!=m_items.end(); ++it){
        cout << *it ;
    }
}
