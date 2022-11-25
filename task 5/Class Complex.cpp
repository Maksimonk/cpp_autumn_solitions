#include <iostream>
#include <iomanip> // for setprecision


class Complex {
public:
    double module_of(void) {
        return _module;
    }
    double Get_Real_Part(void) {
        return _Re;
    }
    double Get_Im_Part(void) {
        return _Im;
    }
    double Get_Argument_of(void) {
        return _argument;
    }


    Complex(double real, double imaginary) {
        setting_parts(real, imaginary);
    }
    void setting_parts(double real, double imaginary) {
        _Re = real;
        _Im = imaginary;
        polarity();
    }
    void polarity_set(double modulus, double argument) {
        _module = modulus;
        _argument = argument;
        calculate_parts();
    }

    void algebra_form(int prec = 5) {
        if (not _module) {
            std::cout << 0 << std::endl;
        }
        else {
            std::cout << std::setprecision(prec) << _Re << ' + ' << _Im << ' * i' << std::endl;
        }
    }
    void trigonometric_form(int prec = 5) {
        if (not _module) {
            std::cout << 0 << std::endl;
        }
        else {
            std::cout << std::setprecision(prec) << _module << ' * (cos' << _argument << ' + sin i * ' << _argument << ')' << std::endl;
        }
    }
    void print_exponent_form(int prec = 5) {
        if (not _module) {
            std::cout << 0 << std::endl;
        }
        else {
            std::cout << std::setprecision(prec) << _module << ' * exp(i * ' << _argument << ')' << std::endl;
        }
    }

    Complex summ_of(double operand) {
        Complex result;
        result.setting_parts(this->Get_Real_Part() + operand, _Im);
        return result;
    }
    Complex summ_of(Complex operand) {
        Complex result;
        result.setting_parts(this->Get_Real_Part() + operand.Get_Real_Part(), this->Get_Im_Part() + operand.Get_Im_Part());
        return result;
    }

    Complex multiply(double operand) {
        Complex result;
        result.polarity_set(_module * operand, _argument);
        return result;
    }
    Complex multiply(Complex operand) {
        Complex result;
        result.polarity_set(_module * operand.module_of(), _argument + operand.Get_Argument_of());
        return result;
    }

    Complex division(double operand) {
        Complex result;
        result.polarity_set(_module / operand, _argument);
        return result;
    }
    Complex involution(double operand) {
        Complex result;
        result.polarity_set(pow(_Re, operand), _argument * operand);
        return result;
    }
    Complex division(Complex operand) {
        Complex result;
        result.polarity_set(_module / operand.module_of(), _argument - operand.Get_Argument_of());
        return result;
    }


private:
    double _Re, _Im;
    double _argument, _module=sqrt(_Im*_Im + _Re*_Re);
    void polarity(void) {if (_Im == 0 and _Re < 0) {_argument = acos(-1);}
        else {_argument = 2 * atan(_Im / (_module + _Re));        }
    }
    void calculate_parts(void) {
        _Re = _module * cos(_argument);
        _Im = _module * sin(_argument);
    }
};
