/*
 * calculos.c
 *
 *  Created on: 7 sep. 2022
 *
 */
 int  conversionTemperaturas (int temperaturaF , int temperaturaC){
	  int celsius=0;
	  int  fahrenheit=0;

    if (temperaturaF !=0) {
    	celsius = (temperaturaF-32)/1.8;
     }else if (temperaturaC !=0){
    	 fahrenheit = (temperaturaC*1.8)+32;
     }

    if (celsius !=0) {
    	 printf("transformación de fahrenheit: %d , a celsius es : %d",temperaturaF , celsius );
     }else if (fahrenheit !=0){
        	printf ("transformación de celsius: %d , a fahrenheit es : %d",temperaturaC ,fahrenheit );
     }
return 0;
  }
