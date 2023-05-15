#include <stdio.h>
#include "body.c"
#include <stdlib.h> 
#include <string.h> 
#include <conio.h>
#include <windows.h>

int main(){
    int inputan = 0;
    int timeCondition;
    // title();
	// system("cls");
	// loadingBar();
	// system("cls");
    while (inputan != 20){
    system("cls");
    dataAntrian();
    timeCondition = timeCheck();
    if (timeCondition == 1){
        homepage();
        scanf("%d", &inputan);
        switch (inputan)
        {
        case 1:
            system("cls");
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
            system("cls");
            bantuan();
            getchar();
            getchar();
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
            timeLeap(45);
            if(tempatCuci1 != NULL || tempatCuci2 != NULL){
            cekProgressMencuci(45);
            }
            nextButton();
            break;
        case 7:
            timeLeap(60);
            if(tempatCuci1 != NULL || tempatCuci2 != NULL){
            cekProgressMencuci(60);
            }
            nextButton();
            break;
        case 8:
            timeLeap(90);
            if(tempatCuci1 != NULL || tempatCuci2 != NULL){
            cekProgressMencuci(90);
            }
            nextButton();
            break;
        default:
            wrongCommandAlert();
            nextButton();
            break;
        }
    }
    else if (timeCondition == 2){\
        system("cls");
        timeConvert();
        homepageRest();
        scanf("%d", &inputan);
        switch (inputan)
        {
        case 3:
            timeLeap(15);
            nextButton();
            break;
        default:
            wrongCommandAlert();
            nextButton();
            break;
        }
    }
    else if (timeCondition == 3){
        system("cls");
        homepageClosed();
        scanf("%d", &inputan);
        switch (inputan)
        {
        case 1:
            pukulWaktu = 0;
            nextButton();
            break;
        case 2:
            printf("\n");
            printf("\t\t\t\tTerimakasih telah menggunakan Wawash");
            Sleep(5);
            exit(1);
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
