#include <iostream>
#include <string>
using namespace std;

string cesar(string a, int offset=0){
    string o = "";
    int x;
    if(offset>25 && offset<0){
        return "Offset is too big.";
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

int main(){
    string h;
    int y;
    cout << "Password: ";
    getline(cin, h);
    
    cout << "Offset: ";
    
    cin >> y;
    
    cout << cesar(h, y) << endl;
}