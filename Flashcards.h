//María José Soto Castro A01705840
// Last Update:  21/05/2023 00:34 AM

#ifndef FLASHCARDS_H
#define FLASHCARDS_H

#include <iostream>
#include <sstream>

using namespace std;

class Flashcards{
	protected:
		bool correcta;
        int repeticiones;
        int dificultad;
        string tema;
        string status;
		string palabra_esp;
        string palabra_rus;
        string tipo;
        string opcion;
	public:
        Flashcards();
		Flashcards(string pal_esp, string pal_rus, string tema, 
        string stat, int dif);
		Flashcards(string pal_esp, string pal_rus, string tema, 
        string stat);
		void repetir(bool correcta);
		bool get_correcta(){return correcta;}
        int get_repeticiones(){return repeticiones;}
        int get_dificultad(){return dificultad;}
        string get_tema(){return tema;}
        string get_status(){return status;};
        string get_palabra_esp(){return palabra_esp;}
        string get_palabra_rus(){return palabra_rus;}
        string get_tipo(){return tipo;}
        string get_opcion(){return opcion;}
        void set_opcion(string op);
        void set_correcta(bool corr);
        void set_repeticiones(int rep);
        void set_dificultad(int dif);
        void set_tema(string tem);
        void set_status(string stat);
        void set_palabra_esp(string pal_esp);
        void set_palabra_rus(string pal_rus);
        void set_tipo(string tip);
        virtual void felicitacion() = 0; 
        //Poliformismo Cambian las felicitaciones 
        //en base a el tipo de palabra.
        virtual string to_string();
    
};

Flashcards::Flashcards(){
    correcta = true;
    repeticiones = 0;
    dificultad = 0;
    tema = "";
    status = "";
    palabra_esp = "";
    palabra_rus = "";
}

Flashcards::Flashcards(string pal_esp, string pal_rus, string tem, 
string stat, int dif){
    correcta = true;
    repeticiones = 0;
    dificultad = dif;
    tema = tem;
    status = stat;
    palabra_esp = pal_esp;
    palabra_rus = pal_rus;
}

Flashcards::Flashcards(string pal_esp, string pal_rus, string tem,
string stat){
    correcta = true;
    repeticiones = 0;
    dificultad = 0;
    tema = tem;
    status = stat;
    palabra_esp = pal_esp;
    palabra_rus = pal_rus;
}

void Flashcards::set_correcta(bool corr){
    correcta = corr;
}

void Flashcards::set_repeticiones(int rep){
    repeticiones = rep;
}

void Flashcards::set_dificultad(int dif){
    dificultad = dif;
}

void Flashcards::set_tema(string tem){
    tema = tem;
}

void Flashcards::set_status(string stat){
    status = stat;
}

void Flashcards::set_palabra_esp(string pal_esp){
    palabra_esp = pal_esp;
}

void Flashcards::set_palabra_rus(string pal_rus){
    palabra_rus = pal_rus;
}

void Flashcards::set_tipo(string tip){
    tipo = tip;
}

void Flashcards::set_opcion(string op){
    opcion = op;
}

void Flashcards::repetir(bool correcta){
    repeticiones++;
    status = "repetir"; 
}


string Flashcards::to_string(){
    stringstream aux;
    aux << " \n Palabra en Español:  \t" << palabra_esp 
    << "\n Palabra en Ruso: \t " << palabra_rus << "\n Tipo: \t " 
    << tipo  <<  endl;
    return aux.str();
}


#endif