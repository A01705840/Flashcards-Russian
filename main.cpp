//María José Soto Castro A01705840
#include <iostream>

//bibliotecas con mis objetos a usar
#include "Flashcards.h" 
#include "Adjetivo.h"
#include "Objeto.h"
#include "Verbo.h"
#include "Consola.h"

using namespace std;
void menu(Consola consola_1){
    int op_1;
    int op;
    cout << "Hola, estas listo para estudiar tus flashcards??" << endl;
    cout << "\n - Estudiar Flashcards [1] \n - Añadir Flashcard [2] \n" << endl;
    cin  >> op_1;
    while (op_1 == 1 or op_1 == 2){
        if (op_1 == 1){
            consola_1.estudiar_fc(); //Falta aún encontrar como evitar errores con el cambio de abecedario.
            // RECOMENDACION: Busca las palabras en ruso en void Consola::crea_ejemplos() y copia y pegalas para la parte de estudiar por ahora.
            // Papa = Пaпa
            cout << "¿Qué más haras hoy? \n" << endl;
            cout << "\n - Exit [0] \n - Estudiar Flashcards [1] \n - Añadir Flashcard [2] \n" << endl;
            cin  >> op;
            op_1 = op;
        }
        if (op_1 == 2){
            string pal_esp;
            string pal_rus;
            string tem;
            bool reg;
            int op_2;
            cout << "Para añadir una nueva flashcard elige que tipo de palabra es: " <<endl;
            cout << "- Añadir Objeto [1] \n  - Añadir Verbo [2] \n - Añadir Adjetivo [3] \n " <<endl;
            cin  >> op_2;
            if (op_2 == 1){
                //Ejemplo Objeto: 
                /*pal_esp -> Helado
                pal_rus -> мороженое
                tema -> basico
                */
                cout << " \nEscribe la palabra en español: " <<endl;
                cin >> pal_esp ;
                cout << "\nEscribe la palabra en ruso: " <<endl;
                cin >> pal_rus;
                cout << "\nEscribe el tema: " <<endl;
                cin >> tem;
                consola_1.crea_flashcard_objeto(pal_esp,pal_rus,tem,"Nueva",1);
                cout << "La flaschcard esta creada";
                cout << "¿Qué más haras hoy? \n" << endl;
                cout << "\n - Exit [0] \n - Estudiar Flashcards [1] \n - Añadir Flashcard [2] \n" << endl;
                cout << "¿Qué más haras hoy? \n" << endl;
                cout << "\n - Exit [0] \n - Estudiar Flashcards [1] \n - Añadir Flashcard [2] \n" << endl;
                op_2 = 0;
                cin  >> op;
                op_1 = op;
            }
            if (op_2 == 2){
                //Ejemplo Verbo: 
                /*pal_esp -> Brincar
                pal_rus -> Прыгать
                tema -> basico
                */
                cout << "\nEscribe la palabra en español: " <<endl;
                cin >> pal_esp;
                cout << "\nEscribe la palabra en ruso: " <<endl;
                cin >> pal_rus;
                cout << "\nEscribe el tema: " <<endl;
                cin >> tem;
                cout << "\nEs un verbo regular [TRUE [1] /FALSE [0]] " <<endl;
                cin >> reg;
                consola_1.crea_flashcard_verbo(pal_esp,pal_rus,tem,"Nueva",1,reg);
                cout << "La flaschcard esta creada";
                cout << "¿Qué más haras hoy? \n" << endl;
                cout << "\n - Exit [0] \n - Estudiar Flashcards [1] \n - Añadir Flashcard [2] \n" << endl;
                cin  >> op;
                op_1 = op;
                op_2 = 0;
            }
            if (op_2 == 3){
                //Ejemplo Adjetivo: 
                /*pal_esp -> Malo
                pal_rus -> плохой
                tema -> basico
                */
                cout << "\nEscribe la palabra en español: " <<endl;
                cin >> pal_esp;
                cout << "\nEscribe la palabra en ruso: " <<endl;
                cin >> pal_rus;
                cout << "\nEscribe el tema: " <<endl;
                cin >> tem;
                cout << "\nEs un adjetivo regular [TRUE [1] /FALSE [0]] " <<endl;
                cin >> reg;
                consola_1.crea_flashcard_adjetivo(pal_esp,pal_rus,tem,"Nueva",1,reg);
                cout << "La flaschcard esta creada";
                cout << "¿Qué más haras hoy? \n" << endl;
                cout << "\n - Exit [0] \n - Estudiar Flashcards [1] \n - Añadir Flashcard [2] \n" << endl;
                cin  >> op;
                op_1 = op;
                op_2 = 0;
            }
            
        }
        
    }
}

int main(){
    //Consola Default
    Consola consola_1;
    consola_1.crea_ejemplos();

    //Menu        
    menu(consola_1);

return 0;
}
