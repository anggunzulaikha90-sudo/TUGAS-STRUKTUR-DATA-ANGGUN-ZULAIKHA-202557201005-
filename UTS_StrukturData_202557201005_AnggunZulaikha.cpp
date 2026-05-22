#include<iostream>
using namespace std;

struct Pegawai{
	string nama;
	int jamKerja;
	int honorLembur;
	int totalHonor;
};

void hitungHonor(Pegawai &p){
	int honorHarian = 80000;
	
	if (p.jamKerja > 8){
		int kelebihanJam = p.jamKerja - 8;
		p.honorLembur = kelebihanJam * 10000;
		p.totalHonor = honorHarian + p.honorLembur;
	}else{
		p.honorLembur = 0;
		p.totalHonor = honorHarian;
	}
	
}
int main(){
	int jumlah;
	
	cout<<"Masukkan jumlah data pegawai: ";
	cin>>jumlah;
	
	Pegawai pgw[jumlah];
	
	for(int i = 0; i < jumlah; i++){
		cout<< "\nData Pegawai ke-"<<i+1<<endl;
		
		cout<<"Nama Pegawai: ";
		cin>> pgw[i].nama;
		cout<<"Jam Kerja: ";
		cin>>pgw[i].jamKerja;
		
		hitungHonor(pgw[i]);
		
		
	}
	cout<<"\n====== HASIL PERHITUNGAN ======"<<endl;
	
	for(int i = 0; i < jumlah; i++){
		cout<<"\nPegawai ke-"<<i+1<<endl;
		cout<<"Nama\t: "<<pgw[i].nama<<endl;
		cout<<"Jam Kerja\t: "<<pgw[i].jamKerja<<endl;
		cout<<"Honor lembur\t: "<<pgw[i].honorLembur<<endl;
		cout<<"Total Honor\t: "<<pgw[i].totalHonor<<endl;
	}
	return 0;	
}
