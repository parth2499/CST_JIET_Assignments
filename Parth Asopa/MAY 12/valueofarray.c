#include <stdio.h>
int main()
{
int MAX_SIZE=100, arr[MAX_SIZE], size, i, forsearch, found ;    
printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to search: ");
    scanf("%d", &forsearch);
    found = 0; 
    for(i=0; i<size; i++)
    {if(arr[i] == forsearch)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("\n%d is found at position %d", forsearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", forsearch);
    }
    return 0;
}
