#include <iostream>
#include "Question1-3.h"

#include "vector"
#include "Question5.cpp"
#include "Question6.cpp"
#include "Question7.h"
#include "Question8.cpp"



int main() {
    int quetionNum;
    std::cout << "please enter the question number which you want(1-8)" << std::endl;
    std::cin >> quetionNum;
    switch (quetionNum) {
        case 1 : {
            auto *s1 = new Solution1;
            s1->Answer(5);
            delete s1;
            s1 = NULL;
            break;
        }

        case 2 : {
            auto *s2 = new Solution2;
            s2->Answer(5);
            delete s2;
            s2 = NULL;
            break;
        }

        case 3: {
            auto *s3 = new Solution3;
            s3->Answer(3, 20, 3, 20, 3, 20, 3, 15, 3, 15, 3, 15);
            delete s3;
            s3 = NULL;
            break;
        }

        case 5: {
            Question5 q5(10);
            q5.run();
            std::vector<int> compositeNumbers = q5.getCompositeBNT();
            for (int num: compositeNumbers) {
                std::cout << num << " ";

            }
            break;
        }

        case 6:{
            Question6 q6(3,8);
            Question6 qq6(1000,10000);
            q6=q6||qq6;
            q6.print();
            //Do not worry, I  do not find anywhere to use operator overloading.
            //So I make the problem and fix it.
            q6.Answer6();


            break;
        }

        case 7: {
            int minBNT;
            int maxBNT;
            std::cout << "Please input minimum BNT" << "\n";
            std::cin >> minBNT;
            std::cout << "Please input maximum BNT" << "\n";
            std::cin >> maxBNT;
            auto *s7 = new Question7;
            s7->Answer7(minBNT, maxBNT);
            delete s7;
            s7 = NULL;
            break;
        }

        case 8: {

            Question8::findMax();


        }
        default: {

            break;


        }
    }


}



