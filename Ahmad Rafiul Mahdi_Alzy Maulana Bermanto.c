#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int minuman;
double hargaminuman;

double kembalian;

double uang[8] = {500, 1000, 2000, 5000, 10000, 20000, 50000, 100000};
double barang[10] = {7000, 4000, 5500, 5500, 5500, 4500, 6500, 3500, 5500, 5000};
double jumlah, jumlah1, jumlahn;
double total;

struct node {
   int nomor;
   float harga;
   char nama[20];
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;


void printList() {


   struct node *ptr = head;


  
   while(ptr != NULL) {       
      printf("%d. %s \n  Rp. %.3f\n",ptr->nomor, ptr->nama,ptr->harga);
      printf("\n");
      ptr = ptr->next;
   }

   
}


void insert(char nama[20],int nomor,float harga) {
   
   struct node *link = (struct node*) malloc(sizeof(struct node));

  
   strcpy(link->nama, nama);
   link->harga = harga;
   link->nomor = nomor;


   link->next = head;

   head = link;
}

int linkedlist() {
	
	insert("Hydro Coco 250 ml",10,5);
	insert("Pulpy Maid Orange 250 ml",9,5.5);
	insert("Teh Pucuk Harum 250 ml ",8,3.5);
	insert("Ultra Milk 250 ml",7,6.5);
	insert("Milo 200 ml",6,4.5);
	insert("Fanta 390 ml",5,5.5);
	insert("Sprite 390 ml",4,5.5);
	insert("Coca-Cola 390 ml",3,5.5);
	insert("Teh Gelas 400 ml",2,4);
	insert("Pocari Sweat 600 ml",1,7);
	
	

   printList();
   
   return 0;
}


int main ()
{
	printf("\n=========================================================================\n");
	printf("||          Selamat Datang di GREENPay Vending Machine St. UI          ||\n");
	printf("||             Oleh: AHMAD RAFIUL MAHDI    - 1706985861                ||\n");
	printf("||                   ALZY MAULANA BERMANTO - 1706985880                ||\n");
	printf("=========================================================================\n\n");
	
	printf("-------------------------------------------------------------------------\n");
	printf("                     Menu mana yang Anda ingin pilih? \n");
	printf("-------------------------------------------------------------------------\n");

	printf("\n1. Start\n");
	printf("2. Help\n");
	printf("3. Exit\n");
	
	
	switch(getch())
	{
		case '1': system("cls");
					menu ();
						break;
		case '2': system("cls");
					help();
						break;
		case '3': system("cls");
					keluar();
						break;
		default: system("cls");
				printf("ERROR! Silahkan pilih lagi\n\n");
					 main();
					 	break;						
	
	}
	

}

int keluar()
{
	printf("Apakah anda yakin ingin keluar dari program ini?\n\n");
	printf("1. Keluar\n");
	printf("2. Menu Utama\n");
	
	switch(getch())
	{
		case '1': system("cls");
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tTerima kasih telah menggunakan program ini!!\n\n\n\n\n\n\n\n\n\n\n\n");
						break;
		case '2': system("cls");
					main();
						break;
		default : system("cls");
				printf("Error!! silahkan pilih lagi\n\n");
				 keluar();
				 break;
	}
		
}

int help()
{
printf("\n-------------------------------------------------------------\n");
		printf("\nCara membeli minuman di GreenPay Vending Machine: \n");
		printf("\n1. Pilih menu 'Start' dengan mengetik '1' untuk membeli minuman.\n");
		printf("2. Akan tersedia minuman-minuman dingin beserta harga-harganya.\n");
		printf("3. Pilih minuman yang Anda ingin beli.\n");	
		printf("4. Masukkan uang.\n");
		printf("5. Tunggu beberapa saat hingga minuman Anda keluar.\n");
		printf("6. Ambil kembaliannya jika Anda memasukkan uang lebih.\n");
		printf("7. Selamat menikmati!\n");
		
	
	printf("\n----------------------------------------------------------------------\n");
	printf("Apakah Anda ingin kembali ke menu utama?");
	printf("\n[Ketik '1' jika iya atau ketik '0' jika tidak]\n");
	
	switch(getch())
	{
		case '1': system("cls");
			main();
			break;
		case '0': system("cls");
			printf("Terima Kasih telah menggunakan GreenPay! :)\n");
			return 0;
			break;
		default : system("cls");
			printf("ERROR!! Silahkan memilih dengan mengetik '1' untuk ke menu utama atau '0' untuk mengakhiri!");
			help();
			break;
	}
}

int uang1()
{
	printf("Pilih nominal uang yang ingin dimasukkan!\n\n");
	printf("1.  Rp 500.00\n");
	printf("2.  Rp 1,000.00\n");
	printf("3.  Rp 2,000.00\n");
	printf("4.  Rp 5,000.00\n");
	printf("5.  Rp 10,000.00\n");
	printf("6.  Rp 20,000.00\n");
	printf("7.  Rp 50,000.00\n");
	printf("8.  Rp 100,000.00\n");
	
	switch(getch())
	{
		case '1': jumlah = uang[0];
			lagi();	
					break;
		case '2': jumlah = uang[1];
			lagi();	
					break;
		case '3': jumlah = uang[2];
			lagi();	
					break;
		case '4': jumlah = uang[3];
			lagi();	
					break;
		case '5': jumlah = uang[4];
			lagi();	
					break; 
		case '6': jumlah = uang[5];
			lagi();	
					break; 
		case '7': jumlah = uang[6];
			lagi();	
					break; 
		case '8': jumlah = uang[7];
			lagi();	
					break;
			
		default: system("cls");
				printf("ERROR! Silahkan pilih kembali\n\n");
				uang1();
				break;
	}
}

int lagi()
{
	system("cls");
	
	error:
		
	printf("Apakah anda ingin memasukkan uang lagi?\n\n");
	printf("1. Masukkan uang lagi\n");
	printf("2. Tidak\n");
	
	switch(getch())
	{
		case '1' : system("cls");
			uang2();
				break;
		case '2' : system("cls");
			beli();
				break;
		default: goto error;
				printf("ERROR! Silahkan pilih kembali\n\n");
				
					break;
	}
	
}

int uang2()
{
	
	printf("Pilih nominal uang yang ingin dimasukkan!\n\n");
	printf("1.  Rp 500.00\n");
	printf("2.  Rp 1,000.00\n");
	printf("3.  Rp 2,000.00\n");
	printf("4.  Rp 5,000.00\n");
	printf("5.  Rp 10,000.00\n");
	printf("6.  Rp 20,000.00\n");
	printf("7.  Rp 50,000.00\n");
	printf("8.  Rp 100,000.00\n");
	
	switch(getch())
	{
		case '1': jumlah1 = uang[0];
			beli();
				break;
		case '2': jumlah1 = uang[1];
			beli();
				break;
		case '3': jumlah1 = uang[2];
			beli();
				break;
		case '4': jumlah1 = uang[3];
			beli();
				break; 
		case '5': jumlah1 = uang[4];
			beli();	
				break; 
		case '6': jumlah1 = uang[5];
			beli();
				break; 
		case '7': jumlah1 = uang[6];
			beli();
				break; 
		case '8': jumlah1 = uang[7];
			beli();
				break;
			
			
		default: system("cls");
				printf("ERROR! Silahkan pilih kembali\n\n");
				uang2();
				break;
	}
}
int jumlahminuman;
int beli()
{
	
	
	system("cls");
	
	printf("Daftar Minuman\n\n");
	printList();
	printf("\n======================================================================================");
	printf("\n\n               Silahkan pilih minuman yang diinginkan.....\n\n");
	printf("======================================================================================\n\n\n");
	
	
	
	double jumlah3[3] = {jumlah, jumlah1, jumlahn};
	total = jumlah3[0] + jumlah3[1];
	
	
	scanf("%d",&minuman);
	switch(minuman)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10: hargaminuman = barang[minuman-1];
				printf("\nHarga barang = Rp %.2lf", hargaminuman);
					;
						break;
		default: system("cls");
				printf("ERROR!! Silahkan pilih kembali\n\n");
					beli();
						break;
	}
	
