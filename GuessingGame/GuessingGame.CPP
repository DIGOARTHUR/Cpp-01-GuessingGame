#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(){
int mat [3][7],i,j,op,x,y;
int numSort;
 srand( time( NULL) );
// INSERE VALORES ALEAT�RIOS NA MATRIZ |3 x 7|
//-------------------------------------------
    for(i=0; i<3; i++)
    {
        for(j=0; j<7; j++)
        {
            do
            {
                numSort= rand() % 99;

                for(x=0; x<3; x++)  // Aqui faz a compara��o de um valor sorteado com os que j� est�o na matriz, para que n�o ocorra a repeti��o dos mesmos.
                {
                    for(y=0; y<7; y++)
                    {
                        if(mat[x][y]==numSort)
                        {
                            numSort=1;
                            break;
                        }
                    }
                }
            }
            while(numSort<10);


            mat[i][j]= numSort;
        }
    }


    cout<<"GGGGGGG   U    U   EEEEEEE   SSSSSS   SSSSSS   II   NN    N   GGGGGGG       GGGGGGG  AAAAAA  MM    MM   EEEEEEE        |??????|"<<endl;
    cout<<"GGG       U    U   E         S        S        II   N N   N   GGG           GGG      A    A  M M  M M   E              |?    ?|"<<endl;
    cout<<"GGGGGGG   U    U   EEEEEE    SSSSSS   SSSSSS   II   N  N  N   GGGGGGG       GGGGGGG  AAAAAA  M  MM  M   EEEEEE         |  ????|"<<endl;
    cout<<"GGG  GG   U    U   E              S        S   II   N   N N   GGG  GG       GGG  GG  A    A  M      M   E              |  ?   |"<<endl;
    cout<<"GGGGGGG   UUUUUU   EEEEEEE   SSSSSS   SSSSSS   II   N    NN   GGGGGGG       GGGGGGG  A    A  M      M   EEEEEEE        |  O   |"<<endl;

    cout<<"\n -EXPAND SCREEN"<<endl;











//------------------------------------------------------------------------------------------
// ( 1� RODADA; QUALQUER ESCOLHA DE FILEIRA ) DEMONSTRA��O DE VALORES |3 x 7|
//------------------------------------------------------------------------------------------
  cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"Choose any number that is in the rows and just indicate which one it is in.         "<<endl;

  cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
       cout<<"    "; cout<<mat[0][0];cout<<"          ";cout<<mat[1][0];cout<<"        ";cout<<mat[2][0]<<endl;
       cout<<"    "; cout<<mat[0][1];cout<<"          ";cout<<mat[1][1];cout<<"        ";cout<<mat[2][1]<<endl;
       cout<<"    "; cout<<mat[0][2];cout<<"          ";cout<<mat[1][2];cout<<"        ";cout<<mat[2][2]<<endl;
       cout<<"    "; cout<<mat[0][3];cout<<"          ";cout<<mat[1][3];cout<<"        ";cout<<mat[2][3]<<endl;
       cout<<"    "; cout<<mat[0][4];cout<<"          ";cout<<mat[1][4];cout<<"        ";cout<<mat[2][4]<<endl;
       cout<<"    "; cout<<mat[0][5];cout<<"          ";cout<<mat[1][5];cout<<"        ";cout<<mat[2][5]<<endl;
       cout<<"    "; cout<<mat[0][6];cout<<"          ";cout<<mat[1][6];cout<<"        ";cout<<mat[2][6]<<endl;
cout<<"The number that you thought is in which row?"<<endl;
  cin>>op;




