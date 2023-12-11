#include <iostream>
#include <cmath>

//if code does not run here, check a compiler online to run the code

// this is the function being called in order to find the roots of the quadratic equation
void findRoots(double a, double b, double c) {
    // this part of the code calculates the discriminant
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // if the discriminant is greater than 0, therefore roots are real and different
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "The roots obtained are real and different." << std::endl;
        std::cout << "Root 1 = " << root1 << std::endl;
        std::cout << "Root 2 = " << root2 << std::endl;
    } else if (discriminant == 0) {
        // if the discriminant is equal to 0, then the roots are real and the same
        double root1 = -b / (2 * a);
        std::cout << "The roots obtained are real and the same." << std::endl;
        std::cout << "Root 1 = Root 2 = " << root1 << std::endl;
    } else {
        // if the discriminant is less than zero, then the roots are complex
        double realNumber = -b / (2 * a);
        double imaginaryNumber = sqrt(-discriminant) / (2 * a);
        std::cout << "The roots obtained are complex and different." << std::endl;
        std::cout << "Root 1 = " << realNumber << " + " << imaginaryNumber << "i" << std::endl;
        std::cout << "Root 2 = " << realNumber << " - " << imaginaryNumber << "i" << std::endl;
    }
}

int main() {
    double a, b, c;
    std::cout << "Enter the coefficients a, b, and c: ";
    std::cin >> a >> b >> c;

    findRoots(a, b, c);

    return 0;
}

