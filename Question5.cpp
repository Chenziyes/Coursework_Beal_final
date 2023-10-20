//
// Created by 陈梓叶 on 19/10/2023.
//

#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include "cmath"

class Question5 {
public:
    Question5(int limitBntNum) : limitBntNum(limitBntNum), lastBNT(9) {}

    template<typename S>
    S getSum(S a, S b, S c, S d, S e, S f) {
        return a + b + c + d + e + f;
    }

    bool isComposite(int n) {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                return true;
            }
        }
        return false;
    };

    void findCompositeBNT() {

        for (BNT = 15,lastBNT=0; limitBntNum > 0; BNT++) {
            for (x = 3; x < BNT/2; x++) {
                for (y = 3; y < BNT/2; y++) {
                    for (z = 3; z < BNT/2; z++) {
                        for (A = 2; A < BNT/2; A++) {
                            for (B = 2; B < BNT/2; B++) {
                                for (C = 2; C < BNT/2; C++) {
                                    std::lock_guard<std::mutex> lock(mutex);

                                    if (getSum(x, y, z, A, B, C) == BNT) {

                                        if (pow(A, x) + pow(B, y) == pow(C, z)) {

                                            if (BNT != lastBNT) {
                                                if (isComposite(BNT)) {
                                                    if (BNT !=lastBNT){

                                                        std::cout << BNT << ":" << A << "^" << x << "+" << B << "^" << y << "=" << C
                                                                  << "^" << z << "\n";
                                                        compositeBNT.push_back(BNT);
                                                        limitBntNum--;
                                                        lastBNT = BNT;
                                                    }
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
        }
    }

    void run() {
        std::vector<std::thread> threads;
        for (int i = 0; i < 4; ++i) {  // You can adjust the number of threads as needed
            threads.emplace_back(&Question5::findCompositeBNT, this);
        }
        for (auto& thread : threads) {
            thread.join();
        }
    }

    std::vector<int> getCompositeBNT() {
        return compositeBNT;
    }

private:
    int limitBntNum;
    std::vector<int> compositeBNT;
    std::mutex mutex;
    int lastBNT;
    int x;
    int y;
    int z;
    int A;
    int B;
    int C;
    int BNT;

};

