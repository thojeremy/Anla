#include <iostream>

#include "Character.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Character player("Alna", 2, 2);
    player.introduction();

    return 0;
}
