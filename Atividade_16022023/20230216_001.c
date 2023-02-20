#include <stdio.h>
#include <string.h>
#define MAX 120

void DefineEquipe(char jogadores[][MAX], int nota[], int numJogadores){
    char temp[MAX] = "";
    int aux;

    for(int s = 0; s < numJogadores - 1; s++){
        for(int i = 0; i < (numJogadores - s - 1); i++){

            if(nota[i] < nota[i + 1]){
                aux = nota[i];
                nota[i] = nota[i + 1];
                nota[i + 1] = aux;

                strcpy(temp, jogadores[i]);
                strcpy(jogadores[i], jogadores[i + 1]);
                strcpy(jogadores[i + 1], temp);
            }
        }
    }
}

void printEquipe(char posicao[], char jogadores[][MAX], int numJogadores){

    printf("%s:\n", posicao);

    for(int i = 0; i < numJogadores; i++){
        printf("%s\n", jogadores[i]);
    }

    printf("\n");
}

int main()
{
    char goleiros[3][MAX] = {"Hugo Souza", "Matheus Cunha", "Santos"},
         defesa[7][MAX] = {"Rodrigo Caio","Leo Pereira", "David Luiz", "Cleiton",
                           "Fabricio Bruno", "Pablo", "Matheuzinho"},
         meio[8][MAX] = {"Arturo Vidal", "Thiago Maia", "Erick", "Gerson",
                         "Everton Ribeiro", "De Arraescaeta","Victor Hugo","Matheus Franca"},
         ataque[5][MAX] = {"Gabi", "Bruno Henrique", "Pedro", "Marinho", "Everton"};

    int nGoleiros[3] = {8, 9, 10},
        nDefesa[7] = {4, 5, 6, 7, 8, 9, 10},
        nMeio[8]={3, 4, 5, 6, 7, 8, 9, 10},
        nAtaque[5] = {6, 7, 8, 9, 10};


    DefineEquipe(goleiros, nGoleiros, 3);
    DefineEquipe(defesa, nDefesa, 7);
    DefineEquipe(meio, nMeio, 8);
    DefineEquipe(ataque, nAtaque, 5);

    printf("A melhor equipe e composta por:\n\n");
    printEquipe("GOLEIRO", goleiros, 1);
    printEquipe("DEFESA", defesa, 4);
    printEquipe("MEIO", meio, 4);
    printEquipe("ATACANTES", ataque, 2);

    return 0;
}
