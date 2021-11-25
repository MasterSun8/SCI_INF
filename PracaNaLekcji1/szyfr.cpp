#include <iostream>
#include <string>
using namespace std;

string cesar(string a){
    int offset;
    cout << "Offset: ";
    cin >> offset;    
    string o = "";
    int x;
    if(offset>25 && offset<0){
        return "Offset is incorrect.";
    }
    for(char& b : a){
        x = int(b) + offset;
        b = x % ('z' + 1);
        if(b > 'a'-1){
            o += b;
        }else{
            o += b + 'a';
        }
    }
    return o;
}

string przestawienie(string a){
    char o;
    for(int x = 0; x < a.length(); x+=2){
        o = a[x+1];
        a[x+1] = a[x];
        if(o){
            a[x] = o;
        }
    }
    return a;
}

string decypher(string a){
    return "decyphered";
}

string both(string a){
    return cesar(przestawienie(a));
}

int main(){
    string password;
    char option;

    cout << "Password: ";
    getline(cin, password);
    
    cout << "Co chcesz zrobic? c-szyfr cezara, p- szyfr przestawieniowy, o- oba, d-deszyfracja" << endl;
    cin >> option;

    switch (option)
    {
    case 'c':
        cout << cesar(password) << endl;
        break;
    case 'p':
        cout << przestawienie(password) << endl;
        break;
    case 'o':
        cout << both(password) << endl;
        break;
    case 'd':
        cout << decypher(password) << endl;
        break;
    default:
        cout << "Niepoprawna opcja." << endl;
        break;
    }
}