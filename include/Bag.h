#ifndef BAG_H
#define BAG_H

#include <set>
#include <iterator>
#include <string>

#include "Item.h"

class Bag
{
    public:
        Bag();
        virtual ~Bag();

        // Actions
        void addItem(std::string name, int amount);
        Item removeItem(std::string name, int amount);
        void printItems();

    protected:

    private:
        std::set<Item> m_items;
};

#endif // BAG_H
