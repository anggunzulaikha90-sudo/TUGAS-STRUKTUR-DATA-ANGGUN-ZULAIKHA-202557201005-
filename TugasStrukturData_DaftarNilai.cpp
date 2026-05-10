#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
	struct Mahasiswa {
		string nama;
		float uts, uas, nilaiAkhir;
		char nilaiHuruf;
	};
	
	float hitungNilaiAkhir(float uts, float uas){
		return (uas * 0.4) + (uts * 0.6);
	}
	
	char hitungNilaiHuruf(float nilaiAkhir){
		if (nilaiAkhir >= 80)
			return 'A';
		else if (nilaiAkhir >=70)
			return 'B';
		else if (nilaiAkhir >= 56)
			return 'C';
		else if (nilaiAkhir >=47)
			return 'D';
		else
			return 'E';
	}


int main (){
	int a;
	
	cout<<"Masukkan jumlah data mahasiswa : ";
	cin>>a;
	Mahasiswa mhs[a];
	
	for (int i = 0; i < a; i++){
		cout<< "\nData Mahasiswa ke- "<<i + 1<<endl;
		
		cin.ignore();
		cout<<"Nama Mahasiswa : ";
		getline(cin, mhs[i].nama);
		
		cout<<"Nilai UTS : ";
		cin>> mhs[i].uts;
		
		cout<<"Nilai UAS : ";
		cin>> mhs[i].uas;
		
		mhs[i].nilaiAkhir = hitungNilaiAkhir(mhs[i].uts, mhs[i].uas);
		mhs[i].nilaiHuruf =  hitungNilaiHuruf(mhs[i].nilaiAkhir);
	
	}system("cls");
	cout << "\t\tDaftar Nilai Mata Kuliah C++"<<endl;
	cout<< setfill('-')<<setw(59)<<"-"<<endl;
	cout<< setfill(' ');
	cout<< left<< setw(7)<<"No"
		<<setw(16)<<"Nama"
		<<setw(15)<<"Nilai"
		<<setw(11)<<"Nilai"
		<<setw(15)<<"Nilai"<<endl;
	cout<<left<<setw(20)<<"       Mahasiswa"
		<<setw(8)<<"UTS"
		<<setw(10)<<"UAS"
		<<setw(11)<<"Akhir"
		<<setw(10)<<"Huruf"<<endl;
	cout<< setfill('-')<<setw(59)<<"-"<<endl;
	cout<< setfill(' ');
	for (int i = 0; i < a; i++){
		
	cout<<left<<setw(7)<<i+1
		<<setw(13)<<mhs[i].nama
		<<setw(8)<<mhs[i].uts
		<<setw(10)<<mhs[i].uas
		<<setw(13)<<mhs[i].nilaiAkhir
		<<setw(12)<<mhs[i].nilaiHuruf<<endl;}
		
	cout<<setfill('-')<<setw(59)<<"-"<<endl;
	cout<<setfill(' ');
	
	return 0;
}
