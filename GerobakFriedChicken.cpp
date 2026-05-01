#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	char jenis;
	int banyakJenis, banyakBeli;
	int hargaSatuan, jumlahHarga, totalBayar = 0;
	string namaJenis;
	
	
	cout<<"GEROBAK FRIED CHICKEN"<<endl;
	cout<<"-----------------"<<endl;
	cout<<"Kode Jenis Harga"<<endl;
	cout<<"---------------------"<<endl;
	cout<<"D Dada Rp. 2500"<<endl;
	cout<<"P Paha Rp. 2000"<<endl;
	cout<<"S Sayap Rp. 1500"<<endl;
	cout<<"---------------------"<<endl;
	
	cout<<"Banyak Jenis : ";
	cin>> banyakJenis;
	
	int no[100], harga[100], banyak[100], jumlah[100];
	string nama[100];
	
	for(int i =0; i < banyakJenis; i++){
		cout<<"\nJenis Ke - "<<i+1<<endl;
		cout<<"Jenis Potong [D/P/S] : ";
		cin>>jenis;
		cout<<"Banyak Potong        : ";
		cin>> banyakBeli;
		
		
		//Menentukan harga barang berdasarkan kode
		if(jenis == 'D' || jenis == 'd'){
			hargaSatuan = 2500;
			namaJenis = "Dada";
		}
		else if(jenis == 'P' || jenis == 'p'){
			hargaSatuan = 2000;
			namaJenis = "Paha";
		}
		else if(jenis == 'S' || jenis == 's'){
			hargaSatuan = 1500;
			namaJenis = "Sayap";
		}
		else{
			cout<<"Kode Salah!"<<endl;
			return 0;
		}
		jumlahHarga = hargaSatuan * banyakBeli;
		totalBayar += jumlahHarga;
		
		no[i] = i+1;
		nama[i] = namaJenis;
		harga[i] = hargaSatuan;
		banyak[i] = banyakBeli;
		jumlah[i] = jumlahHarga;
	}
	cout<<"\nGEROBAK FRIED CHICKEN"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout<<left<<setw(5)<<"No"
	<<setw(12)<<"Jenis"<<setw(8)
	<<"Harga"<<setw(8)<<"Banyak"
	<<setw(10)<<"Jumlah"<<endl;
	
	cout<<"     Potong\t Satuan\t Beli\t Harga"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	
	for(int i = 0; i < banyakJenis; i++){
		cout<<left<<setw(5)<<no[i]<<setw(12)<<nama[i]
		<<setw(10)<<harga[i]<<setw(6)<<banyak[i]<<"Rp. "
		<<jumlah[i]<<endl;
	}
	int pajak = totalBayar * 0.1;
	int totalAkhir = totalBayar + pajak;
	cout<<"-------------------------------------------------"<<endl;
	cout<<right<<setw(40)<<"Jumlah Bayar : Rp. "<<totalBayar<<endl;
	cout<<right<<setw(40)<<"Pajak 10%    : Rp. "<<pajak<<endl;
	cout<<right<<setw(40)<<"Total Bayar  : Rp. "<<totalAkhir<<endl;
	cout<<"-------------------------------------------------"<<endl;
	
	return 0;
}
