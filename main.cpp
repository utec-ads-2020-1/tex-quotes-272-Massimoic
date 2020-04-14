#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;


int main() {
    char comillas = '"';
    string texto = "", replace1 = "``", replace2 = "''", line = "";
    /*fstream* archivo = new fstream("test.txt", ios_base::in);
    if(archivo) {
        while(getline(*archivo,line)) {
            texto += line;
            texto += ' ';
            texto += "\n";
        }
    }
    archivo->close();*/

    while(getline(cin , line )) {
        texto += line;
        texto += ' ';
        texto += "\n";
    }
    int count = 1;

    for(int i = 0 ; i < texto.length() ; i++) {
        if (texto[i] == comillas) {
            count % 2 == 0 ? texto.insert(i+1,replace2 ) : texto.insert(i+1, replace1);
            count++;
        }

    }

    texto.erase(remove(texto.begin(),texto.end(),'"'), texto.end());

    cout << texto;

    return 0;
}