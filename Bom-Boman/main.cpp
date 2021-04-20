#include <iostream>
#include <graphics.h>

int GetKeyPressed(int nKey)
{
       int KeyPreesed = 0 ;
       if(GetAsyncKeyState(nKey))
        {
              while (GetAsyncKeyState(nKey));
              KeyPreesed =-1;
        }
        return  KeyPreesed;
}

void bomb(float xpos,float ypos,float skala){
    float x[20],y[20];

    //BADAN
    x[0]=0;y[0]=8.5;
    circle(x[0]*skala+xpos,y[0]*skala+ypos,4*skala);

    //SUMBU
    x[0]=0;y[0]=2;
    x[1]=-0.5;y[1]=2;
    x[2]=-0.5;y[2]=4.5;
    x[3]=0;y[3]=4.5;
    for(int i=0;i<3;i++){
        line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
    for(int i=0;i<3;i++){
        line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
}

void MainChar(float xpos,float ypos,float skala,int hadap){
    float x[99],y[99];
    //HADAP DEPAN
    if (hadap==83){
        //TOPI
        x[0]=0;y[0]=-1;
        x[1]=-2;y[1]=-1;
        x[2]=-2;y[2]=0;
        x[3]=-4;y[3]=0;
        x[4]=-4;y[4]=0.5;
        x[5]=0;y[5]=0.5;
        for(int i=0;i<5;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<5;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //KEPALA
        x[0]=-2.6;y[0]=0.5;
        x[1]=-3.2;y[1]=1;
        x[2]=-3.6;y[2]=1.4;
        x[3]=-4;y[3]=2.5;
        x[4]=-4;y[4]=3.5;
        x[5]=-3.6;y[5]=4.6;
        x[6]=-3.2;y[6]=5;
        x[7]=-2.6;y[7]=5.5;
        x[8]=0;y[8]=5.5;
        for(int i=0;i<8;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<8;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //MATA
        x[0]=-2;y[0]=2;
        circle(x[0]*skala+xpos,y[0]*skala+ypos,skala/2);
        circle(-x[0]*skala+xpos,y[0]*skala+ypos,skala/2);

        //MULUT
        x[0]=-1.5;y[0]=4;
        x[1]=0;y[1]=4;
        line(x[0]*skala+xpos,y[0]*skala+ypos,x[1]*skala+xpos,y[1]*skala+ypos);
        line(-x[0]*skala+xpos,y[0]*skala+ypos,-x[1]*skala+xpos,y[1]*skala+ypos);
        arc(x[1]*skala+xpos,y[1]*skala+ypos,180,360,skala+skala/4);

        //BADAN
        x[0]=-2.6;y[0]=5.5;
        x[1]=-2.8;y[1]=6.5;
        x[2]=-3;y[2]=7.5;
        x[3]=-2.8;y[3]=8.5;
        x[4]=-2.6;y[4]=9.5;
        x[5]=0;y[5]=9.5;
        for(int i=0;i<5;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<5;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //TANGAN
        x[0]=-2.6;y[0]=5.5;
        x[1]=-4;y[1]=7;
        x[2]=-3.4;y[2]=7.5;
        x[3]=-2.8;y[3]=6.5;
        for(int i=0;i<3;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<3;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //CELANA
        x[0]=-2.6;y[0]=9.5;
        x[1]=-2.6;y[1]=10.5;
        x[2]=0;y[2]=10.5;
        x[3]=0;y[3]=9.5;
        for(int i=0;i<3;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<3;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //KAKI
        x[0]=-2;y[0]=10.5;
        x[1]=-2;y[1]=11;
        x[2]=-1;y[2]=11;
        x[3]=-1;y[3]=10.5;
        for(int i=0;i<3;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<3;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //SEPATU
        x[0]=-2;y[0]=11;
        x[1]=-2.6;y[1]=11.2;
        x[2]=-3;y[2]=11.5;
        x[3]=-3;y[3]=12;
        x[4]=-2.6;y[4]=12.3;
        x[5]=-2;y[5]=12.5;      //tengah
        x[6]=-1;y[6]=12.5;
        x[7]=-0.4;y[7]=12.3;
        x[8]=0;y[8]=12;
        x[9]=0;y[9]=11.5;
        x[10]=-0.4;y[10]=11.2;
        x[11]=-1;y[11]=11;
        for(int i=0;i<11;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<11;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
    }

    //HADAP BELAKANG
    else if(hadap==87){
        //TOPI
        x[0]=0;y[0]=-1;
        x[1]=-2;y[1]=-1;
        x[2]=-2;y[2]=0;
        x[3]=-4;y[3]=0;
        x[4]=-4;y[4]=0.5;
        x[5]=0;y[5]=0.5;
        for(int i=0;i<5;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<5;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //KEPALA
        x[0]=-2.6;y[0]=0.5;
        x[1]=-3.2;y[1]=1;
        x[2]=-3.6;y[2]=1.4;
        x[3]=-4;y[3]=2.5;
        x[4]=-4;y[4]=3.5;
        x[5]=-3.6;y[5]=4.6;
        x[6]=-3.2;y[6]=5;
        x[7]=-2.6;y[7]=5.5;
        x[8]=0;y[8]=5.5;
        for(int i=0;i<8;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<8;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //RAMBUT
        x[0]=-4;y[0]=2.5;
        x[1]=-3.2;y[1]=3;
        x[2]=-2.5;y[2]=2.5;
        x[3]=-2;y[3]=3;
        x[4]=-1.5;y[4]=2.5;
        x[5]=-1;y[5]=3;
        x[6]=-0.5;y[6]=2.5;
        x[7]=0;y[7]=3;
        for(int i=0;i<7;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<7;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //BADAN
        x[0]=-2.6;y[0]=5.5;
        x[1]=-2.8;y[1]=6.5;
        x[2]=-3;y[2]=7.5;
        x[3]=-2.8;y[3]=8.5;
        x[4]=-2.6;y[4]=9.5;
        x[5]=0;y[5]=9.5;
        for(int i=0;i<5;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<5;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //TANGAN
        x[0]=-2.6;y[0]=5.5;
        x[1]=-4;y[1]=7;
        x[2]=-3.4;y[2]=7.5;
        x[3]=-2.8;y[3]=6.5;
        for(int i=0;i<3;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<3;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //CELANA
        x[0]=-2.6;y[0]=9.5;
        x[1]=-2.6;y[1]=10.5;
        x[2]=0;y[2]=10.5;
        x[3]=0;y[3]=9.5;
        for(int i=0;i<3;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<3;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //KAKI
        x[0]=-2;y[0]=10.5;
        x[1]=-2;y[1]=11;
        x[2]=-1;y[2]=11;
        x[3]=-1;y[3]=10.5;
        for(int i=0;i<3;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<3;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //SEPATU
        x[0]=-2;y[0]=11;
        x[1]=-2.6;y[1]=11.2;
        x[2]=-3;y[2]=11.5;
        x[3]=-3;y[3]=12;
        x[4]=-2.6;y[4]=12.3;
        x[5]=-2;y[5]=12.5;      //tengah
        x[6]=-1;y[6]=12.5;
        x[7]=-0.4;y[7]=12.3;
        x[8]=0;y[8]=12;
        x[9]=0;y[9]=11.5;
        x[10]=-0.4;y[10]=11.2;
        x[11]=-1;y[11]=11;
        for(int i=0;i<11;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<11;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
    }

    //HADAP KANAN
    else if (hadap==68){
        //TOPI
        x[0]=0;y[0]=-1;
        x[1]=-2;y[1]=-1;
        x[2]=-2;y[2]=0;
        x[3]=-4;y[3]=0;
        x[4]=-4;y[4]=0.5;
        x[5]=0;y[5]=0.5;
        for(int i=0;i<5;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<5;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //KEPALA
        x[0]=-2.6;y[0]=0.5;
        x[1]=-3.2;y[1]=1;
        x[2]=-3.6;y[2]=1.4;
        x[3]=-4;y[3]=2.5;
        x[4]=-4;y[4]=3.5;
        x[5]=-3.6;y[5]=4.6;
        x[6]=-3.2;y[6]=5;
        x[7]=-2.6;y[7]=5.5;
        x[8]=0;y[8]=5.5;
        for(int i=0;i<8;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<8;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //MATA
        x[0]=2;y[0]=2;
        circle(x[0]*skala+xpos,y[0]*skala+ypos,skala/2);

        //MULUT
        x[0]=3.8;y[0]=4;
        x[1]=2.5;y[1]=4;
        line(x[0]*skala+xpos,y[0]*skala+ypos,x[1]*skala+xpos,y[1]*skala+ypos);
        arc(x[0]*skala+xpos,y[0]*skala+ypos,180,240,skala+skala/4);

        //BADAN
        x[0]=-2.6;y[0]=5.5;
        x[1]=-2.6;y[1]=9.5;
        x[2]=0;y[2]=9.5;
        for(int i=0;i<2;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<2;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //TANGAN KANAN
        x[0]=-2.6;y[0]=5.5;
        x[1]=-4;y[1]=7;
        x[2]=-1.5;y[2]=8.5;
        x[3]=-1;y[3]=8;
        x[4]=-2.6;y[4]=6.5;
        x[5]=-1.5;y[5]=5.5;
        for(int i=0;i<5;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //TANGAN KIRI
        x[0]=2.6;y[0]=5.5;
        x[1]=4;y[1]=7;
        x[2]=3;y[2]=8;
        x[3]=2.6;y[3]=7.5;
        for(int i=0;i<3;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //CELANA
        x[0]=-2.6;y[0]=9.5;
        x[1]=-2.6;y[1]=10.5;
        x[2]=2.6;y[2]=10.5;
        x[3]=2.6;y[3]=9.5;
        for(int i=0;i<3;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //KAKI KANAN
        x[0]=-2;y[0]=10.5;
        x[1]=-2;y[1]=11;
        x[2]=-1;y[2]=11;
        x[3]=-1;y[3]=10.5;
        for(int i=0;i<3;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //KAKI KIRI
        x[0]=2;y[0]=10.5;
        x[1]=2;y[1]=10.8;
        x[2]=1;y[2]=10.8;
        x[3]=1;y[3]=10.5;
        for(int i=0;i<3;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //SEPATU KANAN
        x[0]=-2;y[0]=11;
        x[1]=-2;y[1]=11.2;
        x[2]=-2;y[2]=11.5;
        x[3]=-2;y[3]=12;
        x[4]=-2;y[4]=12.3;
        x[5]=-2;y[5]=12.5;      //tengah
        x[6]=-1;y[6]=12.5;
        x[7]=-0.4;y[7]=12.3;
        x[8]=0;y[8]=12;
        x[9]=0;y[9]=11.5;
        x[10]=-0.4;y[10]=11.2;
        x[11]=-1;y[11]=11;
        for(int i=0;i<11;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //SEPATU KIRI
        x[0]=1;y[0]=11;
        x[1]=1;y[1]=11.2;
        x[2]=1;y[2]=11.5;
        x[3]=1;y[3]=12;
        x[4]=1;y[4]=12.3;
        x[5]=1;y[5]=12.5;      //tengah
        x[6]=2;y[6]=12.5;
        x[7]=2.6;y[7]=12.3;
        x[8]=3;y[8]=12;
        x[9]=3;y[9]=11.5;
        x[10]=2.6;y[10]=11.2;
        x[11]=2;y[11]=11;
        for(int i=0;i<11;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
    }

    //HADAP KIRI
    else if (hadap==65){
        //TOPI
        x[0]=0;y[0]=-1;
        x[1]=-2;y[1]=-1;
        x[2]=-2;y[2]=0;
        x[3]=-4;y[3]=0;
        x[4]=-4;y[4]=0.5;
        x[5]=0;y[5]=0.5;
        for(int i=0;i<5;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<5;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //KEPALA
        x[0]=-2.6;y[0]=0.5;
        x[1]=-3.2;y[1]=1;
        x[2]=-3.6;y[2]=1.4;
        x[3]=-4;y[3]=2.5;
        x[4]=-4;y[4]=3.5;
        x[5]=-3.6;y[5]=4.6;
        x[6]=-3.2;y[6]=5;
        x[7]=-2.6;y[7]=5.5;
        x[8]=0;y[8]=5.5;
        for(int i=0;i<8;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<8;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //MATA
        x[0]=-2;y[0]=2;
        circle(x[0]*skala+xpos,y[0]*skala+ypos,skala/2);

        //MULUT
        x[0]=-3.8;y[0]=4;
        x[1]=-2.5;y[1]=4;
        line(x[0]*skala+xpos,y[0]*skala+ypos,x[1]*skala+xpos,y[1]*skala+ypos);
        arc(x[0]*skala+xpos,y[0]*skala+ypos,300,360,skala+skala/4);

        //BADAN
        x[0]=-2.6;y[0]=5.5;
        x[1]=-2.6;y[1]=9.5;
        x[2]=0;y[2]=9.5;
        for(int i=0;i<2;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
        for(int i=0;i<2;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //TANGAN KANAN
        x[0]=-2.6;y[0]=5.5;
        x[1]=-4;y[1]=7;
        x[2]=-1.5;y[2]=8.5;
        x[3]=-1;y[3]=8;
        x[4]=-2.6;y[4]=6.5;
        x[5]=-1.5;y[5]=5.5;
        for(int i=0;i<5;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //TANGAN KIRI
        x[0]=2.6;y[0]=5.5;
        x[1]=4;y[1]=7;
        x[2]=3;y[2]=8;
        x[3]=2.6;y[3]=7.5;
        for(int i=0;i<3;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //CELANA
        x[0]=-2.6;y[0]=9.5;
        x[1]=-2.6;y[1]=10.5;
        x[2]=2.6;y[2]=10.5;
        x[3]=2.6;y[3]=9.5;
        for(int i=0;i<3;i++){
            line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //KAKI KANAN
        x[0]=-2;y[0]=10.5;
        x[1]=-2;y[1]=11;
        x[2]=-1;y[2]=11;
        x[3]=-1;y[3]=10.5;
        for(int i=0;i<3;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //KAKI KIRI
        x[0]=2;y[0]=10.5;
        x[1]=2;y[1]=10.8;
        x[2]=1;y[2]=10.8;
        x[3]=1;y[3]=10.5;
        for(int i=0;i<3;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //SEPATU KANAN
        x[0]=-2;y[0]=11;
        x[1]=-2;y[1]=11.2;
        x[2]=-2;y[2]=11.5;
        x[3]=-2;y[3]=12;
        x[4]=-2;y[4]=12.3;
        x[5]=-2;y[5]=12.5;      //tengah
        x[6]=-1;y[6]=12.5;
        x[7]=-0.4;y[7]=12.3;
        x[8]=0;y[8]=12;
        x[9]=0;y[9]=11.5;
        x[10]=-0.4;y[10]=11.2;
        x[11]=-1;y[11]=11;
        for(int i=0;i<11;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }

        //SEPATU KIRI
        x[0]=1;y[0]=11;
        x[1]=1;y[1]=11.2;
        x[2]=1;y[2]=11.5;
        x[3]=1;y[3]=12;
        x[4]=1;y[4]=12.3;
        x[5]=1;y[5]=12.5;      //tengah
        x[6]=2;y[6]=12.5;
        x[7]=2.6;y[7]=12.3;
        x[8]=3;y[8]=12;
        x[9]=3;y[9]=11.5;
        x[10]=2.6;y[10]=11.2;
        x[11]=2;y[11]=11;
        for(int i=0;i<11;i++){
            line(-x[i]*skala+xpos,y[i]*skala+ypos,-x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
    }
}

int main()
{
    int hadap=83;
    float skala=10;
    static float xpos1,ypos1;
    float xbomb=-9999,ybomb=-99999;
    bool IsBomb=false;
    xpos1 = 100; ypos1 =200;
    initwindow(500,500);
    while(1)
    {
        bomb(xbomb,ybomb,skala);
        MainChar(xpos1,ypos1,skala,hadap);
        if (GetAsyncKeyState(68)){
            hadap=68;
            xpos1=xpos1+2;
            if (xpos1+(4*skala)>getmaxx()){
                xpos1=getmaxx()-(4*skala);
            }
        }
        else if (GetAsyncKeyState(65)){
            hadap=65;
            xpos1=xpos1-2;
            if (xpos1+(-4*skala)<0){
                xpos1=4*skala;
            }
        }
        else if (GetAsyncKeyState(87)){
            hadap=87;
            ypos1=ypos1-2;
            if (ypos1+(-1*skala)<0){
                ypos1=1*skala;
            }
        }
        else if (GetAsyncKeyState(83)){
            hadap=83;
            ypos1=ypos1+2;
            if (ypos1+(12.5*skala)>getmaxy()){
                ypos1=getmaxy()-(12.5*skala);
            }
        }
        else if (GetKeyPressed(32)){
            xbomb=xpos1;
            ybomb=ypos1;
            continue;
        }
        else if (GetKeyPressed(27)){
            break;
        }
        delay(10);
        cleardevice();
    }
    return 0;
}
