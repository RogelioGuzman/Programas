#include <stdio.h>
#include <conio.h>

int main()
{
    int op,Vf;
    float R;

    printf("\n\tPara que LED le gustaria calcular la resistencia\n\t1.Rojo std\n\t2.Blanco\n\t3.Azul brillante\n\n\tOpcion:\t");
    scanf("%i", &op);
    if (op==1)
    {
        printf("\n\tIngrese el valor de la fuente\n\t");
        scanf("%i", &Vf);
        printf("\n\tEl voltaje en el LED Rojo std= 1.5v");
        printf("\n\tEl valor de la corriente del LED Rojo std=0.0015A");
        R=(Vf-1.5)/0.0015;
        printf("\n\tEl valor de la resistencia para el LED Rojo std= %.2f",R);
    }
   if (op==2)
    {
        printf("\n\tIngrese el valor de la fuente\n\t");
        scanf("%i", &Vf);
        printf("\n\tEl voltaje en el LED  Blanco= 2.8v");
        printf("\n\tEl valor de la corriente del LED Blanco= 0.02A");
        R=(Vf-2.8)/0.02;
        printf("\n\tEl valor de la resistencia para el LED Blanco= %.2f",R);
    }
       if (op==3)
    {
        printf("\n\tIngrese el valor de la fuente\n\t");
        scanf("%i", &Vf);
        printf("\n\tEl voltaje en el LED Azul brillante= 3v");
        printf("\n\tEl valor de la corriente del LED Azul brillante= 0.02A");
        R=(Vf-3)/0.02;
        printf("\n\tEl valor de la resistencia para el LED Azul brillante= %.2f",R);
    }
}
