#include<iostream>
#include<graphics.h>
#include<math.h>
#include<conio.h>
using namespace std;
void menu(){

    cout<<"\t\t\t******Menu Selection*******\n";
    cout<<"\t\t\t 0. Exit the program.\n";
    cout<<"\t\t\t 1. My Name\n";
    cout<<"\t\t\t 2. Show Emoji\n";
    cout<<"\t\t\t 3. Show National Flag\n";
    cout<<"\t\t\t 4. Rainbow\n";
    cout<<"\t\t\t 5. House\n";
    cout<<"\t\t\t 6. Clock\n";

}

void my_name(){
    // N
    line(100, 100, 100, 140);
    line(100, 100, 140, 140);
    line(140, 140, 140, 100);

    // A
    line(180,100,160,140);
    line(180,100,200,140);
    line(170,120,190,120);

    // J
    line(235,100,245,100);
    line(240, 100, 240, 140);
    line(220,140,240,140);


    //M
    line(260, 100, 260, 140);
    line(260, 100, 280, 120);
    line(300, 100, 280, 120);
    line(300, 100, 300, 140);

    //U
    line(320, 100, 320, 140);
    line(320,140,350,140);
    line(350, 100, 350, 140);


    // L
    line(375,100,385,100);
    line(380, 100, 380, 140);
    line(380,140,400,140);

    //I
    line(95,170,105,170);
    line(100, 170, 100, 210);
    line(95,210,105,210);


    //D
    line(115,170,150,170);
    line(120, 170, 120, 210);
    line(115,210,150,210);
    line(150, 170, 150, 210);

    // -
    line(165,190,180,190);

    // 4
    line(200, 190, 220, 170);
    line(200, 190, 220, 190);
    line(220, 170, 220, 210);

    // 0
    line(230, 170, 230, 210);
    line(230, 170, 255, 170);
    line(255, 170, 255, 210);
    line(230, 210, 255, 210);

    // 2
    line(270, 170, 300, 170);
    line(300, 170, 300, 190);
    line(270, 190, 300, 190);
    line(270, 190, 270, 210);
    line(270, 210, 300, 210);

    // 7
    line(310, 170, 340, 170);
    line(340, 170, 320, 210);


}

void rainbow()
{
    int x, y, i;
    initwindow(500,500,"Rainbow");

    x = getmaxx() / 2;//finding centre x-ordinate of screen
    y = getmaxy() / 2;//finding centre y-ordinate of screen

    for (i=30; i<200; i++)
    {
        delay(100);

        setcolor(i/10);

        arc(x, y, 0, 180, i-10);
    }
    int j;
    cout<<"\tEnter any key any integer to close the graph: ";
    cin>>j;
    closegraph();
}

