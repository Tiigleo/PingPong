#ifndef JUGADOR_H
#define JUGADOR_H

class Jugador{
    private:  //atributos
        int x, y;
    public:  //Métodos
        Jugador (int _x, int _y); //constructor de la clase
        void Dibujar() const;  //const=no modifica datos miembros
        void Borrar() const;
        void Movimiento(char up, char down);
        int RY() {return y;}
        int RX() {return x;}
};


#endif