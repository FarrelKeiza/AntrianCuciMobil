#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#include <conio.h>



typedef struct antrianCuci *address;
typedef struct antrianCuci{
	char nopol[15];
	int tipeKendaraan;
	int durasi;
	int harga;
	int waktuMasuk;
	int waktuProses;
	int waktuKeluar;
	address next;
}antrianCuci;

antrianCuci *tempatCuci1 = NULL; // LIST MENUNJUK NULL
antrianCuci *tempatCuci2 = NULL; // LIST MENUNJUK NULL

void charToASCII(char c);
void loadingBar();
void title();
void gotoxy (int x, int y);
int jumlahDurasi[2];
int pilihanDurasi[3] = {30,45,75};
int pilihanHarga[3] = {10000,30000,50000};
int durasiSimulasi = 5; // SIMULASI SKIP WAKTU DI SET 5 MENIT
int durasi_jeda = 5; // SIMULASI JEDA WAKTU DI SET 5 MENIT SETIAP SELESAI MENCUCI
int waktu_buka = 0; // DALAM MENIT
int waktu_tutup = 600; // DALAM MENIT
int waktu_mulai_istirahat = 300; // DALAM MENIT
int waktu_selesai_istirahat = 360; // DALAM MENIT
int pukulWaktu;
int antrean;
int jumlah_kendaraan;
int jumlah_waktu;	
int jumlah_harga;


void homepage();

void homepageRest();

void homepageClosed();

void timeLeap(int i);

void nextButton();

void wrongCommandAlert();

int timeCheck();

void insertCar();

int cek_plat(char no_plat[], int *tanda_tempat);

void statusNotification(char no_plat[], int tipeKendaraan);

void createNode(char no_plat[], int tipeKendaraan);

int stringCompare(char *a,char *b);

void durationCount();

int carPlacement();

void enqueue(antrianCuci *data_inputan, antrianCuci *tempat, int pilihan);

void help();

void dataAntrian();

int insertJenis();

void showJenis();

void washTimeConvert();

void timeConvert();

void abortCar();

int cekAntrian();

void pegangNode();

void dequeue();

void cekProgressMencuci(int waktuPilihan);

void cekMobilSelesai();

void mobilKeluar(int pilih);

void hitung_total(int pilih);
