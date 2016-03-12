//
// Created by Filip on 12.03.2016.
//

#include <string>
//#include <bits/stringfwd.h>

#ifndef FUNCTIONALPROGRAMMING_SMARTPHONE_H
#define FUNCTIONALPROGRAMMING_SMARTPHONE_H
class Smartphone{
public:
    Smartphone(std::string manufacturer, std::string model, std::string os, int osVersion);
    friend std::ostream & operator <<( std::ostream &out, const Smartphone  &s);
private:
    std::string _manufacturer;
    std::string _model;
    std::string _os;
    float _osVersion;
};
#endif //FUNCTIONALPROGRAMMING_SMARTPHONE_H
