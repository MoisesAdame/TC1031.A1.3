#include "algoUsed.h"
#include "SuperHero.h"

int main(){
    cout << "Csv to vector..." << endl;
    vector<vector<string> > content = readCsv("marvel-wikia-data.csv");

    cout << "Vector to superheroes..." << endl;
    vector<SuperHero> superHeroes = csv2Object(content);

    cout << "Sorting..." << endl;
    bubbleSort<vector<SuperHero> >(&superHeroes, superHeroes.size());

    for(int i = 300; i < 350; i++){
        cout << superHeroes[i].getName() << endl;
    }

    return 0;
}