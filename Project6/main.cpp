#include <iostream>
#include <vector>
using namespace std;




vector<int>calculate(int x);




vector<int> calculate(int x) {


    if (x <= 1) { //base problem
        return {};
    }
    else { //smaller problems
        if (x % 2 == 0) {
            vector<int>s = calculate(x / 2);
            s.push_back(2);
            return  s;
        }
        else if (x % 3 == 0) {
            vector<int>s = calculate(x / 3);
            s.push_back(3);
            return s;
        }
        else if (x % 5 == 0) {
            vector<int>s = calculate(x / 5);
            s.push_back(5);
            return s;
        }
        else if (x % 7 == 0) {
            vector<int>s = calculate(x / 7);
            s.push_back(7);
            return s;
        }
        else if (x % 11 == 0) {
            vector<int>s = calculate(x / 11);
            s.push_back(11);
            return s;
        }
        else if (x % 13 == 0) {
            vector<int>s = calculate(x / 13);
            s.push_back(13);
            return s;
        }
        else if (x % 17 == 0) {
            vector<int>s = calculate(x / 17);
            s.push_back(17);
            return s;
        }
        else if (x % 23 == 0) {
            vector<int>s = calculate(x / 23);
            s.push_back(23);
            return s;
        }
    }

}








int main() {
    vector<int>z = calculate(10);
    for (int i = 0; i < z.size();i++) {
        cout << z.at(i) << endl;
    }
    
    vector<int>y = calculate(100);
    for (int i = 0; i < y.size();i++) {
        cout << y.at(i) << endl;
    }
    vector<int>w = calculate(-1);
    for (int i = 0; i < w.size();i++) {
        cout << w.at(i) << endl;
    }
    vector<int>a = calculate(391);
    for (int i = 0; i < a.size();i++) {
        cout << a.at(i) << endl;
    }

}











