#include <stdio.h>



char task1(int pack_height , int pack_width , int pack_length , int box_height , int box_width , int box_length)
{char ans ;
    // Your Code for task 1 starts here
 int box_v=box_height*box_length*box_width;
 int pack_v=pack_height*pack_length*pack_width;
 
 if ((pack_height>0) && (box_height>0) && (pack_width>0) && (pack_length>0) && (box_length>0) && (box_width>0) && pack_v>0 && box_v>0  && ( box_height*box_height+ box_width*box_width+box_length*box_length>=
 pack_height*pack_height+ pack_width*pack_width  + pack_length*pack_length ) && (box_height>=pack_length) && (box_width>=pack_height) && (box_v%pack_v==0 ) )

     {
	 ans= 'y' ;}
 else 
{ ans='n';}

    return ans;
	}
    
   
    // Your Code for task 1 ends here


int task2(int pack_height , int pack_width , int pack_length , int box_height , int box_width , int box_length)
{   int ans;
//   Your Code for task 2 starts here
  
    int box_v= box_height* box_width * box_length ;
    int pack_v = pack_height * pack_width *pack_length ;
 
        if ((box_height>=pack_height) && (box_length>=pack_length) && (box_width>=pack_width)
		 &&(box_v>0) && (box_v%pack_v==0))
    ans=box_v/pack_v ; 
	else{
	ans=0 ; }
	return ans;
   
    

    // Your Code for task 2 ends here
}

void test1(int arr[][7] , int size)
{
     printf("\n\nTask 1 Results\n\n");
    int passed = 0;
    int failed = 0;
    char val;
    for(int i = 0 ; i < size ; i++)
    {
        val = task1(arr[i][0] ,arr[i][1] , arr[i][2] , arr[i][3] , arr[i][4] , arr[i][5]);
        if((val == 'y' && arr[i][6] == 1) || (val == 'n' && arr[i][6] == 0))
            passed++;
        else
        {
            failed++;
            printf("Test Failed\n" ) ;
            printf ("%s %d %s %d %s %d" ,"Pack Height =" , arr[i][0] , "\tPack Width =" , arr[i][1] , "\tPack Length =" , arr[i][2]) ;
            printf( "\n" );
            printf ("%s %d %s %d %s %d" , "Box Height = " , arr[i][3] , "\tBox Width = " , arr[i][4] , "\tBox Length = " , arr[i][5] );

            if(arr[i][6])
            {

                 printf( "\nExpected == y " );
                 printf( "\nResult == n " );
               
            }
            else
            {
                     printf( "\nExpected == n " );
                 printf( "\nResult == y " );
            }
              printf( "\n\n\n" );
                 
        }
    }
    printf( "\n\n\n" );
    printf("%s %d","Total Passed: ", passed );
    printf( "\n" );
    printf("%s %d","Total Failed: ", failed );
    printf( "\n" );
   
    printf( "-----------------------------------------------------------------------------------------------------------------\n");
}

void test2(int arr[][7] , int size)
{
    printf( "\n\nTask 2 Results\n\n");
    int passed = 0;
    int failed = 0;
    int val;
    for(int i = 0 ; i < size ; i++)
    {
        val = task2(arr[i][0] ,arr[i][1] , arr[i][2] , arr[i][3] , arr[i][4] , arr[i][5]);
        if(val == arr[i][6])
            passed++;
        else
        {
            failed++;
            printf("Test Failed\n") ;
            printf ("%s %d %s %d %s %d" , "Pack Height =", arr[i][0] , "\tPack Width =" , arr[i][1] , "\tPack Length =" ,arr[i][2] );
            printf ("%s %d %s %d %s %d" ,"\nBox Height = " , arr[i][3] , "\tBox Width = " , arr[i][4] , "\tBox Length = " , arr[i][5] );
            printf("%s %d", "\nExpected = " , arr[i][6]);
            printf("%s %d","Result : ", val );
            printf( "\n\n\n" );
        }
    }


    printf( "\n\n\n" );
    printf("%s %d","Total Passed: ", passed );
    printf( "\n" );
    printf("%s %d","Total Failed: ", failed );
    printf( "\n" );
    printf( "-----------------------------------------------------------------------------------------------------------------\n");


  
}

int main()
{
    int arr1[][7] ={{0,0,0,0,0,0,0},
                    {1,1,1,1,1,1,1},
                    {-1,1,1,1,1,1,0},
                    {1,1,1,-1,1,1,0},
                    {2,2,2,8,8,8,1},
                    {4,3,4,16,12,20,1},
                    {6,5,8,20,24,16,1},
                    {7,5,11,500,110,1400,1},
                    {3,5,20,16,16,600,0},
                    {3,5,7,21,30,75,1}};
    int arr2[][7] ={{0,0,0,0,0,0,0},
                    {1,1,1,1,1,1,1},
                    {-1,-1,-1,-1,-1,-1,0},
                    {2,2,2,8,8,8,64},
                    {4,3,4,16,12,20,80},
                    {12,10,16,40,24,32,16},
                    {7,5,11,500,111,1400,0},
                    {3,10,10,40,30,40,160},
                    {3,5,7,21,30,75,450}};
    test1(arr1,10);
   test2(arr2,10);
    return 0;
}