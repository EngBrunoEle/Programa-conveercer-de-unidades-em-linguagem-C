#include <stdio.h>


float conver_metrosq_centimetrosq(float metros){  /*conversor de metros quadrados para centimetros quadrados*/
   return metros*10000;
}


float conver_centimetrosq_metrosq(float centimetros){ /*conversor de centimetros quadrados para metros quadrados*/
    return centimetros/10000;
}

int main(){ /*principal*/


/*resultados das conversoes*/
float resultMetqCentq = conver_metrosq_centimetrosq(10);
printf("Conversao de metros para centimetros %.2f\n", resultMetqCentq);  


float resultCentqMetq = conver_centimetrosq_metrosq(30000);
printf("Conversao de centimetros para metros %.4f\n", resultCentqMetq);

return 0;
}