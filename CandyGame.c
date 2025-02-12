#include <stdio.h>
#include <stdlib.h>

void gotoxy(int x, int y) {
    printf("\x1b[%d;%df", y, x);
}

int main(){
    int candyX = 40, candyY = 1, boxX = 40, boxY = 22, score = 0, lifeline = 3, d;
    char ch;

    start:
        gotoxy(60,5);
        printf("Score = %d", score);
        gotoxy(60,6);
        printf("Lifeline = %d", lifeline);

        gotoxy(candyX, candyY);
        printf("0");
        gotoxy(boxX, boxY);
        printf("#      #");
        gotoxy(boxX, boxY+1);
        printf("########");

        if(1){
            scanf("%c", &ch);
            switch(ch){
                case 'A': if(boxX>1)
                            boxX--;
                          break;
                case 'a': if(boxX>1)
                            boxX--;
                          break;
                case 'D': if(boxX<73)
                            boxX++;
                          break;
                case 'd': if(boxX<73)
                            boxX++;
                          break;
                case 'x': exit(0);
                case 'X': exit(0);

            }
        }

        candyY++;
        if(candyY == 22){
            d = candyX - boxX;
            if(d>=1 && d<=6)
                score++;
            else{
                lifeline--;
                if(lifeline == 0){
                    gotoxy(40,13);
                    printf("Game is over.");
                    scanf("%c", &ch);
                    exit(0);
                }
            }

            candyY = 1;
            
            candyX = rand()%80+1;

            goto start;
        }
}

