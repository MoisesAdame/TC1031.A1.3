// Autores: Moisés Adame Aguilar (A01660927)
//          Noemí Abigail Curiel López (A01655892)
//          Cristóbal Eleazar Meza Aranda (A01661792)
// Fecha: 24 de Agosto del 2022
// Descripción: Header que contiene todos los algoritmos utilizados en el programa.

#ifndef __ALGORITHMS
#define __ALGORITHMS

#pragma once
#include "SuperHero.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

// Función que como parámetros toma  una cadena con el nombre de la base de datos
// y una matriz de cadenas la cual llena partiendo de los datos contenidos en la 
// base de datos.
// No hay valor de retorno
// Complejidad: O(columnas * filas) -> O(n*m)
void readCsv(string csvDocumentName, string content[16377][14]){
    string line, word;
    fstream file (csvDocumentName, ios::in);

    // Se abre el documento de la base de datos.
    if(file.is_open()){
        int countRow = 0;
        // Se recorre sobre cada fila de la base de datos.
        while(getline(file, line)){ // O(14*n)
            stringstream s(line);
            int countColumn = 0;

            // Se recorre sobre cada columna, de la fila analizada y 
            // se almacena en la matriz cada valor.
            while(getline(s, word, ',')){ // O(m)
                content[countRow][countColumn++] = word;
            }
            countRow++;
        }
    }
    file.close();
}

// Función que como parámetros toma una matriz de cadenas llena con la 
// información de la base de datos y un array de tipo SuperHero. Con la
// matriz, se instancia cada objeto de tipo SuperHero y se añade al array.
// No hay valor de retorno
// Complejidad: O(columnas) -> O(n)
void arr2obj(string content[16377][14], SuperHero array[16376]){
    // Se utiliza error handling por cualquier error que llega a haber a la 
    // hora de almacenar los datos.
    for(int i = 1; i < 16376; i++){  //O(n)
        try{
            int id, appearance, year;
            stringstream s1;
            s1 << content[i][0];
            s1 >> id;

            stringstream s2;
            s2 << content[i][10];
            s2 >> appearance;

            stringstream s3;
            s3 << content[i][12];
            s3 >> year;
            array[i - 1] = (SuperHero(id, content[i][1], content[i][2], content[i][3], content[i][4], content[i][5], content[i][6], content[i][7], content[i][8], content[i][9], appearance, content[i][11], year));
        }catch(...){
            for(int j = 0; j < 13; j++){ // O(n)
                if(content[i][j].size() <= 1){
                    if(j == 10 || j == 12){
                        content[i][j] = "-1";
                    }else{
                        content[i][j] = "No data";
                    }
                }
            }
            int id, appearance, year;
            stringstream s1;
            s1 << content[i][0];
            s1 >> id;

            stringstream s2;
            s2 << content[i][10];
            s2 >> appearance;

            stringstream s3;
            s3 << content[i][12];
            s3 >> year;
            array[i - 1] = SuperHero(id, content[i][1], content[i][2], content[i][3], content[i][4], content[i][5], content[i][6], content[i][7], content[i][8], content[i][9], appearance, content[i][11], year);
        }
    }
}

// Función template que toma las direcciones de dos datos de un array y los intercambia de posición
// Tomando como parámetros dos datos de un array con el mismo tipo. 
// No hay valor de retorno
// Complejidad: O(1)
template <typename T>
void swapData(T* data1, T* data2){
    T tempValue = *data1;
    *data1 = *data2;
    *data2 = tempValue;
}

// Función template que toma como parámetros la dirección de un array de cualquier tipo y un entero
// que representa el tamaño de el array y los ordena haciendo uso de la 
// función swapData(). 
// No hay valor de retorno
// Complejidad: O(n²)
template <typename T>
void bubbleSort(T* arr, int size){
    // Mientras el array no esté completamente ordenado se sigue iterando sobre este.
    bool sorted = false;
    while(!sorted){ // O(n)
        sorted = true;

        // Se itera sobre cada elemento del array y si se cumple que el valor de la izquierda 
        // es mayor al de la derecha se intercambian los valores usando swapData().
        for(int j = 0; j < size - 1; j++){. //O(n)
            if(arr[j] > arr[j + 1]){
                swapData<T>(&arr[j], &arr[j + 1]);
                sorted = false;
            }
        }
    }
}

// Función template que toma como parámetros la dirección de un array de cualquier tipo, un entero que representa la 
// cardinalidad de este array y un valor target de cualquier tipo (igual o diferente al del array).
// Con esta información, busca todos los elementos iguales a target, los imprime y los almacena
// en un documento .csv
// No hay valor de retorno
// Complejidad: O(columnas) -> O(n)
template <typename T, typename U>
void linearSearch(T* arr, int size, U target){
    int index = 0;

    // Se crea y abre el documemento .csv
    fstream file ("marvel-sorted.csv", ios::out);
    if(file.is_open()){
        // Se establece el encabezado del documento.
        file << "page_id,name,urlslug,ID,ALIGN,EYE,HAIR,SEX,GSM,ALIVE,APPEARANCES,FIRST APPEARANCE,Year\n";

        // Se itera sobre todo el array hasta encontrar el índice del primer elemento igual a target.
        for(;index < size;index++){ //O(n)
            if(arr[index] == target){
                break;
            }
        }

        // Se imprimen y almacenan en el csv todos los elementos iguales a target.
        while(arr[index] == target && index < size){ //O(n)
            arr[index].print();
            file << arr[index++].toCsvLine();
        }
        file.close();
    }

    // Si no se encuentra ningun elemento igual a target se imprime el siguiente mensaje.
    if(index == size){
        cout << "No matches found!" << endl;
    }   
}

// Función que imprime un ascii text como encabezado y limpia la terminal.
// No se toman parámetros
// No hay valor de retorno
// Complejidad: O(1)
void printHeader(){
    // Limpiamos la pantalla (Se toman en cuenta OS WINDOWS y APPLE)
    #ifdef _WIN64
    system("cls");
    #endif

    #ifdef __APPLE__
    system("clear");
    #endif

    // Imprimimos en cabezado
    cout << "_____________________________________________________________________" << endl;
    cout << "    __  ___                      __   __  __                         " << endl;
    cout << "   /  |/  /___ _______   _____  / /  / / / /__  _________  ___  _____" << endl;
    cout << "  / /|_/ / __ `/ ___/ | / / _ \\/ /  / /_/ / _ \\/ ___/ __ \\/ _ \\/ ___/" << endl;
    cout << " / /  / / /_/ / /   | |/ /  __/ /  / __  /  __/ /  / /_/ /  __(__  ) " << endl;
    cout << "/_/  /_/\\__,_/_/    |___/\\___/_/  /_/ /_/\\___/_/   \\____/\\___/____/  " << endl;
    cout << "_____________________________________________________________________\n" << endl;  
}

#endif
