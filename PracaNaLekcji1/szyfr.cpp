#include <iostream>
#include <string>
using namespace std;

string cesar(string password, int offset=0){
    
    if(offset==0){
    cout << "Offset: ";
    cin >> offset;
    }
    
    string o = "";
    
    int x;
    if(offset>25 && offset<0){
        return "Offset is incorrect.";
    }
    for(char& b : password){
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

string przestawienie(string password){
    char o;
    for(int x = 0; x < password.length(); x+=2){
        o = password[x+1];
        password[x+1] = password[x];
        if(o){
            password[x] = o;
        }
    }
    return password;
}

void decypher(string password){
    for(int i = 1; i<26;i++){
        cout << "Offset- " << i << " Password- " << cesar(password, i) << endl;
    }
}

string both(string password){
    return cesar(przestawienie(password));
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
        decypher(password);
        break;
    default:
        cout << "Niepoprawna opcja." << endl;
        break;
    }
}