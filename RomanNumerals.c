#include <stdio.h>
#include <string.h>

int main()
{
 char str[] = "MMCDXIX";
 int i, bandera = 0, suma = 0, flag = 0, strLength = strlen(str);

for (i = 0; i <= strLength; i++)
{
 if (i != 0 && flag != 0)
 {
     i = i - 1;
 }

 if ((int)(str[i]) == 73) // I
 {
     if ((int)(str[i + 1]) == 88) // X
     {
         suma = suma + 9;
         bandera = 1;
     }

     if ((int)(str[i + 1]) == 86) // V
     {
         suma = suma + 4;
         bandera = 1;
     }

     if ((int)(str[i]) == 73 && bandera != 1)
     {
         if ((int)(str[i + 1]) == 73) // X
         {
             suma = suma + 1;
             flag = 0;
         }

         else
         {
             suma = suma + 1;
             flag = 0;
         }
     }

     if (bandera == 1)
     {
         i += 2;
         flag = 1;
     }

     bandera = 0;
 }

 if ((int)(str[i]) == 86) // V
 {
     suma = suma + 5;
 }

 if ((int)(str[i]) == 88) // X
 {
     if ((int)(str[i + 1]) == 67) // C
     {
         suma = suma + 90;
         bandera = 1;
     }

     if ((int)(str[i + 1]) == 76) // L
     {
         suma = suma + 40;
         bandera = 1;
     }

     if ((int)(str[i]) == 88 && bandera != 1)
     {
         if ((int)(str[i + 1]) == 88) // X
         {
             suma = suma + 10;
             flag = 0;
         }

         else
         {
             suma = suma + 10;
             flag = 0;
         }
     }

     if (bandera == 1)
     {
         i += 2;
         flag = 1;
     }

     bandera = 0;
 }

 if ((int)(str[i]) == 76) // L
 {
     suma = suma + 50;
 }

 if ((int)(str[i]) == 67) // C
 {
     if ((int)(str[i + 1]) == 77) // M
     {
         suma = suma + 900;
         bandera = 1;
     }

     if ((int)(str[i + 1]) == 68) // D
     {
         suma = suma + 400;
         bandera = 1;
     }

     if ((int)(str[i]) == 67 && bandera != 1)
     {
         if ((int)(str[i + 1]) == 67) // X
         {
             suma = suma + 100;
             flag = 0;
         }

         else
         {
             suma = suma + 100;
             flag = 0;
         }
     }

     if (bandera == 1)
     {
         i += 2;
         flag = 1;
     }

     bandera = 0;
 }

 if ((int)(str[i]) == 68) // D
 {
     suma = suma + 500;
 }

 if ((int)(str[i]) == 77) // M
 {
     suma = suma + 1000;
 }
}

printf("%s\n", str);
printf("%d\n", suma);

return 0;
}
