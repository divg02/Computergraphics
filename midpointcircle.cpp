1. #include<stdio.h>
2. #include<graphics.h>
3. #include<conio.h>
4. void main() {
5. int gd=DETECT, gm; //initialization of graph driver and graph mode
6. initgraph (&gd,&gm,"C:\\TURBOC3\\BGI"); // Graph initialization
7. int xc,yc,r,p,x,y;
8. printf("\n\n\tEnter the co-ordinates of center : ");
9. scanf("%d %d",&xc,&yc);
10. printf("\n\n\tEnter the radius: ");
11. scanf("%d",&r);
12. x = 0; y = r; p=(1-r);
13. for(x=0;x<=y; x++) {
14. if(p < 0) {
15. x=x+1;
16. y=y;
17. p = p + (2 * x)+1; }
18. else {
19. x = x+1;
20. y = y-1;
21. p = p + 2 *(x)+1-2*(y); }
22. putpixel(xc+x,yc-y,WHITE);
23. putpixel(xc-x,yc-y,WHITE);
24. putpixel(xc+x,yc+y,WHITE);
25. putpixel(xc-x,yc+y,WHITE);
26. putpixel(xc+y,yc-x,WHITE);
27. putpixel(xc-y,yc-x,WHITE);
28. putpixel(xc+y,yc+x,WHITE);
29. putpixel(xc-y,yc+x,WHITE); }
30. getch();
