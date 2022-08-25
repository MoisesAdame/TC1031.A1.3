// Autores: Moisés Adame Aguilar (A01660927)
//          Noemí Abigail Curiel López (A01655892)
//          Cristóbal Eleazar Meza Aranda (A01661792)
// Fecha: 24 de Agosto del 2022
// Descripción: Programa que lee un csv con la información de los super héroes
// de marvel, los parsea como objetos de tipo SuperHero, los ordena alfabéticamente
// y finalmente pide la primera letra del nombre de todos los superhéroes que serán
// presentados en pantalla y a la vez almacenados en un nuevo csv.
// Complejidadd General: O(n²). Las columnas y filas hacen referencia a 
// las columnas y filas del csv.

#include "algorithms.h"
#include "SuperHero.h"

int main(){

    printHeader();

    // Se lee el csv y se pasa a array de tipo matriz
    // Complejidad (columnas * fiilas) -> O(n²)
    cout << "[*] Csv to array..." << endl;
    string content[16377][14];
    readCsv("marvel-wikia-data.csv", content);

    // Se crea array de objetos tipo SuperHero
    SuperHero* superHeros = new SuperHero[16376];

    // Con la información del csv se instancian los objetos de tipo SuperHero
    // Complejidad (columnas) -> O(n)
    cout << "[*] Array to object..." << endl;
    arr2obj(content, superHeros);

    // Se ordena el array de super héroes usando bubble sort.
    // Complejidad (columnas * columnas) -> O(n²)
    cout << "[*] Sorting..." << endl;
    bubbleSort<SuperHero>(superHeros, 16376);

    // Se pide la letra target de los super héroes por analizar. Se imprime
    // su información y se almacena en un nuevo csv.
    // Complejidad: O(columnas)
    char targetLetter = ' ';
    int indexTarget = 0;
    cout << "[*] Give me the target letter: ";
    cin >> targetLetter;
    linearSearch<SuperHero, char>(superHeros, 16376, targetLetter);

    return 0;
}