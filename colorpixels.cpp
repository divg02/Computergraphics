1. #include <stdio.h>
2. #include<graphics.h>
3. #include<conio.h>
4. void main()
5. {
6. int gd=DETECT, gm; //initialization of graph driver and graph mode
7. initgraph (&gd,&gm,"C:\\TURBOC3\\BGI"); // Graph initialization
8. putpixel(100, 100, RED); // display red color point(pixel) on screen
9. putpixel(200, 100, GREEN); // display green color point(pixel) on screen
10. putpixel(300, 100, YELLOW); // display yellow color point(pixel) on screen
11. getche();
12. } 
