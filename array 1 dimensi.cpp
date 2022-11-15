#include<iostream>
using namespace std;
int main()
{
    int arr[50], tot, i;

    cout << "Nama : Annisa Permata Bunda \n";
    cout << "NIM : 22343037 \n";
    cout << "============================== \n";
    cout<<"Masukkan jumlah index: ";
    cin>>tot;
    cout<<"ketikkan "<<tot<<" angka: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nArray dengan Index\tNilai\n";
    for(i=0; i<tot; i++)
        cout<<"arr["<<i<<"]"<<"\t\t\t"<<arr[i]<<endl;
    cout<<endl;
    return 0;
}
