#include "algorithms.h"
#include "SuperHero.h"

int main(){
    cout << "Csv to array..." << endl;
    string content[16377][14];
    readCsv("marvel-wikia-data.csv", content);

    SuperHero* superHeros = new SuperHero[16377];

    cout << "Array to object..." << endl;
    csv2Object(content, superHeros);

    cout << "Sorting..." << endl;
    bubbleSort<SuperHero>(superHeros, 16377);

    superHeros[0].print();
    superHeros[1].print();

    






    /*
    cout << "Vector to superheroes..." << endl;
    vector<SuperHero> superHeroes = csv2Object(content);

    cout << "Sorting..." << endl;
    bubbleSort<vector<SuperHero> >(&superHeroes, superHeroes.size());

    //writeCsv(superHeroes);

    for(int i = 0; i < 50; i++){
        superHeroes[i].print();
    }

    
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