#include <iostream>
#include <string>
#include <iomanip>

int main() {
    // Variables to store user input
    std::string name;
    int age;
    std::string gender;
    int heightFeet;
    int heightInches;
    double weight;

    // Ask the user for their information
    std::cout << "Please enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Please enter your age: ";
    std::cin >> age;
    std::cout << "Please enter your gender (male/female): ";
    std::cin >> gender;
    std::cout << "Please enter your height in feet: ";
    std::cin >> heightFeet;
    std::cout << "Please enter your height in inches: ";
    std::cin >> heightInches;
    std::cout << "Please enter your weight in pounds: ";
    std::cin >> weight;

    // Convert height to inches
    int totalHeightInches = (heightFeet * 12) + heightInches;

    // Calculate BMI
    double bmi = (703 * weight) / (totalHeightInches * totalHeightInches);

    // Determine BMI status
    std::string bmiStatus;
    if (bmi < 18.5) {
        bmiStatus = "Underweight";
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        bmiStatus = "Normal weight";
    }
    else if (bmi >= 25 && bmi < 29.9) {
        bmiStatus = "Overweight";
    }
    else {
        bmiStatus = "Obesity";
    }

    // Output the results
    std::cout << "\nHi " << name << ",\n";
    std::cout << "You are a " << gender << ". You are " << age << " years old. You are currently "
        << heightFeet << "'" << heightInches << " and you currently weigh " << weight
        << " pounds. Your BMI is " << std::fixed << std::setprecision(1) << bmi
        << ", which is " << bmiStatus << ".\n";
    std::cout << "Thank you for using the BMI Calculator!\n";

    return 0;
}
