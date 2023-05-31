//María José Soto Castro A01705840
#include <iostream>

//bibliotecas con mis objetos a usar
#include "Flashcards.h" 

#include "Consola.h"

using namespace std;

int main(){
    //Consola Default
    cout << "Hola, aqui estan tus flashcards!" << endl;
    Consola consola_1;

    consola_1.crea_ejemplos();
    //Para crear una nueva flashcard
    consola_1.crea_flashcard_objeto("Papá","Пaпa","Familia","Nueva",1);
    
    consola_1.estudiar_fc();

return 0;
}