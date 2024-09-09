#include "jugador.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
#include "gotoxy.h"

using namespace std;

Jugador::Jugador(int _x, int _y) : x(_x), y(_y) {} //asignar valores a parametros


void Jugador::Dibujar() const {
    char pala = 219;
    gotoxy(x, y-1); cout<<pala;
    gotoxy(x, y); cout<<pala;
    gotoxy(x, y+1); cout<<pala;
}

void Jugador::Borrar() const {
    gotoxy(x, y-1); cout<<" ";
    gotoxy(x, y); cout<<" ";
    gotoxy(x, y+1); cout<<" ";
}

void Jugador::Movimiento(char up, char down){
    char tecla;
    if(kbhit()){
        Borrar();
        tecla = getch();
        if(tecla == up && y>3 ){
            y--;
        } else if (tecla == down && y<23){
            y++;
        }
        Dibujar();
        }
    }
