#ifndef PAGINA_H
#define PAGINA_H

class Pagina {
  private:
	int id;
	int size;
	bool arrived = 0;
	int orig[2];
	int dest[2];

  public:
	Pagina(int id, int size, int origen[2], int dest[2]) {
		this->id = id;
		this->size = size;
		this->orig[0] = origen[0];
		this->orig[1] = origen[1];
		this->dest[0] = dest[0];
		this->dest[1] = dest[1];
	};
	//~Pagina();         (tira error por alguna razon)
	int getId() { return id; };
	int *getDest() { return dest; };
	int *getOrigin() { return orig; };
	bool getArrived() { return arrived; };
	void setArrived() { arrived = 1; };
	int getSize() { return size; };
};

#endif
