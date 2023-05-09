#include "header.h"
#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#include <conio.h>
#include <windows.h>

void gotoxy (int x, int y){
	HANDLE hConsoleOutput;
	COORD dwCursorPosition;
	dwCursorPosition.X = x;
	dwCursorPosition.Y = y;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

void charToASCII(char c) 
{
	/* Modul yang mengkonversi char ke char tertentu berdasarkan ASCII */
	switch(c)
	{
		case '=' :
			printf ("%c", 205);
			break;
		case '_' :
			printf ("%c", 247);
			break;
		case '|' :
			printf ("%c", 186);
			break;
		case '#' :
			printf ("%c", 221);
			break;
		case '/' :
			printf ("%c", 159);
			break;
		case '&' :
			printf ("%c", 188);
			break;
		case '<' :
			printf ("%c", 200);
			break;
		case '>' :
			printf ("%c", 188);
			break;
		case '[' :
			printf ("%c", 175);
			break;
		case ']' :
			printf ("%c", 174);
			break;
		case '%' :
			printf ("%c", 200);
			break;
		case '!' :
			printf ("%c", 254);
			break;
		case '{' :
			printf ("%c", 201);
			break;
		case '}' :
			printf ("%c", 187);
			break;
		case '?' :
			printf ("%c", 201);
			break;
		case '@' :
			printf ("%c", 177);
			break;
		case '~' :
			printf ("%c", 178);
			break;
		case '$' :
			printf ("%c", 187);
			break;
		default :
			printf ("%c", c);		
	}
}

void loadingBar(){ //tampilan loading bar, paling awal saat aplikasi PowerPuffCulator dibuka
	char wait[] = 	"         Tunggu Sebentar..\n";
	char upper[] =  "{================================}\n";
	char middle[] = "|                                |\n";

	char lower[] =	"<================================>\n"; 
	
	char bar[]= 	" ###############################\n";
	
	gotoxy (40,12);
	for(int i = 0; wait[i]!=0 ; i++){
		charToASCII(wait[i]);
	}
	
	gotoxy (40,13);
	for(int i = 0; upper[i]!=0 ; i++){
		charToASCII(upper[i]);
	}
	
	gotoxy (40,14);
	for(int i = 0; middle[i]!=0 ; i++){
		charToASCII(middle[i]);
	}
	
	gotoxy (40,15);
	for(int i = 0; lower[i]!=0 ; i++){
		charToASCII(lower[i]);
	}
	
	gotoxy(41,14);
	for(int i = 0 ;bar[i]!=0; i++){
		Sleep(100);
		charToASCII(bar[i]);
	}
		system("cls"); // nanti simpen di main
}

void title(){ //screen awal berisi judul aplikasi
	
	char welcome[] = "\t\t\t\t        Selamat datang di\n";
	
		char credits[] = 
	"\n\
\t\t\t\t                Tempat Cuci Mobil\n\
\t\t\t\t\t               by\n\
\t\t\t\t             Farrel x Rendi x Rohiid\n\
	";
	
	char tekan[] = "\n\
	\t\t\t\t Tekan apapun untuk melanjutkan";
	
	gotoxy(15,1);
	for(int i = 0; welcome[i]!=0; i++){
		Sleep(1);
		charToASCII(welcome[i]);
	}
	
	printf("\n");
	puts("\t\t      ______     ______     ______     __     __     ______     ______     __  __    ");
    puts("\t\t     /\\  ___\\   /\\  __ \\   /\\  == \\   /\\ \\  _ \\ \\   /\\  __ \\   /\\  ___\\   /\\ \\_\\ \\   ");
    puts("\t\t     \\ \\ \\____  \\ \\  __ \\  \\ \\  __<   \\ \\ \\/ '.\\ \\  \\ \\  __ \\  \\ \\___  \\  \\ \\  __ \\  ");
    puts("\t\t      \\ \\_____\\  \\ \\_\\ \\_\\  \\ \\_\\ \\_\\  \\ \\__/'.~\\_\\  \\ \\_\\ \\_\\  \\/\\_____\\  \\ \\_\\ \\_\\ ");
    puts("\t\t       \\/_____/   \\/_/\\/_/   \\/_/ /_/   \\/_/   \\/_/   \\/_/\\/_/   \\/_____/   \\/_/\\/_/ ");
	printf("\n\n");
	puts("\t\t      	                              _.-='_-         _");
	puts("\t\t                               _.-='   _-          | ||'''''''---._______     __..");
	puts("\t\t                   ___.===''''-.______-,,,,,,,,,,,,`-''----' ''''''       '''''  __");
	puts("\t\t            __.--''     __        ,'                   o \\           __        [__|");
	puts("\t\t       __-''=======.--''  ''--.=================================.--''  ''--.=======:");
	puts("\t\t      ]       [w] : /        \\ : |========================|    : /        \\ :  [w] :");
	puts("\t\t      V___________:|          |: |========================|    :|          |:   _-'");
	puts("\t\t       V__________: \\        / :_|=======================/_____: \\        / :__-'");
	puts("\t\t       -----------'  '-____-'  `-------------------------------'  '-____-'");
	
	
	gotoxy(20,20);
	for(int i = 0; credits[i]!=0; i++){
		Sleep(5);
		charToASCII(credits[i]);
	}
	
	gotoxy(20,25);
	for(int i = 0; tekan[i]!=0; i++){
		Sleep(5);
		charToASCII(tekan[i]);
	}
	
	getch();

}

void mobilKeluar(int pilih){
	// DEKLARASI VARIABEL LOKAL
	antrianCuci *tempat;

	switch(pilih){
		case 0:
			hitung_total(tempatCuci1->tipeKendaraan);
			tempat = tempatCuci1;
		
			tempatCuci1 = tempatCuci1->next;
			free(tempat); // DI DEALOKASI
			break;

		case 1:
			hitung_total(tempatCuci2->tipeKendaraan);
			tempat = tempatCuci2;
		
			tempatCuci2 = tempatCuci2->next;
			free(tempat); // DI DEALOKASI
			break;
	}
}

void homepage(){
    printf("\t\t\t\t|=================================================|\n");
	printf("\t\t\t\t|          Silahkan Pilih Menu Dibawah :          |\n");
	printf("\t\t\t\t|=================================================|\n");
	printf("\t\t\t\t|                                                 |\n");
    printf("\t\t\t\t| 1.  Tambah Mobil                                |\n");
	printf("\t\t\t\t| 2.  Hapus Mobil                                 |\n");
	printf("\t\t\t\t| 3.  Proses Mencuci (%d menit)                    |\n",durasiSimulasi);
	printf("\t\t\t\t| 4.  Bantuan                                     |\n");
	printf("\t\t\t\t| 5.  Selesai                                     |\n");
	printf("\t\t\t\t| 6.  Skip (10 Menit)                             |\n");
	printf("\t\t\t\t| 7.  Skip (15 Menit)                             |\n");
	printf("\t\t\t\t| 8.  Skip (30 Menit)                             |\n");
	printf("\t\t\t\t| 9.  Skip (45 Menit)                             |\n");
	printf("\t\t\t\t| 10. Skip (60 Menit)                             |\n");
    printf("\t\t\t\t|                                                 |\n");
	printf("\t\t\t\t|=================================================|\n");
	printf("\t\t\t\t|             Copyright 2023 - Wawash             |\n");
	printf("\t\t\t\t|=================================================|\n");
	printf("\t\t\t\t\tMasukan Index Menu Yang Dipilih : ");
}

void homepageRest(){
	printf("\n\n\n");
    printf("\t\t\t\t|=================================================|\n");
	printf("\t\t\t\t|          Silahkan Pilih Menu Dibawah :          |\n");
	printf("\t\t\t\t|=================================================|\n");
	printf("\t\t\t\t|                                                 |\n");
	printf("\t\t\t\t|            WAWASH SEDANG ISTIRAHAT              |\n");
	printf("\t\t\t\t|             BUKA LAGI PUKUL 13.00               |\n");
	printf("\t\t\t\t|                                                 |\n");
	printf("\t\t\t\t| 3.  Skip waktu (15 menit)                       |\n");
    printf("\t\t\t\t|                                                 |\n");
	printf("\t\t\t\t|=================================================|\n");
	printf("\t\t\t\t|             Copyright 2023 -  Wawash            |\n");
	printf("\t\t\t\t|=================================================|\n");
	printf("\t\t\t\t\tMasukan Index Menu Yang Dipilih : ");
}

void homepageClosed(){
	printf("\n\n\n");
    printf("\t\t\t\t|=================================================|\n");
	printf("\t\t\t\t|          Silahkan Pilih Menu Dibawah :          |\n");
	printf("\t\t\t\t|=================================================|\n");
	printf("\t\t\t\t|                                                 |\n");
	printf("\t\t\t\t|                 WAWASH TUTUP                    |\n");
	printf("\t\t\t\t|               DATANG BESOK PAGI                 |\n");
	printf("\t\t\t\t|                                                 |\n");
	printf("\t\t\t\t| 1. Buka Carwash                                 |\n");
    printf("\t\t\t\t| 2. Exit                                         |\n");
	printf("\t\t\t\t|=================================================|\n");
	printf("\t\t\t\t|             Copyright 2023 - Wawash             |\n");
	printf("\t\t\t\t|=================================================|\n");
	printf("\t\t\t\tMasukan Index Menu Yang Dipilih : ");
}

void timeLeap(int i){
	pukulWaktu += i;
}

void nextButton(){
	printf("\n");
	printf("Tekan Apapun Untuk Melanjutkan!");
	getchar();
	printf("\n");
}

void wrongCommandAlert(){
    printf("Maaf Inputan Salah\n");
	printf("Silahkan Tekan Enter Untuk Kembali...");
	getchar();
}

int timeCheck(){
    if(pukulWaktu >= waktu_mulai_istirahat && pukulWaktu < waktu_selesai_istirahat){
        return 2;
    }
    else if (pukulWaktu >= waktu_tutup || pukulWaktu < 0){
        return 3;
    }
    else{
        return 1;
    }
}

void insertCar(){
    char no_plat[15];
	int cek, jenis, tanda_tempat, timeCek;

    jenis = insertJenis();
    timeCek = timeCheck();
    if (timeCek != 2 || timeCek != 3){
        do{
        fflush(stdin);
		printf("\n");
		printf("Masukkan Nomor Polisi kendaraan : ");
		scanf("%s", no_plat);
		fflush(stdin);
		break;

		cek = cek_plat(no_plat, &tanda_tempat);
		if(cek != 0){ // JIKA CEK BERNILAI BUKAN 0 MAKA SUDAH ADA DATA KENDARAAN PADA TEMPAT CUCI ATAU PADA ANTRIAN
			printf("Nomor Polisi kendaraan sudah terdaftar! silahkan ganti.\n");
		}
        }while (cek != 0);
        createNode(no_plat, jenis);
        statusNotification(no_plat, jenis);
    }
    else{
        printf("Tempat Cuci Akan Segera Tutup");
    }

    }

int cek_plat(char no_plat[], int *tanda_tempat){
	// DEKLARASI VARIABEL LOKAL
	antrianCuci *tempat1, *tempat2;
	tempat1 = tempatCuci1;
	tempat2 = tempatCuci2;
	
	int cek = 0;

	if(tempat1 != NULL){
		while(tempat1 != NULL){
			int compare_1 = stringCompare(no_plat,tempat1->nopol); // CALLING STRINGCOMPARE() FUNCTION.  
			if(compare_1 == 0){
				cek++;
				*tanda_tempat = 1; 
			}  
			tempat1 = tempat1->next;
		}	
	}

	if(tempat2 != NULL){
		while(tempat2 != NULL){
			int compare_2 = stringCompare(no_plat,tempat2->nopol); // CALLING STRINGCOMPARE() FUNCTION.  
			if(compare_2 == 0){
				cek++;
				*tanda_tempat = 2;
			}
			tempat2 = tempat2->next;
		}	
	}
	
	return cek;
}

void statusNotification(char no_plat[], int tipeKendaraan){
	// DEKLARASI VARIABEL LOKAL
	int temp_waktu;

	printf("\n");
	printf("Mobil dengan Plat Nomor: %s  \nTempat cuci mobil: %d \nDurasi pencucian : ",no_plat, antrean+1);

	switch(tipeKendaraan){
		case 1:
			temp_waktu = pilihanDurasi[0];
			break;

		case 2:
			temp_waktu = pilihanDurasi[1];
			break;

		case 3:
			temp_waktu = pilihanDurasi[2];
			break;	
	}

	switch(antrean){
		case 0:
			printf("%d menit \nDurasi antri     : ",temp_waktu);
			printf("%d menit\n",jumlahDurasi[0]);
			break;

		case 1:
			printf("%d menit \nDurasi antri     : ",temp_waktu);
			printf("%d menit\n",jumlahDurasi[1]);
			break;
		
	}
}

void createNode(char no_plat[], int tipeKendaraan){
	// DEKLARASI VARIABEL LOKAL
	int pilihan;
	antrianCuci *data_inputan, *tempat;
	data_inputan = (antrianCuci*)malloc(sizeof(antrianCuci)); // ALOKASI VARIABEL
	
	if(data_inputan == NULL){ // JIKA VARIABEL data_inputan NULL, BERARTI TIDAK ADA 1 PUN ELEMEN DALAM LIST ATAU ALOKASI GAGAL DILAKUKAN, MAKA AKAN KELUAR ALERT
		printf("\n");
		printf("ERROR! Tidak tersedia memori\n");
	}else{
		strcpy(data_inputan->nopol,no_plat); // INPUT plat KENDARAAN KE LIST BARU
		data_inputan->next = NULL; // LIST data_inputan->next MENUNJUK NULL

		switch(tipeKendaraan){
			case 1:
				data_inputan->tipeKendaraan = 1;
				data_inputan->durasi = pilihanDurasi[0];
				data_inputan->harga = pilihanHarga[0];
				data_inputan->waktuMasuk = pukulWaktu;
				break;

			case 2:
				data_inputan->tipeKendaraan = 2;
				data_inputan->durasi = pilihanDurasi[1];
				data_inputan->harga = pilihanHarga[1];
				data_inputan->waktuMasuk = pukulWaktu;
				break;

			case 3:
				data_inputan->tipeKendaraan = 3;
				data_inputan->durasi = pilihanDurasi[2];
				data_inputan->harga = pilihanHarga[2];	
				data_inputan->waktuMasuk = pukulWaktu;	
				break;
		}
	}
	
	durationCount(); // PROSES PENGHITUNGAN DURASI PENCUCIAN MOBIL

	pilihan = carPlacement(); // PROSES PEMILIHAN TEMPAT CUCI BERDASARKAN DURASI TERPENDEK YANG AKAN SELESAI DARI PROSES PENCUCIAN
	switch(pilihan){
		case 0:
			tempat = tempatCuci1;
			enqueue(data_inputan,tempat,pilihan);
			break;

		case 1:
			tempat = tempatCuci2;
			enqueue(data_inputan,tempat,pilihan);
			break;
	}
}

int stringCompare(char *a,char *b)  
{  
    int flag = 0;  
    while(*a != '\0' && *b != '\0')  // while loop  
    {  
        if(*a != *b)  
        {  
            flag = 1;  
        }  
        a++;  
        b++;  
    }  

    if(flag == 0) {     // APABILA DATANYA DINYATAKAN SAMA
        return 0;  
    } 
    else {              // APABILA DATANYA DINYATAKAN TIDAK SAMA
        return 1;  
    }
} 

void durationCount(){
	antrianCuci *tempat1,*tempat2;
	tempat1 = tempatCuci1;
	tempat2 = tempatCuci2;
	
	jumlahDurasi[0] = 0;
	jumlahDurasi[1] = 0;
	
	if(tempatCuci1 == NULL){
		jumlahDurasi[0] = 0;
	}else{
		while(tempat1 != NULL){
			jumlahDurasi[0] += tempat1->durasi;
			tempat1 = tempat1->next;
		}	
	}

	if(tempatCuci2 == NULL){
		jumlahDurasi[1] = 0;
	}else{
		while(tempat2 != NULL){
			jumlahDurasi[1] += tempat2->durasi;
			tempat2 = tempat2->next;
		}
	}
}

int carPlacement(){
	int c, d, swap;
	int jumlahDurasi_asc[2];

	jumlahDurasi_asc[0] = jumlahDurasi[0];
	jumlahDurasi_asc[1] = jumlahDurasi[1];
	
        
	for (d = 0; d < 1; d++){            
  		if (jumlahDurasi_asc[d] > jumlahDurasi_asc[d+1]){
    		swap = jumlahDurasi_asc[d];
    		jumlahDurasi_asc[d] = jumlahDurasi_asc[d+1];
    		jumlahDurasi_asc[d+1] = swap;
  		}
	}

	for (c = 0; c < 2; c++){
    	if (jumlahDurasi[c] == jumlahDurasi_asc[0]){
        	break;
    	}
	}

	antrean = c;
  	return c;
}

void enqueue(antrianCuci *data_inputan, antrianCuci *tempat, int pilihan){
	// DEKLARASI VARIABEL
	antrianCuci *data_inputan_langsung_cuci;

	data_inputan_langsung_cuci = data_inputan;
	data_inputan_langsung_cuci->waktuProses = pukulWaktu;
	data_inputan_langsung_cuci->waktuKeluar = pukulWaktu + data_inputan->durasi;
	
	if(tempat == NULL){
		switch(pilihan){
		case 0:
			tempatCuci1 = data_inputan_langsung_cuci;
			break;
		case 1:
			tempatCuci2 = data_inputan_langsung_cuci;
			break;
		}
	}else{
		while(tempat->next != NULL){
			tempat = tempat->next;
		}
		data_inputan->next = NULL;
		tempat->next = data_inputan;		
	}	
}

void bantuan(){
    printf("\n");
	printf("BANTUAN PADA APLIKASI WaWASH (PANDUAN) : \n");
	printf("> Tabel paling atas merupakan list antrian mobil beserta tempat pencuciannya \n");
	printf("> ketik '1' pada menu untuk input kendaraan \n");
	printf("> ketik '2' pada menu apabila ada kendaraan yang tidak jadi di cuci namun masih pada antrian \n");
	printf("> ketik '3' pada menu untuk melakukan pencucian selama 5 menit ke depan \n");
	printf("> ketik '4' pada menu untuk bantuan penggunaan aplikasi \n");
	printf("> ketik '5' pada menu untuk keluar dari aplikasi \n");
}

void dataAntrian(){
	// DEKLARASI VARIABEL LOKAL
	antrianCuci *tempat1, *tempat2;
    
    timeConvert();
    
	printf("\n");
	printf("TEMPAT CUCI MOBIL 1 ");

	if(tempatCuci1 == NULL){
		printf("[ Kosong ]");
	}else{
		tempat1 = tempatCuci1;
		printf("[ %s - sisa : %d menit - in : ",tempat1->nopol,tempat1->durasi);
		washTimeConvert(tempat1->waktuMasuk);
		printf(" - proses : ");
		washTimeConvert(tempat1->waktuProses);
		printf(" - out : ");
		washTimeConvert(tempat1->waktuKeluar);
		printf(" ] ");

		tempat1 = tempat1->next;
		while(tempat1 != NULL){
			printf("\n");
			printf("                    ^ %s (%d menit - in : ",tempat1->nopol,tempat1->durasi);
			washTimeConvert(tempat1->waktuMasuk);
			printf(" ) ");
			tempat1 = tempat1->next;
		}		
	}
	
	printf("\n");
	printf("\n");
	printf("TEMPAT CUCI MOBIL 2 ");

	if(tempatCuci2 == NULL){
		printf("[ Kosong ]");
	}else{
		tempat2 = tempatCuci2;
		printf("[ %s - sisa : %d menit - in : ",tempat2->nopol,tempat2->durasi);
		washTimeConvert(tempat2->waktuMasuk);
		printf(" - proses : ");
		washTimeConvert(tempat2->waktuProses);
		printf(" - out : ");
		washTimeConvert(tempat2->waktuKeluar);
		printf(" ] ");

		tempat2 = tempat2->next;
		while(tempat2 != NULL){
			printf("\n");
			printf("                    ^ %s (%d menit - in : ",tempat2->nopol,tempat2->durasi);
			washTimeConvert(tempat2->waktuMasuk);
			printf(" ) ");
			tempat2 = tempat2->next;
		}		
	}
	
	printf("\n");
	printf("\n");
	printf("Total waktu  	: %d Menit\n",jumlah_waktu);
	printf("Total Kendaraan : %d Mobil\n",jumlah_kendaraan);
	printf("Total Pemasukan : Rp. %d \n",jumlah_harga);
}

int insertJenis(){
    int pilihan_jenis_kendaraan;
    showJenis();
    do{
		printf("\n");
		printf("Pilih Jenis Kendaraan (1-3) : ");
		scanf("%d", &pilihan_jenis_kendaraan);

		if((pilihan_jenis_kendaraan < 0) || (pilihan_jenis_kendaraan > 3)){ // JIKA INPUTAN KURANG DARI 0 ATAU LEBIH DARI 3 MAKA KELUAR ALERT
			printf("Inputan Salah ! Pilihan diantara 1 - 3, silahkan input lagi.\n\n");
		}
	}while((pilihan_jenis_kendaraan < 0) || (pilihan_jenis_kendaraan > 3));

	return pilihan_jenis_kendaraan;
}

void showJenis(){
    printf("\n");
	printf("\n");
	printf("|==================================================================================================================|\n");
	printf("|                                                    JENIS KENDARAAN                                               |\n");
	printf("|==================================================================================================================|\n");
	printf("| NO | JENIS | KETERANGAN  |                            SAMPEL                             |  DURASI  |    HARGA   |\n");
	printf("| 1. |   A   | Mobil Kecil | KIA Picanto, Daihatsu Ceria, Suzuki Karimun, Toyota Yaris dll | %d menit | Rp. %d  |\n",pilihanDurasi[0], pilihanHarga[0]);
	printf("| 2. |   B   | Minibus     | Toyota Avanza, Honda Freed, Suzuki Ertiga, dll                | %d menit | Rp. %d  |\n",pilihanDurasi[1], pilihanHarga[1]);
	printf("| 3. |   C   | Mobil Besar | Metromini, Truk, dll                                          | %d menit | Rp. %d  |\n",pilihanDurasi[2], pilihanHarga[2]);
	printf("|==================================================================================================================|\n");
}

void washTimeConvert(int menit_cuci){
	int j, m, d, detik;

	detik = menit_cuci * 60;

	j = (detik / 3600) + 7; // TAMBAH 7 KARENA BUKA DARI JAM 7
	m = (detik % 3600/60);
	d = detik % 60;

	printf("%d:%d:%d", j, m, d);

}

void timeConvert(){
	int j, m, d, detik;

	detik = pukulWaktu * 60;

	j = (detik / 3600) + 7; // TAMBAH 7 KARENA BUKA DARI JAM 7
	if(j==23){
	    pukulWaktu = -480;
	}
	m = (detik % 3600/60);
	d = detik % 60;

	printf("Pukul : %d:%d:%d \n", j, m, d);

}

void abortCar(){
	int pil;
	char no_plat[15];
	int cek, tanda_tempat;

	pil = cekAntrian();
	if(pil == 0){ // JIKA RETURN NILAI NYA 0 MAKA LIST NYA SEDANG KOSONG
		printf("ERROR! antrian kosong.");
		nextButton();  // MODUL UNTUK ALTERNATIF BY PASS
	}
	else{
	do{
		tanda_tempat = 0;

		fflush(stdin);
		printf("\n");
		printf("Masukkan Nomor Polisi kendaraan yang ingin dikeluarkan dari antrian : ");
		scanf("%s", no_plat);
		fflush(stdin);

		if(no_plat[0]=='0'){  // Jika mengetik "0" Maka program akan di break
			break;
		}

		cek = cek_plat(no_plat, &tanda_tempat);
		if(cek == 0){ // JIKA RETURN NILAINYA 0 ARTINYA TIDAK ADA KENDARAAN DENGAN plat YANG DI INPUTKAN
			printf("Tidak ada Kendaraan dengan Nomor Polisi tersebut. silahkan isi kembali.\n");
		}
	}while(cek == 0);

	pegangNode(tanda_tempat,no_plat); // PROSES MENGELUARKAN KENDARAAN
}
}

int cekAntrian(){
	// DEKLARASI VARIABEL LOKAL
	int cek;

	cek = 0;

	if(tempatCuci1 != NULL){
		cek++;	
	}

	if(tempatCuci2 != NULL){
		cek++;
	}

	return cek;
}

void pegangNode(int tanda_tempat, char no_plat[]){
	antrianCuci *tempat1,*tempat2; 
	tempat1 = tempatCuci1;
	tempat2 = tempatCuci2;

	
	switch(tanda_tempat){
		case 1:
			dequeue(no_plat,tempat1);
			break;

		case 2:
			dequeue(no_plat,tempat2);
			break;	
	}
		
}

void dequeue(char no_plat[], antrianCuci *tempat){
	antrianCuci *kendaraan_siap_keluar_antrian;

	if(strcmp(no_plat,tempat->nopol) == 0){ // JIKA RETURNNYA 0, ITU ARTINYA MOBIL SEDANG DICUCI, KARENA ITU ELEMEN PALING AWAL / KENDARAAN YANG MEMANG SEDANG DI CUCI
		printf("\n");
		printf("Kendaraan sedang dicuci! tunggu hingga selesai.\n");
	}else{
		while(strcmp(no_plat,tempat->next->nopol)!=0){ // PROSES PENCARIAN plat YANG SAMA ANTARA INPUTAN DENGAN YANG ADA DI ANTRIAN
			tempat = tempat->next;
		}
		kendaraan_siap_keluar_antrian = tempat->next;
		tempat->next = tempat->next->next;
		free(kendaraan_siap_keluar_antrian);
	}
}

void cekProgressMencuci(int durasiPilihan){
	pukulWaktu += durasiSimulasi;

	if(tempatCuci1 != NULL){
		if(tempatCuci1->durasi != 0){ // CEK APAKAH DURASI DI 1 SUDAH 0 ATAU BELUM
			tempatCuci1->durasi -= durasiPilihan;
		}

		if(tempatCuci1->durasi == 0){ // CEK APAKAH DURASI DI 1 SUDAH 0 ATAU BELUM
			if (tempatCuci2 != NULL){ // CEK APAKAH LIST 2 NULL ATAU TIDAK
				if (tempatCuci2->durasi >= durasi_jeda){ // CEK APAKAH DURASI DI 2 MASIH LEBIH DARI 5 ATAU TIDAK
					tempatCuci2->durasi -= durasi_jeda; // DURASI DI 2 DIKURANGIN 5 MENIT UNTUK JEDA KE PENCUCIAN SELANJUTNYA
				}
			}
		}
	}

	if(tempatCuci2 != NULL){
		if(tempatCuci2->durasi != 0){ // CEK APAKAH DURASI DI 2 SUDAH 0 ATAU BELUM
			tempatCuci2->durasi -= durasiPilihan;
		}

		if(tempatCuci2->durasi == 0){ // CEK APAKAH DURASI DI 2 SUDAH 0 ATAU BELUM
			if (tempatCuci1 != NULL){ // CEK APAKAH LIST 1 NULL ATAU TIDAK
				if (tempatCuci1->durasi >= durasi_jeda){ // CEK APAKAH DURASI DI 1 MASIH LEBIH DARI 5 ATAU TIDAK
					tempatCuci1->durasi -= durasi_jeda; // DURASI DI 1 DIKURANGIN 5 MENIT UNTUK JEDA KE PENCUCIAN SELANJUTNYA
				}
			}
		}
	}

	if(((tempatCuci1 != NULL)&&(tempatCuci1->durasi == 0)) || ((tempatCuci2 != NULL)&&(tempatCuci2->durasi == 0))){
		pukulWaktu += durasi_jeda; // jeda 5 menit dari mobil 1 ke lainnya;
	}

	cekMobilSelesai();
}

void cekMobilSelesai(){
	if(tempatCuci1 != NULL){
		if(tempatCuci1->durasi <= 0){
			mobilKeluar(0);

			if(tempatCuci1 != NULL){
				tempatCuci1->waktuProses = pukulWaktu;
				tempatCuci1->waktuKeluar = pukulWaktu + tempatCuci1->durasi;
			}
		}
	}

	if(tempatCuci2 != NULL){
		if(tempatCuci2->durasi <= 0){
			mobilKeluar(1);

			if(tempatCuci2 != NULL){
				tempatCuci2->waktuProses = pukulWaktu;
				tempatCuci2->waktuKeluar = pukulWaktu + tempatCuci2->durasi;
			}
		}
	}
}

void hitung_total(int pilih){
	switch(pilih){
		case 1:
			jumlah_kendaraan++;
			jumlah_waktu += pilihanDurasi[0];
			jumlah_harga += pilihanHarga[0];
			break;

		case 2:
			jumlah_kendaraan++;
			jumlah_waktu += pilihanDurasi[1];
			jumlah_harga += pilihanHarga[1];
			break;

		case 3:
			jumlah_kendaraan++;
			jumlah_waktu += pilihanDurasi[2];
			jumlah_harga += pilihanHarga[2];
			break;
	}
}
