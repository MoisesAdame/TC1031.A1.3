#include "algorithms.h"
#include "SuperHero.h"

int main(){
    cout << "Csv to vector..." << endl;
    vector<vector<string> > content = readCsv("marvel-wikia-data.csv");

    cout << "Vector to superheroes..." << endl;
    vector<SuperHero> superHeroes = csv2Object(content);

    cout << "Sorting..." << endl;
    bubbleSort<vector<SuperHero> >(&superHeroes, superHeroes.size());

    writeCsv(superHeroes);

    /*
    char letraObjetivo = ' ';
    cout << "Dime letra objetivo: ";
    cin >> letraObjetivo;

    int initPrint = linearSearch<vector<SuperHero>, char>(superHeroes, superHeroes.size(), letraObjetivo);
    for(int i = initPrint; ; i++){
        if(!(superHeroes[i] == letraObjetivo)){
            break;
        }else{
            superHeroes[i].print();
        }
    }
    */

    return 0;
}