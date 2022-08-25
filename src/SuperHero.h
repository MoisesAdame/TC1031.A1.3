// Autores: Moisés Adame Aguilar (A01660927)
//          Noemí Abigail Curiel López (A01655892)
//          Cristóbal Eleazar Meza Aranda (A01661792)
// Fecha: 24 de Agosto del 2022
// Descripción: Encabezado de la clase SuperHero

#ifndef __SUPERHERO
#define __SUPERHERO

#pragma once
#include <iostream>
#include <string>
using namespace std;

class SuperHero{
    private:
        // Class atributes
        int pageID;
        string name;
        string urlslug;
        string ID;
        string align;
        string eye;
        string hair;
        string sex;
        string gsm;
        string alive;
        int appearances;
        string firstAppearance;
        int year;

    public:
        // Constructor Method
        SuperHero();
        SuperHero(int pageID, string name, string urlslug, string ID, string align, string eye,
                  string hair, string sex, string gsm, string alive, int appearances,
                  string firstAppearance, int year);
        
        // Getter Methods
        int getPageID();
        string getName();
        string getUrlslug();
        string getID();
        string getAlign();
        string getEye();
        string getHair();
        string getSex();
        string getGsm();
        string getAlive();
        int getAppearances();
        string getFirstAppearance();
        int getYear();

        // Setter Methods
        void setPageID(int pageID);
        void setName(string name);
        void setUrlslug(string urlslug);
        void setID(string ID);
        void setAlign(string align);
        void setEye(string eye);
        void setHair(string hair);
        void setSex(string sex);
        void setGsm(string gsm);
        void setAlive(string alive);
        void setAppearances(int appearances);
        void setFirstAppearance(string firstAppearance);
        void setYear(int year);
        
        // Additional methods
        void print();
        string toCsvLine();
        bool operator > (SuperHero &superHero);
        bool operator < (SuperHero &superHero);
        bool operator == (char firstLetter);
};

#endif