#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
//#include <

/*
    Jonathan Starks

    Helpful websites:
    - CPlusPlus.com
    - stackoverflow.com
    - codeacademy.com
    - w3schools.com
    - geeksforgeeks.org
*/

std::vector<std::string> user_inv
    {
        " Stick",
        " Rope",
        " Bottle (water)"
    };

std::vector<std::string> item_desc
    {
        " Its a stick.",
        " A rope made of tightly woven fibers.",
        " A glass bottle filled with water."
    };

// The inventory menu, it has options that relate to the items that you have.
int inventory_menu()
{
    int inv_nav = 0;
    std::cout << "========== INVENTORY MENU ==========" << std::endl;
    std::cout << "1. View items\n2. Return to main\n" << std::endl;
    std::cout << "-> ";
    std::cin >> inv_nav;

    // This is where the items in the user's inventory will be shown.
    // It will be a numbered list that shows the name of the item from a list or an array.
    if (inv_nav == 1)
    {
        // This section will show the items in the user's inventory with a number infront of it.
        std::cout << "========= INVENTORY MENU 2 =========" << std::endl;
        for (int i = 0; i < user_inv.size(); i++)
        {
            std::cout << i + 1 << "." << user_inv[i] << "\n";
        }
        std::cout << "------------------------------------" << std::endl;
        std::cout << "1. Inspect item\n2. Drop item\n3. Back to Inventory Menu" << std::endl;
        std::cout << "-> ";
        std::cin >> inv_nav;

        // If the user says to inspect an item the program will display the description of 
        // the corosponding item from the description list.
        if (inv_nav == 1)
        {
            std::cout << "Which item: ";
            std::cin >> inv_nav;
            std::cout << item_desc[inv_nav - 1] << std::endl;
            inventory_menu();
        }

        // Asks the user what item they want to remove from their inventory.
        else if (inv_nav == 2)
        {
            std::cout << "Which item: ";
            std::cin >> inv_nav;
            user_inv.erase(user_inv.begin() + (inv_nav - 1));
            item_desc.erase(item_desc.begin() + (inv_nav - 1));
            inventory_menu();
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    return 0;
}

// This is the shop menu, it contains things that relate to buying or selling items.
int view_shop()
{
    int shop_nav = 0;
    std::cout << "============ SHOP  MENU ============" << std::endl;
    std::cout << "1. View items\n2. Return to main\n" << std::endl;
    std::cout << "-> ";
    std::cin >> shop_nav;

    // Items that the shop sells will appear here with a name and price.
    if (shop_nav == 1)
    {
        std::cout << "Sorry, this is under construction." << std::endl;
    }
    else 
    {
        return 0;
    }
    return 0;
}

// This option lets the user find random new items.
int new_things()
{
    std::cout<<"============ NEW  ITEMS ============" << std::endl;
    // These are the lists that deal with the name of and the description of new items.
    std::vector<std::string> potential_itms
    {
        " Sword",
        " Bottle (health)",
        " Dried Meat",
        " Rock",
        " Bow",
        " Arrow"
    };
    std::vector<std::string> pot_itm_desc
    {
        " A razor sharp blade that shines like new.",
        " A glass bottle filled with a health potion.",
        " Meat that has been cured with smoke and flavored with spices.",
        " Its a rock.",
        " A sturdy length of wood held back by a cord thats more than egar to snap straight.",
        " A shaft of wood with feathers on one end and a sharp stone on the other."
    };

    // Adds a random item and description from the lists to the user's items
    int item_number = rand() % 6;
    user_inv.insert(user_inv.end(), potential_itms.at(item_number));
    item_desc.insert(item_desc.end(), pot_itm_desc.at(item_number));
    std::cout<<"New item added.\n" << std::endl;
    return 0;
}

// This is the main part of the program, this is what runs.
int main()
{
    std::string user_name = "";
    bool active = true;
    // Asks for the user's name and greets the user.
    std::cout << "What's your name: ";
    std::cin >> user_name;
    std::cout << "Hello, " << user_name << "!" << std::endl;

    // While the variable active is equal to true the program will stay on.
    while (active == true)
    {
        int menu_nav = 0;
        std::cout << "============ MAIN  MENU ============" << std::endl;
        std::cout << "1. View inventory\n2. View shop\n3. Find new items\n4. End program\n" << std::endl;
        std::cout << "Enter the number next to your choice here -> ";
        std::cin >> menu_nav;
        if (menu_nav == 1)
        {
            inventory_menu();
        }
        else if (menu_nav == 2)
        {
            view_shop();
        }
        else if (menu_nav == 3)
        {
            new_things();
        }
        else
        {
            active = false;
            return 0;
        }
    }
}