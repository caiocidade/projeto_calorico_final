#include <stdio.h>

int main(){
    int dia ;
    float soma = 0;
    printf("Digite a quantidade de dias que deseja verificar as calorias: ");
    scanf("%d", &dia);
    int calorias[dia];
    
    for(int i = 0; i < dia; i++){
        printf("dia %d: ", i + 1);
        scanf("%d", &calorias[i]);
        soma += calorias[i];
    }
    
    printf("a media de calorias consumidas em %d dias eh: %.1f por dia\n", dia, soma / dia);
    
    return 0;
}