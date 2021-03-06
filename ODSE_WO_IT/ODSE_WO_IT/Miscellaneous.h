/*-------------------------------------------------------------------------------%
% Version: 1.00                                                                  %
%                                                                                %
% Description:  Miscellaneous functions support for ODSE with XOR-based PIR      %
%                                                                                %
% History Information                                                            %
%   Person                      Date            Comment                          %
%--------------------------------------------------------------------------------%
%   Name               			YYYY-MM-DD    	Description		                 %
%   Thang Hoang                 2016-09-13      Functions modified               %
%   Anvesh Ragi                 201x-xx-xx      Functions created                %
%--------------------------------------------------------------------------------*/


#ifndef MISCELLANEOUS_H
#define MISCELLANEOUS_H


#include <string>
#include "struct_MatrixType.h"
#include "config.h"
#include "MasterKey.h"
using namespace std;
 class Miscellaneous
{
public:
    Miscellaneous();
    ~Miscellaneous();
    
    static void print_ucharstring(const unsigned char *pInput, int in_len);
    static int ucarray_to_int(int &rDestination, unsigned char *pSource, int source_length);
    static int ucarray_to_ulong(unsigned long &rDestination,unsigned char *pSource,int source_length);
    static int longint_to_ucarray(unsigned char *pDestination, int destination_length, TYPE_INDEX *pSource);
    static int prepare_initial_counter(unsigned char *pInitialCounter, int size, TYPE_INDEX *pSource);
    static int print_file_names(string file_names[], int size);
    static int print_hash_map(TYPE_GOOGLE_DENSE_HASH_MAP &rHashMap);
    static int print_matrix(MatrixType **I);
    static int print_matrix_row(MatrixType **I,int row, TYPE_INDEX col_size);
    static int print_matrix_column(MatrixType **I,int col);
    
    
    static int write_file_cpp(string file_name, unsigned char *pOutData, int out_len) ;
    static int read_file_cpp(unsigned char *pInData, int in_len, string file_name);
    static int read_filesize_cpp(string file_name);
    
    static int extract_file_names_with_path(vector<string> &rFileNames,string path);
    static int extract_file_names(vector<string> &rFileNames, string path);
        
    static int write_matrix_to_file(string filename, string path, MatrixType** I, TYPE_INDEX num_row, TYPE_INDEX num_col);
    static int read_matrix_from_file(string filename, string path, MatrixType** I, TYPE_INDEX num_row,TYPE_INDEX num_col);
    
    
    static int write_matrix_to_file(string filename, string path, MatrixType* I, TYPE_INDEX num_row, TYPE_INDEX num_col);
    static int read_matrix_from_file(string filename, string path, MatrixType* I, TYPE_INDEX num_row, TYPE_INDEX num_col);
    
    static int write_matrix_to_file(string filename, string path, bool** I, TYPE_INDEX num_row, TYPE_INDEX num_col);
    static int read_matrix_from_file(string filename, string path, bool** I, TYPE_INDEX num_row, TYPE_INDEX num_col);
    
    
    static int write_array_to_file(string filename, string path, TYPE_COUNTER* arr, TYPE_COUNTER size);
    static int read_array_from_file(string filename, string path, TYPE_COUNTER* arr, TYPE_COUNTER size);
    static int write_array_to_file(string filename, string path, bool* arr, TYPE_COUNTER size);
    static int read_array_from_file(string filename, string path, bool* arr, TYPE_COUNTER size);
    
    
    static int write_counter_to_file(string filename, string path, TYPE_COUNTER n);
    static int read_counter_from_file(string filename, string path, TYPE_COUNTER &n);
    
    static int read_list_from_file(string filename, string path, vector<TYPE_INDEX> &lst);
    static int write_list_to_file(string filename, string path, vector<TYPE_INDEX> lst);
    
    
    static int readHash_table(TYPE_GOOGLE_DENSE_HASH_MAP &rT, string filename, string path, TYPE_INDEX n);
    static int writeHash_table(TYPE_GOOGLE_DENSE_HASH_MAP &rT, string filename, string path);
    
    static std::string to_string(TYPE_INDEX value);
    
    static int read_list_from_file(string filename, string path, std::set<TYPE_INDEX> &lst);
    static int write_list_to_file(string filename, string path, std::set<TYPE_INDEX> lst);
    

    static int read_single_block_from_file(string filename, string path, MatrixType** I, TYPE_INDEX num_row, TYPE_INDEX num_col, TYPE_INDEX index1, TYPE_INDEX index2, int dim);
    static int write_single_block_to_file(string filename, string path, MatrixType** I, TYPE_INDEX num_row, TYPE_INDEX num_col, TYPE_INDEX index, TYPE_INDEX index2, int dim);

    
    //static int write_list_to_file(string filename, string path, vector<unsigned long> lst);
    
    static int write_array_to_file(string filename, string path, double lst[], int size);
    
    
    static int write_stash_to_file(string filename, string path, STASH S);
    static int read_stash_from_file(string filename, string path, STASH &S);
    
    static int read_matrix_from_file(string filename, string path, zz_p** I, TYPE_INDEX num_row, TYPE_INDEX num_col);
    static int write_matrix_to_file(string filename, string path, zz_p** I, TYPE_INDEX num_row, TYPE_INDEX num_col);
};

#endif // MISCELLANEOUS_H
