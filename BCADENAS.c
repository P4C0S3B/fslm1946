#include"stdio.h"
#include"string.h"
int main()
{
    char password[2];
    do
    {
        printf("Ingrese un caracter de contrase�a usando un caracter especial: ");
        fgets(password,sizeof(password),stdin);
        if (strchr(password, '@') != NULL || strchr(password, '!') != NULL)
         {
            printf("Contrase�a aceptada.\n");
            break;
        }else{
            printf("Caracter incorrecto. Int�ntelo nuevamente.\n");
        }
    } while (1);
}
