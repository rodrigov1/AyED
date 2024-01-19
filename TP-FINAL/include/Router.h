#ifndef ROUTER_H
#define ROUTER_H

#include "Lista.h"
#include "Terminal.h"

class Router
{
private:
    int id;
    int terminal;
    Lista<Router *> *routers_vecinos;
    Lista<Terminal *> *terminales_conectados;

    // Cola<Packages *> incomingPackages;
    // Cola<Packages *> outgoingPackages;

public:
    Router(){};
    Router(int id)
    {
        this->id = id;
        routers_vecinos = new Lista<Router *>();
        terminales_conectados = new Lista<Terminal *>();
    }
    void add_terminal(Terminal *t);
    int getId() { return id; };
    //~Router();
};

#endif