switch(op){


//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ( 2� RODADA; SENDO 1�FILEIRA  ) AQUI OS VALORES MATRICIAIS S�O REMANEJADOS DE FORMA ESTRAT�GICA. COMO AQUI � REFERENTE A FILEIRA 1, � CONSTRU�DAS POSSIBLIDADES POSTERIORES A ELA
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

case 1:
     cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"   Same number, which one is row?                                                                                                                   "<<endl;
      cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
       cout<<"    "; cout<<mat[2][6];cout<<"          ";cout<<mat[2][5];cout<<"         ";cout<<mat[2][4]<<endl;
       cout<<"    "; cout<<mat[2][3];cout<<"          ";cout<<mat[2][2];cout<<"         ";cout<<mat[2][1]<<endl;
       cout<<"    "; cout<<mat[2][0];cout<<"          ";cout<<mat[0][6];cout<<"         ";cout<<mat[0][5]<<endl;
       cout<<"    "; cout<<mat[0][4];cout<<"          ";cout<<mat[0][3];cout<<"         ";cout<<mat[0][2]<<endl;     //FILEIRA 1;2 [0][0];[0][3];[0][6]
       cout<<"    "; cout<<mat[0][1];cout<<"          ";cout<<mat[0][0];cout<<"         ";cout<<mat[1][6]<<endl;     //FILEIRA 1;1 [0][1];[0][4]
       cout<<"    "; cout<<mat[1][5];cout<<"          ";cout<<mat[1][4];cout<<"         ";cout<<mat[1][3]<<endl;     //FILEIRA 1;3 [0][2];[0][5]
       cout<<"    "; cout<<mat[1][2];cout<<"          ";cout<<mat[1][1];cout<<"         ";cout<<mat[1][0]<<endl;
       cout<<"The number that you thought is in which row?"<<endl;
       cin>>op;
       switch(op){



//--------------------------------------------------------------------------------------------------------------------
// ( 3� RODADA; SENDO 1�FILEIRA -> 1�FILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS S�O REMANEJADOS DE FORMA ESTRAT�GICA.
//--------------------------------------------------------------------------------------------------------------------
        case 1:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"    Same number, which one is row?                                                                                                                  "<<endl;
             cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
              cout<<"    "; cout<<mat[1][0];cout<<"          ";cout<<mat [1][3];cout<<"        ";cout<<mat[1][6]<<endl;
              cout<<"    "; cout<<mat[0][2];cout<<"          ";cout<<mat [0][5];cout<<"        ";cout<<mat[2][1]<<endl;
              cout<<"    "; cout<<mat[2][4];cout<<"          ";cout<<mat [1][2];cout<<"        ";cout<<mat[1][5]<<endl;
              cout<<"    "; cout<<mat[0][1];cout<<"          ";cout<<mat [0][4];cout<<"        ";cout<<mat[2][0]<<endl; //FILEIRA 1;1; 1ou2 [0][1];[0][4]
              cout<<"    "; cout<<mat[2][3];cout<<"          ";cout<<mat [2][6];cout<<"        ";cout<<mat[1][1]<<endl;
              cout<<"    "; cout<<mat[1][4];cout<<"          ";cout<<mat [0][0];cout<<"        ";cout<<mat[0][3]<<endl;
              cout<<"    "; cout<<mat[0][6];cout<<"          ";cout<<mat [2][2];cout<<"        ";cout<<mat[2][5]<<endl;
              cout<<"The number that you thought is in which row?"<<endl;
              cin>>x;
              // ( RESULTADO 1�FILEIRA -> 1�FILEIRA -> 1�FILEIRA OU 2�FILEIRA  ) AQUI O VALOR PENSADO � MOSTRADO
              if(x==1){
                cout<<"The number is: ";cout<<" ";cout<<mat[0][1];}
                else{if(x==2){cout<<"The number is: ";cout<<" ";cout<<mat[0][4];}

                }
                break;

//--------------------------------------------------------------------------------------------------------------------
// ( 3� RODADA; SENDO 1�FILEIRA -> 2�FILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS S�O REMANEJADOS DE FORMA ESTRAT�GICA.
//--------------------------------------------------------------------------------------------------------------------

       case 2:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"         Same number, which one is row?                                                                                                             "<<endl;
             cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
              cout<<"    "; cout<<mat[1][0];cout<<"          ";cout<<mat[1][3];cout<<"        ";cout<<mat[1][6]<<endl;
              cout<<"    "; cout<<mat[0][2];cout<<"          ";cout<<mat[0][5];cout<<"        ";cout<<mat[2][1]<<endl;
              cout<<"    "; cout<<mat[2][4];cout<<"          ";cout<<mat[1][1];cout<<"        ";cout<<mat[1][4]<<endl;
              cout<<"    "; cout<<mat[0][0];cout<<"          ";cout<<mat[0][3];cout<<"        ";cout<<mat[0][6]<<endl;     //FILEIRA 1;2;1ou2ou3 [0][0];[0][3];[0][6]
              cout<<"    "; cout<<mat[2][2];cout<<"          ";cout<<mat[2][5];cout<<"        ";cout<<mat[1][2]<<endl;
              cout<<"    "; cout<<mat[1][5];cout<<"          ";cout<<mat[0][1];cout<<"        ";cout<<mat[0][4]<<endl;
              cout<<"    "; cout<<mat[2][0];cout<<"          ";cout<<mat[2][3];cout<<"        ";cout<<mat[2][6]<<endl;
              cout<<"The number that you thought is in which row?"<<endl;
              cin>>x;
              // ( RESULTADO  1�FILEIRA -> 1�FILEIRA -> 1�FILEIRA OU 2�FILEIRA OU 3�FILEIRA ) AQUI O VALOR PENSADO � MOSTRADO
              if(x==1){
                cout<<"The number is: ";cout<<" ";cout<<mat[0][0];}
                else{if(x==2){cout<<"The number is: ";cout<<" ";cout<<mat[0][3];}
                else{if(x==3){cout<<"The number is: ";cout<<" ";cout<<mat[0][6];}
              }
                }
                break;

//--------------------------------------------------------------------------------------------------------------------
// ( 3� RODADA; SENDO 1�FILEIRA -> 3�FILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS S�O REMANEJADOS DE FORMA ESTRAT�GICA.
//--------------------------------------------------------------------------------------------------------------------

        case 3:
             cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"         Same number, which one is row?                                                                                                             "<<endl;
            cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
                cout<<"    "; cout<<mat[1][1];cout<<"          ";cout<<mat[1][4];cout<<"        ";cout<<mat[0][0]<<endl;
                cout<<"    "; cout<<mat[0][3];cout<<"          ";cout<<mat[0][6];cout<<"        ";cout<<mat[2][2]<<endl;
                cout<<"    "; cout<<mat[2][5];cout<<"          ";cout<<mat[1][0];cout<<"        ";cout<<mat[1][3]<<endl;
                cout<<"    "; cout<<mat[1][6];cout<<"          ";cout<<mat[0][2];cout<<"        ";cout<<mat[0][5]<<endl;     //FILEIRA 1;3;2ou3 [0][2];[0][5]
                cout<<"    "; cout<<mat[2][1];cout<<"          ";cout<<mat[2][4];cout<<"        ";cout<<mat[1][2]<<endl;
                cout<<"    "; cout<<mat[1][5];cout<<"          ";cout<<mat[0][1];cout<<"        ";cout<<mat[0][4]<<endl;
                cout<<"    "; cout<<mat[2][0];cout<<"          ";cout<<mat[2][3];cout<<"        ";cout<<mat[2][6]<<endl;
                cout<<"The number that you thought is in which row?"<<endl;
                cin>>x;
                // ( RESULTADO  1�FILEIRA -> 1�FILEIRA ->  2�FILEIRA OU 3�FILEIRA  ) AQUI O VALOR PENSADO � MOSTRADO
                if(x==2){cout<<"The number is: ";cout<<" ";cout<<mat[0][2];}
                else{if(x==3){cout<<"The number is: ";cout<<" ";cout<<mat[0][5];}
              }
                }
                break;
                break;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ( 2� RODADA; SENDO 2�FILEIRA  ) AQUI OS VALORES MATRICIAIS S�O REMANEJADOS DE FORMA ESTRAT�GICA. COMO AQUI � REFERENTE A FILEIRA 2, � CONSTRU�DAS POSSIBLIDADES POSTERIORES A ELA
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
case 2:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"       Same number, which one is row?                                                                                                               "<<endl;
          cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
       cout<<"    "; cout<<mat[2][6];cout<<"          ";cout<<mat[2][5];cout<<"        ";cout<<mat[2][4]<<endl;
       cout<<"    "; cout<<mat[2][3];cout<<"          ";cout<<mat[2][2];cout<<"        ";cout<<mat[2][1]<<endl;
       cout<<"    "; cout<<mat[2][0];cout<<"          ";cout<<mat[1][6];cout<<"        ";cout<<mat[1][5]<<endl;
       cout<<"    "; cout<<mat[1][4];cout<<"          ";cout<<mat[1][3];cout<<"        ";cout<<mat[1][2]<<endl;
       cout<<"    "; cout<<mat[1][1];cout<<"          ";cout<<mat[1][0];cout<<"        ";cout<<mat[0][6]<<endl;
       cout<<"    "; cout<<mat[0][5];cout<<"          ";cout<<mat[0][4];cout<<"        ";cout<<mat[0][3]<<endl;
       cout<<"    "; cout<<mat[0][2];cout<<"          ";cout<<mat[0][1];cout<<"        ";cout<<mat[0][0]<<endl;
       cout<<"The number that you thought is in which row?"<<endl;
       cin>>op;
          switch(op){

        //--------------------------------------------------------------------------------------------------------------------
        // ( 3� RODADA; SENDO 2�FILEIRA -> 1�FILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS S�O REMANEJADOS DE FORMA ESTRAT�GICA.
        //--------------------------------------------------------------------------------------------------------------------

       case 1:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"         Same number, which one is row?                                                                                                             "<<endl;
             cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
              cout<<"    "; cout<<mat[0][0];cout<<"          ";cout<<mat[0][3];cout<<"        ";cout<<mat[0][6]<<endl;
              cout<<"    "; cout<<mat[1][2];cout<<"          ";cout<<mat[1][5];cout<<"        ";cout<<mat[2][1]<<endl;
              cout<<"    "; cout<<mat[2][4];cout<<"          ";cout<<mat[0][2];cout<<"        ";cout<<mat[0][5]<<endl;
              cout<<"    "; cout<<mat[1][1];cout<<"          ";cout<<mat[1][4];cout<<"        ";cout<<mat[2][0]<<endl; //FILEIRA 2;1; 1ou2 [1][1];[1][4]
              cout<<"    "; cout<<mat[2][3];cout<<"          ";cout<<mat[2][6];cout<<"        ";cout<<mat[0][1]<<endl;
              cout<<"    "; cout<<mat[0][4];cout<<"          ";cout<<mat[1][0];cout<<"        ";cout<<mat[1][3]<<endl;
              cout<<"    "; cout<<mat[1][6];cout<<"          ";cout<<mat[2][2];cout<<"        ";cout<<mat[2][5]<<endl;
              cout<<"The number that you thought is in which row?"<<endl;
              cin>>x;
              // ( RESULTADO  2�FILEIRA -> 1�FILEIRA -> 1�FILEIRA OU 2�FILEIRA  ) AQUI O VALOR PENSADO � MOSTRADO
              if(x==1){
                cout<<"The number is: ";cout<<" ";cout<<mat[1][1];}
                else{if(x==2){cout<<"The number is: ";cout<<" ";cout<<mat[1][4];}

                }
                 break;

        //--------------------------------------------------------------------------------------------------------------------
        // ( 3� RODADA; SENDO 2�FILEIRA -> 2�FILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS S�O REMANEJADOS DE FORMA ESTRAT�GICA.
        //--------------------------------------------------------------------------------------------------------------------

       case 2:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"       Same number, which one is row?                                                                                                               "<<endl;
            cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
              cout<<"    "; cout<<mat[0][0];cout<<"          ";cout<<mat [0][3];cout<<"        ";cout<<mat[0][6]<<endl;
              cout<<"    "; cout<<mat[1][2];cout<<"          ";cout<<mat [1][5];cout<<"        ";cout<<mat [2][1]<<endl;
              cout<<"    "; cout<<mat[2][4];cout<<"          ";cout<<mat [0][1];cout<<"        ";cout<<mat [0][4]<<endl;
              cout<<"    "; cout<<mat[1][0];cout<<"          ";cout<<mat [1][3];cout<<"        ";cout<<mat [1][6]<<endl;     //FILEIRA 2;2;1ou2ou3 [1][0];[1][3];[1][6]
              cout<<"    "; cout<<mat[2][2];cout<<"          ";cout<<mat [2][5];cout<<"        ";cout<<mat [0][2]<<endl;
              cout<<"    "; cout<<mat[0][5];cout<<"          ";cout<<mat [1][1];cout<<"        ";cout<<mat [1][4]<<endl;
              cout<<"    "; cout<<mat[2][0];cout<<"          ";cout<<mat [2][3];cout<<"        ";cout<<mat [2][6]<<endl;
              cout<<"The number that you thought is in which row?"<<endl;
              cin>>x;
              // ( RESULTADO  2�FILEIRA -> 2�FILEIRA -> 1�FILEIRA OU 2�FILEIRA OU 3� FILEIRA  ) AQUI O VALOR PENSADO � MOSTRADO
              if(x==1){
                cout<<"The number is: "<<mat[1][0];}
                else{if(x==2){cout<<"The number is: ";cout<<" ";cout<<mat[1][3];}
                else{if(x==3){cout<<"The number is: ";cout<<" ";cout<<mat[1][6];}
              }
                }
                 break;
          //--------------------------------------------------------------------------------------------------------------------
         // ( 3� RODADA; SENDO 2�FILEIRA -> 3�FILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS S�O REMANEJADOS DE FORMA ESTRAT�GICA.
         //--------------------------------------------------------------------------------------------------------------------

        case 3:

 cout<<"-----------------------------------------------------------------------------------"<<endl;
 cout<<"       Same number, which one is row?                                                                                                               "<<endl;
              cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
                cout<<"    ";cout<<mat[0][1];cout<<"          ";cout<<mat[0][4];cout<<"        ";cout<<mat[1][0]<<endl;
                cout<<"    ";cout<<mat[1][3];cout<<"          ";cout<<mat[1][6];cout<<"        ";cout<<mat[2][2]<<endl;
                cout<<"    ";cout<<mat[2][5];cout<<"          ";cout<<mat[0][0];cout<<"        ";cout<<mat[0][3]<<endl;
                cout<<"    ";cout<<mat[0][6];cout<<"          ";cout<<mat[1][2];cout<<"        ";cout<<mat[1][5]<<endl;     //FILEIRA 1;3;2ou3 [1][2];[1][5]
                cout<<"    ";cout<<mat[2][1];cout<<"          ";cout<<mat[2][4];cout<<"        ";cout<<mat[0][2]<<endl;
                cout<<"    ";cout<<mat[0][5];cout<<"          ";cout<<mat[1][1];cout<<"        ";cout<<mat[1][4]<<endl;
                cout<<"    ";cout<<mat[2][0];cout<<"          ";cout<<mat[2][3];cout<<"        ";cout<<mat[2][6]<<endl;
                cout<<"The number that you thought is in which row?"<<endl;
                cin>>x;
                // ( RESULTADO  2�FILEIRA -> 1�FILEIRA -> 2�FILEIRA OU 3�FILEIRA  ) AQUI O VALOR PENSADO � MOSTRADO
                if(x==2){cout<<"The number is: ";cout<<" ";cout<<mat[1][2];}
                else{if(x==3){cout<<"The number is: ";cout<<" ";cout<<mat[1][5];}
              }
                }
                 break;
                  break;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ( 2� RODADA; SENDO 3�FILEIRA  ) AQUI OS VALORES MATRICIAIS S�O REMANEJADOS DE FORMA ESTRAT�GICA. COMO AQUI � REFERENTE A FILEIRA 3, � CONSTRU�DAS POSSIBLIDADES POSTERIORES A ELA
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

case 3:
     cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"        Same number, which one is row?                                                                                                                "<<endl;
      cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
        cout<<"    ";cout<<mat[1][6];cout<<"          ";cout<<mat[1][5];cout<<"        ";cout<<mat[1][4]<<endl;
        cout<<"    ";cout<<mat[1][3];cout<<"          ";cout<<mat[1][2];cout<<"        ";cout<<mat[1][1]<<endl;
        cout<<"    ";cout<<mat[1][0];cout<<"          ";cout<<mat[2][6];cout<<"        ";cout<<mat[2][5]<<endl;
        cout<<"    ";cout<<mat[2][4];cout<<"          ";cout<<mat[2][3];cout<<"        ";cout<<mat[2][2]<<endl;
        cout<<"    ";cout<<mat[2][1];cout<<"          ";cout<<mat[2][0];cout<<"        ";cout<<mat[0][6]<<endl;
        cout<<"    ";cout<<mat[0][5];cout<<"          ";cout<<mat[0][4];cout<<"        ";cout<<mat[0][3]<<endl;
        cout<<"    ";cout<<mat[0][2];cout<<"          ";cout<<mat[0][1];cout<<"        ";cout<<mat[0][0]<<endl;
        cout<<"    ";cout<<"The number that you thought is in which row?"<<endl;
        cin>>op;
        switch(op){
        //--------------------------------------------------------------------------------------------------------------------
        // ( 3� RODADA; SENDO 3�FILEIRA -> 1�FILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS S�O REMANEJADOS DE FORMA ESTRAT�GICA.
        //--------------------------------------------------------------------------------------------------------------------

       case 1:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"            Same number, which one is row?                                                                                                            "<<endl;
             cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
              cout<<"    ";cout<<mat[0][0];cout<<"          ";cout<<mat[0][3];cout<<"        ";cout<<mat[0][6]<<endl;
              cout<<"    ";cout<<mat[2][2];cout<<"          ";cout<<mat[2][5];cout<<"        ";cout<<mat[1][1]<<endl;
              cout<<"    ";cout<<mat[1][4];cout<<"          ";cout<<mat[0][2];cout<<"        ";cout<<mat[0][5]<<endl;
              cout<<"    ";cout<<mat[2][1];cout<<"          ";cout<<mat[2][4];cout<<"        ";cout<<mat[1][0]<<endl; //FILEIRA 3;1; 1ou2 [2][1];[2][4]
              cout<<"    ";cout<<mat[1][3];cout<<"          ";cout<<mat[1][6];cout<<"        ";cout<<mat[1][0]<<endl;
              cout<<"    ";cout<<mat[1][2];cout<<"          ";cout<<mat[2][0];cout<<"        ";cout<<mat[2][3]<<endl;
              cout<<"    ";cout<<mat[2][6];cout<<"          ";cout<<mat[1][2];cout<<"        ";cout<<mat[1][5]<<endl;
              cout<<"The number that you thought is in which row?"<<endl;
              cin>>x;
              // ( RESULTADO  3�FILEIRA -> 1�FILEIRA -> 1�FILEIRA OU 2�FILEIRA  ) AQUI O VALOR PENSADO � MOSTRADO
              if(x==1){
                cout<<"The number is: ";cout<<" ";cout<<mat[2][1];}
                else{if(x==2){cout<<"The number is: ";cout<<" ";cout<<mat[2][4];}

                }
                 break;

         //--------------------------------------------------------------------------------------------------------------------
        // ( 3� RODADA; SENDO 3�FILEIRA -> 2�FILEIRA -> ?FILEIRA  ) AQUI OS VALORES MATRICIAIS S�O REMANEJADOS DE FORMA ESTRAT�GICA.
        //--------------------------------------------------------------------------------------------------------------------

       case 2:
            cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"          Same number, which one is row?                                                                                                              "<<endl;
             cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
              cout<<"    "; cout<<mat[0][0];cout<<"          ";cout<<mat[0][3];cout<<"        ";cout<<mat[0][6]<<endl;
              cout<<"    "; cout<<mat[2][2];cout<<"          ";cout<<mat[2][5];cout<<"        ";cout<<mat[1][1]<<endl;
              cout<<"    "; cout<<mat[1][4];cout<<"          ";cout<<mat[0][1];cout<<"        ";cout<<mat[0][4]<<endl;
              cout<<"    "; cout<<mat[2][0];cout<<"          ";cout<<mat[2][3];cout<<"        ";cout<<mat[2][6]<<endl;     //FILEIRA 1;2;1ou2ou3 [2][0];[2][3];[2][6]
              cout<<"    "; cout<<mat[1][2];cout<<"          ";cout<<mat[1][5];cout<<"        ";cout<<mat[0][2]<<endl;
              cout<<"    "; cout<<mat[0][5];cout<<"          ";cout<<mat[2][1];cout<<"        ";cout<<mat[2][4]<<endl;
              cout<<"    "; cout<<mat[1][0];cout<<"          ";cout<<mat[1][3];cout<<"        ";cout<<mat[1][6]<<endl;
              cout<<"The number that you thought is in which row?"<<endl;
              cin>>x;
              // ( RESULTADO  3�FILEIRA -> 1�FILEIRA -> 2�FILEIRA OU 3�FILEIRA ) AQUI O VALOR PENSADO � MOSTRADO
              if(x==1){
                cout<<"The number is: ";cout<<" ";cout<<mat[2][0];}
                else{if(x==2){cout<<"The number is: ";cout<<" ";cout<<mat[2][3];}
                else{if(x==3){cout<<"The number is:"; cout<<" ";cout<<mat[2][6];}
              }
                }
                 break;
          //--------------------------------------------------------------------------------------------------------------------
          // ( 3� RODADA; SENDO 3�FILEIRA -> 3�FILEIRA  ) AQUI OS VALORES MATRICIAIS S�O REMANEJADOS DE FORMA ESTRAT�GICA.
          //--------------------------------------------------------------------------------------------------------------------

        case 3:
             cout<<"-----------------------------------------------------------------------------------"<<endl;
  cout<<"             Same number, which one is row?                                                                                                           "<<endl;
              cout<<"  Row 1";                   cout<<"   ";  cout<<"     Row 2";                                   cout<<"   ";                     cout<<"   Row 3"<<endl;
                cout<<"    ";cout<<mat[0][1];cout<<"          ";cout<<mat[0][4];cout<<"        ";cout<<mat[2][0]<<endl;
                cout<<"    ";cout<<mat[2][3];cout<<"          ";cout<<mat[2][6];cout<<"        ";cout<<mat[1][2]<<endl;
                cout<<"    ";cout<<mat[1][5];cout<<"          ";cout<<mat[0][0];cout<<"        ";cout<<mat[0][3]<<endl;
                cout<<"    ";cout<<mat[0][6];cout<<"          ";cout<<mat[2][2];cout<<"        ";cout<<mat[2][5]<<endl;     //FILEIRA 1;3;2ou3 [2][2];[2][5]
                cout<<"    ";cout<<mat[1][1];cout<<"          ";cout<<mat[1][4];cout<<"        ";cout<<mat[0][2]<<endl;
                cout<<"    ";cout<<mat[0][5];cout<<"          ";cout<<mat[2][1];cout<<"        ";cout<<mat[2][4]<<endl;
                cout<<"    ";cout<<mat[1][0];cout<<"          ";cout<<mat[1][3];cout<<"        ";cout<<mat[1][6]<<endl;
                cout<<"    ";cout<<"The number that you thought is in which row?"<<endl;
                cin>>x;
                // ( RESULTADO  3�FILEIRA -> 1�FILEIRA -> 2�FILEIRA OU 3�FILEIRA  ) AQUI O VALOR PENSADO � MOSTRADO
                if(x==2){cout<<"The number is: ";cout<<" ";cout<<mat[2][2];}
                else{if(x==3){cout<<"The number is: ";cout<<" ";cout<<mat[2][5];}
              }
                }
                 break;
                  break;








}

return 0;
}


