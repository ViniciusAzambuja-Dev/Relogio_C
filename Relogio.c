#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    for(int ano = 2023; ano <= 9999; ano++)
    {
        for(int mes = 1; mes <= 12; mes++)
        {
            int ultimo = 31;

            if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
            {
                ultimo = 30;
            }
            else if(mes == 2)
            {
                if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
                {
                    ultimo = 29;
                }
                else
                {
                    ultimo = 28;
                }
            }

            for(int dia = 1; dia <= ultimo; dia++)
            {
                for(int hora = 0; hora < 24; hora++)
                {
                    for(int minuto = 0; minuto < 60; minuto++)
                    {
                        for(int segundo = 0; segundo < 60; segundo++)
                        {
                            system("cls");
                            printf("%04i/%02i/%02i %02i:%02i:%02i\n", ano, mes, dia, hora, minuto, segundo);
                            Sleep(1000);
                        }
                    }
                }
            }
        }
    }
    return 0;
}