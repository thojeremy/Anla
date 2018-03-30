#include <iostream>

#include "Character.h"
#include "Bag.h"

using namespace std;

int main()
{
    Character player("Alna", 2, 2, 2, 2);
    player.introduction();

    cout << "-----------" << endl;

    Bag bag;
    bag.addItem("Test1", 1);
    bag.addItem("Test2", 2);
    bag.addItem("Test4", 4);
    bag.addItem("Test5", 5);
    bag.addItem("Test3", 3);
    bag.printItems();

    cout << "------------" << endl;

    bag.addItem("Test1", 6);
    bag.addItem("Test3", 6);
    bag.addItem("Test3", 6);
    bag.printItems();

    return 0;
}
