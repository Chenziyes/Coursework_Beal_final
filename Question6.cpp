//
// Created by c3024957 on 19/10/2023.
//
#include "iostream"


class Question6 {
public:
    Question6(int minbnt, int maxbnt) : minBNT(minbnt), maxBNT(maxbnt) {}


    void Answer6() {

        for(int x=33331,z=33332,A=2,C=2;z>330;z--,x--){

            for (int AA=A,xx=x;(AA + AA + C + xx + xx + z) > minBNT && x > 2; AA *= 2, xx /= 2) {

                std::cout << AA + AA + C + xx + xx + z << ":" << AA << "^" << xx << "+" << AA << "^" << xx << "=" << C << "^"
                          << z
                          << std::endl;
                if (xx % 2 != 0) {

                    break;
                }


            }
        }

        for(int x=33331,z=33332,A=2,C=2;z>330;z--,x--){

            for (int CC=C,zz=z;(A + A + CC + x + x + zz) > minBNT && x > 2; CC *= 2, zz /= 2) {

                std::cout << A + A + CC + x + x + zz << ":" << A << "^" << x << "+" << A << "^" << x << "=" << CC << "^"
                          << zz
                          << std::endl;
                if (zz % 2 != 0) {

                    break;
                }


            }
        }








    }

    Question6 operator||(const Question6 &other) const {
        if (maxBNT > other.maxBNT) {
            return Question6(minBNT, maxBNT);
        } else {
            return Question6(other.minBNT, other.maxBNT);
        }
    }

    void print() const {
        std::cout << "BNT (" << minBNT << " " << maxBNT << ") " << std::endl;
    }

private:
    int maxBNT;
    int minBNT;


};



