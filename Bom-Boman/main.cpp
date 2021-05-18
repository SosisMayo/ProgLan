#include <iostream>
#include <graphics.h>
#include <math.h>
//TO DO LIST :
//1. Benarkan Character
//2. Grid
//3. Bikin Musuh

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

void Box(float xpos,float ypos,float skala){
    float x[5],y[5];
    x[0]=-4;y[0]=-0.5;
    x[1]=-4;y[1]=12.5;
    x[2]=4;y[2]=12.5;
    x[3]=4;y[3]=-0.5;
    x[4]=-4;y[4]=-0.5;
    for(int i=0;i<4;i++){
        line(x[i]*skala+xpos,y[i]*skala+ypos,x[i+1]*skala+xpos,y[i+1]*skala+ypos);
        }
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

void MainChar(float xpos,float ypos,float skala,int hadap,float n){
    float x[99],y[99];
    //HADAP DEPAN
    if (hadap==83){
        //TOPI
        x[0]=0;y[0]=-0.5;
        x[1]=-2;y[1]=-0.5;
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
        x[0]=0;y[0]=-0.5;
        x[1]=-2;y[1]=-0.5;
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
        x[0]=0;y[0]=-0.5;
        x[1]=-2;y[1]=-0.5;
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
            line((x[i]+n)*skala+xpos,y[i]*skala+ypos,(x[i+1]+n)*skala+xpos,y[i+1]*skala+ypos);
        }

        //KAKI KIRI
        x[0]=2;y[0]=10.5;
        x[1]=2;y[1]=10.8;
        x[2]=1;y[2]=10.8;
        x[3]=1;y[3]=10.5;
        for(int i=0;i<3;i++){
            line((x[i]+n)*skala+xpos,y[i]*skala+ypos,(x[i+1]+n)*skala+xpos,y[i+1]*skala+ypos);
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
            line((x[i]+n)*skala+xpos,y[i]*skala+ypos,(x[i+1]+n)*skala+xpos,y[i+1]*skala+ypos);
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
            line((x[i]+n)*skala+xpos,y[i]*skala+ypos,(x[i+1]+n)*skala+xpos,y[i+1]*skala+ypos);
        }
    }

    //HADAP KIRI
    else if (hadap==65){
        //TOPI
        x[0]=0;y[0]=-0.5;
        x[1]=-2;y[1]=-0.5;
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
            line((-x[i]+n)*skala+xpos,y[i]*skala+ypos,(-x[i+1]+n)*skala+xpos,y[i+1]*skala+ypos);
        }

        //KAKI KIRI
        x[0]=2;y[0]=10.5;
        x[1]=2;y[1]=10.8;
        x[2]=1;y[2]=10.8;
        x[3]=1;y[3]=10.5;
        for(int i=0;i<3;i++){
            line((-x[i]+n)*skala+xpos,y[i]*skala+ypos,(-x[i+1]+n)*skala+xpos,y[i+1]*skala+ypos);
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
            line((-x[i]+n)*skala+xpos,y[i]*skala+ypos,(-x[i+1]+n)*skala+xpos,y[i+1]*skala+ypos);
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
            line((-x[i]+n)*skala+xpos,y[i]*skala+ypos,(-x[i+1]+n)*skala+xpos,y[i+1]*skala+ypos);
        }
    }
}

