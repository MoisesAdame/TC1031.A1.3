#include "algorithms.h"
#include "SuperHero.h"

int main(){
    
    cout << "Csv to array..." << endl;
    string content[16377][14];
    readCsv("marvel-wikia-data.csv", content);

    SuperHero* superHeros = new SuperHero[16376];

    cout << "Array to object..." << endl;
    arr2obj(content, superHeros);

    cout << "Sorting..." << endl;
    bubbleSort<SuperHero>(superHeros, 16376);

    char targetLetter = ' ';
    int indexTarget = 0;
    cout << "Give me the target letter: ";
    cin >> targetLetter;
    linearSearch<SuperHero, char>(superHeros, 16376, targetLetter);

    return 0;
}