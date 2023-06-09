#ifndef INVENTORY
#define INVENTORY
#include <string>
#include "Character.h"

using namespace std;

class Inventory{
 	public:
        void useHealthPotion(Character &char1);
        void useAttackPotion(Character &char1);
        void useDefensePotion(Character &char1);
};

#endif