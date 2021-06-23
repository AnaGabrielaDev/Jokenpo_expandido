#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include <locale.h>

/* Tesoura corta papel
Papel cobre pedra
Pedra esmaga lagarto
Lagarto envenena Spock
Spock esmaga (ou derrete) tesoura
Tesoura decapita lagarto
Lagarto come papel
Papel refuta Spock
Spock vaporiza pedra
Pedra amassa tesoura */
#define pedra 1
#define papel 2
#define tesoura 3
#define lagarto 4
#define spock 5  

using namespace std;

int jogada (1 || " pedra"), pc;
char opcao; 

int main(){
    setlocale (LC_ALL, "Portuguese");
    //Joguinho

// Loop
do{
    
    //geração de numero aleátorio
    unsigned seed = time(0);
    srand(seed);
   pc = 1+rand()%5; 
    cout << "\n         Pedra, papel, tesoura, lagarto e spoki \n\n" << endl;
    cout << "  Faca a sua jogada! \n" << endl;
    cout << " to pedra press 1 \n to papel press 2 \n to tesoura press 3 \n to lagarto press 4 \n to spoki press 5 \n\n " << endl;
    cin >> jogada;

 switch  (jogada){
        //1 - pedra
        case pedra:
        if (pc == 1){
           cout << "\nEmpate, tente novamente!" << endl;
        }
        else if (pc == 2) {
            cout << "\nVoce perdeu, hahaha" << "\n foi engolido por um papel" << endl;
        }
        else if (pc == 3){
            cout << "\nVoce amassou uma tesoura ihuuu" << endl;
        }
        else if (pc == 4){
            cout << "\nVoce esmagou um lagartooo " << endl;
        }
        else if (pc == 5){
            cout << "\nGoes nowhere, does nothing! \n" <<  "Voce foi vaporizado pelo Spock \n" << endl;
        }
        break;

        // 2 - papel
        case papel:
        if (pc == 1){
            cout << "\nVoce cobriu pedra \n rude mas merecido" << endl;
        }
        else if (pc == 2){
            cout << "\nEmpataram! Jogue novamente :) " << endl;
        }
        else if (pc == 3){
            cout << "\nVoce foi cortado ao meio pela tesoura" << endl;
        }
        else if (pc == 4){
            cout << "\nVoce virou comida de lagarto :( " << endl;
        }
        else if (pc == 5){
            cout << "\nO miseravel eh um genio! Voce refutou Spock" << endl;
        }
        break;

        // 3 - tesoura
        case tesoura:
        if (pc == 1){
            cout << "\nYou fail and a tesoura te esmagou" << endl;
        }
        else if (pc == 2){
            cout << "\nVoce eh Tao amolada que cortou o papel " << endl;
        }
        else if (pc == 3){
            cout << "\nHouve um empate, grr! Tente novamente! :)" << endl;
        }
        else if (pc == 4){
            cout << "\nArgh! O pescoço voou quando voce cortou a cabeca do lagarto \n  faz de novoo?? " << endl;
        }
        else if (pc == 5){
            cout << "\nAcho que voce foi derretido - ou esmagado - pelo Spock. \n Só sei que voce tá feio!" << endl;
        }
        break;

        // 4 - lagarto
        case lagarto:
        if (pc == 1){
            cout << "\nA pedra te esmagou, vai deixar???" << endl;
        }
        else if (pc == 2){
            cout << "\nTe comeram... acho que foi o papel!  haha" << endl;
        }
        else if (pc == 3) {
            cout << "\nCade a sua cabeça? ah, a Tesoura decapitou" << endl;
        }
        else if (pc == 4){
            cout << "\nDois lagartos e um empate :)" << endl;
        }
        else if (pc == 5){
            cout << "\nApesar de ser um lagarto humanoide, o seu veneno é mortal. Press f to Spock" << endl;
        }
        break;

        // 5 - spock
        case spock:
        if (pc == 1){
            cout << "\nIhhh voce foi refutado pelo Papel! Eu nao deixava..." << endl;
        }
        else if (pc == 2){
            cout << "\nApesar de ser um vulcano, precisava vaporizar a pedra?" << endl;
        }
        else if (pc == 3){
            cout << "\nVoce derreteu a tesoura! :)" << endl;
        }
        else if (pc == 4){
            cout << "\nAchei que isso verde fosse o seu sangue mas é apenas veneno do lagarto \n Voce perdeu :)" << endl;
        }
        else if (pc == 5){
            cout << "\nEmpate :( \n Tente novamente" << endl;
        }

    }
        //Loop
      cout << "\n\n\n Deseja jogar novamente? Se sim, digite 's' ";
      cin >> opcao;

    }while(opcao == 's');
        cout << " Obrigada por jogar e ate a proxima S2" << endl;
        system ("PAUSE");
        return 0;
        }
        