int main()
{
    float xhbBom[2],yhbBom[2],xhbChar[2],yhbChar[2],n=0,xhbBox[99][2],yhbBox[99][2],skala=10,xpos1,ypos1,xbomb=-99,ybomb=-99;
    int hadap=83,jumlahBox=5,xposBox[99],yposBox[99];
    xpos1 = 100; ypos1 =200;
    for(int i=0;i<jumlahBox;i++){
        xposBox[i]=rand()%1920;
        yposBox[i]=rand()%1080;
        while((xposBox[i]%2!=0) || (yposBox[i]%2!=0)){
            xposBox[i]=rand()%1920;
            yposBox[i]=rand()%1080;
        }
        xhbBox[i][0]=(-4*skala)+xposBox[i];
        xhbBox[i][1]=(4*skala)+xposBox[i];
        yhbBox[i][0]=(-0.5*skala)+yposBox[i];
        yhbBox[i][1]=(12.5*skala)+yposBox[i];

    }
    initwindow(1920,1080);
    while(1)
    {
        xhbBom[0]=(-4*skala)+xbomb;
        xhbBom[1]=(4*skala)+xbomb;
        yhbBom[0]=(-0.5*skala)+ybomb;
        yhbBom[1]=(12.5*skala)+ybomb;
        xhbChar[0]=(-4*skala)+xpos1;
        xhbChar[1]=(4*skala)+xpos1;
        yhbChar[0]=(-0.5*skala)+ypos1;
        yhbChar[1]=(12.5*skala)+ypos1;
        for(int i=0;i<5;i++){
            Box(xposBox[i],yposBox[i],skala);
        }
        bomb(xbomb,ybomb,skala);
        MainChar(xpos1,ypos1,skala,hadap,n);
        if (GetAsyncKeyState(68)){
            hadap=68;
            xpos1=xpos1+2;
            if((xhbChar[1]>=xhbBom[0]) && (xhbChar[1]<xhbBom[1]) && (yhbChar[0]>yhbBom[0]) && (yhbChar[0]<yhbBom[1])){
                xpos1=xpos1-2;
            }
            else if((xhbChar[1]>=xhbBom[0]) && (xhbChar[1]<xhbBom[1]) && (yhbChar[1]>yhbBom[0]) && (yhbChar[1]<yhbBom[1])){
                xpos1=xpos1-2;
            }
            else if((xhbChar[1]>=xhbBom[0]) && (xhbChar[1]<xhbBom[1]) && (yhbChar[0]==yhbBom[0]) && (yhbChar[1]==yhbBom[1])){
                xpos1=xpos1-2;
            }
            if (xpos1+(4*skala)>getmaxx()){
                xpos1=getmaxx()-(4*skala);
            }
            for(int i=0;i<jumlahBox;i++){
                if((xhbChar[1]>=xhbBox[i][0]) && (xhbChar[1]<xhbBox[i][1]) && (yhbChar[0]>yhbBox[i][0]) && (yhbChar[0]<yhbBox[i][1])){
                    xpos1=xpos1-2;
                }
                else if((xhbChar[1]>=xhbBox[i][0]) && (xhbChar[1]<xhbBox[i][1]) && (yhbChar[1]>yhbBox[i][0]) && (yhbChar[1]<yhbBox[i][1])){
                    xpos1=xpos1-2;
                }
                else if((xhbChar[1]>=xhbBox[i][0]) && (xhbChar[1]<xhbBox[i][1]) && (yhbChar[0]==yhbBox[i][0]) && (yhbChar[1]==yhbBox[i][1])){
                    xpos1=xpos1-2;
                }
            }
            if(n==0){
                n=0.5;
            }
            else{
                n=0;
            }
        }
        else if (GetAsyncKeyState(65)){
            hadap=65;
            xpos1=xpos1-2;
            if((xhbChar[0]>xhbBom[0]) && (xhbChar[0]<=xhbBom[1]) && (yhbChar[0]>yhbBom[0]) && (yhbChar[0]<yhbBom[1])){
                xpos1=xpos1+2;
            }
            else if((xhbChar[0]>xhbBom[0]) && (xhbChar[0]<=xhbBom[1]) && (yhbChar[1]>yhbBom[0]) && (yhbChar[1]<yhbBom[1])){
                xpos1=xpos1+2;
            }
            else if((xhbChar[0]>xhbBom[0]) && (xhbChar[0]<=xhbBom[1]) && (yhbChar[0]==yhbBom[0]) && (yhbChar[1]==yhbBom[1])){
                xpos1=xpos1+2;
            }
            if (xpos1+(-4*skala)<0){
                xpos1=4*skala;
            }
            for(int i=0;i<jumlahBox;i++){
                if((xhbChar[0]>xhbBox[i][0]) && (xhbChar[0]<=xhbBox[i][1]) && (yhbChar[0]>yhbBox[i][0]) && (yhbChar[0]<yhbBox[i][1])){
                    xpos1=xpos1+2;
                }
                else if((xhbChar[0]>xhbBox[i][0]) && (xhbChar[0]<=xhbBox[i][1]) && (yhbChar[1]>yhbBox[i][0]) && (yhbChar[1]<yhbBox[i][1])){
                    xpos1=xpos1+2;
                }
                else if((xhbChar[0]>xhbBox[i][0]) && (xhbChar[0]<=xhbBox[i][1]) && (yhbChar[0]==yhbBox[i][0]) && (yhbChar[1]==yhbBox[i][1])){
                    xpos1=xpos1+2;
                }
            }
            if(n==0){
                n=-0.5;
            }
            else{
                n=0;
            }
        }
        else if (GetAsyncKeyState(87)){
            hadap=87;
            ypos1=ypos1-2;
            if((yhbChar[0]>yhbBom[0]) && (yhbChar[0]<=yhbBom[1]) && (xhbChar[0]>xhbBom[0]) && (xhbChar[0]<xhbBom[1])){
                ypos1=ypos1+2;
            }
            else if((yhbChar[0]>yhbBom[0]) && (yhbChar[0]<=yhbBom[1]) && (xhbChar[1]>xhbBom[0]) && (xhbChar[1]<xhbBom[1])){
                ypos1=ypos1+2;
            }
            else if((yhbChar[0]>yhbBom[0]) && (yhbChar[0]<=yhbBom[1]) && (xhbChar[0]==xhbBom[0]) && (xhbChar[1]==xhbBom[1])){
                ypos1=ypos1+2;
            }
            if (ypos1+(-0.5*skala)<0){
                ypos1=0.5*skala;
            }
            for(int i=0;i<jumlahBox;i++){
                if((yhbChar[0]>yhbBox[i][0]) && (yhbChar[0]<=yhbBox[i][1]) && (xhbChar[0]>xhbBox[i][0]) && (xhbChar[0]<xhbBox[i][1])){
                    ypos1=ypos1+2;
                }
                else if((yhbChar[0]>yhbBox[i][0]) && (yhbChar[0]<=yhbBox[i][1]) && (xhbChar[1]>xhbBox[i][0]) && (xhbChar[1]<xhbBox[i][1])){
                    ypos1=ypos1+2;
                }
                else if((yhbChar[0]>yhbBox[i][0]) && (yhbChar[0]<=yhbBox[i][1]) && (xhbChar[0]==xhbBox[i][0]) && (xhbChar[1]==xhbBox[i][1])){
                    ypos1=ypos1+2;
                }
            }
        }
        else if (GetAsyncKeyState(83)){
            hadap=83;
            ypos1=ypos1+2;
            if((yhbChar[1]>=yhbBom[0]) && (yhbChar[1]<yhbBom[1]) && (xhbChar[0]>xhbBom[0]) && (xhbChar[0]<xhbBom[1])){
                ypos1=ypos1-2;
            }
            else if((yhbChar[1]>=yhbBom[0]) && (yhbChar[1]<yhbBom[1]) && (xhbChar[1]>xhbBom[0]) && (xhbChar[1]<xhbBom[1])){
                ypos1=ypos1-2;
            }
            else if((yhbChar[1]>=yhbBom[0]) && (yhbChar[1]<yhbBom[1]) && (xhbChar[0]==xhbBom[0]) && (xhbChar[1]==xhbBom[1])){
                ypos1=ypos1-2;
            }
            if (ypos1+(12.5*skala)>getmaxy()){
                ypos1=getmaxy()-(12.5*skala);
            }
            for(int i=0;i<jumlahBox;i++){
                if((yhbChar[1]>=yhbBox[i][0]) && (yhbChar[1]<yhbBox[i][1]) && (xhbChar[0]>xhbBox[i][0]) && (xhbChar[0]<xhbBox[i][1])){
                    ypos1=ypos1-2;
                }
                else if((yhbChar[1]>=yhbBox[i][0]) && (yhbChar[1]<yhbBox[i][1]) && (xhbChar[1]>xhbBox[i][0]) && (xhbChar[1]<xhbBox[i][1])){
                    ypos1=ypos1-2;
                }
                else if((yhbChar[1]>=yhbBox[i][0]) && (yhbChar[1]<yhbBox[i][1]) && (xhbChar[0]==xhbBox[i][0]) && (xhbChar[1]==xhbBox[i][1])){
                    ypos1=ypos1-2;
                }
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
