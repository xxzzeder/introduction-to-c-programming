#include <stdio.h>
struct book {
    char title[20];
    char author[20];
    int publication_year;
    char ISBN[15];
    float price;
};
int main() {
    struct book  mybook = { "Introduction to C Programming",
        "Ian Njunge",
        2024,
        "9780131103627",
        49.99
    };
            printf("Book Details:\n");
    printf("Title: %s\n", mybook.title);
     printf("Author: %s\n", mybook.author);
      printf("Publication Year: %d\n", mybook.publication_year);
       printf("ISBN: %s\n", mybook.ISBN);
         printf("Price: $%.2f\n", mybook.price);
printf("\nEnter book details:\n");
    printf("Enter title: ");
    scanf(" %[^\n]s", mybook.title);
    printf("Enter author: ");
    scanf(" %[^\n]s", mybook.author);
    printf("Enter publication year: ");
    scanf("%d", &mybook.publication_year);
    printf("Enter ISBN: ");
    scanf("%s", mybook.ISBN);
    printf("Enter price: ");
    scanf("%f", &mybook.price);
      printf("\nUser Entered Book Details:\n");
    printf("Title: %s\n", mybook.title);
    printf("Author: %s\n", mybook.author);
    printf("Publication Year: %d\n", mybook.publication_year);
    printf("ISBN: %s\n", mybook.ISBN);
    printf("Price: $%.2f\n", mybook.price);

    return 0;
}