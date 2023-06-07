// #include <gtest/gtest.h>
// #include "Character.h"
// #include "inventory.h"

// // Test 1
// TEST(InventoryTest, IncreaseUserAttack_Mario) {
//     Character char1("Mario", 100, 50);
//     Character char2("Bowser", 200, 75);
//     Inventory inventory;
//     inventory.useInventory(char1, char2);

//     EXPECT_EQ(120, char1.getAttack());
// }

// //Test 2
// TEST(InventoryTest, DecreaseOpponentDefense_Kirby) {
//     Character char1("Kirby", 150, 60);
//     Character char2("Bowser", 200, 75);
//     Inventory inventory;
//     inventory.useInventory(char1, char2);

//     EXPECT_EQ(54, char2.getDefense());
// }