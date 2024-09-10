#include <iostream>
#include <windows.h>
#include "jugador.h"
#include "pelota.h"
#include "gotoxy.h"
#include "juego.h"


int main(){
    Marco pintar(76,23,1,1);
    Jugador A(6,6);
    Jugador B(73,6);
    MENU M;
    Pelota P(38,14,1,1);
    
    int cont = 0, op_juego;
    
    pintar.DibujarMarco();
    M.portada(op_juego);
    A.Dibujar();
    B.Dibujar();

    while(true) {
        A.Movimiento('w', 's');
        B.Movimiento('i', 'k');
        
        P.MoverPelota(A,B);
    }

    system("pause");
    return 0;
}