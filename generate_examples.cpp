//
// Created by haoranx98 on 12/24/22.
//

#include "generate_examples.h"
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

void generate_examples(std::string filename){
    std::ofstream output_file;
    output_file.open(filename);



    for (int i = 0; i < 1000; ++i) {
        srand((unsigned) time(NULL));
        for (int j = 0; j < 1000; ++j) {
            output_file << rand()%100 << ",";
        }
        output_file << std::endl;
        usleep(1145141);
    }

    output_file.close();

}