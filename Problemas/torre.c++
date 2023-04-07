/* usar vetor essquerda e vetor direita */

#include <iostream>
using namespace std;
#define tamV 100

int main(){

    long long int tam = 0;
    int soma = 0, maiorSomaLinha = 0, peso = 0, Linha = 0; // Inicializando cada variavel
    
    cin >> tam;
    
    int vet[tamV][tamV];

    for(int i = 0; i < tam; i++){ // Armazenar os valores da matriz
        for(int j = 0; j < tam; j++){

            cin >> vet[i][j];
            soma += vet[i][j]; // Soma de cada Linha da matriz
        }
        if(soma >= maiorSomaLinha){

            maiorSomaLinha = soma; // Maior soma linha
            Linha = i;

        }
        soma = 0;
    }

    for(int i = 0; i < tam; i++){ // Soma de cada coluna da matriz
        for(int j = 0; j < tam; j++){

            soma += vet[j][i]; // Coluna

        }

        soma += maiorSomaLinha;
        soma -= (vet[Linha][i]*2);

        if(soma > peso)

            peso = soma; // Guarda o maior peso.
        
        soma = 0;
    }

    cout << peso << endl; // Imprime o peso
}

