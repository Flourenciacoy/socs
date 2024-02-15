#include <stdio.h>

void removeNum(int dataIn[], int dataOut[], int masuk, int keluar) {
    for(int i = 0; i < keluar; i++) {
        for(int j = 0; j < masuk; j++) {
            if(dataIn[j] == dataOut[i]) dataIn[j] = 0;
        }
    }
}

void findMax(int dataIn[], int masuk) {
    int max = dataIn[0];
    for(int i = 1; i < masuk; i++) {
        if(dataIn[i] > max) max = dataIn[i];
    }
    if(max != 0) printf("Maximum number is %d\n", max);
    else printf("Maximum number is -1\n");
}

int main() {
    int masuk, keluar;
    scanf("%d %d", &masuk, &keluar);
    int dataIn[masuk], dataOut[keluar];
    
    for(int i = 0; i < masuk; i++) scanf("%d", &dataIn[i]);
    for(int i = 0; i < keluar; i++) scanf("%d", &dataOut[i]);
    
    removeNum(dataIn, dataOut, masuk, keluar);

    findMax(dataIn, masuk);

    return 0;
}
