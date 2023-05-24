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
	public:
        Flashcards();
		Flashcards(string pal_esp, string pal_rus, string tema, string stat, int dif);
		Flashcards(string pal_esp, string pal_rus, string tema, string stat);
		void repetir(bool correcta);
		bool get_correcta(){return correcta;}
        int get_repeticiones(){return repeticiones;}
        int get_dificultad(){return dificultad;}
        string get_tema(){return tema;}
        string get_status(){return status;};
        string get_palabra_esp(){return palabra_esp;}
        string get_palabra_rus(){return palabra_rus;}
        string get_tipo(){return tipo;}
        void set_correcta(bool corr);
        void set_repeticiones(int rep);
        void set_dificultad(int dif);
        void set_tema(string tem);
        void set_status(string stat);
        void set_palabra_esp(string pal_esp);
        void set_palabra_rus(string pal_rus);
        void set_tipo(string tip);
        string to_string();
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

Flashcards::Flashcards(string pal_esp, string pal_rus, string tem, string stat, int dif){
    correcta = true;
    repeticiones = 0;
    dificultad = dif;
    tema = tem;
    status = stat;
    palabra_esp = pal_esp;
    palabra_rus = pal_rus;
}

Flashcards::Flashcards(string pal_esp, string pal_rus, string tem, string stat){
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

void Flashcards::repetir(bool correcta){
    repeticiones++;
    status = "repetir"; 
}

string Flashcards::to_string(){
    stringstream aux;
    aux << " \n Palabra en Español:  \t" << palabra_esp << "\n Palabra en Ruso: \t " << palabra_rus << "\n Tipo: \t " << tipo  << "\n";
    return aux.str();
}

//Clase Hija Objeto
class Objeto: public Flashcards{
    private:
        string genero;

    public:
        Objeto(string pal_esp, string pal_rus, string tem, string stat, int dif):Flashcards(pal_esp, pal_rus, tem, stat, dif){
        tipo = "Objeto";
        };
        Objeto(): Flashcards("", "", "", "Nueva", 0) {
            tipo = "Objeto";
        };
        string get_genero(){return genero;}
        void set_genero(string gen);
        string to_string();

};

void Objeto::set_genero(string gen){
    genero = gen;
}

string Objeto::to_string(){
    stringstream aux;
    aux << " \n Palabra en Español:  \t" << palabra_esp << "\n Palabra en Ruso: \t " << palabra_rus << "\n Tipo: \t " << tipo  << "\n";
    return aux.str();
}

//Clase Hija Verbo
class Verbo: public Flashcards{
    private:
        bool regular;

    public:
        Verbo(string pal_esp, string pal_rus, string tem, string stat, int dif, bool reg):Flashcards(pal_esp, pal_rus, tem, stat, dif){
        regular = reg;
        tipo = "Verbo";
        };
        bool get_regular(){return regular;}
        void set_regular(bool reg);
        string to_string();
};

void Verbo::set_regular(bool reg){
    regular = reg;
}

string Verbo::to_string(){
    stringstream aux;
    aux << " \n Palabra en Español:  \t" << palabra_esp << "\n Palabra en Ruso: \t " << palabra_rus << "\n Tipo: \t " << tipo  << "\n";
    return aux.str();
}

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