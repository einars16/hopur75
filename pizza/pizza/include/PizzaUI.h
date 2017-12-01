#ifndef PIZZAUI_H
#define PIZZAUI_H
#include <iostream>
#include "Pizza.h"
#include "PizzaRepository.h"

using namespace std;

class PizzaUI
{
    public:
        PizzaUI();
        virtual ~PizzaUI();

        void startUI();
        //void editToppings();

    protected:

    private:
        //PizzaRepository pizzarepo;
};

#endif // PIZZAUI_H
