#include <iostream>
using namespace std;
class vacancy{
  public:
  	void process();
  private:
  	int option1, option2, gaji1, bulan1, bonus1, bulan2, bonus2, gaji2, potongan1, potongan2;
  	char pilihan;
  	float pengalaman,tahun, tahun2;
};
void vacancy::process(){
	cout << "=======================================" <<endl;
	cout << "|1. Express JS    : 15 Juta / Perbulan|" << endl;
	cout << "|2. Django Python : 13 Juta / Perbulan|" << endl;
	cout << "|3. Rails Ruby    : 8  Juta / Perbulan|" << endl;
	cout << "|4. Laravel PHP   : 18 Juta / Perbulan|" << endl;
	cout << "|5. Spring Java   : 8  Juta / Perbulan|" << endl;
	cout << "|6. Angular JS    : 15 Juta / Perbulan|" << endl;
	cout << "=======================================" <<endl;
	cout << "Pilih Projek yang ingin dipilih	: ";cin >> option1;
	switch(option1)
		{
    	case 1 :
		option1 = 15000000; break;
	  	case 2 :
		option1 = 13000000; break;
	  	case 3 :
		option1 = 8000000; break;
	  	case 4 :
		option1 = 18000000; break;
	  	case 5 :
		option1 = 8000000; break;
  		case 6 :
		option1 = 15000000; break;
    }
    cout << "=======================================" <<endl;
    cout << "\nBerapa tahun pengalaman pada bidang tersebut	: ";cin >> tahun;
	if (tahun > 2.5){
		cout << "Pilih Projek kedua yang ingin dipilih		: ";cin >> option2;
	    switch(option2){
	    	case 1 :
			option2 = 15000000; break;
			case 2 :
			option2 = 13000000; break;
			case 3 :
			option2 = 8000000; break;
			case 4 :
			option2 = 18000000; break;
			case 5 :
			option2 = 8000000; break;
		  	case 6 :
			option2 = 15000000; break;
		}
		cout << "Berapa bulan masa pengerjaan projek Pertama	: "; cin >> bulan1;
		cout << "Berapa bulan masa pengerjaan projek Kedua	: "; cin >> bulan2;
		if(tahun >= 4) {
			bonus1 = (option1 * 0.04);
			bonus2 = (option2 * 0.04);
		}
		else if (tahun < 4) {
			bonus1 = 0;
			bonus2 = 0;
		}
		potongan1 = (option1 * 0.09);
		potongan2 = (option2 * 0.09);
		gaji1 = (( option1 - potongan1 + bonus1) * bulan1);
		gaji2 = (( option2 - potongan2 + bonus1) * bulan2);
		
		cout << "\n=========== SLIP GAJI PROJEK 1 ==========="<<endl;
		cout << "GAJI POKOK			: " << option1 << endl;
		cout << "Potognan			: " << potongan1 << endl;
		cout << "Bonus				: " << bonus1 << endl;
		cout << "Pengerjaan projek pertama	: " << bulan1 << " bulan" << endl;
		cout << "Total Pendapatan Projek 2 	: " << gaji1 << endl;
		
		cout << "\n=========== SLIP GAJI PROJEK 2 ==========="<<endl;
		cout << "GAJI POKOK			: " << option2 << endl;
		cout << "Potognan			: " << potongan2 << endl;
		cout << "Bonus				: " << bonus2 << endl;
		cout << "Pengerjaan projek kedua		: " << bulan2 << " bulan" << endl;
		cout << "Total Pendapatan Projek 1	: " << gaji2 << endl;
		
		cout << "\n=========================================="<<endl;
		cout << "Total Pendapatan Keseluruhan	: " << gaji1 + gaji2 << endl;
	}
	else if (tahun < 2.5){
		cout << "Berapa bulan masa pengerjaan projek pertama	: "; cin >> bulan1;
		bonus1 = 0;
		gaji1 = (( bonus1 + option1) * bulan1);
		
		cout << "===== SLIP GAJI DEVELOPER FITUR LOGIN ====="<<endl;
		cout << "GAJI POKOK			: " << option1 << endl;
		cout << "Bonus				: " << bonus1 << endl;
		cout << "Potognan			: " << potongan2 << endl;
		cout << "Bulan pengerajaan		: " << bulan1 << " bulan" << endl;
		cout << "Total				: " << gaji1 << endl;
	}
}

int main() {
  vacancy mulai;
  mulai.process();
  return 0;
}