void my_emoji(){
    initwindow(800,800,"Emoji");
    //First write my name
    my_name();
    //Emoji code start from here
    circle(400,500,150);
    setfillstyle(1,YELLOW);
    floodfill(410,510,WHITE);

    circle(450,450,30);
    setfillstyle(1,BLACK);
    floodfill(460,460,WHITE);

    circle(350,450,30);
    setfillstyle(1,BLACK);
    floodfill(360,460,WHITE);

    for(int i=0;i<=20;i++){
        setcolor(BLACK);
        ellipse(400,(500+i),-160,-20,100,100);
        Sleep(50);
    }
    int j;
    cout<<"\tEnter any key any integer to close the graph: ";
    cin>>j;
    closegraph();
}
void my_national_flag(){
    initwindow(800,800,"National Flag");
    //First write my name
    my_name();
    setfillstyle(1,GREEN);
    bar(100,300,300,420);

    setcolor(RED);
    circle(200,360,40);
    setfillstyle(1,RED);
    fillellipse(200,360,40,40);

    setfillstyle(1,6);
    bar(90,300,100,750);

    setfillstyle(1,6);
    bar(70,750,120,770);
    bar(40,770,150,790);
    int j;
    cout<<"\tEnter any key any integer to close the graph: ";
    cin>>j;
    closegraph();
}
void clock(){
     initwindow(1000, 1000, "Clock");

    // Clock Outer Outline
    rectangle(500, 50, 800, 650);

    // Clock Inner Outline
    rectangle(520, 70, 780, 630);

    // Coloring Middle Part Of
    // Rectangle With Brown
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(505, 55, 15);

    // Clock Outline
    circle(650, 200, 130);
    circle(650, 200, 3);

    // Coloring all the parts Of the
    // clock except the circle with
    // Darkgray
    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(525, 355, 15);
    floodfill(522, 72, 15);
    floodfill(768, 72, 15);

    // Inserting Digits
    settextstyle(6, 0, 3);
    outtextxy(697, 100, "01");
    outtextxy(730, 140, "02");
    outtextxy(742, 190, "03");
    outtextxy(721, 240, "04");
    outtextxy(690, 280, "05");
    outtextxy(630, 300, "06");
    outtextxy(578, 280, "07");
    outtextxy(540, 240, "08");
    outtextxy(530, 190, "09");
    outtextxy(537, 140, "10");
    outtextxy(569, 100, "11");
    outtextxy(630, 80, "12");

    // Left Line Of Pendulum
    line(645, 328, 645, 528);

    // Right Line Of Pendulum
    line(655, 328, 655, 528);

    // Pendulum Bob
    circle(650, 546, 20);

    // Coloring Line & Bob With Black
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(652, 544, 15);
    floodfill(647, 330, 15);

    // Creating the Hour Hand
    // & Color Blue
    setcolor(BLUE);
    line(647, 197, 600, 170);

    // Creating Minute Hand
    // & Color Yellow
    setcolor(YELLOW);
    line(653, 200, 730, 170);

    // Creating Second Hand and the
    // Color Red
    setcolor(RED);
    line(650, 203, 630, 290);

    int j;
    cout<<"\tEnter any key any integer to close the graph: ";
    cin>>j;
    closegraph();
}
void house(){
    initwindow(800,800,"House");
    //First write my name
    my_name();
    line(100, 400, 150, 350);

    line(150, 350, 200, 400);

    line(150, 350, 350, 350);
    line(350, 350, 400, 400);


    rectangle(100, 400, 200, 500);
    rectangle(200, 400, 400, 500);
    rectangle(130, 430, 170, 500);
    rectangle(250, 420, 350, 480);


    setfillstyle(1, 2);


    floodfill(131, 431, WHITE);
    floodfill(201, 401, WHITE);


    setfillstyle(3, 7);


    floodfill(101, 401, WHITE);

    setfillstyle(4, 7);
    floodfill(150, 352, WHITE);

    floodfill(163, 355, WHITE);
    setfillstyle(7, 7);
    floodfill(251, 421, WHITE);
    int j;
    cout<<"\tEnter any key any integer to close the graph: ";
    cin>>j;
    closegraph();

}
int main(){
    int my_option;
    while(1){
        menu();
    cout<<"\tEnter your option( 0 to 5): ";
    cin>>my_option;
    if(my_option==0){
        cout<<"\t Exit the program\n";
        break;
    }
    else if(my_option==1){
        initwindow(800,400,"Najmul Hossain - 14A - 4027");
        cout<<"\tShow my name\n";
        my_name();
        int j;
        cout<<"\tEnter any key any integer to close the graph: ";
        cin>>j;
        closegraph();
    }
    else if(my_option==2){
        cout<<"\tShow the Emoji\n";
        my_emoji();
    }
    else if(my_option==3){
        cout<<"\tShow the National Flag\n";
        my_national_flag();
    }
    else if(my_option==4){
        cout<<"\tRainbow\n";
        rainbow();
    }

    else if(my_option==5){
        cout<<"\tHouse: \n";
        house();
    }
    else if(my_option==6){
        cout<<"\tHouse: \n";
        clock();
    }

    else{
        cout<<"\tYou chose wrong option!\n\tTry again!\n";
    }

    }
    return 0;

}
