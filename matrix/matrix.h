#pragma once

#include <iostream>
#include <string>
#include <list>

using std::cout;
using std::cin;
using std::string;

template < typename TYPE >
class matrix
{
private:
    unsigned int rows;
    unsigned int cols;
    TYPE **matr;
public:
    matrix( unsigned int rows = 1, unsigned int cols = 1 );
    ~matrix( );
    matrix Inverse( matrix A );
    TYPE Det( matrix A );
    matrix Transpoze( matrix A );

    TYPE GetElement( unsigned int XRow, unsigned int YCol );
    void InsertElement( TYPE element, unsigned int xRow, unsigned int yRow );
    unsigned long int GetNumberElements( matrix A );
    unsigned int GetRows( matrix A );
    unsigned int GetCols( matrix A );

    matrix operator + ( const matrix & A, const matrix & B );
    matrix operator - ( const matrix & A, const matrix & B );
    matrix operator * ( const matrix & A, const matrix & B );   //нормальное матричное умножение
    matrix operator % ( const matrix & A, const matrix & B );   //поэлементное умножение матриц
    matrix operator * ( const TYPE x, const matrix & B );
    matrix operator / ( const matrix & A, const matrix & B );
    matrix operator / ( const TYPE x, const matrix & B );

    matrix & operator = ( const matrix & A );
    bool operator == ( matrix & A, matrix & B );

    istream & operator<<( istream & S, matrix & A );

    friend istream & operator << ( istream & S, matrix & A );
    friend ostream & operator >> ( ostream & S, const matrix & A );
};

