//
// Created by paria on 05/02/18.
//

#ifndef SETTINGUPGOOGLETEST_TDMASOLVER_H
#define SETTINGUPGOOGLETEST_TDMASOLVER_H

#include <iostream>
#include <vector>
#include <array>


    class TDMASolver{
    public:
        TDMASolver()= default;

        std::vector<double> solveTDMA(const std::vector<double>& f, std::vector<double>& a,
                                      std::vector<double>& b , std::vector<double>& c);

        void outputToFile(const std::string filename);
        ~TDMASolver()= default;

    private:
        std::vector<double> result_y;
    };


#endif //SETTINGUPGOOGLETEST_TDMASOLVER_H
