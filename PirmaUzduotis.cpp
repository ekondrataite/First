// PirmaUzduotis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <numeric>

//using std::cout;
//using std::string;
//using std::cin;
//using std::istream;

using namespace std;

struct duomenys {
    string vardas;
    string pavarde;
    vector<int> pazymiai;
    int number;
    int egzaminas;
    float galutinis;

    float vidurkis;
 
};

int main()
{
    duomenys eilute;
    cout << "Iveskite savo varda: ";
    cin >> eilute.vardas;
    cout << "Iveskite savo pavarde: ";
    cin >> eilute.pavarde;
    cout << "Iveskite namu darbu pazymius: \n";

    for (int i = 0; i < 5; i++) {
        int input;
        eilute.pazymiai.push_back(input);
        cin >> input;
    }

    cout << "Iveskite egzamino ivertinima: ";
    cin >> eilute.egzaminas;
    
    eilute.vidurkis = (accumulate(eilute.pazymiai.begin(), eilute.pazymiai.end(), 0)) / eilute.pazymiai.size();

    cout << "Pazymiu vidurkis: " << eilute.vidurkis;
}
