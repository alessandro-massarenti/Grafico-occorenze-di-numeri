#include<iostream>
using namespace std;
main()
{
    int N, A[100];
    int C[10];
    int m = 0;
    cout << "\nInserisci un numero più grande di 10(è il numero di dati da inserire):";
    cin >> N;
    cout << "\nInserisci " << N << " dati ora:";
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    cout<<"start"<<endl;
    for(int i=0; i<N; i++){
        C[i] = 0;
    }
    for(int j = 0; j<10; j++){
        for(int i = 0; i < N; i++ ){
            if(A[i] == j){
                C[j]++;
                if(C[j]>m){
                    m = C[j];
                }
            }
        }
    }

    for(int j = m; j > 0; j--){
        for(int i = 0; i < 10; i ++){
            if(j <= C[i]){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }

    cout<<"0123456789"<<endl;

    cout<<"end"<<endl;
}
