//
// Created by c3024957 on 17/10/2023.
//


#include "Question1-3.h"
#include <iostream>
#include <cmath>
#include <fstream>



void Solution1::Answer(int limitCount) {
    std::ofstream outputFile("/Users/chenziye/Documents/test/test1");
    if (!outputFile) {
        std::cerr << "Mayday!!" << std::endl;
    }
    for (BNT = 12, lastBNT = 0; limitCount > 0; BNT++) {
        for (x = 3; x < BNT/2; x++) {
            for (y = 3; y < BNT/2; y++) {
                for (z = 3; z < BNT/2; z++) {
                    for (A = 2; A < BNT/2; A++) {
                        for (B = 2; B < BNT/2; B++) {
                            for (C = 2; C < BNT/2; C++) {
                                if (getSum(x, y, z, A, B, C) == BNT) {
                                    if (pow(A, x) + pow(B, y) == pow(C, z)) {
                                        outputFile << BNT << ":" << A << "," << x << "," << B << "," << y << "," << C
                                                   << "," << z << std::endl;
                                        std::cout << BNT << ":" << A << "^" << x << "+" << B << "^" << y << "=" << C
                                                  << "^" << z << "\n";
                                        if (BNT != lastBNT) {
                                            limitCount--;
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


    outputFile.close();
}

bool Solution2::isPrime(int n) {
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

void Solution2::Answer(int limitBntNum) {
    std::ofstream outputFile("/Users/chenziye/Documents/test/test2");
    if (!outputFile) {
        std::cerr << "Mayday!!" << std::endl;
    }
    for (BNT = 9, lastBNT = 0; limitBntNum > 0; BNT++) {
        for (x = 3; x < BNT/2; x++) {
            for (y = 3; y < BNT/2; y++) {
                for (z = 3; z < BNT/2; z++) {
                    for (A = 2; A < BNT/2; A++) {
                        for (B = 2; B < BNT/2; B++) {
                            for (C = 2; C < BNT/2; C++) {
                                if (getSum(x, y, z, A, B, C) == BNT) {
                                    if (pow(A, x) + pow(B, y) == pow(C, z)) {
                                        if (BNT != lastBNT) {
                                            if (isPrime(BNT)) {
                                                limitBntNum--;
                                                outputFile << BNT << std::endl;
                                                std::cout << BNT << "\n";
                                                lastBNT = BNT;

                                            }

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
    }outputFile.close();
}

long long longSum(long long base, long long exponent) {
    if (exponent == 0) {
        return 1;
    }
    if (exponent % 2 == 0) {
        long long T = longSum(base, exponent / 2);
        return T * T;
    } else {
        return base * longSum(base, exponent - 1);
    }
}


void Solution3::Answer(long long AA, long long AAA, long long BB, long long BBB, long long CC, long long CCC, long long xx,
                  long long xxx, long long yy, long long yyy, long long zz,
                  long long zzz) {
    std::ofstream outputFile("/Users/chenziye/Documents/test/test3");
    if (!outputFile) {
        std::cerr << "Mayday!!" << std::endl;
    }
    for (x = xx; x <= xxx; x++) {
        for (y = yy; y <= yyy; y++) {
            for (z = zz; z <= zzz; z++) {
                for (A = AA; A <= AAA; A++) {
                    for (B = BB; B <= BBB; B++) {
                        for (C = CC; C <= CCC; C++) {
                            if (longSum(A, x) + longSum(B, y) == longSum(C, z)) {
                                BNT = getSum(x, y, z, A, B, C);
                                outputFile << BNT << ":" << A << "," << x << "," << B << "," << y << "," << C
                                           << "," << z << std::endl;

                                std::cout << BNT << ":" << A << "^" << x << "+" << B << "^" << y << "=" << C
                                          << "^" << z << "\n";

                            }
                        }

                    }


                }

            }

        }
    }outputFile.close();

}






