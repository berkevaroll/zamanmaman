/****************************************************************************
**					        SAKARYA ÜNİVERSİTESİ                           **
**			         BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ             **
**				        BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ                     **
**				          PROGRAMLAMAYA GİRİŞİ DERSİ                       **
**                                                                         **
**				ÖDEV NUMARASI......: 1                                     **
**				ÖĞRENCİ ADI........: Berke VAROL                           **
**				ÖĞRENCİ NUMARASI...: b161210022                            **
**				DERS GRUBU.........: BILMEM                                **   
****************************************************************************/


#include <iostream>
#include <string> 

typedef struct Zaman{
    int saat;
    int dakika;
    int saniye;
    long toplam_saniye;


} Zaman;


using namespace std;
int main()
{
    Zaman zaman;
    bool saatok = true, dakikaok = true, saniyeok = true;
    string input;
    cout << "Zaman:Dakika:Saniye seklinde zamani giriniz: ";
    cin >> input;
    int indeksler[2];
    indeksler[0] = input.find(':');
    indeksler[1] = input.find(":", indeksler[0] + 1);
    zaman.saat = stoi(input.substr(0, indeksler[0] + 1)); if (zaman.saat < 0 || zaman.saat >= 24) { cout << "girilen saat degeri " << zaman.saat << " yanlis girilmistir" << endl; saatok = false; }
    zaman.dakika = stoi(input.substr(indeksler[0]+1, indeksler[1] - indeksler[0]-1)); if (zaman.dakika < 0 || zaman.dakika >= 60) { cout << "girilen dakika degeri " << zaman.dakika << " yanlis girilmistir"<<endl; dakikaok = false; }
    zaman.saniye = stoi(input.substr(indeksler[1]+1, input.length() - indeksler[1]-1)); if (zaman.saniye < 0 || zaman.saniye >= 60) { cout << "girilen saniye degeri " << zaman.saniye << " yanlis girilmistir"<<endl; saniyeok = false; }
    
    if (saatok && dakikaok && saniyeok) {
        zaman.toplam_saniye = zaman.saat * 3600 + zaman.dakika * 60 + zaman.saniye;
        cout << endl << "Saniye olarak hesaplanan deger: " << zaman.toplam_saniye;
    }
    return 0;


}