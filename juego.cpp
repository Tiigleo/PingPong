#include <iostream>
#include <windows.h>
#include <conio.h>
#include "juego.h"
#include "gotoxy.h"

using namespace std;

void MENU::portada(int &a){
    char portada[18][71] =
    {
    "                                                                      ",
    "     aaaaaaaas                                                        ",
    "   aaaaaaaaaaass                                   JUGAR              ",
    "   aa       aass                                                      ",
    "   aa       aass                                                      ",
    "   aa       aass                                                      ",
    "   aaaaaaaaaass                                                       ",
    "   aaaaaaaaas                                                         ",
    "   aass                                                               ",
    "   aass    aaaas    aaas   aas   aaaaas                               ",
    "   aass  aa    aas  aasas  aas  aa    as                              ",
    "   aass  aa    aas  aas as aas  aa                                    ",
    "   aass  aa    aas  aas  asaas  aa  aaaa                              ",
    "   aass  aa    aas  aas   aaas  aa    aas                             ",
    "   aass  aa    aas  aas    aas  aaaaaaaas                             ",
    "   aass    aaaas    aas    aas   aaaaa a                              ",

    };

    for(int i=0;i<16;i++){
        for(int j=0;j<70;j++){
            gotoxy(j+5,i+5);
            cout<<portada[i][j];
        }
    }
    a=getch();

    for(int i=0;i<16;i++){
        for(int j=0;j<70;j++){
            gotoxy(j+5,i+5);
            cout<<" ";
        }
    }

}

Marco::Marco(int _ancho, int _alto, int _x_i, int _y_i) : ancho(_ancho), alto(_alto), x_i(_x_i), y_i(_y_i) {}

void Marco::DibujarMarco(){
    char a = 201, b=186, c=187, d=188, e=200, f=205;
    gotoxy(x_i, y_i); cout<<a;
    gotoxy(x_i + ancho -1, y_i); cout<<c;
    gotoxy(x_i, y_i + alto -1); cout<<e;
    gotoxy(x_i + ancho -1, y_i + alto-1); cout<<d;
    for(int i=1; i<ancho-1;i++){
        gotoxy(x_i + i, y_i); cout<<f;
        gotoxy(x_i + i, y_i + alto-1); cout<<f;
    }

    for(int i=1;i<alto-1;i++){
        gotoxy(x_i, y_i + i); cout<<b;
        gotoxy(x_i + ancho-1, y_i + i); cout<<b;
    }
}



