#include "MainUI.h"

MainUI::MainUI()
{
    //ctor
}

MainUI::~MainUI()
{
    //dtor
}

void MainUI::startUI(){

    char selection = '\0';

    while (selection != 'q'){

        cout << "p: pizzas" << endl;
        cout << "e: edit toppings" << endl;
        cout << "d: display pizza" << endl;
        cout << "q: quit" << endl;

        cin >> selection;

        if (selection == 'p'){
            PizzaUI pizzaui;
            pizzaui.startUI();
        cout << endl;
        }
        if (selection == 'e'){
            /*PizzaUI chooseToppings;
            chooseToppings.editToppings();*/
        }
        else if (selection == 'd'){

        cout << "Display ordered pizzas: " << endl;
        }
    }

}
