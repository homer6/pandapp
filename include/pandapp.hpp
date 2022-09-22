#ifndef PANDAPP_HPP
#define PANDAPP_HPP

#include <memory>
#include <string>

namespace pandapp{

    using std::string;

    class DataFrame;
    typedef std::shared_ptr<DataFrame> df_ptr;

    df_ptr make_df();
    df_ptr read_csv( const string& filepath );

    class DataFrame{

        public:
            virtual void read_csv_string( const string& csv_contents );
            virtual operator string() const;

        protected:
            string contents;

    };









    void DataFrame::read_csv_string(const string &csv_contents) {
        this->contents = csv_contents;
    }

    DataFrame::operator string() const {
        return this->contents;
    }


    df_ptr make_df(){
        return std::make_shared<DataFrame>();
    }

    df_ptr read_csv( const string& filepath ){
        return std::make_shared<DataFrame>();
    }

    df_ptr read_csv_string( const string& csv_contents ){
        auto df = std::make_shared<DataFrame>();
        df->read_csv_string( csv_contents );
        return df;
    }



}


#endif //PANDAPP_HPP