#include <stdio.h>
#include <windows.h>
#include <conio.h>

void gotoxy(int x, int y){
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;

    SetConsoleCursorPosition(hCon, dwPos);

}

int main(){
    int x=10, y=10;
    gotoxy(x,y);
    
    bool gameover = false ;
    while(!gameover){
    

        if(kbhit()){
            char tecla = getch();
            gotoxy(x,y);printf(" ");
            if(tecla == 'j')x--;
            if(tecla == 'l')x++;
            if(tecla == 'i')y--;
            if(tecla == 'k')y++;
            gotoxy(x,y); printf("*");
        }
        Sleep(30);
    }
    getchar();
    return  0;


}