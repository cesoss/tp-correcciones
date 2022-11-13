#include"carrera.h"




int crono_carrera(int,int,int);

int crono_carrera(int seg, int minu, int hora){
    seg=0,minu=0,hora=0;
    datos_t tiempo;
    long cantidad;
    datos_t *corredor;   
    corredor=(datos_t*)malloc(sizeof(datos_t));
    if(!corredor) printf("ERROR de memoria");

    printf("los corredores son:  %d\n\n",corredor->numero_c);
    do{
            tiempo.tiempo=cronometro_h(seg,minu,hora);

            printf("\r%.2d:%.2d:%.2d",hora,minu,seg);

            cantidad++;
            printf("\n\ncantidad de corredores que pasaron son:  %d\n\n",cantidad);
    }while(1);
    printf("\nfuera de carrera....");


    return 0;
}

int comienzo_carrera(int cant, int tiempos){




    return tiempos;
}

int main(){
    int a=0,b=0,c=0;
    long tiempos;
    tiempos=crono_carrera(a,b,c);
    datos_t *corredores;
    printf("\nNumero de Corredor --------  Tiempo: \n  -%d  -------- %.2d-",corredores->numero_c,tiempos);


    free(corredores);

    return 0;
}
