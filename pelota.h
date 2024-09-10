#ifndef PELOTA_H
#define PELOTA_H

class Pelota{
    private: //atributos
        int x, y;
        int dx, dy;
    public: //métodos
        Pelota(int _x, int _y, int _dx, int _dy); //constructor
        void DibujarPelota() const;
        void BorrarPelota() const;
        void MoverPelota(Jugador A, Jugador B);
        void asign(int _x, int _y) { x=_x; y=_y;}
};

#endif