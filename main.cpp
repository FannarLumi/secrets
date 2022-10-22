#include <iostream>
#include <vector>
using namespace std;

class People{
public:
    int days;
    People(){
        days = 0;
    }
};



int secret(vector<People> &vecPeople, int DTS, int DTF, int N,int totalDays, int tam){
    People person;
    if (totalDays == N){
        return tam;
    }
    for (int i = 0; i < tam; ++i){
        ++vecPeople[i].days;
    }
    for (int i = 0; i < tam; ++i){
        if (vecPeople[i].days == DTF){
            vecPeople.erase(vecPeople.begin()+i);
            --tam;
        }
    }
    for(int i = 0; i < tam;++i){
        if (vecPeople[i].days >= DTS){
            vecPeople.push_back(person);
            ++tam;
        }
    }

    totalDays += 1;
    secret(vecPeople,DTS,DTF,N,totalDays,tam);
}

int main() {
    People primero;
    vector<People> vecPeople;
    vecPeople.push_back(primero);
    int result = 0;
    int tam = secret(vecPeople,2,4,6,1,1);
    for(auto i: vecPeople){
        result += 1;
    }
    cout << result;
    return 0;
}
