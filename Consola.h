#ifndef CONSOLA_H
#define CONSOLA_H

#include <string>

#include <iostream>

#include "Flashcards.h" //biblioteca con mis objetos a usar
#include "Adjetivo.h"
#include "Objeto.h"
#include "Verbo.h"

using namespace std;

const int MAX = 1000;

class Consola {
    private:
        double success_rate;
        Flashcards * flashcard[MAX];
        int nomina;
    
    public:
        Consola();
        double get_success_rate(){return success_rate;}
        void set_success_rate(float rate);
        int get_nomina(){return nomina;}
        void set_nomina(int nomina);
        void crea_flashcard_objeto(string pal_esp,  
        string pal_rus, string tem, string stat, int dif);
        void crea_flashcard_verbo(string pal_esp, string pal_rus,
        string tem, string stat, int dif, bool reg);
        void crea_flashcard_adjetivo(string pal_esp,  
        string pal_rus, string tem, string stat, int dif, 
        bool reg);
        //Hacer flashcards de verbo y adjetivo.
        void crea_ejemplos();       
        void imprimir_fc();//impresión de arreglo de flashcards 
        void estudiar_fc();
        void asignar_opcion();
};

Consola::Consola(){
    success_rate = 0;
    nomina = 0;
}

void Consola::set_success_rate(float rate){
    success_rate = rate;
}

void Consola::set_nomina(int nom){
    nomina = nomina + nom;
}

void Consola::crea_flashcard_objeto(string pal_esp,  
string pal_rus, string tem, string stat, int dif){
    flashcard[nomina] = new Objeto(pal_esp,pal_rus, tem, stat, 1);
    set_nomina(1);

}

void Consola::crea_flashcard_verbo(string pal_esp, 
string pal_rus, string tem, string stat, int dif, bool reg){
    flashcard[nomina] = new Verbo(pal_esp,pal_rus,tem,stat,1,reg);
    set_nomina(1);

}

void Consola::crea_flashcard_adjetivo(string pal_esp,
string pal_rus, string tem, string stat, int dif, bool reg){
    flashcard[nomina] = new Adjetivo(pal_esp,pal_rus,tem,stat,
    1,reg);
    set_nomina(1);

}


void Consola::crea_ejemplos(){

  flashcard[nomina] = new Objeto("Arbol","Дерево", 
  "Objetos", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Hola","Привет", 
  "Saludos", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Adios","Пока", 
  "Saludos", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Perro","Собака", 
  "Animales", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Gato","Кот", 
  "Animales", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Piedra","Камень", 
  "Objetos", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Agua","Вода", 
  "Alimentos", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Pan","Хлеб", 
  "Alimentos", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Manzana","Яблоко", 
  "Alimentos", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Pollo","Курить", 
  "Animales", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Sopa","Суп", 
  "Alimentos", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Auto","Мащина", 
  "Objetos", "Nueva", 1);
  set_nomina(1);


  flashcard[nomina] = new Verbo("Comprar","Купить", 
  "Verbo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Verbo("Cocinar","Готовить", 
  "Verbo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Verbo("Gustar","Hpaвитьcя", 
  "Verbo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Verbo("Amar","Лювить", 
  "Verbo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Verbo("Vivir","Живёть", 
  "Verbo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Verbo("Ir","Идти", 
  "Verbo", "Nueva", 1,true);
  set_nomina(1);


  flashcard[nomina] = new Adjetivo("Sabroso","Вкусный", 
  "Adjetivo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Adjetivo("Hermoso","Красивый", 
  "Adjetivo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Adjetivo("Fuerte","Громкий", 
  "Adjetivo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Adjetivo("Tranquilo","Тихий", 
  "Adjetivo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Adjetivo("Bueno","Хорошо", 
  "Adjetivo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Adjetivo("Mayor","Старший", 
  "Adjetivo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Adjetivo("Menor","Младший", 
  "Adjetivo", "Nueva", 1,true);
  set_nomina(1);
}

void Consola::imprimir_fc(){
    for (int i = 0; i < nomina; i++)
    cout << flashcard[i] -> to_string() << "\n (" 
    << flashcard[i] -> get_opcion() << ") \n" << endl;
}

void Consola::asignar_opcion(){
    string opciones[100] = {"a","b","c","d","e","f","g","h","i",
    "j","k","l","m","n","o","p","q","r","s","t","u","v","w","x",
    "y","z","aa", "ab", "ac", "ad","ae","af","ag"};
    for (int i = 0; i < nomina; i++)
    flashcard[i] -> set_opcion(opciones[i]);

}
void Consola::estudiar_fc(){
    string opcion;
    get_nomina();
    int num_correcta = 0;
    for (int i = 0; i < nomina;i++){
        cout << "Palabra en Español \t" << flashcard[i] ->
        get_palabra_esp() << "\n Palabra en ruso: ";
        cin >> opcion;
        if (flashcard[i] -> get_opcion() == opcion){
            flashcard[i] -> felicitacion();
            num_correcta = num_correcta + 1;
        }
        else if (flashcard[i] -> get_palabra_rus() != opcion){
            cout << "INCORRECTO \n" << "La palabra era: \t" << 
            flashcard[i] -> get_palabra_rus() << "\n\n";
            flashcard[i] -> set_dificultad(2);
            num_correcta = num_correcta;
        }
    }
    cout << "Sacaste "<< num_correcta << " de " << nomina << endl;
}
#endif