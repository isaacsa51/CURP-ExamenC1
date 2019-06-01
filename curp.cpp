#include <stdio.h>
#include <string.h>
#include <ctype.h>

main(){
    char apePat[50];
    char apeMat[50];
    char nombre[50];
    char nacio[2];
    char genero, apePatVo, apePatCo, apeMatCo, nombCo;
    int dia, mes, anio;
    int i=0;

    printf("Ingrese su apellido paterno: ");
    scanf("%s", &apePat);
    printf("Ingrese su apellido materno (en caso de no tener, ingresar la letra x): ");
    scanf("%s", &apeMat);
    printf("Ingrese su primer nombre: ");
    scanf("%s", &nombre);
    printf("Fecha de nacimiento (ej: dd/mm/aa): ");
    scanf("%d/%d/%d", dia,mes,anio);

    printf("\nIngrese la abreviatura del lugar de nacimiento: \n\t1. Sinaloa (SL) \n\t2. Sonora (SN) \n\t3. Ciudad de Mexico (DF) \nOpcion: ");
    scanf("%s", &nacio);

    //CALCULAR CURP CON TODOS LOS DATOS
    //Primera letra apePat
    char apePatPrim = apeMat[0];
    printf("%c", apePatPrim);

    //Primera vocal apePat
    if(apePatPrim == 'a'){
        int lenPat = strlen(apePat);
            for(int i=0; i<lenPat; i++){
           	if(apePat[i] == 'e' || apePat[i] == 'i' || apePat[i] == 'o' || apePat[i] == 'u' || apePat[i] == 'E' || apePat[i] == 'I' || apePat[i] == 'O' || apePat[i] == 'U'){
                //Obtener primera vocal
                apePatVo = apePat[i];
                break;
            }
        int lenPat = strlen(apePat);
        	for(int i=0; i<lenPat; i++){
           	if(apePat[i] == 'a' || apePat[i] == 'i' || apePat[i] == 'o' || apePat[i] == 'u' || apePat[i] == 'A' || apePat[i] == 'I' || apePat[i] == 'O' || apePat[i] == 'U'){
                //Obtener primera vocal
                apePatVo = apePat[i];
                break;	
            }
        }
    }else if(apePatPrim == 'i'){
        	int lenPat = strlen(apePat);
        	for(int i=0; i<lenPat; i++){
            	if(apePat[i] == 'a' || apePat[i] == 'e' || apePat[i] == 'o' || apePat[i] == 'u' || apePat[i] == 'A' || apePat[i] == 'E' || apePat[i] == 'O' || apePat[i] == 'U'){
                //Obtener primera vocal
                apePatVo = apePat[i];
                break;	
           	    }
        	}
    }else if(apePatPrim == 'o'){
        int lenPat = strlen(apePat);
        for(int i=0; i<lenPat; i++){
            if(apePat[i] == 'a' || apePat[i] == 'e' || apePat[i] == 'i' || apePat[i] == 'u' || apePat[i] == 'A' || apePat[i] == 'E' || apePat[i] == 'I' || apePat[i] == 'U'){
                //Obtener primera vocal
                apePatVo = apePat[i];
                break;	
        	}
        }
    }else if(apePatPrim == 'u'){
        int lenPat = strlen(apePat);
        for(int i=0; i<lenPat; i++){
        	if(apePat[i] == 'a' || apePat[i] == 'e' || apePat[i] == 'i' || apePat[i] == 'o' || apePat[i] == 'A' || apePat[i] == 'E' || apePat[i] == 'I' || apePat[i] == 'O'){
                //Obtener primera vocal
                apePatVo = apePat[i];
                break;	
        	}
    	}
    }else{
        int lenPat = strlen(apePat);
        for(int i=0; i<lenPat; i++){
            if(apePat[i] == 'a' || apePat[i] == 'e' || apePat[i] == 'i' || apePat[i] == 'o' || apePat[i] == 'u' || apePat[i] == 'A' || apePat[i] == 'E' || apePat[i] == 'I' || apePat[i] == 'O' || apePat[i] == 'U'){
                //Obtener primera vocal
                apePatVo = apePat[i];
                break;	
            }
        }
    }
    printf("%c", apePatVo);

    //Primer letra apeMat
    char apeMatPrim = apeMat[0];
	printf("%c", apeMatPrim);

    //Primera letra nombre
    char nombPrim = nombre[0];
    printf("%c", nombPrim);

    //Primera consonate apePat
    int lenPat = strlen(apePat);
    for(int i=0; i<lenPat; i++){
        if(apePat[i] == 'b' || apePat[i] == 'c' || apePat[i] == 'd' || apePat[i] == 'f' || apePat[i] == 'g' || apePat[i] == 'h' || apePat[i] == 'j' || apePat[i] == 'k' || apePat[i] == 'l' || apePat[i] == 'm' || apePat[i] == 'n' || apePat[i] == 'p' || apePat[i] == 'q' || apePat[i] == 'r' || apePat[i] == 's' || apePat[i] == 't' || apePat[i] == 'v' || apePat[i] == 'w' || apePat[i] == 'x' || apePat[i] == 'y' || apePat[i] == 'z' || apePat[i] == 'B' || apePat[i] == 'C' || apePat[i] == 'D' || apePat[i] == 'F' || apePat[i] == 'G' || apePat[i] == 'H' || apePat[i] == 'J' || apePat[i] == 'K' || apePat[i] == 'L' || apePat[i] == 'M' || apePat[i] == 'N' || apePat[i] == 'P' || apePat[i] == 'Q' || apePat[i] == 'R' || apePat[i] == 'S' || apePat[i] == 'T' || apePat[i] == 'V' || apePat[i] == 'W' || apePat[i] == 'X' || apePat[i] == 'Y' || apePat[i] == 'Z'){
            //Sacar una primera consonante del apellido
            apePatCo = apePat[i];
            break;
        }
    }
    printf("%c", apePatCo);

    //Primera consonante apeMat
    int lenMat =strlen(apeMat);
    for(int i=0; i<lenMat; i++){
        if(apeMat[i] == 'b' || apeMat[i] == 'c' || apeMat[i] == 'd' || apeMat[i] == 'f' || apeMat[i] == 'g' || apeMat[i] == 'h' || apeMat[i] == 'j' || apeMat[i] == 'k' || apeMat[i] == 'l' || apeMat[i] == 'm' || apeMat[i] == 'n' || apeMat[i] == 'p' || apeMat[i] == 'q' || apeMat[i] == 'r' || apeMat[i] == 's' || apeMat[i] == 't' || apeMat[i] == 'v' || apeMat[i] == 'w' || apeMat[i] == 'x' || apeMat[i] == 'y' || apeMat[i] == 'z' || apeMat[i] == 'B' || apeMat[i] == 'C' || apeMat[i] == 'D' || apeMat[i] == 'F' || apeMat[i] == 'G' || apeMat[i] == 'H' || apeMat[i] == 'J' || apeMat[i] == 'K' || apeMat[i] == 'L' || apeMat[i] == 'M' || apeMat[i] == 'N' || apeMat[i] == 'P' || apeMat[i] == 'Q' || apeMat[i] == 'R' || apeMat[i] == 'S' || apeMat[i] == 'T' || apeMat[i] == 'V' || apeMat[i] == 'W' || apeMat[i] == 'X' || apeMat[i] == 'Y' || apeMat[i] == 'Z'){
            //Scar una primera consonate de la apellido
            apeMatCo = apeMat[i];
            break;
        }
    }
    printf("%c", apeMatCo);

    //Primera consonante nombre
    int lenNomb = strlen(nombre);
    for(int i=0; i<lenNomb; i++){
        if(nombre[i] == 'b' || nombre[i] == 'c' || nombre[i] == 'd' || nombre[i] == 'f' || nombre[i] == 'g' || nombre[i] == 'h' || nombre[i] == 'j' || nombre[i] == 'k' || nombre[i] == 'l' || nombre[i] == 'm' || nombre[i] == 'n' || nombre[i] == 'p' || nombre[i] == 'q' || nombre[i] == 'r' || nombre[i] == 's' || nombre[i] == 't' || nombre[i] == 'v' || nombre[i] == 'w' || nombre[i] == 'x' || nombre[i] == 'y' || nombre[i] == 'z' || nombre[i] == 'B' || nombre[i] == 'C' || nombre[i] == 'D' || nombre[i] == 'F' || nombre[i] == 'G' || nombre[i] == 'H' || nombre[i] == 'J' || nombre[i] == 'K' || nombre[i] == 'L' || nombre[i] == 'M' || nombre[i] == 'N' || nombre[i] == 'P' || nombre[i] == 'Q' || nombre[i] == 'R' || nombre[i] == 'S' || nombre[i] == 'T' || nombre[i] == 'V' || nombre[i] == 'W' || nombre[i] == 'X' || nombre[i] == 'Y' || nombre[i] == 'Z'){
            nombCo = nombre[i];
            break;
        }
    }
    printf("%c", nombCo);
    
    //Imprimir resultado
    printf("%c%c%c%c%02d%02d%02d%c%s%%c%c%c%02d", apePatPrim, apePatVo, apeMatPrim, nombPrim, anio, mes, dia, genero, nacio, apePatCo, apeMatCo, nombCo, dia);
}
