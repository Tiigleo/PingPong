#include <iostream>
#include <windows.h>
#include "jugador.h"
#include "pelota.h"
#include "gotoxy.h"


int main(){
    Jugador A(6,6);
    Jugador B(73,6);
    Pelota P(38,14,1,1);
 
    A.Dibujar();
    B.Dibujar();

    int cont = 0;

    while(true) {
        A.Movimiento('w', 's');
        B.Movimiento('i', 'k');
        
        P.MoverPelota(A,B);
    }

    system("pause");
    return 0;
}