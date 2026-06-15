#include<iostream>
using namespace std;

// Stack
int stackData[100];
int top = -1;

void tampilStack() {
	if(top == -1) {
		cout<<"Tampil Data: kosong\n";
	}else {
		cout<<"Tampil Data: ";
		for(int i = top; i>= 0; i--) {
			cout<< stackData[i]<<" ";
		}
		cout<<endl;
	}
}

void push() {
	if (top == 99) {
		cout<<"Stack penuh!\n";
	}else {
		int data;
		cout<<"Masukkan data: ";
		cin>>data;
		
		top++;
		stackData[top] = data;
		
		cout<<"Data berhasil ditambahkan.\n";
	}
}

void pop() {
	if(top == -1) {
		cout<<"Stack kosong!\n";
	}else {
		cout<<"Data "<< stackData[top]<<" dihapus.\n";
		top--;
	}
}

void clearStack() {
	top = -1;
	cout<<"Stack berhasil dikosongkan.\n";
}

// Queue
int queueData[100];
int front = 0;
int rear = -1;

void tampilQueue() {
	if (rear < front){
		cout<<"Tampil Data: Kosong\n";
	}else {
		cout<<"Tampil Data: ";
		for (int i = front; i<= rear; i++){
			cout<<queueData[i]<<" ";
		}
		cout<<endl;
		}
	}

void enqueue(){
	if (rear == 99){
		cout<<"Queue penuh!\n";
	}else {
		int data;
		cout<<"Masukkan data: ";
		cin>>data;
		
		rear++;
		queueData[rear] = data;
		cout<<"Data berhasil ditambahkan.\n";
	}
}

void dequeue(){
	if(rear < front){
		cout<<"Queue kosong!\n";
	}else{
		cout<<"Data "<<queueData[front]<<" dihapus.\n";
		front++;
	}
}

void clearQueue(){
	front = 0;
	rear = -1;
	cout<<"Queue berhasil dikosongkan.\n";
}

// Sorting
void bubbleSort(int arr[], int n){
	for(int i = 0; i<n-1; i++){
		for(int j =0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
// Binary Search
int binarySearch(int arr[], int n, int key){
	int kiri = 0;
	int kanan = n-1;
	
	while (kiri <= kanan){
		int tengah = (kiri + kanan)/2;
		
		if(arr[tengah] == key)
			return tengah;
		if(key<arr[tengah])
		kanan = tengah -1;
		else
		kiri = tengah +1;
	}
	return -1;
}

// Pencarian Stack

void cariStack(){
	if(top == -1){
		cout<<"Stack kosong!\n";
		return;
	}
	
	int dataCari;
cout<<"Masukkan data yang dicari: ";
cin>>dataCari;

int temp[100];
int jumlah = top + 1;
for(int i=0;i<jumlah; i++){
	temp[i] = stackData[i];
}
bubbleSort(temp, jumlah);
int hasil = binarySearch(temp, jumlah, dataCari);
if (hasil != -1){
	cout<<"Data ditemukan\n";
	}else{
		cout<<"Data tidak ditemukan.\n";
	}
	
}



// Pencarian Queue
void cariQueue(){
	if(rear < front){
		cout<<"Queue kosong!\n";
		return;
	}
	int dataCari;
	cout<<"Masukkan data yang dicari: ";
	cin>>dataCari;
	
	int temp[100];
	int jumlah = 0;
	
	for(int i=front;i<=rear;i++){
		temp[jumlah] = queueData[i];
		jumlah++;
	}
	
	bubbleSort(temp, jumlah);
	int hasil = binarySearch(temp, jumlah, dataCari);
	if(hasil !=-1)
	cout<<"Data ditemukan.\n";
	else
	cout<<"Data tidak ditemukan.\n";
}

// Menu Stack

void menuStack(){
	int pilih;
	
	do{
		cout<<"\n+++++++++ STACK +++++++++\n";
		tampilStack();
		cout<<"\nMenu Pilihan\n";
		cout<<"1. Push\n";
		cout<<"2. Pop\n";
		cout<<"3. Clear\n";
		cout<<"4. Pencarian\n";
		cout<<"5. Kembali\n";
		cout<<"Pilih.... ";
		cin>>pilih;
		
		switch(pilih){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				clearStack();
				break;
			case 4:
				cariStack();
				break;
			case 5:
				cout<<"Kembali ke menu utama...\n";
				break;
			default:
				cout<<"Pilihan tidak valid!\n";
		}
	}while (pilih !=5);
}

// Menu Queue
void menuQueue(){
	int pilih;
	do{
		cout<<"\n+++++++++ QUEUE +++++++++\n";
		tampilQueue();
		
		cout<<"\nMenu Pilihan\n";
		cout<<"1. Enqueue\n";
		cout<<"2. Dequeue\n";
		cout<<"3. Clear\n";
		cout<<"4. Pencarian\n";
		cout<<"5. Kembali\n";
		cout<<"Pilih.... ";
		cin>>pilih;
		
		
		switch(pilih){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				clearQueue();
				break;
			case 4:
				cariQueue();
				break;
			case 5:
				cout<<"Kembali ke menu utama...\n";
				break;
			default:
				cout<<"Pilihan tidak valid!\n";
		}
	}while (pilih != 5);
	
}

// Menu Pilihan

int main(){
	int pilih;
	do{
		cout<<"\n++++++++++++++++++++++++++++++++++\n";
		cout<<"	  MENU PILIHAN\n";
		cout<<"++++++++++++++++++++++++++++++++++\n";
		cout<<"1. Stack\n";
		cout<<"2. Queue\n";
		cout<<"3. Keluar\n";
		cout<<"Pilih: ";
		cin>>pilih;
		
		switch (pilih){
			case 1:
				menuStack();
				break;
			case 2:
				menuQueue();
				break;
			case 3:
				cout<<"Program selesai.\n";
				break;
			default:
				cout<<"Pilihan tidak valid!\n";
		}
	}while (pilih != 3);
	return 0;
}

