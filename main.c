#include <stdio.h>
#include "body.c"
#include <stdlib.h> 
#include <string.h> 
#include <conio.h>
#include <windows.h>

int main(){
    int inputan = 0;
    int timeCondition;
    title();
	system("cls");
	loadingBar();
	system("cls");
    while (inputan != 20){
    dataAntrian();
    timeCondition = timeCheck();
    if (timeCondition == 1){
        homepage();
        scanf("%d", &inputan);
        switch (inputan)
        {
        case 1:
            insertCar();
            nextButton();
            break;
        case 2:
            abortCar();
            nextButton();
            break;
        case 3:
            timeLeap(5);
            if(tempatCuci1 != NULL || tempatCuci2 != NULL){
            cekProgressMencuci(5);
            }
            nextButton();
            break;
        case 4:
            help();
            nextButton();
            break;
        case 5:
            if (tempatCuci1 != NULL || tempatCuci2 != NULL){
                printf("\n Mohon Selesaikan Terlebih Dahulu Mobil Yang Perlu Dicuci!!! ");
                      nextButton();
            }
            else{
                inputan = 20;
            }
            break;
        case 6:
            timeLeap(10);
            if(tempatCuci1 != NULL || tempatCuci2 != NULL){
            cekProgressMencuci(10);
            }
            nextButton();
            break;
        case 7:
            timeLeap(15);
            if(tempatCuci1 != NULL || tempatCuci2 != NULL){
            cekProgressMencuci(15);
            }
            nextButton();
            break;
        case 8:
            timeLeap(30);
            if(tempatCuci1 != NULL || tempatCuci2 != NULL){
            cekProgressMencuci(30);
            }
            nextButton();
            break;
        case 9:
            timeLeap(45);
            if(tempatCuci1 != NULL || tempatCuci2 != NULL){
            cekProgressMencuci(45);
            }
            nextButton();
            break;
        case 10:
            timeLeap(60);
            if(tempatCuci1 != NULL || tempatCuci2 != NULL){
            cekProgressMencuci(60);
            }
            nextButton();
            break;
        default:
            wrongCommandAlert();
            nextButton();
            break;
        }
    }
    else if (timeCondition == 2){
        homepageRest();
        scanf("%d", &inputan);
        switch (inputan)
        {
        case 3:
            timeLeap(5);
            nextButton();
            break;
        default:
            wrongCommandAlert();
            nextButton();
            break;
        }
    }
    else if (timeCondition == 3){
        homepageClosed();
        scanf("%d", &inputan);
        switch (inputan)
        {
        case 10:
            timeLeap(60);
            nextButton();
            break;
        default:
            wrongCommandAlert();
            nextButton();
            break;
        }
    }
    }

    return 0;
}
