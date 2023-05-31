
#ifndef ADJETIVO_H
#define ADJETIVO_H

#include <iostream>
#include <sstream>

#include "Flashcards.h"

using namespace std;

//Clase Hija Adjetivo
class Adjetivo: public Flashcards{
    private:
        bool regular;

    public:
        Adjetivo(string pal_esp, string pal_rus, string tem, string stat, int dif, bool reg):Flashcards(pal_esp, pal_rus, tem, stat, dif){
        regular = reg;
        tipo = "Adjetivo";
        };
        bool get_regular(){return regular;}
        void set_regular(bool reg);
        string to_string();
        void felicitacion(){cout<<"Супер!";}
};

void Adjetivo::set_regular(bool reg){
    regular = reg;
}

string Adjetivo::to_string(){
    stringstream aux;
    aux << " \n Palabra en Español:  \t" << palabra_esp << "\n Palabra en Ruso: \t " << palabra_rus << "\n Tipo: \t " << tipo  << "\n";
    return aux.str();
}

#endif