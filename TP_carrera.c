#include"carrera.h"
void lista_corredores(void);
//void ver_listado(datos_t* datos);
void imprimir_menu(void);



void imprimir_menu(void){



    printf("\n\n--------------  BIENVENIDOS A LA CARRERA    ----------------\n\n\n\n");

    printf("MENU PARA CARGAR DATOS DE LOS COMPETIDORES:\n");
    printf("\n1-Cargar datos-");
    printf("\n2-Ver listado-");
    printf("\n3-Corregir datos-");
    printf("\n4-Copiar en Archivo-");
    printf("\n5-Iniciar Carrera-");
    printf("\n6-SALIR DEL PROGRAMA-\n");
    printf("Ingrese una Opcion del Menu\n\n\n\n==> ");

    //scanf("%d",&opcion);





}

datos_t* agregar_competidor(){

    datos_t* ingresar=malloc(sizeof(datos_t));
    if(!ingresar)printf("ERROR de memoria");
    fflush(stdin);

    printf("-----INGRESAR DATOS DE COMPETIDOR/A----\n\n");
    printf("Nombre y Apellido: ");
    gets(ingresar->nombre);
    printf("Edad: ");
    scanf("%d",&ingresar->edad);
    printf("Categoria: ");
    scanf("%c%d",&ingresar->c,&ingresar->categoria);
    printf("Ingrese DNI: ");
    scanf("%d",&ingresar->dni);
    printf("Numero de participante: ");
    scanf("%d",&ingresar->numero_c);
    free(ingresar);
    return ingresar;
}
void ver_listado(datos_t* datos){

    printf("-------- Listado Ingresado--------\n\n");
    fflush(stdin);
    printf("Nombre: %s , #%.2d ,edad %d , cat %d, DNI: %d",datos->nombre,datos->numero_c,datos->edad,datos->categoria,datos->dni);



}
void copiar_archivo(void){
    FILE* listado_carrera;
    datos_t* datos_t;

    if((listado_carrera=fopen("listado_carrera.txt","rt+"))==NULL)printf("ERROR de archivo");
    if(fwrite(&datos_t,sizeof(datos_t),1,listado_carrera))printf("ERROR no se pudo copiar datos");

    fclose(listado_carrera);
}
void corregir_datos(){
    int salir=0;
    printf("salir con 1");
    scanf("%d",&salir);
    while(salir==0){
        printf("vemos como se hace");
    }

   }
int iniciar_carrera(int s,int m,int h ){
                long tiempo;
                int inicio=0;
                printf("Para iniciar el Cronometro ingrese: #0 \nPara detener el cronometro ingrese: #1\n");
                scanf("%d",inicio);
                while(1){
                        tiempo=cronometro_h(s,m,h);

                }
                printf("\ntiempo de carrera: %d\n",tiempo);

    return tiempo;
}


int main(){
    int o,salir=0, tiempo;
    int s=0,m=0,h=0;
    datos_t* lista;


    while(salir==0){
            o=-1;
            imprimir_menu();
            fflush(stdin);
            scanf("%d",&o);


            if(o==1)agregar_competidor();
            if(o==2)ver_listado(lista);
            if(o==3)corregir_datos();
            if(o==4)copiar_archivo();
            if(o==5)iniciar_carrera();
            if(o==6)salir=1;

    }




    return 0;
}
