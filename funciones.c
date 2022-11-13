#include"carrera.h"




int crono_carrera(int,int,int);

int crono_carrera(int seg, int minu, int hora){
    long tiempo;
    long cantidad;
    datos_t *corredor;

    printf("los corredores son:  %d\n\n",corredor->numero_c);
    do{

        for(hora=0;hora<24;hora++){
            for(minu=0;minu<60;minu++){
                for(seg=0;seg<60;seg++){
                    Sleep(1000);
                    printf("\r%.2d:%.2d:%.2d",hora,minu,seg);





                }

            }
        } cantidad++;
    }while(corredor->numero_c==0);
    printf("\nfuera de carrera....");
    printf("\n\ncantidad de corredores que pasaron son:  %d\n\n",cantidad);









    return tiempo;
}

int comienzo_carrera(int cant, int tiempos){




    return tiempos;
}

int main(){
    int a,b,c;
    crono_carrera(a,b,c);




    return 0;
}
