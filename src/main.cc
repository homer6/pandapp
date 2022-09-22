
#include <iostream>
using std::cout;
using std::cerr;
using std::endl;


#include "pandapp.hpp"
namespace pd = pandapp;

#include <string>
using std::string;


int main( int argc, char** argv ){

    //DataFrame
    auto df = pd::DataFrame();

    //shared_ptr<DataFrame>
    auto df2_ptr = pd::make_df();

    //shared_ptr<DataFrame>
    auto df3 = pd::read_csv_string("one,two,three\n1,2,3");


    cout << string(*df3) << endl;

    return 0;

}

