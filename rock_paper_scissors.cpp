#include <iostream> 
#include <iomanip> 
#include <algorithm>
#include <time.h>

using namespace std;

int main()
{
    int galibiyet=0;
    int maglubiyet=0;
    int berabere=0;
    const char *myarray[5]{"T","K","M","X"};
    char kullanici_choice;


    while(true)
    {
        cout << "Tas(T) Kagit(K) veya Makas(M)dan birini seciniz ya da cikis yapmak icin X e basiniz "<< endl;
        cin >> 	kullanici_choice;
        

		if(kullanici_choice=='X'){
			break;
		}
		else{
			srand ( time(NULL) );
			char* secenek[3] = {"T","K","M"};
            int degisken = rand() % 3;
            char* bilgisayar_choice=secenek[degisken];
            
            
            if (bilgisayar_choice=="T"){
            	if (kullanici_choice == 'K'){
            		cout << "Kazandiniz "<< endl;
            		galibiyet+=1;
            		continue;
            	}
            	else if (kullanici_choice == 'M'){
            		cout << "Kaybettiniz "<< endl;
            		maglubiyet+=1;
            		continue;
            	}
				else{
					cout << "Berabere "<< endl;
            		berabere+=1;
            		continue;
				}	
				}
            if (bilgisayar_choice=="M"){
            	if (kullanici_choice == 'T' ){
            		cout << "Kazandiniz "<< endl;
            		galibiyet+=1;
            		continue;
            	}
            	else if (kullanici_choice == 'K'){
            		cout << "Kaybettiniz "<< endl;
            		maglubiyet+=1;
            		continue;
            	}
				else{
					cout << "Berabere "<< endl;
            		berabere+=1;
            		continue;
				}	
				}
            if (bilgisayar_choice=="K"){
            	if (kullanici_choice == 'M'){
            		cout << "Kazandiniz "<< endl;
            		galibiyet+=1;
            		continue;
            	}
            	else if (kullanici_choice == 'T'){
            		cout << "Kaybettiniz "<< endl;
            		maglubiyet+=1;
            		continue;
            	}
				else{
					cout << "Berabere "<< endl;
            		berabere+=1;
            		continue;
				}	
				}				
						

				}
            	
            	
            	
			}
            
    return 0;
}
