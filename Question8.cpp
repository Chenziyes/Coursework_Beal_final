//
// Created by 陈梓叶 on 20/10/2023.
//
#include <iostream>
#include <fstream>

#include <boost/multiprecision/cpp_int.hpp>

using boost::multiprecision::cpp_int;
namespace mp = boost::multiprecision;


class Question8 {
//Pythagorean theorem！！！！！！！
//Now. fri.20.Oct.2023 04:40
//Finally I find a way to solve it
//Please, I think that will be the greatest answer!!!!!!!!!

//Now. fri.20.Oct.2023 04:42 ,I realise that is wrong,x,y,z>2 too...
public:
    static void findMax() {

        cpp_int BNT;
        cpp_int A;
        cpp_int B;
        cpp_int C;
        cpp_int lastBNT = 0;

        unsigned int x;
        unsigned int y;
        unsigned int z;

        for (x = 16; x <=32; x++) {
            for (y = 16; y <= 32; y++) {
                for (z = 16; z <= 32; z++) {
                    for (A = 16; A <=32 ; A++) {
                        for (B = 16; B <=32 ; B++) {
                            for (C = 16; C <= 32; C++) {
                                if ((boost::multiprecision::pow(A, x) + boost::multiprecision::pow(B, y)) ==
                                    boost::multiprecision::pow(C, z)) {
                                    BNT = x + y + z + A + B + C;
                                    if (BNT > lastBNT) {
                                        std::cout << BNT << ":" << A << "^" << x << "+" << B << "^" << y << "=" << C
                                                  << "^" << z << "\n";
                                        lastBNT=BNT;
                                    }

                                }
                            }

                        }


                    }

                }

            }
        }

    }
};