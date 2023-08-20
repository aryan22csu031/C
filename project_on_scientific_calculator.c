#include <stdio.h>
#include <math.h>
int main ()
{
int a,n1,A[25],sum=0,diff,n,n2,product=1,dend,sor,n3,r,c1,c,y,z;
float b;
long g;
B:
printf("\n ***** *** *** ********* *** *** **** *** *** ********");
printf("\n **** **** *** *** ********* **** *** *** *** **** *** ********");
printf("\n ***** ***** *** *** *** ***** *** *** *** ***** *** *** ");
printf("\n *************** *** *** *** *** ** *** *** *** *** ** *** ********");
printf("\n *************** *** *** *** *** ** *** *** *** *** ** *** *** ");
printf("\n ***** ***** ******** ******** ********* *** ***** *** *** *** ***** ********");
printf("\n ***** ***** ******** ******** ********* *** **** **** *** **** ********");


printf ("\n What type of calculation you want to perform:");
printf ("\n 'Press key according'");
printf ("\n 1. Normal Calculation");
printf ("\n 2. Scientific Calculation");
printf ("\n 3. Matrix Calculation");
printf ("\n 4. Unit Conversion");
printf ("\n 5. Exit\n");
printf(" ");
scanf("%d",&n);
switch(n){
case 1:
A:
printf("\n\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Factorial\n 6.Back to main menu");
printf ("\n 'Press key according'\n");
printf(" ");
scanf("%d",&a);
switch(a){
case 1:
printf(" How many number you want to add :");
scanf("%d",&n1);
for(int i=1;i<=n1;i++){
printf("\n Enter the number %d :",i);
scanf("%d",&A[i]);
sum=sum+A[i];
}
printf("\n Answer=%d",sum);
goto A;
break;
case 2:
for(int i=1;i<=2;i++){
printf("\n Enter the number %d :",i);
scanf("%d",&A[i]);
}
diff=A[1]-A[2];
printf("\n Answer=%d",diff);
goto A;
break;
case 3:
printf(" How many number you want to multiply :");
scanf("%d",&n2);
for(int i=1;i<=n2;i++){
printf("\n Enter the number %d :",i);
scanf("%d",&A[i]);
product=product*A[i];

}
printf("\n Answer=%d",product);
goto A;
break;
case 4:
printf(" Enter the dividend:");
scanf("%d",&dend);
printf(" Enter the divisor:");
scanf("%d",&sor);
printf("\n Answer=%f",((float)dend/sor));
goto A;
break;
case 5:
printf(" Enter the number for factorial:");
scanf("%d",&n2);
for(int i=1;i<=n2;i++)
product=product*i;
printf("\n Answer=%d",product);
goto A;
break;
case 6:
goto B;
break;
default:
printf(" Invalid option");
}
break;
case 2:
C:
printf("\n\n 1.Square root\n 2.Power\n 3.Sin\n 4.Cos\n 5.Tan\n 6.Exponential\n 7.Cube root \n 8.Logarithm\n 9.Back to main menu");
printf ("\n 'Press key according'\n");
printf(" ");
scanf("%d",&n3);
switch(n3){
case 1:
printf("\n Enter the number:");
scanf("%d",&A[0]);
printf(" Answer=%f",sqrt(A[0]));
goto C;
break;
case 2:
printf("\n Enter the base number:");
scanf("%d",&A[0]);
printf("\n Enter the power:");
scanf("%d",&A[1]);
printf(" Answer=%f",pow(A[0],A[1]));
goto C;
break;
case 3:
printf("\n Enter the value of theta(Q):");
scanf("%f",&b);
printf(" Answer=%f",sin(b));
goto C;
break;
case 4:
printf("\n Enter the value of theta(Q):");
scanf("%f",&b);
printf(" Answer=%f",cos(b));
goto C;
break;
case 5:
printf("\n Enter the value of theta(Q):");
scanf("%f",&b);
printf(" Answer=%f",tan(b));
goto C;
break;
case 6:
printf("\n Enter the number:");
scanf("%d",&A[0]);
printf(" Answer=%f",exp(A[0]));
goto C;
break;
case 7:
printf("\n Enter the number:");
scanf("%d",&A[0]);
printf(" Answer=%f",cbrt(A[0]));
goto C;
break;
case 8:
printf("\n Enter the number:");
scanf("%d",&A[0]);
printf(" Answer=%f",log(A[0]));
goto C;
break;
case 9:
goto B;
break;
default:
printf("Invalid option");
goto C;
}
break;

case 3:
D:
printf("\n\n 1.Addition of matrix\n 2.Subtraction of matrix\n 3.Multiplication of matrix\n 4.Transpose of matrix\n 5.Back to main menu\n");
printf ("\n 'Press key according'\n");
printf(" ");
scanf("%d",&a);
switch(a){
case 1:
{
printf(" Enter the number of rows:");
scanf("%d",&r);
printf(" Enter the number of column:");
scanf("%d",&c);
int D[r][c],B[r][c],C[r][c];
printf(" Enter the elements of first matrix:");
for(int i=0;i<r;i++){
for(int s=0;s<c;s++)
scanf("%d",&D[i][s]);

}
for(int i=0;i<r;i++){
for(int s=0;s<c;s++)
printf(" %d\t",D[i][s]);
printf("\n");
}
printf(" Enter the elements of second matrix:");
for(int i=0;i<r;i++){
for(int s=0;s<c;s++)
scanf("%d",&B[i][s]);

}
for(int i=0;i<r;i++){
for(int s=0;s<c;s++)
printf(" %d\t",B[i][s]);
printf("\n");
}
for(int i=0;i<r;i++)
for(int s=0;s<c;s++)
C[i][s]=D[i][s]+B[i][s];
printf(" _____________________________________________");
printf("\n Answer=");
for(int i=0;i<r;i++){
for(int s=0;s<c;s++)
printf(" %d\t",C[i][s]);
printf("\n");
}
printf(" ______________________________________________");
goto D;
}
case 2:
{
printf(" Enter the number of rows:");
scanf("%d",&r);
printf(" Enter the number of column:");
scanf("%d",&c);
int D[r][c],B[r][c],C[r][c];
printf(" Enter the elements of first matrix:");
for(int i=0;i<r;i++){
for(int s=0;s<c;s++)
scanf("%d",&D[i][s]);

}
for(int i=0;i<r;i++){
for(int s=0;s<c;s++)
printf(" %d\t",D[i][s]);
printf("\n");
}
printf(" Enter the elements of second matrix:");
for(int i=0;i<r;i++){
for(int s=0;s<c;s++)
scanf("%d",&B[i][s]);

}
for(int i=0;i<r;i++){
for(int s=0;s<c;s++)
printf(" %d\t",B[i][s]);
printf("\n");
}
for(int i=0;i<r;i++)
for(int s=0;s<c;s++)
C[i][s]=D[i][s]-B[i][s];
printf(" _____________________________________________");
printf("\n Answer=");
for(int i=0;i<r;i++){
for(int s=0;s<c;s++)
printf(" %d\t",C[i][s]);
printf("\n");
}
printf(" ______________________________________________");
goto D;
}
break;
case 3:
{
printf(" Enter the number of rows of first matrix:");
scanf("%d",&r);
printf(" Enter the number of column of first matrix:");
scanf("%d",&c);
printf(" Enter the column of second matrix:");
scanf("%d",&c1);
int E[r][c],F[c][c1],G[r][c1];
printf(" enter the elements of first matrix:");
for(y=0;y<r;y++)
for(z=0;z<c;z++)
scanf("%d",&E[y][z]);
for(y=0;y<r;y++){
for(z=0;z<c;z++)
printf(" %d\t",E[y][z]);
printf("\n");
}
printf(" enter the elements of second matrix:");
for(y=0;y<c;y++)
for(z=0;z<c1;z++)
scanf("%d",&F[y][z]);
for(y=0;y<c;y++){
for(z=0;z<c1;z++)
printf(" %d\t",F[y][z]);
printf("\n");
}
printf(" ______________________________________________");

printf(" \nAnswer=\n");
for(int i=0;i<r;i++){
for(int s=0;s<c1;s++){
int sum=0;
for(int x=0;x<c;x++){
sum=sum+(E[i][x]*F[x][s]);
}
G[i][s]=sum;
}
}
for(y=0;y<r;y++){
for(z=0;z<c1;z++)
printf(" %d\t",G[y][z]);
printf("\n");
}
printf(" ______________________________________________");

}
goto D;
break;
case 4:
{
printf(" Enter the number of rows:");
scanf("%d",&r);
printf(" Enter the number of column:");
scanf("%d",&c);
int E[r][c];
printf(" Enter the elements of matrix:");
for(int i=0;i<r;i++){
for(int s=0;s<c;s++)
scanf("%d",&E[i][s]);

}
for(int i=0;i<r;i++){
for(int s=0;s<c;s++)
printf(" %d\t",E[i][s]);
printf("\n");
}
printf(" _____________________________________________");
printf("\n Answer=\n");
for(int s=0;s<r;s++){
for(int i=0;i<c;i++)
printf(" %d\t",E[i][s]);
printf("\n");
}
printf(" ______________________________________________");

}
goto D;
break;
case 5:
goto B;
break;

default:
printf(" invalid option");
goto D;
}
case 4:
E:
printf(" Which type of unit conversion would you like to perform:\n");
printf("\n 1.Length Conversion\n 2.Area Conversion\n 3.Volume Conversion\n 4.Speed Conversion\n 5.Weight Conversion\n 6.Temperature Conversion \n 7.Back to main menu");
printf ("\n 'Press key according'\n");
printf(" ");
scanf("%d",&a);
switch(a){
case 1:
F:
printf(" Which type of length conversion would you like to perform:\n");
printf("\n 1. m to cm\n 2. cm to m\n 3. m to mm\n 4. mm to m\n 5. cm to mm\n 6. mm to cm\n 7. km to m\n 8. m to km\n 9. km to cm\n 10. cm to km\n 11. Back to main menu\n");
printf(" ");
scanf("%d",&n);
switch(n){
case 1:
printf(" Enter the length in m:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fcm\n",b*100);
goto F;
break;
case 2:
printf(" Enter the length in cm:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fm\n",b/100);
goto F;
break;
case 3:
printf(" Enter the length in m:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fmm\n",b*1000);
goto F;
break;
case 4:
printf(" Enter the length in mm:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fm\n",b/1000);
goto F;
break;
case 5:
printf(" Enter the length in cm:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fmm\n",b*10);
goto F;
break;
case 6:
printf(" Enter the length in mm:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fcm\n",b/10);
goto F;
break;
case 7:
printf(" Enter the length in km:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fm\n",b*1000);
goto F;
break;
case 8:
printf(" Enter the length in m:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fkm\n",b/1000);
goto F;
break;


case 9:
printf(" Enter the length in km:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fcm\n",b*10000);
goto F;
break;
case 10:
printf(" Enter the length in cm:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fkm\n",b/10000);
goto F;
break;
case 11:
goto E;
break;
default:
printf("Invalid option");

}
break;
case 2:
G:
printf("\n Which type of area conversion would you like to perform:\n");
printf("\n\n 1. m^2 to cm^2\n 2. cm^2 to m^2\n 3. m^2 to mm^2\n 4. mm^2 to m^2\n 5. cm^2 to mm^2\n 6. mm^2 to cm^2\n 7. km^2 to m^2\n 8. m^2 to km^2\n 9. km^2 to cm^2\n 10. cm^2 to km^2\n 11. Back to main menu\n");
printf(" ");
scanf("%d",&n);
switch(n){
case 1:
printf(" Enter the area in m:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fcm\n",b*100*100);
goto G;
break;
case 2:
printf(" Enter the area in cm:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fm\n",b/(100*100));
goto G;
break;
case 3:
printf(" Enter the area in m:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fmm\n",b*1000*1000);
goto G;
break;
case 4:
printf(" Enter the area in mm:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fm\n",b/(1000*1000));
goto G;
break;
case 5:
printf(" Enter the area in cm:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fmm\n",b*10*10);
goto G;
break;
case 6:
printf(" Enter the area in mm:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fcm\n",b/(10*10));
goto G;
break;
case 7:
printf(" Enter the area in km:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fm\n",b*1000*1000);
goto G;
break;
case 8:
printf(" Enter the area in m:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fkm\n",b/(1000*1000));
goto G;
break;
case 9:
printf(" Enter the area in km:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fcm\n",b*10000*10000);
goto G;
break;
case 10:
printf(" Enter the length in cm:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fkm\n",b/(10000*10000));
goto G;
break;
case 11:
goto E;

break;
default:
printf("Invalid option");

}
break;
case 3:
H:
printf("\n Which type of volume conversion would you like to perform:\n");
printf("\n\n 1. m^3 to cm^3\n 2. cm^3 to m^3\n 3. m^3 to mm^3\n 4. mm^3 to m^3\n 5. cm^3 to mm^3\n 6. mm^3 to cm^3\n 7. km^3 to m^3\n 8. m^3 to km^3\n 9. km^3 to cm^3\n 10. cm^3 to km^3\n 11. Back to main menu\n");
printf(" ");
scanf("%d",&n);
switch(n){
case 1:
printf(" Enter the volume in m:\n");
printf(" ");
scanf("%ld",&g);
printf("\n Answer=%ldcm\n",g*100*100*100);
goto H;
break;
case 2:
printf(" Enter the volume in cm:\n");
printf(" ");
scanf("%ld",&g);
printf("\n Answer=%ldm\n",g/(100*100*100));
goto H;
break;
case 3:
printf(" Enter the volume in m:\n");
printf(" ");
scanf("%ld",&g);
printf("\n Answer=%ldmm\n",g*1000*1000*1000);
goto H;
break;
case 4:
printf(" Enter the volume in mm:\n");
printf(" ");
scanf("%ld",&g);
printf("\n Answer=%ldm\n",g/(1000*1000*1000));
goto H;
break;
case 5:
printf(" Enter the volume in cm:\n");
printf(" ");
scanf("%ld",&g);
printf("\n Answer=%ldmm\n",g*10*10*10);
goto H;
break;
case 6:
printf(" Enter the volume in mm:\n");
printf(" ");
scanf("%ld",&g);
printf("\n Answer=%ldcm\n",g/(10*10*10));
goto H;
break;
case 7:
printf(" Enter the volume in km:\n");
printf(" ");
scanf("%ld",&g);
printf("\n Answer=%ldm\n",g*1000*1000*1000);
goto H;
break;
case 8:
printf(" Enter the volume in m:\n");
printf(" ");
scanf("%ld",&g);
printf("\n Answer=%ldkm\n",g/(1000*1000*1000));
goto H;
break;
case 9:
printf(" Enter the volume in km:\n");
printf(" ");
scanf("%ld",&g);
printf("\n Answer=%ldcm\n",g*10000*10000*10000);
goto H;
break;
case 10:
printf(" Enter the length in cm:\n");
printf(" ");
scanf("%ld",&g);
printf("\n Answer=%ldkm\n",g/(10000*10000*10000));
goto H;
break;
case 11:
goto E;

break;
default:
printf("Invalid option");
goto H;
}
break;
case 4:

I:
printf(" Which type of speed conversion would you like to perform:\n");
printf("\n 1. km/h to m/s\n 2. m/s to km/h\n 3. mile/h to m/s\n 4. m/s to mile/h\n 5. m/s to cm/s\n 6. cm/s to m/s\n 7. Back to main menu\n");
printf(" ");
scanf("%d",&n);
switch(n){
case 1:
printf(" Enter the speed in km/h:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fm/s\n",b*(5/18));
goto I;
break;
case 2:
printf(" Enter the speed in m/s:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fkm/h\n",b*(18/5));
goto I;
break;
case 3:
printf(" Enter the speed in mile/h:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fm/s\n",b/2.237);
goto I;
break;
case 4:
printf(" Enter the speed in m/s:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fmile/h\n",b*2.237);
goto I;
break;
case 5:
printf(" Enter the speed in m/s:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fcm/s\n",b*100);
goto I;
break;
case 6:
printf(" Enter the speed in cm/s:\n");
printf(" ");
scanf("%f",&b);
printf("\n Answer=%fm/s\n",b/100);
goto I;
break;
case 7:
goto E;
break;
default:
printf("Invalid option");
