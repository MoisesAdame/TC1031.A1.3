#include "algorithms.h"
#include "SuperHero.h"

int main(){
    cout << "Csv to array..." << endl;
    string content[16377][14];
    readCsv("marvel-wikia-data.csv", content);

    SuperHero* superHeros = new SuperHero[16377];

    cout << "Array to object..." << endl;
    arr2obj(content, superHeros);

    cout << "Sorting..." << endl;
    bubbleSort<SuperHero>(superHeros, 16377);

    char targetLetter = ' ';
    int indexTarget = 0;
    cout << "Give me the target letter: ";
    cin >> targetLetter;
    indexTarget = linearSearch<SuperHero, char>(superHeros, 16377, targetLetter);
    while(true){
        if((superHeros[indexTarget].getName())[0] != targetLetter){
            break;
        }else{
            superHeros[indexTarget++].print();
        }
    }

    writeCsv<SuperHero>(superHeros, 16377);

    return 0;
}