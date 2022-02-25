# include <stdio.h>
int a = 1, choice,top_index = -1;
float arr[80];
void push(float x)
{
    if (top_index == (sizeof(arr)/sizeof(float))-1)
    {
        printf("Stack overflows");
    }
    else
    {
        top_index++ ;
        arr[top_index] = a;
        if (top_index == 0)
        {
            printf("Element in array is %0.2f",arr[0]);
        }
        else if (top_index>0)
        {
            printf("Elements in array are: ");
            for (int i=0; i<=top_index; i++)
            {
                printf("%0.f\t",arr[i]);
            }
        }
    }
}

void pop()
{
    if (top_index == -1)
    {
        printf("Stack underflows");
    }
    else
    {
        printf("Element popped out is: %0.2f",arr[top_index]);
        top_index--;
        if (top_index == 0)
        {
            printf("Element in array is %0.2f",arr[0]);
        }
        else if (top_index>0)
        {
            printf("Elements in array are: ");
            for (int i=0; i<=top_index; i++)
            {
                printf("%0.2f\t",arr[i]);
            }
        }
    }
}

void top()
{
    if (top_index == -1)
    {
        printf("The array is empty");
    }
    else
    {
        printf("Element in top is %0.2f",arr[top_index]);
    }
}

int main()
{

    float ele;
    while(1)
    {
        printf("Enter 1 for push, 2 for pop, 3 for top element, 4 for exit");
        scanf("%d",&choice);
        if (choice == 1)
        {
            printf("Enter element to be added: ");
            scanf("%f",&ele);
            push(ele);
        }
        else if (choice == 2)
        {
            pop();
        }
        else if (choice == 3)
        {
            top();
        }
        else if (choice == 4)
        {
            break;
        }
    }
    printf("Thank you");
    return 0;
}

