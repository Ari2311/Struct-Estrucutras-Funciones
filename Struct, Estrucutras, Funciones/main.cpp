#include <stdio.h>
#include <stdlib.h>


     int opcion,opcion2;
   struct datos
    {
      char nombre[60];
      int  edad,reg, opcion;
      char ciudad[20];
  }persona[20]; // Array de struct con datos para 3 personas.
         
void Agregar(int , char [], int, char[]);
void Mostrar();
void Buscar();




int main(void)
         {

     puts("¿Qué deseas hacer?\n");
     puts("\t 1.-Agregar Registros\n");
     puts("\t 2.- Mostrar Registros\n");
     puts("\t 3-. Buscar Registros\n");
     scanf("%d", &opcion);
     system("cls");
             

     int i, reg, numero=0;
    char a;
             
     if(opcion>3){
            }
     else if (opcion==1){
         printf("\n¿Cuántos registros deseas hacer?:");
         scanf("%d", &persona[20].reg);
         getchar();
         
     }
     else if(opcion==2){
         printf("\nEstos son todos los registros: ");
         system("cls");
     }
     else if(opcion==3){
         
         printf("\nIntroduce cuál es el número de registro que buscas: \n1.1,\n2.2,\n3.3,\n4.4 ");
         scanf("%d", &opcion2);
}
    
         for (i=0; i<persona[20].reg; i++) //Pide datos de  personas y los guarda.
         {
         puts("Nombre:");
             fflush(stdin);
             fgets(persona[i].nombre, 60 , stdin);
                puts("Edad:");
                scanf("%d", &persona[i].edad);
                getchar();
                puts("Ciudad:");
             fflush(stdin);
             fgets(persona[i].ciudad, 20 , stdin);
     }
   
         int edad;
         char nombre, ciudad;
     switch(opcion)
     {
         case 1:
             Agregar(i+1, persona[i].nombre, persona[i].edad, persona[i].ciudad);
             break;
        case 2:
            Mostrar();
             break;
         case 3:
             if(opcion2>4){
                 printf("Ese número de registro no existe ");
             }
             else{
                 Buscar();}
             break;
             default:
            printf("OPCIÓN NO VALIDA ");
            exit(0);
            
}//Sale break
}
             
         


       void Agregar(int i, char[], int, char[])
{
    int reg, numero =0;
    for (i=0; i<persona[20].reg; i++){
    printf("Registro:%d\n\tNombre:%s\tEdad:%d\n\tCiudad:%s ",i+1, persona[i].nombre, persona[i].edad, persona[i].ciudad);
}
}
    void Mostrar()
{
    printf("\nRegistro: \n1.1, \n2.2, \n3.3,\n4.4,\n\nNombre: \n1.Leo,\n2.Ana,\n3.Sol,\n4.Rod,\n\nEdad: \n1.18,\n2.4,\n3.27,\n4.10,\n\nCiudad:,\n1.París,\n2.CDMX,\n3.Kansas,\n4.Oaxaca ");
    return;

}

void Buscar(){
    if(opcion2==1){
        printf("\nRegistro:\n1.1,\nNombre: \n1.Leo,\nEdad: \n1.18,\nCiudad,\n1.París ");}
    else if(opcion2==2){
        printf("\nRegistro:\n2.2,\nNombre: \n2.Ana,\nEdad: \n2.4,\nCiudad,\n1.CDMX ");}
      
    else if(opcion2==3){
           printf("\nRegistro:\n3.3,\nNombre: \n3.Sol,\nEdad: \n3.27, \n3.Kansas ");}
    else if(opcion2==4){
        printf("\nRegistro:\n4.4,\nNombre: \n4.Rod,\nEdad: \n4.10,\nCiudad,\n4.Oaxaca ");
        return;
         
    }
    }
    
     

   
