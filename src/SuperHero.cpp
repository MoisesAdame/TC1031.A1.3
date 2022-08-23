#include "SuperHero.h"

// Constructor Method
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

int SuperHero::getPageID(){
    return pageID;
}

string SuperHero::getName(){
    return name;
}

string SuperHero::getUrlslug(){
    return urlslug;
}

string SuperHero::getID(){
    return ID;
}

string SuperHero::getAlign(){
    return align;
}

string SuperHero::getEye(){
    return eye;
}

string SuperHero::getHair(){
    return hair;
}

string SuperHero::getSex(){
    return sex;
}

string SuperHero::getGsm(){
    return gsm;
}

string SuperHero::getAlive(){
    return alive;
}

int SuperHero::getAppearances(){
    return appearances;
}

string SuperHero::getFirstAppearance(){
    return firstAppearance;
}

int SuperHero::getYear(){
    return year;
}

// Setter Methods
void SuperHero::setPageID(int pageID){
    this->pageID = pageID;
}

void SuperHero::setName(string name){
    this->name = name;
}

void SuperHero::setUrlslug(string urlslug){
    this->urlslug = urlslug;
}

void SuperHero::setID(string ID){
    this->ID = ID;
}

void SuperHero::setAlign(string align){
    this->align = align;
}

void SuperHero::setEye(string eye){
    this->eye = eye;
}

void SuperHero::setHair(string hair){
    this->hair = hair;
}

void SuperHero::setSex(string sex){
    this->sex = sex;
}

void SuperHero::setGsm(string gsm){
    this->gsm = gsm;
}

void SuperHero::setAlive(string alive){
    this->alive = alive;
}

void SuperHero::setAppearances(int appearances){
    this->appearances = appearances;
}

void SuperHero::setFirstAppearance(string firstAppearance){
    this->firstAppearance = firstAppearance;
}

void SuperHero::setYear(int year){
    this->year = year;

}

// Additional methods
void SuperHero::print(){
    cout << "[*] " << name << endl
         << "\t- Identity: " << ID << endl
         << "\t- Align: " << align << endl
         << "\t- Eyes: " << eye << endl
         << "\t- Hair: " << hair << endl
         << "\t- Sex: " << sex << endl
         << "\t- GSM: " << gsm << endl
         << "\t- Alive:" << alive << endl
         << "\t- Appearances: " << appearances << endl
         << "\t- First Appearance: " << firstAppearance << endl
         << "\t- Year: " << year  << endl
         << endl;
}

bool SuperHero::operator > (SuperHero &superHero){
    return name > superHero.getName();
}

bool SuperHero::operator < (SuperHero &superHero){
    return name < superHero.getName();
}

bool SuperHero::operator == (char firstLetter){
    return name[0] == firstLetter;
}