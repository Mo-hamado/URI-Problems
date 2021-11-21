/*
In this problem, your job is to read three Portuguese words.
 These words define an animal according to the table below, from left to right.
 After, print the chosen animal defined by these three words.

                     carnivoro---aguia
              ave--{
                     onivoro---pomba
vertebrado--{
                          onivoro---homem
              mamifero--{
                          herbivoro---vaca

                          hematofago---pulga
                inseto--{
                          herbivoro---lagarta
invertebrado--{
                            hematofago---sanguessuga
                anelideo--{
                            onivoro---minhoca

Input
The input contains 3 words, one by line, that will be used to identify the animal,
 according to the above table, with all letters in lowercase.

Output
Print the animal name according to the given input.

Input Samples	Output Samples
vertebrado      homem
mamifero
onivoro

vertebrado      aguia
ave
carnivoro

invertebrado    minhoca
anelideo
onivoro
*/
#include <iostream>

using namespace std;

int main() {

    string cat1, cat2, cat3;
    cin >> cat1 >> cat2 >> cat3;
    if (cat1 == "vertebrado") {
        if (cat2 == "ave") {
            if (cat3 == "carnivoro") cout << "aguia\n";
            else if (cat3 == "onivoro") cout << "pomba\n";
        }
        else if (cat2 == "mamifero") {
            if (cat3 == "onivoro") cout << "homem\n";
            else if (cat3 == "herbivoro") cout << "vaca\n";
        }
    }if (cat1 == "invertebrado") {
        if (cat2 == "inseto") {
            if (cat3 == "hematofago") cout << "pulga\n";
            else if (cat3 == "herbivoro") cout << "lagarta\n";
        }
        else if (cat2 == "anelideo") {
            if (cat3 == "hematofago") cout << "sanguessuga\n";
            else if (cat3 == "onivoro") cout << "minhoca\n";
        }
    }

    return 0;
}
