//
// Created by Filip on 12.03.2016.
//

#include "Smartphone.h"

Smartphone::Smartphone(std::string manufacturer, std::string model, std::string os, int osVersion) {
    _manufacturer = _manufacturer;
    _model = model;
    _os = os;
    _osVersion = osVersion/10.0;
}

std::ostream & operator <<( std::ostream &out, const Smartphone  &s){
    return out << s._model <<", ";
}
