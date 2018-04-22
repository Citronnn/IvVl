#include "vector.hpp"
#include "shared.hpp"
#include "figure.hpp"
#include "algs.hpp"

using namespace last;

int main(){
    vector<shared_ptr<Shape>> mass=create();
    if(allsquareless(mass,1000))
        std::cout<<"Ни один элемент диапазона не обладает площадью меньше 1000\n";
    else
        std::cout<<"Есть элементы, площадь которых меньше 1000\n";
    copyBad(mass, 100);
    std::cout<<"Размер контейнера после модифицирующего алгоритма "<<mass.size()<<"\n";
    return 0;
}