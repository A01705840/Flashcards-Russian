# Flashcards-Russian
## Contenido 
El proyecto se basa en hacer un sistema de estudio con flashcards para aprender vocabulario en ruso. Las flashcards serán específicas para aprender en el lenguaje ruso y tendrán un sistema de repetición, si tienes alguna flashcard mal. En sí, se generarán las flashcards en una consola. Luego el usuario puede usar la consola para estudiar las flashcards. Mientras las estudia, se mostrará la parte delantera en español y tendrá que seleccionar la plabra en ruso con opciones ej.(a,b,c). Si el ususario tiene la flashcard bien, será correcta y si no, será incorrecta. Depende de esto, el sistema decidirá si vuelve a preguntar la carta o no. Cuando todas las flashcards sean correctas, entonces el sistema acabará con un porcentaje de acertación. También se pueden añadir flashcards.

## Funcionalidad
Las clases son Flashcards y sus clases hijas son Objeto, Verbo, Adjetivos. La clase Flashcards, es componente de la consola, donde el ususario podrá acceder a ellas y utilizarlas.

El programa solo permite estudiar y crear flashcards y asignarles dificultad, correcto/incorrecto.

## Consideraciones
El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos.

El programa está hecho para usarse con el idioma ruso. Por ejemplo:
+ Si se ponen palabras en francés, no serán optimas en el programa.
+ Si se ponen palabras como preposiciones, no se puede escoger un tipo de flashcard de preposiciones.
+ Si se ponen palabras en pasado, no se pueden diferenciar de las demás flashcards en otros tiempo.


