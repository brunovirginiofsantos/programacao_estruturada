#include <iostream>
#include <fstream>

using namespace std;

int main (){

    string texto;
    ifstream ler_texto;
    
    ler_texto.open("texto.txt");
    while(getline(ler_texto,texto)){
        cout << texto << endl;
    }
        
    ler_texto.close();
}