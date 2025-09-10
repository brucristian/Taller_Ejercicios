#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<sstream>
using namespace std;

// Multiplica dos números grandes (como strings)
string multiplicar(string a, string b) {
    int n = a.size(), m = b.size();
    vector<int> res(n + m, 0);

    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            int prod = (a[i] - '0') * (b[j] - '0');
            int sum = prod + res[i + j + 1];
            res[i + j + 1] = sum % 10;
            res[i + j] += sum / 10;
        }
    }

    string s = "";
    for (int num : res) {
        if (!(s.empty() && num == 0)) s.push_back(num + '0');
    }
    return s.empty() ? "0" : s;
}

// Factorial usando strings
string factorial(int num) {
    string res = "1";
    for (int i = 2; i <= num; i++) {
    	stringstream ss;
    	ss >> i;
        res = multiplicar(res, ss.str());
    }
    return res;
}

int main() {
    int num;
    cout << "Ingrese el valor del factorial a calcular (entre 100 y 1000000): ";
    cin >> num;

    if (num < 100 || num > 1000000) {
        cout << "Número fuera del rango permitido." << endl;
        return 0;
    }

    string resultado = factorial(num);

    cout << "El factorial de " << num << " es:\n\n";
    cout << resultado << endl;

    return 0;
}
