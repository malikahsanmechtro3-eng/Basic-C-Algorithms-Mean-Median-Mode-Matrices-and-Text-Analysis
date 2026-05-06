#include <iostream>
using namespace std;

void analyze(string str) {
    int chars=0, spaces=0, tabs=0, lines=1;

    for(int i=0; i<str.length(); i++) {
        chars++;
        if(str[i]==' ')
            spaces++;
        else if(str[i]=='\t')
            tabs++;
        else if(str[i]=='\n')
            lines++;
    }

    cout<<"Characters: "<<chars<<endl;
    cout<<"Spaces: "<<spaces<<endl;
    cout<<"Tabs: "<<tabs<<endl;
    cout<<"Lines: "<<lines<<endl;
}

int main() {
    string str;
    getline(cin, str);

    analyze(str);

    return 0;
}
