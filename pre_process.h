//
// Created by haoranx98 on 12/24/22.
//

#ifndef CALCULATEDIGITS_PRE_PROCESS_H
#define CALCULATEDIGITS_PRE_PROCESS_H
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include "Number.h"
void string_to_numbers_list(std::string numbers, std::vector<Number> &numbers_list);
void read_input_file(std::string filename, std::vector<std::vector<Number>> &numbers_list);
void write_output_file(std::string filename, std::vector<std::string> result_list);
#endif //CALCULATEDIGITS_PRE_PROCESS_H
