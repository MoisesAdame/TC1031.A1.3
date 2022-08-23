#ifndef __ALGORITHMS
#define __ALGORITHMS

#pragma once
#include "SuperHero.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

vector<vector<string> > readCsv(string csvDocumentName){
    string line, word;
    vector<vector<string> > content;
    vector<string> row;
    fstream file (csvDocumentName, ios::in);
    if(file.is_open()){
        while(getline(file, line)){
            row.clear();
            stringstream str(line);
            while(getline(str, word, ',')){
                row.push_back(word);
            }
            content.push_back(row);
        }
    }
    file.close();
    return content;
}

vector<SuperHero> csv2Object(vector<vector<string> > content){
    vector<SuperHero> superHeroes;
    for(int i = 1; i < content.size(); i++){
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
            superHeroes.push_back(SuperHero(id, content[i][1], content[i][2], content[i][3], content[i][4], content[i][5], content[i][6], content[i][7], content[i][8], content[i][9], appearance, content[i][11], year));
        }catch(...){
            for(int j = 0; j < 13; j++){
                if(content[i][j].size() <= 1){
                    if(j == 10 || j == 12){
                        content[i][j].push_back('1');
                    }else{
                        content[i][j].push_back(' ');
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
            superHeroes.push_back(SuperHero(id, content[i][1], content[i][2], content[i][3], content[i][4], content[i][5], content[i][6], content[i][7], content[i][8], content[i][9], appearance, content[i][11], year));
            cout << content[i][0] << endl;
        }
    }
    return superHeroes;
}

template <typename T>
void swapData(T *data1, T *data2){
    T tempValue = *data1;
    *data1 = *data2;
    *data2 = tempValue;
}

template <typename T>
void bubbleSort(T* arr, int size){
    bool sorted = false;
    while(!sorted){
        sorted = true;
        for(int j = 0; j < size - 1; j++){
            if((*arr)[j] > (*arr)[j + 1]){
                swapData(&(*arr)[j], &(*arr)[j + 1]);
                sorted = false;
            }
        }
    }
}

template <typename T, typename U>
int linearSearch(T arr, int size, U target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

void writeCsv(vector<SuperHero> superHeroes){
    fstream file ("marvel-sorted.csv", ios::out);
    if(file.is_open()){
        file << "page_id,name,urlslug,ID,ALIGN,EYE,HAIR,SEX,GSM,ALIVE,APPEARANCES,FIRST APPEARANCE,Year\n";
        for(int i = 0; i < superHeroes.size(); i++){
            file << superHeroes[i].toCsvLine();
        }
        file.close();
    }
}

#endif