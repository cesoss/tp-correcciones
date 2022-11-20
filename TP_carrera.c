#include"carrera.h"




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
//ingreso de los datos de los competidores
datos_t* agregar_competidor(void){

    short opc;

    cola_t *cola=NULL, *aux=NULL,*local=NULL;

    datos_t* ingresar=malloc(sizeof(datos_t));
    if(!ingresar)printf("ERROR de memoria");
    fflush(stdin);
    do{
        aux=(cola_t*)malloc(sizeof(cola_t));
        if(!aux)printf("ERROR de cola");


        printf("-----INGRESAR DATOS DE COMPETIDOR/A----\n\n");
        printf("Nombre y Apellido: ");
        gets(aux->datos.nombre);
        printf("Edad: ");
        scanf("%d",&aux->datos.edad);
        printf("Categoria: ");
        scanf("%c%d",&aux->datos.categoria);
        printf("Ingrese DNI: ");
        scanf("%d",&aux->datos.dni);
        printf("Numero de participante: ");
        scanf("%d",&aux->datos.numero_c);

        aux->siguiente=NULL;
        if(cola==NULL){
            cola=aux;
            local=aux;
        }else{
            local->siguiente=aux;
            local=aux;
        }
        printf("\nIngresa a otro Competidor? (si=1, no=0)");
        scanf("%d",&opc);
        




        free(ingresar);
        free(aux);

    }while(opc==1);

    return ingresar;
}

//arma una lista con los competidores, a medida que se cargan
void ver_listado(datos_t *ingresar ){
    cola_t *cola=NULL,*aux=NULL,*local=NULL;
    do{

        printf("-------------------- Listado Ingresado de COMPETIDORES-----------------------------\n\n");
        fflush(stdin);

        printf("Nombre: %s , #%.2d ,edad %d , cat %d, DNI: %d",cola->datos.nombre,cola->datos.numero_c,cola->datos.edad,cola->datos.categoria,cola->datos.dni);
        aux=cola;
        cola=cola->siguiente;
    }while(cola->siguiente=NULL);
    printf("------------------------------------------------------------------------------------------");
    printf("Nombre: %s , #%.2d ,edad %d , cat %d, DNI: %d",cola->datos.nombre,cola->datos.numero_c,cola->datos.edad,cola->datos.categoria,cola->datos.dni);
    printf("----------------------------------FIN DE LISTA--------------------------------------------");
    free(aux);



}

//se copian los datos en un archivo
void copiar_archivo(void){
    FILE* listado_carrera;
    datos_t* datos_t;

    if((listado_carrera=fopen("listado_carrera.txt","at+"))==NULL)printf("ERROR de archivo");
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
//menu del programa

int menu(long tiempo){
    int o,salir=0;
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
            if(o==5)iniciar_carrera(s,m,h);
            if(o==6)salir=1;

    }




    return 0;
}
//comienzo de la carrera con el cronometro 
int crono_carrera(int seg, int minu, int hora){
    seg=0,minu=0,hora=0;
    datos_t tiempo;
    long cantidad;
    datos_t *corredor;
    corredor=(datos_t*)malloc(sizeof(datos_t));
    if(!corredor) printf("ERROR de memoria");
    cantidad=corredor->numero_c;

    printf("los corredores son:  %d\n\n",corredor->numero_c);
    do{
            tiempo.tiempo=cronometro_h(seg,minu,hora);

            printf("\r%.2d:%.2d:%.2d",hora,minu,seg);

            cantidad++;
            printf("\n\ncantidad de corredores que pasaron son:  %d\n\n",cantidad);
    }while(cantidad>1);
    printf("\nfuera de carrera....");


    return 0;
}
//funcion de largada de la carrera
int comienzo_carrera(long cant){
    datos_t tiempo;
    int s, m ,h;
    cant=tiempo.numero_c;

    while(cant>1){
        tiempo.tiempo=crono_carrera(s,m,h);


    }
    printf("----------------No inicio competencia!!!!!!!!!!!!!!!!!!!!!-------------------");




    return 0;
}
//main general del programa
int main(){
    int a=0,b=0,c=0;
    long tiempo;
    long cant, estado=0; 
    
    datos_t cantn;
    

    menu(tiempo);
    cant=cantn.numero_c;

    printf("lectura del sensor: 1:\n 2;\n 3:\n 4:\n 5:\n ");
    scanf("%d",&estado);
    while(cant>1){
        switch (estado)
        {
        case 1:
            crono_carrera(a,b,c);//empieza a correr el cronometro
            comienzo_carrera(cant);//cuenta la cantidad de participantes
            printf("los participantes son: %d\n",cant);//muestra los participantes
            break;
        case 2:
            printf("----------Pasaron por el segundo totem------\n");//muestran la lectura de los sensores
            break;
        case 3:
            printf("Los tiempos parciales son: %ld",tiempo);//muestra los tiempos parciales
            break;
        case 4:
            printf("-------lugar donde se encuentran los participantes segun lectura del sensor:     -----------");//muestra ubicacion de los participantes en la carrera
            break;
        case 5:
            printf("------------FINAL de carrera------------");
            printf(" resultados finales: %ld, %d",tiempo,cantn );//muestra los datos de la carrera
            break;
        default: printfg("ERROR de programa");     
        }




    }
    printf("\n\n-------------------------------Gracias por usar CARCRO!!!!!!!-----------------------\n\n");

    
    
    


    

    return 0;
}
