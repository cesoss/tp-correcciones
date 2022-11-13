#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<malloc.h>


int cronometro_h(int,int,int);

typedef struct carga_datos{
    char nombre[20];
    int numero_c;
    int edad;

    int categoria;
    char c;
    long dni;
    long tiempo;

}datos_t;


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
        printf("TIEMPO: %.2d : %.2d : %.2d \n\n",hora,minu,seg);
        Sleep(1000);


    }

    return 0;
}

