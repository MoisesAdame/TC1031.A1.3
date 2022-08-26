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

// Se obtiene el Page ID.
// No hay parámetros.
// Se regresa un int con el Page ID.
// Complejidad: O(1)
int SuperHero::getPageID(){
    return pageID;
}

// Se obtiene el nombre.
// No hay parámetros.
// Se regresa un string con el nombre.
// Complejidad: O(1)
string SuperHero::getName(){
    return name;
}

// Se obtiene el Urlslug.
// No hay parámetros.
// Se regresa un string con el Urlslug.
// Complejidad: O(1)
string SuperHero::getUrlslug(){
    return urlslug;
}

// Se obtiene el ID.
// No hay parámetros.
// Se regresa un string con el ID.
// Complejidad: O(1)
string SuperHero::getID(){
    return ID;
}

// Se obtiene el Align.
// No hay parámetros.
// Se regresa un string con el Align.
// Complejidad: O(1)
string SuperHero::getAlign(){
    return align;
}

// Se obtiene el tipo de ojo.
// No hay parámetros.
// Se regresa un string con el tipo de ojo.
// Complejidad: O(1)
string SuperHero::getEye(){
    return eye;
}

// Se obtiene el tipo de cabello.
// No hay parámetros.
// Se regresa un string con el tipo de cabello.
// Complejidad: O(1)
string SuperHero::getHair(){
    return hair;
}

// Se obtiene el sexo.
// No hay parámetros.
// Se regresa un string con el tipo de cabello.
// Complejidad: O(1)
string SuperHero::getSex(){
    return sex;
}

// Se obtiene el Gsm.
// No hay parámetros.
// Se regresa un string con el Gsm.
// Complejidad: O(1)
string SuperHero::getGsm(){
    return gsm;
}

// Se obtiene información sobre su estado de vida.
// No hay parámetros.
// Se regresa un string con su estado de vida.
// Complejidad: O(1)
string SuperHero::getAlive(){
    return alive;
}

// Se obtienen sus apariciones.
// No hay parámetros.
// Se regresa un int con el número de apariciones.
// Complejidad: O(1)
int SuperHero::getAppearances(){
    return appearances;
}

// Se obtiene la fecha de su primera aparición.
// No hay parámetros.
// Se regresa un string con la fecha de su primera aparición.
// Complejidad: O(1)
string SuperHero::getFirstAppearance(){
    return firstAppearance;
}

// Se obtiene el year de su primera aparición.
// No hay parámetros.
// Se regresa un int con el year de su primera aparición.
// Complejidad: O(1)
int SuperHero::getYear(){
    return year;
}

// Setter Methods

// Se establece el pageID.
// Se pasa como parámetro un string con el pageID.
// No hay valor de retorno.
// Complejidad: O(1)
void SuperHero::setPageID(int pageID){
    this->pageID = pageID;
}

// Se establece el nombre.
// Se pasa como parámetro un string con el nombre.
// No hay valor de retorno.
// Complejidad: O(1)
void SuperHero::setName(string name){
    this->name = name;
}

// Se establece el Urlslug
// Se pasa como parámetro un string con el Urlslug
// No hay valor de retorno.
// Complejidad: O(1)
void SuperHero::setUrlslug(string urlslug){
    this->urlslug = urlslug;
}

// Se establece el ID.
// Se pasa como parámetro un string con el ID.
// No hay valor de retorno.
// Complejidad: O(1)
void SuperHero::setID(string ID){
    this->ID = ID;
}

// Se establece el Align.
// Se pasa como parámetro un string con el Align.
// No hay valor de retorno.
// Complejidad: O(1)
void SuperHero::setAlign(string align){
    this->align = align;
}

// Se establece el tipo de ojo.
// Se pasa como parámetro un string con el tipo de ojo.
// No hay valor de retorno.
// Complejidad: O(1)
void SuperHero::setEye(string eye){
    this->eye = eye;
}

// Se establece el tipo de cabello.
// Se pasa como parámetro un string con el tipo de cabello.
// No hay valor de retorno.
// Complejidad: O(1)
void SuperHero::setHair(string hair){
    this->hair = hair;
}

// Se establece el sexo.
// Se pasa como parámetro un string con el sexo.
// No hay valor de retorno.
// Complejidad: O(1)
void SuperHero::setSex(string sex){
    this->sex = sex;
}

// Se establece el gsm.
// Se pasa como parámetro un string con el gsm.
// No hay valor de retorno.
// Complejidad: O(1)
void SuperHero::setGsm(string gsm){
    this->gsm = gsm;
}

// Se establece su estado de vida.
// Se pasa como parámetro un string con el estado de vida.
// No hay valor de retorno.
// Complejidad: O(1)
void SuperHero::setAlive(string alive){
    this->alive = alive;
}

// Se establece el número de apariciones.
// Se pasa como parámetro un int con el número de apariciones.
// No hay valor de retorno.
// Complejidad: O(1)
void SuperHero::setAppearances(int appearances){
    this->appearances = appearances;
}

// Se establece la fecha de su primera aparición.
// Se pasa como parámetro un string con la fecha de su primera aparición.
// No hay valor de retorno.
// Complejidad: O(1)
void SuperHero::setFirstAppearance(string firstAppearance){
    this->firstAppearance = firstAppearance;
}

// Se establece el year de su primera aparición.
// Se pasa como parámetro un string con el year de su primera aparición.
// No hay valor de retorno.
// Complejidad: O(1)
void SuperHero::setYear(int year){
    this->year = year;

}

// Additional methods

// Método print() que imprime con formato todos los aspectos del superhéroe.
// No recibe parámetros.
// No tiene valor de retorno.
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
// los aspectos del superhéroe. 
// No recibe parámetros.
// Regresa un string con toda la información y atributos de un personaje
// en formato de texto de un .csv
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
// último es igual a la primera letra del nombre del superhéroe.
// No recibe parámetros
// Complejidad: O(1)
bool SuperHero::operator == (char firstLetter){
    return name[0] == firstLetter;
}
