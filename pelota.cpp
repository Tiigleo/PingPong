
#include <iostream>
#include <windows.h>
#include "jugador.h"
#include "pelota.h"
#include "gotoxy.h"

using namespace std;

Pelota::Pelota(int _x, int _y, int _dx, int _dy) : x(_x), y(_y), dx(_dx), dy(_dy){}


void Pelota::DibujarPelota() const{
    char pelota = 79;
    gotoxy(x,y); cout<<pelota;
}

void Pelota::BorrarPelota() const{
    gotoxy(x,y); cout<<" ";
}

void Pelota::MoverPelota(Jugador A, Jugador B){
    BorrarPelota();
    x += dx; //la coordenada que ya vale más su incremento
    y += dy;
    DibujarPelota();
    if( x + dx == 3 || x + dx == 76){
        BorrarPelota();
        dx = -dx; //cambiamos de dirección la pelota para que se mueva al otro lado si llega a rebotar
    }
    if( y + dy == 3 || y + dy == 23){
        dy = -dy;
    }
    if(x + dx == A.RX() && y >= A.RY() -2 && y <= A.RY() + 2) {dx = -dx;}
    if(x + dx == B.RX() && y >= B.RY() -2 && y <= B.RY() + 2) {dx = -dx;}  
    Sleep(100);
}
