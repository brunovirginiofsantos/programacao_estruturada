#include <iostream>
#include <fstream>
using namespace std;

int main (){

    string texto;

    ofstream arquivo;
    arquivo.open("texto.txt");

    arquivo << "Estou adicionando uma linha" << endl;
    arquivo << "C++ é mais fácil que C" << endl;

    arquivo.close();
}
