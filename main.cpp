#include <iostream>
#include <unordered_map>
#include <cstring>
#include <string>
//#include <vector>/
#include "generate_examples.h"
#include "pre_process.h"
#include "Number.h"
#include "divide_algorithm.h"

using namespace std;
int main() {
    string input_filename = "../files/examples.txt";
    string output_filename = "../files/results.txt";
    vector<vector<Number>> numbers_list;
    read_input_file(input_filename, numbers_list);
    vector<string> result_list;

//    vector<Number> temp(numbers_list[0].size());
//
//    temp[0] = numbers_list[0][0];
//    cout << temp[0].num << " " << temp[0].amount << " " << temp[0].valid << endl;

    for(auto numbers: numbers_list){
        MergeSort(numbers, 0, numbers.size() - 1);
        string result;
        for(auto num_object: numbers){
            string partial_result;
            if(num_object.is_valid()){
                partial_result += ("("+to_string(num_object.num)+","+ to_string(num_object.amount)+"),");
            }
            result += partial_result;
        }
        result.pop_back();
        result_list.push_back(result);
    }

    write_output_file(output_filename, result_list);

    return 0;
}
