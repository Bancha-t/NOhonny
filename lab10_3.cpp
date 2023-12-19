#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std ;
int main(){
    int N = 0  ;
    double mu , sd, sum = 0 , sum_of_sq = 0  ;
    string tex ;
    ifstream source ;
    source.open("score.txt") ;
    while(getline(source, tex)){
        sum += atof(tex.c_str());
        sum_of_sq += pow(atof(tex.c_str()),2) ; 
        N ++ ;
    }
    mu = (1.0 / N) *  sum ;
    sd = sqrt(((sum_of_sq/N) ) - pow(mu,2)) ;  
    cout << "Number of data = " << N << "\n" ;
    cout << setprecision(3) ;
    cout << "Mean = " << mu << "\n" ;
    cout << "Standard deviation = " << sd ;
    source.close() ;
    return 0 ;
}

