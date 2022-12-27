#include <iostream>
#include <array>
#include <vector>
#include <cmath>
#include <fstream>

void arroutbool(std::array <bool, 16> a) {
    for (int i = 0; i < 16; i += 1) {
        std::cout << a[15 - i];
    }
}
void arroutbool(std::array <bool, 16> a, int c) {
    for (int i = 0; i < c; i += 1) {
        std::cout << a[c - i - 1];
    }
}

int bool_to_int(std::array <bool, 16> a) {
    short int b = 0;
    for (int i = 0; i < 16; i+=1) {
        if (a[i]) {
            b += int(pow(2, i));
        }
    }
    return b;
}

std::array <bool, 16> int_to_bool(int c) {
    std::array <bool, 16> a = {0};
    int i = 0;
    while (c > 0) {
        a[i] = c % 2;
        c = c >> 1;
        i += 1;
    }
    return a;
};

struct intbool {
    int i = 0;
    std::array <bool, 16> a = int_to_bool(i);
};

struct art{
    short int start;
    short int l;
};

struct screen {
    std::vector <unsigned short> ls;
    std::vector <unsigned short> starts;
};

void artlint(art a) {
    for (short int i = 0; i < a.start; i += 1) {
        std::cout << " ";
    }
    for (short int i = 0; i < a.l; i += 1) {
        std::cout << "-";
    }
}

void artlines(short start, short l) {

    for (short int i = 0; i < start; i += 1) {
        std::cout << " ";
    }
    for (short int i = 0; i < l; i += 1) {
        std::cout << "-";
    }
    
    //std::cout << "\n";
}

void screenprint(screen s) {
    bool newline = true;
    for (unsigned int i = 0; i < s.ls.size(); i += 1) {
        
        if (s.ls[i] == 0 && s.starts[i] == 0) {
            newline= !newline;
        }
        else {
            artlines(s.starts[i], s.ls[i]);
        }
        //std::cout << "\t" << newline;
        if (newline == true) {
            std::cout << "\n";
        }
    }
}

short sint(art a) {
    a.l = a.l << 8;
    return a.start + a.l;
}

art usint(short i) {
    
    short s = i << 8;
    s = s >> 8;
    short l = i >> 8;
    art a{s,l};
    return a;
}

int main() {
    std::array <bool, 16> b = {0,1,0,1};
    //std::cout << a[0] <<"\n";
    arroutbool(b);
    std::cout << "\n";
    std::array <bool, 16> a = {0, 1, 0};
    std::array <int, 16> f = {0,1234,0,1,32454664,64577,8987};
    int i = 0;
    int c = 5;
    int d = 7;
    while (c > 0) {
        a[i] = c % 2;
        c = c >> 1;
        i += 1;
        std::cout << c << "\n";
    }
    arroutbool(a);
    std::cout << "\n";
    arroutbool(int_to_bool(d));
    std::cout << "\n";
    std::cout << int_to_bool(d)[2];
    std::cout << "\n";
    std::cout << bool_to_int(int_to_bool(d));
    std::cout << "\n";
    intbool e{9};
    std::cout << e.i;
    std::cout << "\n";
    arroutbool(e.a,12);
    std::cout << "\n";
    /*std::cout << "\n";
    std::cout << "bool:\t\t" << sizeof(bool) << " bytes\n";
    std::cout << "char:\t\t" << sizeof(char) << " bytes\n";
    std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes\n";
    std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes\n"; // только C++11
    std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes\n"; // только C++11
    std::cout << "short:\t\t" << sizeof(short) << " bytes\n";
    std::cout << "int:\t\t" << sizeof(int) << " bytes\n";
    std::cout << "long:\t\t" << sizeof(long) << " bytes\n";
    std::cout << "long long:\t" << sizeof(long long) << " bytes\n"; // только C++11
    std::cout << "float:\t\t" << sizeof(float) << " bytes\n";
    std::cout << "double:\t\t" << sizeof(double) << " bytes\n";
    std::cout << "long double:\t" << sizeof(long double) << " bytes\n";
    std::cout << "array:\t\t" << sizeof(std::array <bool,16>) << " bytes\n";
    std::cout << "intbool:\t" << sizeof(intbool) << " bytes\n";
    std::cout << "short int:\t" << sizeof(short int) << " bytes\n";
    std::cout << "art:\t\t" << sizeof(art) << " bytes\n";
    std::cout << "vector:\t\t" << sizeof(std::vector <short>) << " bytes\n";*/
    art line{36,5};
    std::cout << sint(line) << "\n";
    art bbb = usint(sint(line));
    std::cout << bbb.start << " " << bbb.l << "\n";
    //line.l = line.l << 8;
    short line1 = line.start + line.l;

    std::array <art, 32> intline = {};
    std::cout << short(56656576) << "\n";
    //std::cout << line.start <<" " << line.l << " " << line1 << "\n";
    std::cout << sint(line) << "\n";
    
    art lines;

    std::ifstream input_file("su.txt");

    unsigned short start;
    unsigned short l;

    screen s0;
    //int i = 0;
    while (input_file >> start >> l) {
        s0.starts.push_back(start);
        s0.ls.push_back(l);
        //arts.push_back(std::vector <short> (lines.start));
    }
    //std::cout << "\n" << s0.starts.size();
    screenprint(s0);
}
