//ЗАВДАННЯ 1

#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdlib>

using namespace std;
class gym {
public:
    void create(string id, string name) {
        mas[i].id = id;
        mas[i].name = name;
        mas[i].pass = 0;
        i++;
        res += "Member " + id + " : " + name + ", subsciption for 0 monts\n";
    }
    void del(string id) {
        for (int g = 0;g < 10;g++) {
            if (mas[g].id == id) {
                mas[g].id.clear();
                mas[g].name.clear();
                mas[g].pass = 0;
            }
        }
    }
    void extend(string id, int count) {
        for (int g = 0;g < 10;g++) {
            if (mas[g].id == id) {
                mas[g].pass += count;
                j = g;
            }
        }
        res += ("Member " + id + " : " + mas[j].name + ", subsciption for " + to_string(mas[j].pass) + " monts\n");
    }
    void cancel(string id) {
        for (int g = 0;g < 10;g++) {
            if (mas[g].id == id) {
                mas[g].pass = 0;
            }
        }
    }
    string res;
private:
    struct xx {
        string id, name;
        int pass;
    };

    xx mas[10] = {};
    int i = 0, j;
};

int main() {
    string name, id;
    int n, i;
    gym obj;
    string command = "";

    do {
        command.clear();
        getline(cin, command);
        name.clear();
        id.clear();
        i = 0;



        if (command.find("create") != string::npos) {
            command.erase(0, 7);

            while (true)
            {
                if (isdigit(command[i]) == 0) {
                    break;
                }

                id += command[i];
                i++;

            }
            command.erase(0, i + 1);
            name = command;
            obj.create(id, name);
        }
        else if (command.find("cancel") != string::npos) {
            command.erase(0, 7);
            n = stoi(command);
            obj.cancel(id);
        }
        else if (command.find("extend") != string::npos) {
            command.erase(0, 7);

            while (true)
            {
                if (isdigit(command[i]) == 0) {
                    break;
                }

                id += command[i];
                i++;

            }
            command.erase(0, i + 1);
            n = stoi(command);
            obj.extend(id, n);
        }
        else if (command.find("delete") != string::npos) {
            command.erase(0, 7);
            id = command;
            obj.del(id);
        }
    } while (command != "quit");
    cout << obj.res;
    return 0;
}

//ЗАВДАННЯ 2
#include <iostream>
#include <string>
#include <math.h>

using namespace std;
class Fraction {
public:
    Fraction(int numerator1, int denominator1);
    string toString();
    double toDouble();
private:
    int numerator;
    int denominator;
    double result = numerator / denominator;
};
Fraction::Fraction(int numerator1, int denominator1) {
    numerator = numerator1;
    denominator = denominator1;
}
string Fraction::toString() {

    if (numerator % denominator == 0) return to_string(numerator / denominator);
    else if (abs(numerator) > abs(denominator)) {
        if (numerator * denominator < 0) return (to_string(((int)(double(numerator) / denominator))) + " " + to_string(abs(numerator - ((int)(double(numerator) / denominator)) * denominator)) + "/" + to_string(abs(denominator)));
        else return (to_string((int)(double(numerator) / denominator)) + " " + to_string((numerator - ((int)(double(numerator) / denominator)) * denominator)) + "/" + to_string(denominator));
    }
    else {
        return (to_string(numerator) + "/" + to_string(denominator));
    }
}
double Fraction::toDouble() {
    return (double)numerator / denominator;
}

int main(void) {
r:int num = 0, den = 0;
    string input = "", temp;
    getline(cin, input);
    temp = input;
    temp.erase(temp.find("/"));
    input.erase(0, input.find("/") + 1);
    num = stoi(temp);
    den = stoi(input);
    Fraction fraction(num, den);
    cout << fraction.toString() << " is " << fraction.toDouble() << " in decimal" << endl;
    goto r;
    return 0;
}