#ifndef __ALGOUSED
#define __ALGOUSED

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
    return content;
}

vector<SuperHero*> csv2Object(vector<vector<string> > content){
    vector<SuperHero*> superHeroes;
    for(int i = 1; i < content.size(); i++){
        superHeroes.push_back(new SuperHero(stoi(content[i][0]), content[i][1], content[i][2], content[i][3], content[i][4], content[i][5], content[i][6], content[i][7], content[i][8], content[i][9], stoi(content[i][10]), content[i][11], stoi(content[i][12])));
    }
    return superHeroes;
}

template <typename T>
void swapData(T* data1, T* data2){
    T tempValue = *data1;
    *data1 = *data2;
    *data2 = tempValue;
}

template <typename T>
void bubbleSort(T arr[], int size){
    bool sorted = false;
    while(!sorted){
        sorted = true;
        for(int j = 0; j < size - 1; j++){
            if(arr[j] > arr[j + 1]){
                swapData(&arr[j], &arr[j + 1]);
                sorted = false;
            }
        }
    }
}

#endif