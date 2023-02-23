1. #include<stdio.h
2. #include<graphics.h>
3. #include<conio.h>
4. void main()
5. {
6. int gd=DETECT, gm; //initialization of graph driver and graph mode
7. initgraph (&gd,&gm,"C:\\TURBOC3\\BGI"); // Graph initialization
8. setbkcolor(GREEN); // set background color as green color
9. line(100,100,250,150); // to display line using line() function
10. rectangle(150, 250, 250, 350); // display rectangle using rectangle() function
11. circle(200, 200, 50); // display circle using circle() function
12. ellipse(120,350,0,360,30,20); display ellipse using ellipse() function
13. getche(); 
