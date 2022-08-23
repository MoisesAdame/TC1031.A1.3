#include "algoUsed.h"
#include "SuperHero.h"


int main(){
    vector<vector<string> > content = readCsv("marvel-wikia-data.csv");
    vector<SuperHero*> superHeroes = csv2Object(content);

    //vector<vector<string> >content = readCsv("marvelMMini.csv");


    cout << superHeroes[0]->getName() <<  endl;

    
    return 0;
}