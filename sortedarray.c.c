#include<stdio.h>

void Bubblesort(int arr[], int n)
{
  int i , j , temp;
     for (i = 0; i<n-1; i++)
     {
       for (j = 0; j<n-i-1; j++)
         {
           if(arr[j]>arr[j+1])
            {
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j=1] = temp;
            } 
         }
      }
}
void selectionSort(int arr[], int n)
{
    int i, j, minIndex, temp;
    for(i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void display(int arr[], int n)
{
    int i;
    printf("Sorted Array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main()
{
    int arr[100], n, choice, i;

    do
    {
        printf("\n---- MENU ----\n");
        printf("1. Exit\n");
        printf("2. Bubble Sort\n");
        printf("3. Selection Sort\n");
        printf("4. Insertion Sort\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 3)
        {
            printf("Enter number of elements: ");
            scanf("%d", &n);

            printf("Enter %d elements:\n", n);
            for(i = 0; i < n; i++)
            {
                scanf("%d", &arr[i]);
            }

            switch(choice)
            {
                case 1:
                    bubbleSort(arr, n);
                    printf("\nBubble Sort \n");
                    display(arr, n);
                    break;

                case 2:
                    selectionSort(arr, n);
                    printf("\nSelection Sort \n");
                    display(arr, n);
                    break;

                case 3:
                    insertionSort(arr, n);
                    printf("\nInsertion Sort \n");
                    display(arr, n);
                    break;
            }
        }
        else if(choice == 4)
        {
            printf("Exiting Program...\n");
        }
        else
        {
            printf("Invalid Choice! \n");
        }

    } while(choice != 4);

    return 0;
}