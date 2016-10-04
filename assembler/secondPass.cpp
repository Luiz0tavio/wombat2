//
// Created by luizorv on 04/10/16.
//

#include <vector>
#include "secondPass.hpp"
using namespace std;

SecondPass::SecondPass(vector< DataTable > data_map,
                       vector< LabelTable > labels_map,
                       ifstream &entrada) {
    file = (&entrada);
    labels = labels_map;
    data = data_map;
}

void SecondPass::doSecondPass(string name_out){
    ofstream mif_out;

    /* get name from file input (without extension) to set output .mif*/
    mif_out.open (name_out.substr(0, name_out.find_first_of(".")) + ".mif");

    while( getline( (*file), line ) ){
        if(line[0] != ';') {

        }
    }
}