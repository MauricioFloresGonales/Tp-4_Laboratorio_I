/*
    utest example : Unit test examples.
    Copyright (C) <2018>  <Mauricio Davila>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../testing/inc/main_test.h"
#include "../inc/LinkedList.h"


int main(void)
{
   /// demiandes@gmail.com
        //startTesting(1);  // ll_newLinkedList //BIEN
        //startTesting(2);  // ll_len   //BIEN
        //startTesting(3);  // getNode - test_getNode//   //BIEN
        //startTesting(4);  // addNode - test_addNode*///   BIEN
        //startTesting(5);  // ll_add//llama al addnote(busca donde enganchar el elemento)   //BIEN
        //startTesting(6);  // ll_get   //MAL-- se tiene que hacer ??
        //startTesting(7);  // ll_set//MAL//creo un nuevo nodo/ese nodo apunta al nuevo dato y desengancho el nodo anterior de la lista y lo enlaso con el nmuevo nodo creado(si es el ultimo elemento llamo a add)
        //startTesting(8);  // ll_remove//MAL//saca el nodo a sacar y encgancho los nodos separados
        //startTesting(9);  // ll_clear//MAL//hacer un free desde el ultimo nodo al primero(sabiendo que la lista tiene que seguir la lista en la misma posicion de memoria pero vacia)
        //startTesting(10); //BIEN//  ll_deleteLinkedList
        //startTesting(11); // ll_indexOf//BIEN//con un get recorro y trato de encontrar el dato(dame 0el idice de un elemento en particular)<--- No entend�
        //startTesting(12); // ll_isEmpty//BIEN
        //startTesting(13); // ll_push//CASI BIEN//creo un nuevo nodo y engancho el nodo anterior con el nodo creado y elnodo creadocon el siguiente(si es laultima pusicion utilizo el add)
        //startTesting(14); // ll_pop//CASI BIEN//
        //startTesting(15); // ll_contains//MAL//recive unn puntero a y dice si se encuentra
        //startTesting(16); // ll_containsAll//NO HECHO//
        //startTesting(17); // ll_subList//MAL//de toda la lista me devuelve un pedazo (si le paso del 1 al 2 me devuelve un lista que contenga esas listas)
        //startTesting(18); // ll_clone//MAL// crea una lista nueva (nuevalista = lista; Esta mal)(creo una nueva lista y copio los elementos usando un get y poniendolo en la copiad con un add)
        //startTesting(19); // ll_sort //NO HHECHO//

    return 0;
}

































