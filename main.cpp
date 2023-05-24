//María José Soto Castro A01705840
// Last Update: 21/05/2023 00:34 AM
#include <iostream>

#include "Flashcards.h" //biblioteca con mis objetos a usar

#include "Consola.h"

using namespace std;

int main(){
    //Consola Default
    Consola consola_1;

    consola_1.crea_ejemplos();


    consola_1.crea_flashcard_objeto("Papá","Пвпа","Familia","Nueva",1);
    //consola_1.get_flashcard(""); 
    /*El problema aqui es poder enseñar la fc solo con una palabra en español
    pero como se está usando un arreglo debe de ser diferente*/
    
    consola_1.imprimir_fc();
return 0;
}