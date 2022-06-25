#include <stdio.h>
#include <stdlib.h>

int main()

{

float peso, altura, imc;



printf("Entre com a altura: ");

scanf("%f",&altura);

printf("Entre com o peso: ");

scanf("%f",&peso);


imc = (peso/altura)/altura;
if (imc<18.5){


printf("Abaixo do peso com imc: %.1f \n\n",imc);
}

if (!(imc < 18.5 || imc > 24.9)){


printf("Peso normal com imc: %.1f \n\n",imc);
}

if (!(imc < 25 || imc > 29.9)){


printf("Sobrepeso com imc: %.1f \n\n",imc);
}
if (!(imc < 30 || imc > 34.9)){


printf("Obesidade grau 1 com imc: %.1f \n\n",imc);
}
if (!(imc < 35 || imc > 39.9)){


printf("Obesidade grau 2 com imc: %.1f \n\n",imc);
}
if (imc >= 40){


printf("Obesidade grau 3 ou Morbida com imc: %.1f \n\n",imc);
}



}
