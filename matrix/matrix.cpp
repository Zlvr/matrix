#include "matrix.h"

template< typename TYPE >
inline matrix< TYPE >::matrix( unsigned int rows, unsigned int cols )
{
    matr = new TYPE *[ rows ];
    for ( unsigned int i = 0; i < cols; i++ )
        matr[ i ] = new TYPE[ cols ];
}

template< typename TYPE >
inline matrix< TYPE >::~matrix( )
{
    for ( unsigned int i = 0; i < cols; i++ )
        delete matr[ i ];
    delete[ ] matr;
}

template<typename TYPE>
inline matrix matrix<TYPE>::Inverse( matrix A )
{
    return matrix( );
}

template<typename TYPE>
TYPE matrix<TYPE>::Det( matrix A )
{
    return TYPE( );
}

template<typename TYPE>
matrix matrix<TYPE>::Transpoze( matrix A )
{
    return matrix( );
}

template<typename TYPE>
TYPE matrix<TYPE>::GetElement( unsigned int XRow, unsigned int YCol )
{
    return TYPE( );
}

template<typename TYPE>
void matrix<TYPE>::InsertElement( TYPE element, unsigned int xRow, unsigned int yRow )
{
}

template<typename TYPE>
unsigned long int matrix<TYPE>::GetNumberElements( matrix A )
{
    return 0;
}

template<typename TYPE>
unsigned int matrix<TYPE>::GetRows( matrix A )
{
    return 0;
}

template<typename TYPE>
unsigned int matrix<TYPE>::GetCols( matrix A )
{
    return 0;
}

template<typename TYPE>
matrix matrix<TYPE>::operator+( const matrix & A, const matrix & B )
{
    return matrix( );
}

template<typename TYPE>
matrix matrix<TYPE>::operator-( const matrix & A, const matrix & B )
{
    return matrix( );
}

template<typename TYPE>
matrix matrix<TYPE>::operator*( const matrix & A, const matrix & B )
{
    return matrix( );
}

template<typename TYPE>
matrix matrix<TYPE>::operator%( const matrix & A, const matrix & B )
{
    return matrix( );
}

template<typename TYPE>
matrix matrix<TYPE>::operator*( const TYPE x, const matrix & B )
{
    return matrix( );
}

template<typename TYPE>
matrix matrix<TYPE>::operator/( const matrix & A, const matrix & B )
{
    return matrix( );
}

template<typename TYPE>
matrix matrix<TYPE>::operator/( const TYPE x, const matrix & B )
{
    return matrix( );
}

template<typename TYPE>
matrix & matrix<TYPE>::operator=( const matrix & A )
{
    // TODO: вставьте здесь оператор return
}

template<typename TYPE>
bool matrix<TYPE>::operator==( matrix & A, matrix & B )
{
    return false;
}

template<typename TYPE>
istream & matrix<TYPE>::operator<<( istream & S, matrix & A )
{
    string inp;
    
    unsigned int rws = 0, cls = 0;
    bool flag1 = false;
    for ( unsigned long long int i = strlen( inp ); i != 0; i-- )
    {
        int rc = 0;
        if ( inp[ i ] == ' ' )
            flag1 = true;
        int op = 0 + i;
        do
        {
            if ( string[ op ] == ';' )
            {
                cls++;
            }
            if ( string[ op ] != ' ' )
            {
                rws++;
                if ( string[ op ] == ' ' )
                    flag1 = false;
                op++;
            }
        }
        while ( flag1 != true );
    }
    A->rows = rws;
    A->cols = cls;
    
    // TODO: вставьте здесь оператор return
}