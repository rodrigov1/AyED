#include "Nodo.h"
#include "Lista.h"

using namespace std;

template <class T> class Cola : public Lista<T> {
public:
  Cola(void) { Lista<T>(); };
  //~Cola(void);
  T tope() { return this->last(); };
  bool colavacia(void) { return this->esvacia(); };
  void encolar(T a) { this->add(a); };
  void desencolar(void) { this->borrar_last(); };
  T ultimo(void) { return this->cabeza(); };
  string imprimir(string s) { return this->toPrint(s); };
  int sizeCola() {
    if (this->esvacia())
      return 0;
    return 1 + this->resto()->size();
  };
};