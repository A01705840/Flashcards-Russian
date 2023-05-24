#ifndef CONSOLA_H
#define CONSOLA_H

#include <string>

#include <iostream>

#include "Flashcards.h" //biblioteca con mis objetos a usar

using namespace std;

const int MAX = 1000;

class Consola {
    private:
        float success_rate;
        Flashcards * flashcard[MAX];
        int nomina;
    
    public:
        Consola();
        int contar_fc(Flashcards flashcard);
        float get_success_rate(){return success_rate;}
        void set_success_rate(float rate);
        void crea_flashcard_objeto(string pal_esp,  string pal_rus, string tem, string stat, int dif);
        void crea_ejemplos();        
};

Consola::Consola(){
    success_rate = 0;
    nomina = 0;
}

int Consola::contar_fc(Flashcards flashcard){
    int conteo;
    conteo = sizeof(flashcard);
    return conteo;
}

void Consola::set_success_rate(float rate){
    success_rate = rate;
}

void Consola::crea_flashcard_objeto(string pal_esp, string pal_rus, string tem, string stat, int dif){
    flashcard[nomina] = new Objeto(pal_esp,pal_rus, tem, stat, 1);
    nomina++;
}

/*Flashcards Consola::get_flashcard(string pal_esp){
    return flashcard[MAX];
}*/

void Consola::crea_ejemplos(){

  flashcard[nomina] = new Objeto("Arbol","дерево", "Objetos", "Nueva", 1);
  nomina++;
  flashcard[nomina] = new Objeto("Hola","Привет", "Saludos", "Nueva", 1);
  nomina++;
  flashcard[nomina] = new Objeto("Adios","Пока", "Saludos", "Nueva", 1);
  nomina++;
  flashcard[nomina] = new Objeto("Perro","Собака", "Animales", "Nueva", 1);
  nomina++;
  flashcard[nomina] = new Objeto("Gato","Кот", "Animales", "Nueva", 1);
  nomina++;
  flashcard[nomina] = new Objeto("Piedra","Камень", "Objetos", "Nueva", 1);
  nomina++;
  flashcard[nomina] = new Objeto("Agua","Вода", "Alimentos", "Nueva", 1);
  nomina++;
  flashcard[nomina] = new Objeto("Pan","Хлеб", "Alimentos", "Nueva", 1);
  nomina++;
  flashcard[nomina] = new Objeto("Manzana","Яблоко", "Alimentos", "Nueva", 1);
  nomina++;
  flashcard[nomina] = new Objeto("Pollo","Курить", "Animales", "Nueva", 1);
  nomina++;
  flashcard[nomina] = new Objeto("Sopa","Суп", "Alimentos", "Nueva", 1);
  nomina++;
  flashcard[nomina] = new Objeto("Auto","Мащина", "Objetos", "Nueva", 1);
  nomina++;

  flashcard[nomina] = new Verbo("Comprar","Купить", "Verbo", "Nueva", 1,true);
  nomina++;
  flashcard[nomina] = new Verbo("Cocinar","Готовить", "Verbo", "Nueva", 1,true);
  nomina++;
  flashcard[nomina] = new Verbo("Gustar","Hpaвитьcя", "Verbo", "Nueva", 1,true);
  nomina++;
  flashcard[nomina] = new Verbo("Amar","Лювить", "Verbo", "Nueva", 1,true);
  nomina++;
  flashcard[nomina] = new Verbo("Vivir","Живёть", "Verbo", "Nueva", 1,true);
  nomina++;
  flashcard[nomina] = new Verbo("Ir","Идти", "Verbo", "Nueva", 1,true);
  nomina++;

  flashcard[nomina] = new Verbo("Sabroso","Вкусный", "Adjetivo", "Nueva", 1,true);
  nomina++;
  flashcard[nomina] = new Verbo("Hermoso","Красивый", "Adjetivo", "Nueva", 1,true);
  nomina++;
  flashcard[nomina] = new Verbo("Fuerte","Громкий", "Adjetivo", "Nueva", 1,true);
  nomina++;
  flashcard[nomina] = new Verbo("Tranquilo","Тихий", "Adjetivo", "Nueva", 1,true);
  nomina++;
  flashcard[nomina] = new Verbo("Bueno","Хорошо", "Adjetivo", "Nueva", 1,true);
  nomina++;
  flashcard[nomina] = new Verbo("Mayor","Старший", "Adjetivo", "Nueva", 1,true);
  nomina++;
  flashcard[nomina] = new Verbo("Menor","Младший", "Adjetivo", "Nueva", 1,true);
  nomina++;
}

#endif
