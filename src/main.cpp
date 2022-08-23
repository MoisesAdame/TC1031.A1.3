#include "algoUsed.h"
#include "SuperHero.h"

int main(){
    vector<vector<string> > content = readCsv("marvel-wikia-data.csv");
    vector<SuperHero*> superHeroes = csv2Object(content);


    

    
    return 0;
}