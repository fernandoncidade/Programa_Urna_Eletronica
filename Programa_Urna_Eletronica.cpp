/*Meu.2o.Programa.19.10.2021.UrnaEletronica*/

#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, cand5 = 0, cand6 = 0, branco = 0, nulo = 0;

void contagem (char voto_confirmado)
{
    if (voto_confirmado == '1'){cand1++;}
    if (voto_confirmado == '2'){cand2++;}
    if (voto_confirmado == '3'){cand3++;}
    if (voto_confirmado == '4'){cand4++;}
    if (voto_confirmado == '5'){cand5++;}
    if (voto_confirmado == '6'){cand6++;}
    if (voto_confirmado == 'b'){branco++;}
    if ((voto_confirmado != '1') && (voto_confirmado != '2') &&
        (voto_confirmado != '3') && (voto_confirmado != '4') &&
        (voto_confirmado != '5') && (voto_confirmado != '6') &&
        (voto_confirmado != 'b') && (voto_confirmado != '*')) {nulo++;}
}

void dados (int cand1, int cand2,int cand3, int cand4,int cand5, int cand6,int branco, int nulo)
{
    int i = 0;
    cout << endl << "           Total de Votos em cada candidato" << endl << endl;
    cout << " Candidato 1 - " << cand1 << "         "; for (i = 0; i < cand1; i++) {cout << "\x01";}; cout << endl;
    cout << " Candidato 2 - " << cand2 << "         "; for (i = 0; i < cand2; i++) {cout << "\x01";}; cout << endl;
    cout << " Candidato 3 - " << cand3 << "         "; for (i = 0; i < cand3; i++) {cout << "\x01";}; cout << endl;
    cout << " Candidato 4 - " << cand4 << "         "; for (i = 0; i < cand4; i++) {cout << "\x01";}; cout << endl;
    cout << " Candidato 5 - " << cand5 << "         "; for (i = 0; i < cand5; i++) {cout << "\x01";}; cout << endl;
    cout << " Candidato 6 - " << cand6 << "         "; for (i = 0; i < cand6; i++) {cout << "\x01";}; cout << endl;
    cout << " Voto em Branco - " << branco << "       "; for (i = 0; i < branco; i++) {cout << "\x01";}; cout << endl;
    cout << " Voto Nulo - " << nulo << "           "; for (i = 0; i < nulo; i++) {cout << "\x01";};
    cout << endl << endl << endl << endl;
}

void vencedor ()
{
    if ((cand1 > cand2) && (cand1 > cand3) && (cand1 > cand4) && (cand1 > cand5) && (cand1 > cand6)) {cout << endl << "     Candidato 1 Venceu!" << endl;}
    else if ((cand2 > cand1) && (cand2 > cand3) && (cand2 > cand4) && (cand2 > cand5) && (cand2 > cand6)) {cout << endl << "     Candidato 2 Venceu!" << endl;}
    else if ((cand3 > cand1) && (cand3 > cand2) && (cand3 > cand4) && (cand3 > cand5) && (cand3 > cand6)) {cout << endl << "     Candidato 3 Venceu!" << endl;}
    else if ((cand4 > cand1) && (cand4 > cand2) && (cand4 > cand3) && (cand4 > cand5) && (cand4 > cand6)) {cout << endl << "     Candidato 4 Venceu!" << endl;}
    else if ((cand5 > cand1) && (cand5 > cand2) && (cand5 > cand3) && (cand5 > cand4) && (cand5 > cand6)) {cout << endl << "     Candidato 5 Venceu!" << endl;}
    else if ((cand6 > cand1) && (cand6 > cand2) && (cand6 > cand3) && (cand6 > cand4) && (cand6 > cand5)) {cout << endl << "     Candidato 6 Venceu!" << endl;}
    else cout << endl << "  Empate - Segundo Turno" << endl;
}

int main ()
{
    char voto, confirma = 's', voto_confirmado;
    cout << "                   Eleicoes 2021" << endl << endl;
    cout << "Para encerrar o Programa, entre com * e confirme o voto" << endl << endl;

    cout << "Informe se deseja votar em branco, nulo, ou insira o numero do seu respectivo candidato: " << endl << endl
         << "     Candidato 1 - 1            Candidato 2 - 2" << endl
         << "     Candidato 3 - 3            Candidato 4 - 4" << endl
         << "     Candidato 5 - 5            Candidato 6 - 6" << endl
         << "  Voto em Branco - b            Voto Nulo   - n" << endl << endl << endl;
    do
    {
        cout << "       Insira seu voto: "; cin >> voto; cout << endl;
        cout << "Confirmar voto <s>: "; cin >> confirma; cout << endl;
        if (confirma == 's')
        {
            voto_confirmado = voto;
            contagem (voto_confirmado);
        }
    }
    while (voto_confirmado != '*');
    dados (cand1, cand2, cand3, cand4, cand5, cand6, branco, nulo);
    vencedor();
    return 0;
}
