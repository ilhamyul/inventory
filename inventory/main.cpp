#include <iostream>
#include <vector> //bagian dari STL
#include <string>

using namespace std;

int main()
{
    vector <string> tes {"item 5", "item 3"}; //variabel vector bernama tes
    vector <string>::iterator penunjuk;
    tes.push_back("item 1"); //pemgisian variabel tes -> item 1
    tes.push_back("item 2"); //pemgisian variabel tes -> item 2
    //tes [1] = "item 5";

    for (penunjuk = tes.begin (); penunjuk != tes.end();++penunjuk ) { // size mengikuti elemen
        cout  << *penunjuk  << endl;
    }

    if (tes.empty()){ //cek kosong tidak
        cout << "====kosong=====" << endl;

    }
    // menghapus elemen vektor
    tes.erase(tes.begin()+2);
    cout << "Setelah ada yang di hapus" << endl;
    for (penunjuk = tes.begin (); penunjuk != tes.end();++penunjuk ) { // size mengikuti elemen
    cout  << *penunjuk  << endl;
/*
    cout << tes [0] << endl;
    cout << tes [1] << endl;
    cout << tes [2] << endl;
    cout << tes [3] << endl;
*/
    return 0;
}
}
