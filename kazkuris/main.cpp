#include <iostream>
#include <fstream>
using namespace std;

const char DF[]="duom.txt";
const char ABC[]="abc.txt";

void tikrina(ifstream &abc, char simbolis, bool &raide);
int main()
{
bool ats;
 ifstream df(DF);
 ifstream abc(ABC);
char aha='4';

    tikrina(abc,aha,ats);



    cout <<ats<< endl;
    return 0;

}

void tikrina(ifstream &abc, char simbolis, bool &raide)
{ int n;
char kas;
    abc>>n; abc.ignore(); cout<<n<<endl;
    for(int i=0; i<n; i++)
    { abc.get(kas, 1); cout<<kas<<endl;
        if(simbolis==kas) {raide=true; break;}
     else raide=false;
    }
}
