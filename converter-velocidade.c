#include <stdio.h>


float conver_metros_centimetros(float metros){  /*conversor de metros para centimetros*/
   return metros*100;
}


float conver_centimetros_metros(float centimetros){ /*conversor de centimetros para metros*/
    return centimetros/100;
}


float conver_metros_milimetros(float metros){  /*conversor de metros para milimetros*/
    return metros*1000;
}


float conver_milimetros_metros(float milimetros){ /*conversor de milimetros para metros*/
    return milimetros/1000;
}


float conver_milimetros_centimetros(float milimetros){  /*conversor de milimetros para centimetros*/
    return milimetros/10;
}


float conver_centimetros_milimetros(float centimetros){ /*conversor de centimetros para milimetros*/
    return centimetros*10;
}


int main(){ /*principal*/


/*resultados das conversoes*/
float resultMetCent = conver_metros_centimetros(5);
printf("Conversao de metros para centimetros %.2f\n", resultMetCent);  


float resultCentMet = conver_centimetros_metros(20);
printf("Conversao de centimetros para metros %.2f\n", resultCentMet);  


float resultMetMili = conver_metros_milimetros(3);
printf("Conversao de metros para milimetros %.2f\n", resultMetMili);  


float resultMiliMetros = conver_milimetros_metros(10);
printf("Conversao de milimetros para metros %.2f\n", resultMiliMetros);  


float resultMiliCent = conver_milimetros_centimetros(15);
printf("Conversao de milimetros para centimetros %.2f\n", resultMiliCent);  


float resultCentMili = conver_centimetros_milimetros(30);
printf("Conversao de centimetros para milimetros %.2f\n", resultCentMili);  
return 0;  
}