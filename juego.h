#ifndef MENU_H
#define MENU_H

class MENU{
    public:
        void portada(int &a); 

};

class Marco{
    private: 
        int ancho, alto, x_i, y_i;
    public: 
        Marco(int _ancho, int _alto, int _x_i, int _y_i);
        void DibujarMarco();
};

#endif 