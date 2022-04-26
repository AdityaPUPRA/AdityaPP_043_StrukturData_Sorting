// Pengurutan angka dari kecil ke besar dengan Selection Sorting

#include<iostream>
using namespace std;

int main() {
    int jumlah_data, tukar, angka[100];
    
	// memasukkan jumlah data yang ingin diurutkan
	cout << "Masukkan jumlah data: ";
    cin >> jumlah_data;

	// menginputkan jumlah data yang ingin diurutkan
    for (int loop = 0; loop < jumlah_data; loop++) {
        cout << "Data ke-" << loop + 1 << " = " ;
        cin >> angka[loop];
        cout << endl;
    }

	/* memproses data dengan selection sort.
	jika data setelahnya lebih kecil maka akan diswap data sebelumnya
	sampai persyaratan data terpenuhi */
    for (int loop = 0; loop < jumlah_data-1; loop++) {
        tukar = loop;
        int tugas;
        for(int loop2 = loop+1; loop2 < jumlah_data; loop2++){
            if(angka[loop2] < angka[tukar]){
                tukar = loop2;
            }
        }   
        
        tugas = angka[tukar];
        angka[tukar] = angka[loop];
        angka[loop] = tugas;

    }
    
    // menampilkan data yang telah diurutkan
    for(int loop = 0; loop < jumlah_data; loop++){
        cout << angka[loop] << " ";

    }
    
    cin.get();
    return 0;

}

