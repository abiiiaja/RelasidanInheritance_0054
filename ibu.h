#ifndef IBU_H
#define IBU_H

#include <iostream>
#include <string>
#include <vector>
#include "anak.h"
using namespace std;

class anak;

class Ibu{
    public:
    string nama;
    vector<anak*> daftar_anak;
};