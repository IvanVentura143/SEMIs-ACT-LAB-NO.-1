#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    
    cout << "Welcome sa aking diksyonaryo ng iba't-ibang uri ng sasakyan" << endl;
    cout << "Sasakyan: ";
    cin >> word;
    
    if (word == "bisekleta") {
        cout << "Uri ng sasakyan: Sasakyang pang-lupa" << endl;
        cout << "Paraan ng paggamit: Ang bisekleta ay isang uri ng sasakyang pang-lupa na ginagamitan ng pagpadyak upang ito ay umandar." << endl;
    } if (word == "motorsiklo") {
        cout << "Uri ng sasakyan: Sasakyang pang-lupa" << endl;
        cout << "Paraan ng paggamit: Ginagamitan ito ng gasolina upang mapaandar. Upang ito ay umarangkada, iniikot ang hawakan nito sa kanan pababa." << endl;
    } if (word == "kotse") {
        cout << "Uri ng sasakyan: Sasakyang pang-lupa" << endl;
        cout << "Paraan ng paggamit: Ito ay kinokontrol gamit ang steering wheel na kadalasang nasa kaliwang bahagi ng dalawang upuan sa harap (left-hand drive). Sa ibaba ng manibela ay mayroong pedal na kailangang tapakan upang ito'y mapaandar. Nakapaloob sa mga pedal na ito ang clutch, preno, at accelerator." << endl;
    } if (word == "bangka") {
        cout << "Uri ng sasakyan: Sasakyang pang-tubig" << endl;
        cout << "Paraan ng paggamit: Ito ay ginagamitan ng sagwan upang itulak ang tubig palikod o paharap nang sa gayon ay maaari itong umabante, umatras, o di kaya'y lumiko o umikot." << endl;
    } else {
        cout << "Wala pa iyan sa aking diksyonaryo ngunit makakaasa kang mailalagay ko yan sa susunod " << endl;
    }
    
    return 0;
}
