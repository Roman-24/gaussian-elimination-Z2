// uloha10-1.c -- Roman Bitarovský, 15.11.2020 22:50
#include <stdio.h>

void gaussian_elimination_binary(int mat[7][7+1],int n){

  // chýb sa po stĺpcoch
  for(int stlpec=0; stlpec<n; stlpec++){

    // ak na diagonále nieje jednotka
    if(mat[stlpec][stlpec]!=1){

      // hľadaj taký riadok podním kt. má v danom stlpci 1ku
      for(int i=stlpec+1; i<n; i++){
        
        // ak ho nájdeš
        if(mat[i][stlpec]==1){

          // spočítaj riadky
          for(int j=0; j<n+1; j++){
            mat[stlpec][j] = (mat[i][j] + mat[stlpec][j]) % 2;
          }
          break;
        }
      }
    }
    // ak na diagonále je jednotka
    //pozeraj riadky podním
    for(int i=stlpec+1; i<n; i++){

      // a ak tam je jednotka tak ju znuluj
      if(mat[i][stlpec]==1){

        // spočítaj riadky
        for(int j=0; j<n+1; j++){
          mat[i][j] = (mat[i][j] + mat[stlpec][j]) % 2;
        }
      }
    }  
  }

  // pozeraj stĺpce smerom z prava
  for(int stlpec=n; stlpec>0; stlpec--){

    // ak je nadiagonály jednička
    if(mat[stlpec][stlpec]==1){

      // pozeraj riadky v danom stlci odspodu
      for(int i=stlpec-1; i>=0; i--){

        // ak tam je jednička
        if(mat[i][stlpec]==1){

          //znuluj tak že pripočítaš riadok
          for(int j=0; j<n+1; j++){
            mat[i][j] = (mat[i][j] + mat[stlpec][j]) % 2;
          }
        }
      }
    }
  }
}

int main() { 
    
    int n;
    scanf("%d", &n);
    int mat[7][7+1];

    for(int riadok=0; riadok<n; riadok++){
      for(int stlpec=0; stlpec<n+1; stlpec++){
        scanf("%d", &mat[riadok][stlpec]);
      }
    }

    gaussian_elimination_binary(mat, n);

    // výpisok
    for(int i=0; i<n; i++){
      printf("%d ", mat[i][n]);
    }

    // výpisok celej matice
    /*for(int riadok=0; riadok<n; riadok++){
      for(int stlpec=0; stlpec<n+1; stlpec++){
        printf("%d ", mat[riadok][stlpec]);
      }
      printf("\n");
    }*/

    return 0; 
}