#ifndef OBJETO_H
#define OBJETO_H

#include <iostream>
#include <sstream>

#include "Flashcards.h"

using namespace std;

//Clase Hija Objeto
class Objeto: public Flashcards{
    private:
        string genero;
        string opcion;

    public:
        Objeto(string pal_esp, string pal_rus, string tem, 
        string stat, int dif):Flashcards(pal_esp, pal_rus, 
        tem, stat, dif){
            tipo = "Objeto";
        };

        Objeto(): Flashcards("", "", "", "Nueva", 0) {
            tipo = "Objeto";
        };
        string get_genero(){return genero;}
        string to_string();
        void set_genero(string gen);
        void felicitacion(){cout<<"Bay, хорошо! \n ";}

};

void Objeto::set_genero(string gen){
    genero = gen;
}

string Objeto::to_string(){
    stringstream aux;
    aux << " \n Palabra en Español:  \t" << palabra_esp 
    << "\n Palabra en Ruso: \t " << palabra_rus << "\n Tipo: \t " 
    << tipo << endl;
    return aux.str();
}
#endif