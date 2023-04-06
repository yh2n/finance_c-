#include <iostream>

using namespace std;

class AndySportsCar {
    public:
        AndySportsCar(string);
        ~AndySportsCar();
        static int getCarCount();

    private:
        string color;

        static int car_count;
};

int AndySportsCar::car_count = 0;

AndySportsCar::AndySportsCar(string order_col) {
    color = order_col;
    cout << "New " << this->color << " Car constructed" << endl;
    car_count++;
}

AndySportsCar::~AndySportsCar() {
    cout << "Old " << this->color << " car crushed! :-(" << endl;
    car_count--;
}

int AndySportsCar::getCarCount() {
    return car_count;
}


int main(int argc, const char * argv[]) {

    cout << "Count of cars is " << AndySportsCar::getCarCount() << endl;

    AndySportsCar *pSilverCar = new AndySportsCar("Silver");
    AndySportsCar *pBlackCar = new AndySportsCar("Black");

    delete pSilverCar;
    delete pBlackCar;

    return 0;
}