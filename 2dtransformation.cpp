1. #include<stdio.h>
2. #include<graphics.h>
3. #include<conio.h>
4. #include<math.h>
5. void main()
6. {
7. int gd=DETECT, gm; //initialization of graph driver and graph mode
8. initgraph (&gd,&gm,"C:\\TURBOC3\\BGI"); // Graph initialization
9. int x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3,c;
10. int sx,sy,xt,yt,theta;
11. float t;
12.
13. printf("\t Program for basic transformations");
14. printf("\n\t Enter the points of triangle");
15. setcolor(1);
16. scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
17. line(x1,y1,x2,y2);
18. line(x2,y2,x3,y3);
19. line(x3,y3,x1,y1);
20. getch();
21. printf("\n 1.Translation\n 2.Rotation\n 3.Scalling\n 4.exit");
22. printf("Enter your choice:");
23. scanf("%d",&c);
24. switch(c) {
25. case 1:
26. printf("\n Enter the translation factor");
27. scanf("%d%d",&xt,&yt);
28. nx1=x1+xt;
29. ny1=y1+yt;
30. nx2=x2+xt;
31. ny2=y2+yt;
32. nx3=x3+xt;
33. ny3=y3+yt;
34. line(nx1,ny1,nx2,ny2);
35. line(nx2,ny2,nx3,ny3);
36. line(nx3,ny3,nx1,ny1);
37. getch();
38. case 2:
39. printf("\n Enter the angle of rotation");
40. scanf("%d",&theta);
41. t=3.14*theta/180;
42. nx1=abs(x1*cos(t)-y1*sin(t));
43. ny1=abs(x1*sin(t)+y1*cos(t));
44. nx2=abs(x2*cos(t)-y2*sin(t));
45. ny2=abs(x2*sin(t)+y2*cos(t));
46. nx3=abs(x3*cos(t)-y3*sin(t));
47. ny3=abs(x3*sin(t)+y3*cos(t));
48. line(nx1,ny1,nx2,ny2);
49. line(nx2,ny2,nx3,ny3);
50. line(nx3,ny3,nx1,ny1);
51. getch();
52. case 3:
53. printf("\n Enter the scalling factor");
54. scanf("%d%d",&sx,&sy);
55. nx1=x1*sx;
56. ny1=y2*sy;
57. nx2=x2*sx;
58. ny2=y2*sy;
59. nx3=x3*sx;
60. ny3=y3*sy;
61. line(nx1,ny1,nx2,ny2);
62. line(nx2,ny2,nx3,ny3);
63. line(nx3,ny3,nx1,ny1);
64. getch();
65. case 4:
66. break;
67. default:
68. printf("Enter the correct choice"); } } 
