1. #include<stdio.h>
2. #include<graphics.h>
3. #include<conio.h>
4. #define Round(a) ((int) (a+0.5))
5. void main()
6. {
7. int gd=DETECT, gm; //initialization of graph driver and graph mode
8. initgraph (&gd,&gm,"C:\\TURBOC3\\BGI"); // Graph initialization
9. int dx, dy, p, x, y,m,x1,y1,x2,y2;
10. printf(“Enter co-ordinates of first point: ");
11. scanf(“%d %d “, &x1, &y1);
12. printf(“Enter co-ordinates of second point: ");
13. scanf(“%d %d”, &x2, &y2);
14. dx = x2-x1;
15. dy = y2-y1;
16. x = x1;
17. y = y1;
18. p=2*dy-dx;
19. while(x<x2) {
20. if(p>=0) {
21. putpixel(x,y,RED);
22. y = y+1;
23. p = p+2*dy-2*dx; }
24. else {
25. putpixel(x,y,RED);
26. p = p+2*dy; }
27. x=x+1; } }
