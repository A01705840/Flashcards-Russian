#ifndef CONSOLA_H
#define CONSOLA_H

#include <string>

#include <iostream>

#include "Flashcards.h" //biblioteca con mis objetos a usar

using namespace std;

const int MAX = 1000;

class Consola {
    private:
        double success_rate;
        Flashcards * flashcard[MAX];
        int nomina;
    
    public:
        Consola();
        int contar_fc(Flashcards flashcard);
        double get_success_rate(){return success_rate;}
        void set_success_rate(float rate);
        int get_nomina(){return nomina;}
        void set_nomina(int nomina);
        void crea_flashcard_objeto(string pal_esp,  string pal_rus, string tem, string stat, int dif);
        //Hacer flashcards de verbo y adjetivo.
        void crea_ejemplos();       
        void imprimir_fc();//impresión de arreglo de flashcards 
        void estudiar_fc();
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

void Consola::set_nomina(int nom){
    nomina = nomina + nom;
}

void Consola::crea_flashcard_objeto(string pal_esp,  string pal_rus, string tem, string stat, int dif){
    flashcard[nomina] = new Objeto(pal_esp,pal_rus, tem, stat, 1);
    set_nomina(1);

}

/*Flashcards Consola::get_flashcard(string pal_esp){
    return flashcard[MAX];
}*/

void Consola::crea_ejemplos(){

  flashcard[nomina] = new Objeto("Arbol","дерево", "Objetos", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Hola","Привет", "Saludos", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Adios","Пока", "Saludos", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Perro","Собака", "Animales", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Gato","Кот", "Animales", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Piedra","Камень", "Objetos", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Agua","Вода", "Alimentos", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Pan","Хлеб", "Alimentos", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Manzana","Яблоко", "Alimentos", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Pollo","Курить", "Animales", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Sopa","Суп", "Alimentos", "Nueva", 1);
  set_nomina(1);

  flashcard[nomina] = new Objeto("Auto","Мащина", "Objetos", "Nueva", 1);
  set_nomina(1);


  flashcard[nomina] = new Verbo("Comprar","Купить", "Verbo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Verbo("Cocinar","Готовить", "Verbo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Verbo("Gustar","Hpaвитьcя", "Verbo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Verbo("Amar","Лювить", "Verbo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Verbo("Vivir","Живёть", "Verbo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Verbo("Ir","Идти", "Verbo", "Nueva", 1,true);
  set_nomina(1);


  flashcard[nomina] = new Verbo("Sabroso","Вкусный", "Adjetivo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Verbo("Hermoso","Красивый", "Adjetivo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Verbo("Fuerte","Громкий", "Adjetivo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Verbo("Tranquilo","Тихий", "Adjetivo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Verbo("Bueno","Хорошо", "Adjetivo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Verbo("Mayor","Старший", "Adjetivo", "Nueva", 1,true);
  set_nomina(1);

  flashcard[nomina] = new Verbo("Menor","Младший", "Adjetivo", "Nueva", 1,true);
  set_nomina(1);

}

void Consola::imprimir_fc(){
    for (int i = 0; i < nomina; i++)
    cout << flashcard[i] -> to_string();
}

void Consola::estudiar_fc(){
    string p_ruso;
    int num_correcta = 0;
    for (int i = 0; i < nomina;){
        cout << "Palabra en Español \t" << flashcard[i] -> get_palabra_esp() << "\n Palabra en ruso: ";
        cin >> p_ruso;
        if (flashcard[i] -> get_palabra_rus() == p_ruso){
            flashcard[i] -> felicitacion();
            num_correcta = num_correcta + 1;
        }
        else if (flashcard[i] -> get_palabra_rus() != p_ruso){
            cout << "INCORRECTO \n" << "La palabra era: \t" << flashcard[i] -> get_palabra_rus() << "\n\n";
            num_correcta = num_correcta;
        }
    i++;
    }
    success_rate = (num_correcta/nomina)*100;
    cout << success_rate << "%" << "\n";
}
#endif