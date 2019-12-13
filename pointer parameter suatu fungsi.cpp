#include <iostream>
using namespace std;

void tambah(int *angka){
*angka +=30;
}

int main(){
int nilai = 20;
cout<<"Nilai variabel nilai adalah = "<<nilai<<endl;
tambah(&nilai); //Memasukkan alamat variabel nilai pada fungsi tambah
cout<<"Nilai variabel nilai adalah = "<<nilai<<endl;
return 0;
}
