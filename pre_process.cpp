//
// Created by haoranx98 on 12/24/22.
//

#include <iostream>
#include "pre_process.h"

using namespace std;
void string_to_numbers_list(std::string numbers, std::vector<Number> &numbers_list){
    string number_str;
    int number;
    char *token = std::strtok(numbers.data(), ",");
    while(token != nullptr){
        number_str = token;
        number = stoi(number_str);
        Number number_object(number);
        numbers_list.push_back(number_object);
        token = std::strtok(nullptr, ",");
    }
}

void read_input_file(string filename, vector<vector<Number>> &numbers_list){
    ifstream input_file;
    input_file.open(filename);
    if(!input_file.is_open()){
        std::cout << "can not open this file" << endl;
    }
    else{
        string numbers_str;
        while (getline(input_file,numbers_str)){
            if(numbers_str.empty()){
                continue;
            }

            vector<Number> numbers;
            string_to_numbers_list(numbers_str, numbers);
            numbers_list.push_back(numbers);
        }
    }
    input_file.close();
}

void write_output_file(string filename, vector<string> result_list){
    ofstream output_file;
    output_file.open(filename);

    for(auto result: result_list){
        output_file << result << endl;
    }
    output_file.close();
}