#include<iostream>

double temp_conv(double celsius) {
    double fahrenheit {(celsius * 9 / 5) + 32};
    return fahrenheit;
}

double distance_conv(double kilometer) {
    double miles {kilometer * 1.609};
    return miles;
}

double currency_conv(double usd) {
    double jpy {usd * 155.55};
    return jpy;
}

double bpm_conv(double spb) {
    double bpm {60 / spb};

    return bpm;
}

int main() {
    std::cout << "input number for conversion: ";
    double input{};
    std::cin >> input;

    std::cout << "conversion celsius to fahrenheit with = " <<  input << " = " << temp_conv(input) << '\n';
    std::cout << "conversion miles to kilometer with = " << input << " = " << distance_conv(input) << '\n';
    std::cout << "conversion usd to jpy with = " << input << " = " << currency_conv(input) << '\n';
    std::cout << "conversion bpm to second per beat with = " << input << " = " << bpm_conv(input) << '\n';

    return 0;
}
