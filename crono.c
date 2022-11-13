#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cronometro_h(int,int,int);

int cronometro_h(int seg,int minu,int hora){
    seg = 0, minu=0, hora=0;

    while(1){

        seg++;
        if(seg==60){
            seg=0;
            minu++;
            if(minu==60){
                    minu=0;
                    hora++;

            }
        }
        system("cls");
        printf("TIEMPO: %d : %d : %d \n\n",hora,minu,seg);

    }

    return 0;
}
