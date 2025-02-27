#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_LENGTH 100

void mainAlgorythm(int*, int);

void showArray(int*, int);
void generateRandomArray(int*, int);
void generateBestCaseArray(int*, int);
void generateWorstCaseArray(int*, int);

int main(){
    srand(time(NULL));
    int array [MAX_LENGTH];

    for(int i = 0; i < 10; i++){
        generateRandomArray(array, 10);
        showArray(array, 10);
        mainAlgorythm(array, 10);
    }
    return 1;
}


void mainAlgorythm(int array [], int n){
    int i, j;

    for(i = 0; i < n/2; i++){
        for(j = 0; j < n; j ++){
            if(array[i] == array[j]){
                printf("Numero encontrado: %d.\n Posiciones: [%d],[%d]", array[i], i, j);
                return;
            }
        }
    }

    printf("No se ha encontrado ningún dato.\n");
}

void showArray(int array[], int n){
    int i;
    for(i = 0; i < n; i++)
        printf("%d, ", array[i]);
    printf("\n");
}

void generateRandomArray(int array[], int n){
    int i;
    for(i = 0; i < n; i++){
        array[i] = rand() % (3 * n);
    }
}

void generateBestCaseArray(int array[], int n){
    int i;
    for(i = 0; i < n; i++){
        array[i] = rand() % (3 * n);
    }

    array[0] = rand() % (3 * n);
    array[n/2 - 1] = array[0];
}

void generateWorstCaseArray(int array[], int n){
    int i;
    for(i = 0; i < n; i++){
        array[i] = 3 * i;
    }
}