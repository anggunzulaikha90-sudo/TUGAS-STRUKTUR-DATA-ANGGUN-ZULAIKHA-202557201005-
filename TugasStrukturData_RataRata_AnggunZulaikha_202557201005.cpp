#include <iostream>
using namespace std;

int main(){
	
	string Nama;
	int NilaiBasisData;
	int NilaiAljabar;
	int NilaiPAI;
	int NilaiStrukturData;
	int NilaiPemrograman;
	int Hasil;
	
	cout<<"Masukkan Nama : "<<Nama<<endl;
	getline(cin, Nama);
	
	cout<<"Masukkan Nilai Basis Data : "<<endl;
	cin>>NilaiBasisData;
	
	cout<<"Masukkan Nilai Aljabar : "<<endl;
	cin>>NilaiAljabar;
	
	cout<<"Masukkan Nilai PAI : "<<endl;
	cin>>NilaiPAI;
	
	cout<<"Masukkan Nilai Struktur Data : "<<endl;
	cin>>NilaiStrukturData;
	
	cout<<"Masukkan Nilai Pemrograman : "<<endl;
	cin>>NilaiPemrograman;
	
	Hasil = (NilaiBasisData+NilaiAljabar+NilaiPAI+NilaiStrukturData+NilaiPemrograman)/5;
	
	cout<<"------------- HASIL ------------"<<endl;
	
	cout<<"Rata-Rata Nilai: "<<Hasil<<endl;
	
	if(Hasil>=86){
		cout<<"Predikat: A";
	}else if (Hasil>=80){
		cout<<"Predikat: B";
	}else if (Hasil>=70){
		cout<<"Predikat: C";
	}else if (Hasil>=60){
		cout<<"Predikat: D";
	}else {
		cout<<"Predikat: E";
	}
	
}
