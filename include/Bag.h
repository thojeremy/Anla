#ifndef BAG_H
#define BAG_H

#include <set>

#include "Item.h"

class Bag
{
    public:
        Bag();
        virtual ~Bag();

        // Actions
        void addItem(Item item);
        Item removeItem(Item item);

    protected:

    private:
        std::set<Item> items;
};

#endif // BAG_H
