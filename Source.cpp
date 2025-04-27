#include <iostream>
using namespace std;


template <typename T>
class Calculator {
private:
    T a, b;

public:
    explicit Calculator(T a, T b) : a(a), b(b) {}

    T add() const {
        return a + b;
    }

    T subtract() const {
        return a - b;
    }

    T multiply() const {
        return a * b;
    }

    T divide() {
        if (b == 0) {
            throw runtime_error("Ділення на нуль!");
        }
        return a / b;
    }

    void showResults() {
        cout << "Сума: " << add() << endl;
        cout << "Різниця: " << subtract() << endl;
        cout << "Добуток: " << multiply() << endl;
        try {
            cout << "Частка: " << divide() << endl;
        }
        catch (const runtime_error& e) {
            cout << "Помилка: " << e.what() << endl;

        }
    }
};

int main() {
    system("chcp 65001 > nul"); 
    
    Calculator<int> calc(10, 2);
    calc.showResults();

    cout << "------\n";

    Calculator<double> calc2(5.5, 0.0);
    calc2.showResults();

    return 0;
}
