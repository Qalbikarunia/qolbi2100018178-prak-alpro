#include <iostream>
using namespace std;

int main(){
    int bil1, bil2, pil;

	float hasil;

	string operasi;

	

	cout<<"Pilih Operator yang di inginkan"<<endl;

	cout<<"1. penjumlahan"<<endl;

	cout<<"2. pengurangan"<<endl;

	cout<<"3. perkalian"<<endl;

	cout<<"4. pembagian"<<endl;

	

	cout<<"masukan pilihan : ";cin>>pil;

	cout<<"masukan bilangan pertama : ";cin>>bil1;

	cout<<"masukan biangan ke dua : ";cin>>bil2;
	cout<<endl;
	
	if(pil == 1){
		hasil = bil1 + bil2;
		cout<<bil1<<" + "<<bil2<<" = "<<hasil<<endl;
	}else if(pil == 2){
		hasil = bil1 - bil2;
		cout<<bil1<<" - "<<bil2<<" = "<<hasil<<endl;
	}else if(pil == 3){
		hasil = bil1 * bil2;
		cout<<bil1<<" x "<<bil2<<" = "<<hasil<<endl;
	}else if(pil == 4){
		hasil = bil1 / bil2;
		cout<<bil1<<" / "<<bil2<<" = "<<hasil<<endl;
	}else{
		cout<<"Pilihan anda salah !"<<endl;
	}
	
	return 0;
}
