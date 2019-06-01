#include <stdio.h>
#include <string.h>
#include <ctype.h>

main(){
    char pat[50];
	char mat[50];
    char nombre[50];
    char nac[2];
    char uppNac[2];
    char curp[20];
    char gen, voPat, coPat, coMat, coNomb;
    int dia, mes, anio;
    int i=0;

    printf("Apellido paterno: ");
    scanf("%s", &pat);
    
    printf("\nApellido materno (en caso de no tener poner una x): ");
    scanf("%s", &mat);

    //Checar si tiene apellido materno
    if(mat == "x" || mat == "X"){
        printf("\nNombre: ");
        scanf("%s", &nombre);
        
        printf("\nFecha de nacimiento (ej: dd/mm/aa): ");
        scanf("%d/%d/%d", &dia, &mes, &anio);

        printf("\nSi usted es hombre, ingrese H.");
        printf("\nSi usted es mujer, ingrese M.");
        scanf("%s", &gen);

        printf("\nIngrese la abreviatura de su lugar de nacimiento: \n 1- SINALOA (SL) \n 2- SONORA (SN) \n 3- MEXICO (DF) \nOpcion: ");
        scanf("%s", &nac);
        
        //CALCULAR CURP
        //Primera letra Pat
        char patPrim = pat[0];

        //Primera vocal Pat
        if(patPrim == 'a'){
        	int lenPat = strlen(pat);
        	for(i=0; i<lenPat; i++){
           	if(pat[i] == 'e' || pat[i] == 'i' || pat[i] == 'o' || pat[i] == 'u' || pat[i] == 'E' || pat[i] == 'I' || pat[i] == 'O' || pat[i] == 'U'){
                //Obtener primera vocal
                voPat = pat[i];
                break;
            	}
        	}
        }else if (patPrim == 'e'){
        	int lenPat = strlen(pat);
        	for(i=0; i<lenPat; i++){
           	if(pat[i] == 'a' || pat[i] == 'i' || pat[i] == 'o' || pat[i] == 'u' || pat[i] == 'A' || pat[i] == 'I' || pat[i] == 'O' || pat[i] == 'U'){
                //Obtener primera vocal
                voPat = pat[i];
                break;	
            	}
        	}
        }else if(patPrim == 'i'){
        	int lenPat = strlen(pat);
        	for(i=0; i<lenPat; i++){
            	if(pat[i] == 'a' || pat[i] == 'e' || pat[i] == 'o' || pat[i] == 'u' || pat[i] == 'A' || pat[i] == 'E' || pat[i] == 'O' || pat[i] == 'U'){
                //Obtener primera vocal
                voPat = pat[i];
                break;	
           	    }
        	}
        }else if(patPrim == 'o'){
        	int lenPat = strlen(pat);
        	for(i=0; i<lenPat; i++){
            	if(pat[i] == 'a' || pat[i] == 'e' || pat[i] == 'i' || pat[i] == 'u' || pat[i] == 'A' || pat[i] == 'E' || pat[i] == 'I' || pat[i] == 'U'){
                //Obtener primera vocal
                voPat = pat[i];
                break;	
            	}
       	    }
        }else if(patPrim == 'u'){
        	int lenPat = strlen(pat);
        	for(i=0; i<lenPat; i++){
            	if(pat[i] == 'a' || pat[i] == 'e' || pat[i] == 'i' || pat[i] == 'o' || pat[i] == 'A' || pat[i] == 'E' || pat[i] == 'I' || pat[i] == 'O'){
                //Obtener primera vocal
                voPat = pat[i];
                break;	
            	}
        	}
        }else{
            int lenPat = strlen(pat);
        	for(i=0; i<lenPat; i++){
            	if(pat[i] == 'a' || pat[i] == 'e' || pat[i] == 'i' || pat[i] == 'o' || pat[i] == 'u' || pat[i] == 'A' || pat[i] == 'E' || pat[i] == 'I' || pat[i] == 'O' || pat[i] == 'U'){
                //Obtener primera vocal
                voPat = pat[i];
                break;	
            	}
        	}
        }
        
        //Primera letra Mat
        char matPrim = mat[0];

        //Primera letra Nombre
        char nombPrim = nombre[0];

        //Primera consonante Pat
        int lenPat = strlen(pat);
        for(i=0; i<lenPat; i++){
            if(pat[i] == 'b' || pat[i] == 'c' || pat[i] == 'd' || pat[i] == 'f' || pat[i] == 'g' || pat[i] == 'h' || pat[i] == 'j' || pat[i] == 'k' || pat[i] == 'l' || pat[i] == 'm' || pat[i] == 'n' || pat[i] == 'p' || pat[i] == 'q' || pat[i] == 'r' || pat[i] == 's' || pat[i] == 't' || pat[i] == 'v' || pat[i] == 'w' || pat[i] == 'x' || pat[i] == 'y' || pat[i] == 'z' || pat[i] == 'B' || pat[i] == 'C' || pat[i] == 'D' || pat[i] == 'F' || pat[i] == 'G' || pat[i] == 'H' || pat[i] == 'J' || pat[i] == 'K' || pat[i] == 'L' || pat[i] == 'M' || pat[i] == 'N' || pat[i] == 'P' || pat[i] == 'Q' || pat[i] == 'R' || pat[i] == 'S' || pat[i] == 'T' || pat[i] == 'V' || pat[i] == 'W' || pat[i] == 'X' || pat[i] == 'Y' || pat[i] == 'Z'){
                //Sacar una primera consonante del apellido
                coPat = pat[i];
                break;
            }
        }

        //Primera consonante Mat
        int lenMat = strlen(mat);
        for(i=0; i<lenMat; i++){
            if(mat[i] == 'b' || mat[i] == 'c' || mat[i] == 'd' || mat[i] == 'f' || mat[i] == 'g' || mat[i] == 'h' || mat[i] == 'j' || mat[i] == 'k' || mat[i] == 'l' || mat[i] == 'm' || mat[i] == 'n' || mat[i] == 'p' || mat[i] == 'q' || mat[i] == 'r' || mat[i] == 's' || mat[i] == 't' || mat[i] == 'v' || mat[i] == 'w' || mat[i] == 'x' || mat[i] == 'y' || mat[i] == 'z' || mat[i] == 'B' || mat[i] == 'C' || mat[i] == 'D' || mat[i] == 'F' || mat[i] == 'G' || mat[i] == 'H' || mat[i] == 'J' || mat[i] == 'K' || mat[i] == 'L' || mat[i] == 'M' || mat[i] == 'N' || mat[i] == 'P' || mat[i] == 'Q' || mat[i] == 'R' || mat[i] == 'S' || mat[i] == 'T' || mat[i] == 'V' || mat[i] == 'W' || mat[i] == 'X' || mat[i] == 'Y' || mat[i] == 'Z'){
                //Sacar una primera consonante del apellido
                coMat = mat[i];
                break;
            }
        }

        //Primera consonante Nombre
        int lenNomb = strlen(nombre);
        for(i=0; i<lenNomb; i++){
            if(nombre[i] == 'b' || nombre[i] == 'c' || nombre[i] == 'd' || nombre[i] == 'f' || nombre[i] == 'g' || nombre[i] == 'h' || nombre[i] == 'j' || nombre[i] == 'k' || nombre[i] == 'l' || nombre[i] == 'm' || nombre[i] == 'n' || nombre[i] == 'p' || nombre[i] == 'q' || nombre[i] == 'r' || nombre[i] == 's' || nombre[i] == 't' || nombre[i] == 'v' || nombre[i] == 'w' || nombre[i] == 'x' || nombre[i] == 'y' || nombre[i] == 'z' || nombre[i] == 'B' || nombre[i] == 'C' || nombre[i] == 'D' || nombre[i] == 'F' || nombre[i] == 'G' || nombre[i] == 'H' || nombre[i] == 'J' || nombre[i] == 'K' || nombre[i] == 'L' || nombre[i] == 'M' || nombre[i] == 'N' || nombre[i] == 'P' || nombre[i] == 'Q' || nombre[i] == 'R' || nombre[i] == 'S' || nombre[i] == 'T' || nombre[i] == 'V' || nombre[i] == 'W' || nombre[i] == 'X' || nombre[i] == 'Y' || nombre[i] == 'Z'){
                //Sacar una primera consonante del nombre
                coNomb = nombre[i];
                break;
            }
        }
        
		//Imprimir resultado
        printf("\n\nSu CURP es: %c%c%c%c%02d%02d%02d%c%s%c%c%c%02d", toupper(patPrim), toupper(voPat), toupper(matPrim), toupper(nombPrim),anio,mes,dia,toupper(gen),strupr(nac),toupper(coPat),toupper(coMat),toupper(coNomb),dia);
    }else{
        printf("\nNombre: ");
        scanf("%s", &nombre);
        
        printf("\nFecha de nacimiento (ej: dd/mm/aa): ");
        scanf("%d/%d/%d", &dia, &mes, &anio);

        printf("\nSi usted es hombre, ingrese H.");
        printf("\nSi usted es mujer, ingrese M.");
        printf("\nOpcion: ");
        scanf("%s", &gen);

        printf("\nIngrese la abreviatura de su lugar de nacimiento: \n\t1- SINALOA (SL) \n\t2- SONORA (SN) \n\t3- MEXICO (DF) \nOpcion: ");
        scanf("%s", &nac); 
        
        //CALCULAR CURP
        //Primera letra Pat
        char patPrim = pat[0];

        //Primera vocal Pat
        if(patPrim == 'a'){
        	int lenPat = strlen(pat);
        	for(i=0; i<lenPat; i++){
           	if(pat[i] == 'e' || pat[i] == 'i' || pat[i] == 'o' || pat[i] == 'u' || pat[i] == 'E' || pat[i] == 'I' || pat[i] == 'O' || pat[i] == 'U'){
                //Obtener primera vocal
                voPat = pat[i];
                break;
            	}
        	}
        }else if (patPrim == 'e'){
        	int lenPat = strlen(pat);
        	for(i=0; i<lenPat; i++){
           	if(pat[i] == 'a' || pat[i] == 'i' || pat[i] == 'o' || pat[i] == 'u' || pat[i] == 'A' || pat[i] == 'I' || pat[i] == 'O' || pat[i] == 'U'){
                //Obtener primera vocal
                voPat = pat[i];
                break;	
            	}
        	}
        }else if(patPrim == 'i'){
        	int lenPat = strlen(pat);
        	for(i=0; i<lenPat; i++){
            	if(pat[i] == 'a' || pat[i] == 'e' || pat[i] == 'o' || pat[i] == 'u' || pat[i] == 'A' || pat[i] == 'E' || pat[i] == 'O' || pat[i] == 'U'){
                //Obtener primera vocal
                voPat = pat[i];
                break;	
           	    }
        	}
        }else if(patPrim == 'o'){
        	int lenPat = strlen(pat);
        	for(i=0; i<lenPat; i++){
            	if(pat[i] == 'a' || pat[i] == 'e' || pat[i] == 'i' || pat[i] == 'u' || pat[i] == 'A' || pat[i] == 'E' || pat[i] == 'I' || pat[i] == 'U'){
                //Obtener primera vocal
                voPat = pat[i];
                break;	
            	}
       	    }
        }else if(patPrim == 'u'){
        	int lenPat = strlen(pat);
        	for(i=0; i<lenPat; i++){
            	if(pat[i] == 'a' || pat[i] == 'e' || pat[i] == 'i' || pat[i] == 'o' || pat[i] == 'A' || pat[i] == 'E' || pat[i] == 'I' || pat[i] == 'O'){
                //Obtener primera vocal
                voPat = pat[i];
                break;	
            	}
        	}
        }else{
            int lenPat = strlen(pat);
        	for(i=0; i<lenPat; i++){
            	if(pat[i] == 'a' || pat[i] == 'e' || pat[i] == 'i' || pat[i] == 'o' || pat[i] == 'u' || pat[i] == 'A' || pat[i] == 'E' || pat[i] == 'I' || pat[i] == 'O' || pat[i] == 'U'){
                //Obtener primera vocal
                voPat = pat[i];
                break;	
            	}
        	}
        }
        
        //Primera letra Mat
        char matPrim = mat[0];

        //Primera letra Nombre
        char nombPrim = nombre[0];

        //Primera consonante Pat
        int lenPat = strlen(pat);
        for(i=0; i<lenPat; i++){
            if(pat[i] == 'b' || pat[i] == 'c' || pat[i] == 'd' || pat[i] == 'f' || pat[i] == 'g' || pat[i] == 'h' || pat[i] == 'j' || pat[i] == 'k' || pat[i] == 'l' || pat[i] == 'm' || pat[i] == 'n' || pat[i] == 'p' || pat[i] == 'q' || pat[i] == 'r' || pat[i] == 's' || pat[i] == 't' || pat[i] == 'v' || pat[i] == 'w' || pat[i] == 'x' || pat[i] == 'y' || pat[i] == 'z' || pat[i] == 'B' || pat[i] == 'C' || pat[i] == 'D' || pat[i] == 'F' || pat[i] == 'G' || pat[i] == 'H' || pat[i] == 'J' || pat[i] == 'K' || pat[i] == 'L' || pat[i] == 'M' || pat[i] == 'N' || pat[i] == 'P' || pat[i] == 'Q' || pat[i] == 'R' || pat[i] == 'S' || pat[i] == 'T' || pat[i] == 'V' || pat[i] == 'W' || pat[i] == 'X' || pat[i] == 'Y' || pat[i] == 'Z'){
                //Sacar una primera consonante del apellido
                coPat = pat[i];
                break;
            }
        }

        //Primera consonante Mat
        int lenMat = strlen(mat);
        for(i=0; i<lenMat; i++){
            if(mat[i] == 'b' || mat[i] == 'c' || mat[i] == 'd' || mat[i] == 'f' || mat[i] == 'g' || mat[i] == 'h' || mat[i] == 'j' || mat[i] == 'k' || mat[i] == 'l' || mat[i] == 'm' || mat[i] == 'n' || mat[i] == 'p' || mat[i] == 'q' || mat[i] == 'r' || mat[i] == 's' || mat[i] == 't' || mat[i] == 'v' || mat[i] == 'w' || mat[i] == 'x' || mat[i] == 'y' || mat[i] == 'z' || mat[i] == 'B' || mat[i] == 'C' || mat[i] == 'D' || mat[i] == 'F' || mat[i] == 'G' || mat[i] == 'H' || mat[i] == 'J' || mat[i] == 'K' || mat[i] == 'L' || mat[i] == 'M' || mat[i] == 'N' || mat[i] == 'P' || mat[i] == 'Q' || mat[i] == 'R' || mat[i] == 'S' || mat[i] == 'T' || mat[i] == 'V' || mat[i] == 'W' || mat[i] == 'X' || mat[i] == 'Y' || mat[i] == 'Z'){
                //Sacar una primera consonante del apellido
                coMat = mat[i];
                break;
            }
        }

        //Primera consonante Nombre
        int lenNomb = strlen(nombre);
        for(i=0; i<lenNomb; i++){
            if(nombre[i] == 'b' || nombre[i] == 'c' || nombre[i] == 'd' || nombre[i] == 'f' || nombre[i] == 'g' || nombre[i] == 'h' || nombre[i] == 'j' || nombre[i] == 'k' || nombre[i] == 'l' || nombre[i] == 'm' || nombre[i] == 'n' || nombre[i] == 'p' || nombre[i] == 'q' || nombre[i] == 'r' || nombre[i] == 's' || nombre[i] == 't' || nombre[i] == 'v' || nombre[i] == 'w' || nombre[i] == 'x' || nombre[i] == 'y' || nombre[i] == 'z' || nombre[i] == 'B' || nombre[i] == 'C' || nombre[i] == 'D' || nombre[i] == 'F' || nombre[i] == 'G' || nombre[i] == 'H' || nombre[i] == 'J' || nombre[i] == 'K' || nombre[i] == 'L' || nombre[i] == 'M' || nombre[i] == 'N' || nombre[i] == 'P' || nombre[i] == 'Q' || nombre[i] == 'R' || nombre[i] == 'S' || nombre[i] == 'T' || nombre[i] == 'V' || nombre[i] == 'W' || nombre[i] == 'X' || nombre[i] == 'Y' || nombre[i] == 'Z'){
                //Sacar una primera consonante del apellido
                coNomb = nombre[i];
                break;
            }
        }

		//Imprimir resultado
        printf("\n\nSu CURP es: %c%c%c%c%02d%02d%02d%c%s%c%c%c%02d", toupper(patPrim), toupper(voPat), toupper(matPrim), toupper(nombPrim),anio,mes,dia,toupper(gen),strupr(nac),toupper(coPat),toupper(coMat),toupper(coNomb),dia);
		
	}
}
