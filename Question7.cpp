//
// Created by c3024957 on 19/10/2023.
//

#include "Question7.h"
#include <iostream>
#include <fstream>
#include "vector"
#include "map"
#include <boost/multiprecision/cpp_int.hpp>

using boost::multiprecision::cpp_int;
namespace mp = boost::multiprecision;

template<typename S>
S getSum(S a, S b, S c, S d, S e, S f) {
    return a + b + c + d + e + f;
}




//unsigned long long Question7::longPow(unsigned long long base, unsigned long long exponent) {
//    if (exponent == 0) {
//        return 1;
//    }
//    if (exponent % 2 == 0) {
//        unsigned long long temp = longPow(base, exponent / 2);
//        return temp * temp;
//    } else {
//        return base * longPow(base, exponent - 1);
//    }
//}





void Question7::Answer7(int minBNT, int maxBNT) {

    std::vector<unsigned long long> collBNT{};
    std::map<unsigned long long, unsigned long long> dataCount;
    int lastBNT = 0;

    for (BNT = minBNT, lastBNT = 0; BNT <= maxBNT; BNT++) {
        for (x = 3; x < BNT / 2; x++) {
            for (y = 3; y < BNT / 2; y++) {
                for (z = 3; z < BNT / 2; z++) {
                    for (A = 2; A < BNT / 2; A++) {
                        for (B = 2; B < BNT / 2; B++) {
                            for (C = 2; C < BNT / 2; C++) {
                                if (getSum(x, y, z, A, B, C) == BNT) {
                                    cpp_int AA = A;
                                    cpp_int BB = B;
                                    cpp_int CC = C;
                                    unsigned int xx = x;
                                    unsigned int yy = y;
                                    unsigned int zz = z;

                                    if ((boost::multiprecision::pow(AA, xx) + boost::multiprecision::pow(BB, yy))== boost::multiprecision::pow(CC, zz)) {
                                        std::cout << BNT << ":" << AA << "^" << xx << "+" << BB << "^" << yy << "=" << CC
                                                  << "^" << zz << "\n";
                                        collBNT.push_back(BNT);
                                        if (BNT != lastBNT) {

                                            lastBNT = BNT;
                                        } else {
                                            break;
                                        }


                                    }

                                }


                            }

                        }


                    }

                }

            }

        }


    }


//
//    for(long long number: collBNT) {
//        std::cout << number << " ";
//    }
    for (unsigned long long value: collBNT) {
        dataCount[value]++;
    }

//        long long a= pair.second;
//        for(long long i=0;i++;pair.second)
//        {
//            std::cout<<"#";
//
//        }
//    }


    for (const auto &pair: dataCount) {
        std::cout << "BNT " << pair.first << " have " << dataCount[pair.first] << "times ";
        for (long long i = 0; i < dataCount[pair.first]; i++) {
            std::cout << "#";
        }
        std::cout << "\n";
    }
}

