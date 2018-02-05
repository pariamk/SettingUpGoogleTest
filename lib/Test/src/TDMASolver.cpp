//
// Created by paria on 05/02/18.
//

#include <vector>
#include <math.h>
#include <array>
#include <fstream>
#include "../Include/TDMASolver.h"


std::vector<double> TDMASolver::solveTDMA( const std::vector<double>& f, std::vector<double>& a,
                                           std::vector<double>& b , std::vector<double>& c) {
    const unsigned int n = f.size();
    std::vector<double> v;
    v.resize(n,0.0);
    result_y=v;
    double w;
    w=a[0];
    result_y[0]=f[0]/w;
    for (size_t ix=2;ix<n+1;ix++){
        v[ix-2]=c[ix-2]/w;
        w=a[ix-1]-b[ix-1]*v[ix-2];
        result_y[ix-1]=(f[ix-1]-(b[ix-1]*result_y[ix-2]))/w;
    }
    for (int iy=n-1; iy!=-1;--iy){
        result_y[iy-1]=result_y[iy-1]-(v[iy-1]*result_y[iy]);
    }
    for (size_t in=0; in<result_y.size(); in++)
        std::cout<<in<<"      "<<result_y[in]<<std::endl;
    return result_y;
}

void TDMASolver::outputToFile(const std::string filename) {
    std::ofstream outfile;
    outfile.open(filename,std::ios::out);
    for (size_t ix=0; ix<result_y.size(); ix++)
        outfile<<ix<<"      "<<result_y[ix]<<std::endl;
}
