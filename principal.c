

#include <stdio.h>
#include "circulo.h"

int main(){
    
    Ponto* p1 = pto_cria(2.0,4.0);
    
    Circulo* circ = circ_cria(p1, 4.9);
    
    //imprimindo dados do circulo
    circ_imprime(circ);
    
    //imprimindo a area do circulo 
    float area = circ_area(circ);
    printf("A área do circulo é: %f\n", area);
    
    //conferindo se o ponto dado esta dentro do circulo
    int confere = circ_interior(circ, p1);
    if(confere == 1){
    	printf("O ponto está no interior da circunferencia!\n");
    }
    else{
    	printf("O ponto está fora do interior da circunferencia!\n");
    }    
    pto_libera(&p1);
    circ_libera(&circ);
    
    printf("\n endereco do ponto depois da liberação de memoria %p \n", p1);
    printf("\n endereco do ponto depois da liberação de memoria %p \n", circ);
    
    
    return 0;
}
