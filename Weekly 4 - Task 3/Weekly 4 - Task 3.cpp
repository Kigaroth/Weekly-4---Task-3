// Weekly 4 - Task 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

const int size = 10;

struct Phonebook {
    std::string firstname;
    std::string lastname;
    long int phone_number;
};

std::vector <Phonebook> entries(size);

void getEntries() {
    int i = 0;
    Phonebook entry;
    for (i = 0; i < size; i++) {
            std::cout << "Please enter the first name of entry " << i+1 << ": ";
            std::cin >> entry.firstname;
            std::cout << "Please enter the last name of entry " << i+1 << ": ";
            std::cin >> entry.lastname;
            std::cout << "Please enter phone number of entry " << i+1 << ": ";
            std::cin >> entry.phone_number;
            entries[i] = entry;
    }
}

void print_phonebook(std::vector <Phonebook> entries);

int main()
{
    std::cout << "\n *******MY PHONEBOOK******* \n\n\n";
    getEntries();
    system("CLS");
    print_phonebook(entries);

}

void print_phonebook(std::vector <Phonebook> entries){
    
    int j = 0;
    std::cout << "\n *******MY PHONEBOOK******* \n\n\n";
    for (j = 0; j < size; j++) {
        std::cout << " Entry " << j+1 << ": Name - " << entries[j].firstname << entries[j].lastname << "\t | Phone number - " << entries[j].phone_number << std::endl;      
    }
    
}