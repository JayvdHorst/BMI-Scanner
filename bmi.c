#include<stdio.h>;

void main()
{
        float w,h,bmi;

    printf("Vul gewicht in KG:");
    scanf("%f", &w );
    printf("Vul lengte in meters:");
    scanf("%f", &h );

    bmi=w/(h*h);

    printf("bmi: %f \n",bmi );
    bmi<18.5?printf("Ondergewicht, Je eet iets te weinig, eet wat meer!"):
        (bmi<25)?printf("Normaal Gewicht, U good son"):
            (bmi<30)?printf("Overgewicht, nog geen probleem, iets over gewicht"):
                (bmi<40)?printf("obesitas, kijk uit dat je niet te veel eet!"):
                    printf("Zwaarlijvigheid, ik raad je aan wat aan je gewicht te doen");
}
