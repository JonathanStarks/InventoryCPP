#include <iostream>
#include <string>
#include <vector>

/*
    Jonathan Starks

    Helpful websites:
    - CPlusPlus.com
    - stackoverflow.com
    - codeacademy.com
    - w3schools.com
*/

// The inventory menu, it has options that relate to the items that you have.
int inventory_menu()
{
    std::vector<std::string> user_inv
    {
        "+ Stick: Its a stick.",
        "+ Rope: Made of tightly woven fibers.",
        "+ Bottle (water): A glass bottle filled with water."
    };
    int inv_nav = 0;
    std::cout << "========== INVENTORY MENU ==========" << std::endl;
    std::cout << "1. View items\n2. Return to main\n" << std::endl;
    std::cout << "-> ";
    std::cin >> inv_nav;

    // This is where the items in the user's inventory will be shown.
    // It will be a numbered list that shows the name of the item from a list or an array.
    if (inv_nav == 1)
    {
        // I will change this in the futute to stay in here until told to exit.
        std::cout << "========= INVENTORY MENU 2 =========" << std::endl;
        for (int i = 0; i < user_inv.size(); i++)
            std::cout << user_inv[i] << "\n";
        std::cout << "1. Inspect item\n2. Drop item\n" << std::endl;
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
    /*  This code will randomly choose items to give to the user.  */
    std::cout<<"Sorry, this is under construction.\n" << std::endl;
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