
    #include <stdio.h>
    int binary_conversion(int); //function to convert binary to decimal number
    int main()
    {
    int num, bin;  
    scanf("%d", &num); 
    bin = binary_conversion(num); //binary number is stored in variable bin
    printf("The binary equivalent of %d is %d\n", num, bin);
    return 0;
    }
    int binary_conversion(int a)
    {
    if(a!=0)
    return (10*binary_conversion(a/2)+(a%2));
    else return 0;

    }


  ![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/07f89517-a350-4783-928c-eaa57688dca7)



