// Autores: Moisés Adame Aguilar (A01660927)
//          Noemí Abigail Curiel López (A01655892)
//          Cristóbal Eleazar Meza Aranda (A01661792)
// Fecha: 24 de Agosto del 2022
// Descripción: Implementación de la clase SuperHero

#include "SuperHero.h"

// Constructor Methods
// Método Constructor Default 
// Complejidad: O(1)
SuperHero::SuperHero(){
    pageID = -1;
    name = "No Data";
    urlslug = "No Data";
    ID = "No Data";
    align = "No Data";
    eye = "No Data";
    hair = "No Data";
    sex = "No Data";
    gsm = "No Data";
    alive = "No Data";
    appearances = -1;
    firstAppearance = "No Data";
    year = -1;
}

// Método constructor en el que se definen todos los aspectos del super héroe.
// Como parámetros se pasan todos los atributos de la clase.
// Complejidad: O(1)
SuperHero::SuperHero(int pageID, string name, string urlslug, string ID, string align, string eye,
                     string hair, string sex, string gsm, string alive, int appearances,
                     string firstAppearance, int year){
    this->pageID = pageID;
    this->name = name;
    this->urlslug = urlslug;
    this->ID = ID;
    this->align = align;
    this->eye = eye;
    this->hair = hair;
    this->sex = sex;
    this->gsm = gsm;
    this->alive = alive;
    this->appearances = appearances;
    this->firstAppearance = firstAppearance;
    this->year = year;
}

// Getter Methods

// Complejidad: O(1)
int SuperHero::getPageID(){
    return pageID;
}

// Complejidad: O(1)
string SuperHero::getName(){
    return name;
}

// Complejidad: O(1)
string SuperHero::getUrlslug(){
    return urlslug;
}

// Complejidad: O(1)
string SuperHero::getID(){
    return ID;
}

// Complejidad: O(1)
string SuperHero::getAlign(){
    return align;
}

// Complejidad: O(1)
string SuperHero::getEye(){
    return eye;
}

// Complejidad: O(1)
string SuperHero::getHair(){
    return hair;
}

// Complejidad: O(1)
string SuperHero::getSex(){
    return sex;
}

// Complejidad: O(1)
string SuperHero::getGsm(){
    return gsm;
}

// Complejidad: O(1)
string SuperHero::getAlive(){
    return alive;
}

// Complejidad: O(1)
int SuperHero::getAppearances(){
    return appearances;
}

// Complejidad: O(1)
string SuperHero::getFirstAppearance(){
    return firstAppearance;
}

// Complejidad: O(1)
int SuperHero::getYear(){
    return year;
}

// Setter Methods

// Complejidad: O(1)
void SuperHero::setPageID(int pageID){
    this->pageID = pageID;
}

// Complejidad: O(1)
void SuperHero::setName(string name){
    this->name = name;
}

// Complejidad: O(1)
void SuperHero::setUrlslug(string urlslug){
    this->urlslug = urlslug;
}

// Complejidad: O(1)
void SuperHero::setID(string ID){
    this->ID = ID;
}

// Complejidad: O(1)
void SuperHero::setAlign(string align){
    this->align = align;
}

// Complejidad: O(1)
void SuperHero::setEye(string eye){
    this->eye = eye;
}

// Complejidad: O(1)
void SuperHero::setHair(string hair){
    this->hair = hair;
}

// Complejidad: O(1)
void SuperHero::setSex(string sex){
    this->sex = sex;
}

// Complejidad: O(1)
void SuperHero::setGsm(string gsm){
    this->gsm = gsm;
}

// Complejidad: O(1)
void SuperHero::setAlive(string alive){
    this->alive = alive;
}

// Complejidad: O(1)
void SuperHero::setAppearances(int appearances){
    this->appearances = appearances;
}

// Complejidad: O(1)
void SuperHero::setFirstAppearance(string firstAppearance){
    this->firstAppearance = firstAppearance;
}

// Complejidad: O(1)
void SuperHero::setYear(int year){
    this->year = year;

}

// Additional methods
// Método print() que imprime con formato todos los aspectos del super héroe
// no recibe parámetros.
// Complejidad: O(1)
void SuperHero::print(){
    cout << "[*] " << name << endl
         << "\t- Identity: " << ID << endl
         << "\t- Align: " << align << endl
         << "\t- Eyes: " << eye << endl
         << "\t- Hair: " << hair << endl
         << "\t- Sex: " << sex << endl
         << "\t- GSM: " << gsm << endl
         << "\t- Alive: " << alive << endl
         << "\t- Appearances: " << appearances << endl
         << "\t- First Appearance: " << firstAppearance << endl
         << "\t- Year: " << year  << endl
         << endl;
}

// Método que regresa una cadena en formato de línea csv con todos 
// los aspectos del super héroe. No recibe parámetros.
// Complejidad: O(1)
string SuperHero::toCsvLine(){
    string line = "";
    line += to_string(pageID) + ",";
    line += name + ",";
    line += urlslug + ",";
    line += ID + ",";
    line += align + ",";
    line += eye + ",";
    line += hair + ",";
    line += sex + ",";
    line += gsm + ",";
    line += alive + ",";
    line += to_string(appearances) + ",";
    line += firstAppearance + ",";
    line += to_string(year) + "\n";

    return line;
}

// Operator overloading con el símbolo (>) el cual, al ser utilizado
// sobre dos objetos de tipo SuperHero regresa un booleano true si 
// la cadena del objeto de la izquierda tiene un orden mayor.
// No recibe parámetros.
// Complejidad: O(1)
bool SuperHero::operator > (SuperHero &superHero){
    return name > superHero.getName();
}

// Operator overloading con el símbolo (<) el cual, al ser utilizado
// sobre dos objetos de tipo SuperHero regresa un booleano true si 
// la cadena del objeto de la derecha tiene un orden mayor.
// No recibe parámetros.
// Complejidad: O(1)
bool SuperHero::operator < (SuperHero &superHero){
    return name < superHero.getName();
}

// Operator overloading con el símbolo (==) el cual, al ser utilizado
// sobre un objeto de tipo SuperHero y un char regresa true si este
// último es igual a la primera letra del nombre del super héroe.
// Complejidad: O(1)
bool SuperHero::operator == (char firstLetter){
    return name[0] == firstLetter;
}
