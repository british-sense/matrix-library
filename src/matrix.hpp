#include <iostream>
#include <vector>

template <typename T>
struct Matrix {

    // variable
    int col, row;
    std::vector< std::vector< T > > m;

    // method
    Matrix();
    Matrix(int _row, int _col);
    int get_col();
    int get_row();
    Matrix inverse();

    // operator
    const Matrix operator + (const Matrix & _m) const;
    const Matrix operator - (const Matrix & _m) const;
    const Matrix operator * (const Matrix & _m) const;

    class Vector {

        // variable
        std::vector< T > v;

        // method
        Vector();
        Vector(int n);
        T dot(Vector _v);
        
        // operator
        const Vector operator + (const Vector & _v) const;
        const Vector operator - (const Vector & _v) const;
        const Vector operator * (const Vector & _v) const;
    };

};

template < typename T > 
Matrix< T >::Matrix () {

}

template < typename T > 
Matrix< T >::Matrix (int _row, int _col) : row(_row), col(_col), mat(std::vector< std::vector< T > >(_row, std::vector< T >(_col))) {

}
