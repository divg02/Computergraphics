1. #include<stdio.h>
2. #include<graphics.h>
3. #include<conio.h>
4. #define Round(a) ((int) (a+0.5))
5. void main()
6. {
7. int gd=DETECT, gm; //initialization of graph driver and graph mode
8. initgraph (&gd,&gm,"C:\\TURBOC3\\BGI"); // Graph initialization
9. int x1, y1, x2, y2, dx, dy, step, i;
10. float xinc, yinc, x, y;
11. x1=100, y1=100, x2=300, y2=200;
12. x=x1, y=y1;
13. dx=x2-x1;
14. dy=y2-y1;
15. if(abs(dx) > abs(dy))
16. step=dx
17. else
18. step=dy
19. xinc=dx/float(step);
20. yinc=dy/float(step);
21. putpixel(x,y,RED);
22. for(i=1;i<=step;i++)
23. {
24. x =x+xinc;
25. y=y+yinc;
26. putpixel(Round(x),Round(y), RED);
27. }
28. getche();
29. }
