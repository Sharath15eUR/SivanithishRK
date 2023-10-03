Write a C Program to reverse a given word using function. e.g. INDIA should be printed as AIDNI

        #include<stdio.h>
        #include<string.h>

        void reverse(char[], int, int);
        int main()
        {
        char str1[20];
        scanf("%s", str1); //The string is taken as input form the test data. 
     
        /* Complete the program to print the string in reverse order using the function
        void reverse(char[], int, int);
        Use the printf statement as
        printf("The string after reversing is: %s\n", str1); 
        You can use different variable also.
        */
        printf("The string after reversing is: "); 
        reverse(str1,0,strlen(str1));
        }

        void reverse(char str[],int a,int l)
        {
           char ch=str[a];
           if(a==l)
           return;
           else 
           reverse(str,++a,l);
           printf("%c",ch);
        }


 ![image](https://github.com/Sharath15eUR/SivanithishRK/assets/79641980/d04f7887-0379-49b2-a659-6226ce3fe707)
