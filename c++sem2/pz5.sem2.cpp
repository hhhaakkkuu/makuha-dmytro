//ЗАВДАННЯ 1

#include <iostream>
using namespace std;

class Drawning {
public:
    virtual void draw() = 0;
};

class pictOne : public Drawning {
public:
    void draw() override {
        cout << " /\\\n"
            << "//\\\\\n";
    }
};

class pictTwo : public Drawning {
public:
    void draw() override {
        cout << " /\\\n"
            << "/**\\\n";
    }
};

class pictTree : public Drawning {
public:
    void draw() override {
        cout << " /\\\n"
            << "/++\\\n";
    }
};

int main() {
    Drawning* table[3];
    table[0] = new pictOne();
    table[1] = new pictTwo();
    table[2] = new pictTree();

    for (int i = 0; i < 3; i++) {
        cout << "Drawing " << i + 1 << ":\n";
        table[i]->draw();
    }

    for (int i = 0; i < 3; i++) {
        delete table[i];
    }

    return 0;
}

//ЗАВДАННЯ 2

#include <iostream>
#include <string>

using namespace std;

class IPAddress
{

public:
    string ip, result;
    IPAddress() {};
    IPAddress(string IP)
    {
        ip = IP;
    }
    void print()
    {
        cout << ip << endl;
    }

};

class IPAddressChecked :public IPAddress
{
public:
    string ipC, temp;
    char check[4];
    bool isCheck;

    IPAddressChecked(string IP) {
        ipC = IP;
        temp = IP;
    }

    bool iPCheck()
    {
        for (int i = 0; i < 4; i++)
        {
            size_t ln = temp.copy(check, temp.find('.') - 0, 0);
            check[ln] = '\0';
            if (!(atoi(check) <= 255 && atoi(check) > 0))
            {
                return false;
            }
            temp.erase(0, temp.find('.') + 1);
        }
        return true;
    }
    void print() {
        isCheck = iPCheck();
        cout << ipC;
        cout << (isCheck ? "-correct" : "-Not correct") << endl;
    }
};


int main()
{

    string ip1 = "1.2.3.4";
    string ip2 = "999.29.29.29";
    string ip3 = "199.29.29.29";

    IPAddress t1(ip1);
    IPAddressChecked t2(ip2);
    IPAddressChecked t3(ip3);

    cout << "ip1: ";
    t1.print();

    cout << "ip2: ";
    t2.print();

    cout << "ip3: ";
    t3.print();

}