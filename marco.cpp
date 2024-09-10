#include "marco.h"
#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void gotoxy(int x, int y){   
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y= y;
    SetConsoleCursorPosition(hcon, dwPos);
}

Marco::Marco(int _ancho, int _alto, int _x_i, int _y_i) : ancho(_ancho), alto(_alto), x_i(_x_i), y_i(_y_i) {}

void Marco::DibujarMarco(){
    gotoxy(x_i, y_i); cout<<218;
    gotoxy(x_i + ancho -1, y_i); cout<<191;
    gotoxy(x_i, y_i + alto -1); cout<<192;
    gotoxy(x_i + ancho -1, y_i + alto-1); cout<<127;
    for(int i=1; i<ancho-1;i++){
        gotoxy(x_i + i, y_i); cout<<"_";
        gotoxy(x_i, y_i + alto-1); cout<<"_";
    }

    for(int i=1;i<alto-1;i++){
        gotoxy(x_i, y_i + i); cout<<"|";
        gotoxy(x_i + ancho-1, y_i + i); cout<<"|";
    }
}