	printf("\n\nBerapa banyak yang anda inginkan? (Maksimal 5)\n");
	error:
	scanf("%d", &jumlahminuman);
	 
	 	
	if (jumlahminuman>5)
	{
		printf("\nERROR! maksimal minuman yang dapat diambil 5!\nSilahkan ketik ulang!");
		
		goto error;
	}
	
	else 
	{
	
	hargaminuman= hargaminuman*jumlahminuman;
	
	akhir();
	}
}



int akhir()
{
	kembalian=total-hargaminuman;
	
	
	
	if (hargaminuman>total)
	{
		
		system("cls");
		
		printf("Daftar Minuman\n\n");
	linkedlist();
		printf("\n======================================================================================\n\n");
		printf("Uang yang dimasukkan tidak cukup untuk melakukan transaksi! Silahkan tambahkan uang atau batalkan transaksi. \n\n");
		printf("1. Tambah uang\n");
		printf("2. Keluar\n");
		
		switch(getch())
		{
			case '1': system("cls");
				lagi(); 
					break;
			case '2': system("cls");
				keluar();
					break;
		}
	}
	else
	system("cls");
	

		printf("\n\n\n\n");
		printf("                       Minuman anda sudah dapat diambil!\n\n");
		
		printf("                       Nominal uang yang anda masukkan = Rp %.2lf\n",total);
		printf("                       Harga Minuman yang dibeli       = Rp %.2lf\n", hargaminuman);		
		printf("                       Kembalian                       = Rp %.2lf   \n\n\n\n",kembalian);	
		printf("                       Jumlah Minuman                  =  %d\n\n", jumlahminuman);
		
		printf("---------------------------------------------------------------------------------------\n\n");
		printf("                       Apakah Anda ingin melakukan transaksi lagi? \n\n");
		printf("---------------------------------------------------------------------------------------\n\n");
		
		printf("                       1. Ya\n");
		printf("                       2. Tidak");
		
		switch (getch())
		{
			case '1' : system ("cls");
						main();
						break;
			case '2' : system ("cls");
						keluar();
						break;
			default : system ("cls");
						printf("Error! Silahkan ketik '1' untuk melakukan transaksi atau '2' untuk berhenti");
						akhir();
						break;
		}
}


int menu ()  
{
 printf("Daftar Minuman\n\n");

 linkedlist();
	
	printf("\n======================================================================================");
	printf("\n\n               Tekan tombol apapun untuk memulai transaksi\n\n");
	printf("======================================================================================\n\n");
	
	switch(getch())
	{
		
		default: system("cls");
				uang1();
						break;
	}
	
}
