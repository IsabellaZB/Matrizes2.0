#include <locale.h>
#include <iostream>
using namespace std;
#include <time.h>

int main() {
   srand(time(NULL));
  int matrizA[3][5], matrizB[3][5], i, j, matrizC[3][5]{};

  cout<< "Matriz A:"<< endl;
  for(i=0;i<3; i++){
    for(j=0; j<5; j++){
           matrizA[i][j]= rand() % 9+1;
      cout<< matrizA[i][j];
      cout<< "\t";
    }
     cout<<endl;
  }
   cout<<endl<< "Matriz B:"<< endl;
  
  for(i=0;i<3; i++){
    for(j=0; j<5; j++){
           matrizB[i][j]= rand() % 9+1;
      cout<< matrizB[i][j];
      cout<< "\t";
    }
     cout<<endl;
    
  }
   cout<<endl<< "Matriz C:"<< endl;
  
  for(i=0;i<3; i++){
    for(j=0; j<5; j++){
      matrizC[i][j]=matrizA[i][j] + matrizB[i][j];
    
    cout<< matrizC[i][j];
      cout<< "\t";
    }
     cout<<endl;
  }

  cout<<endl<< "Linha 2 matriz C:"<< endl;
  
  for (j = 0; j < 5; j++) {
     cout << matrizC[2][j] << "\t";
    }
    cout << endl;
  
  cout<<endl<< "Coluna 3 matriz C:"<< endl;
  
  for (i = 0; i < 3; i++) {
     cout << matrizC[i][3] << "\t";
    cout<<endl;
    }
    cout << endl;

  
}
