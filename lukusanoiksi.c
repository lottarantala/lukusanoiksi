#include <stdio.h>
#include <math.h>

int main()
{
    int numero, jakaja = 1000, n = 0;

    /* Input number from user */
    printf("Anna numero\n");
    scanf("%d", &numero);

    while(numero != 0){
        switch(numero / jakaja){
            case 1:
                if(numero == 1)
                    printf("yksi");
                break;
            case 2: 
                printf("kaksi");
                break;
            case 3: 
                printf("kolme");
                break;
            case 4: 
                printf("nelja");
                break;
            case 5: 
                printf("viisi");
                break;
            case 6: 
                printf("kuusi");
                break;
            case 7: 
                printf("seitseman");
                break;
            case 8: 
                printf("kahdeksan");
                break;
            case 9: 
                printf("yhdeksan");
                break;
        }
        if(numero / jakaja == 1 && numero >= 1000){
            printf("tuhat");
        }
        else if(numero / jakaja > 1 && numero > 1000){
            printf("tuhatta");
        }
        else if(numero >= 100){
            n += 1;
            printf("sataa");
        }
        else if(numero >= 10 && numero / jakaja != 0){
            printf("kymmenta");
        }
        numero -= (numero / jakaja) * jakaja;
        if(numero > 10 && numero < 20){
            switch (numero)
            {
            case 11:
                printf("yksitoista");
                numero = 0;
                break;
            case 12:
                printf("kaksitoista");
                numero = 0;
                break;
            case 13:
                printf("kolmetoista");
                numero = 0;
                break;
            case 14:
                printf("neljatoista");
                numero = 0;
                break;
            case 15:
                printf("viisitoista");
                numero = 0;
                break;
            case 16:
                printf("kuusitoista");
                numero = 0;
                break;
            case 17:
                printf("seitsemantoista");
                numero = 0;
                break;
            case 18:
                printf("kahdeksantoista");
                numero = 0;
                break;
            case 19:
                printf("yhdeksantoista");
                numero = 0;
                break;
            }

        }
        jakaja /= 10;
    }
    
    return 0;
}