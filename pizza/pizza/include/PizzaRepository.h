#ifndef PIZZAREPOSITORY_H
#define PIZZAREPOSITORY_H
#include "Pizza.h"
#include <fstream>

using namespace std;

class PizzaRepository
{
    public:
        PizzaRepository();
        virtual ~PizzaRepository();

        void storePizza(const Pizza& pizza);
        Pizza retrivePizza();
    protected:

    private:
};

#endif // PIZZAREPOSITORY_H
