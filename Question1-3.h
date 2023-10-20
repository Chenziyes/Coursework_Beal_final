//
// Created by c3024957 on 17/10/2023.
//
#include "iostream"
#ifndef COURSEWORK_BEAL_SOLUTION_H
#define COURSEWORK_BEAL_SOLUTION_H



class Solution1 {
public:
    virtual void Answer(int limitCount);

    friend std::ostream& operator<<(std::ostream& os, const Solution1& obj){
        os<< obj.BNT << " : ";
        return os;
    }



protected:
    int x;
    int y;
    int z;
    int A;
    int B;
    int C;
    int BNT;
    int lastBNT;
};


class Solution2 : public Solution1 {
public:
    static bool isPrime(int n);

    void Answer(int limitBntNum) override;
};

class Solution3 {
public:
    void Answer(long long AA, long long AAA, long long BB, long long BBB, long long CC, long long CCC, long long xx,
                long long xxx, long long yy, long long yyy, long long zz, long long zzz);



protected:
    long long BNT;
    long long x;
    long long y;
    long long z;
    long long A;
    long long B;
    long long C;


};



#endif //COURSEWORK_BEAL_SOLUTION_H

//template
template<typename S>
S getSum(S a, S b, S c, S d, S e, S f) {
    return a + b + c + d + e + f;
}

