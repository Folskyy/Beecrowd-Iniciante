#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int dia, diaf, hora, horaf, minuto, minutof, segundo, segundof;
    string lixo;

    cin >> lixo >> dia >> hora >> lixo >> minuto >> lixo >> segundo;
    cin >> lixo >> diaf >> horaf >> lixo >> minutof >> lixo >> segundof;

    dia     = diaf - dia;
    hora    = horaf - hora;
    minuto  = minutof - minuto;
    segundo = segundof - segundo;

    while (segundo < 0){
        segundo += 60;
        minuto--;
    }
    while (minuto < 0){
        minuto += 60;
        hora--;
    }
    while (hora < 0){
        hora += 24;
        dia--;
    }
    
    cout << dia << " dia(s)"     << endl
    << hora     << " hora(s)"    << endl
    << minuto   << " minuto(s)"  << endl
    << segundo  << " segundo(s)" << endl;
}
