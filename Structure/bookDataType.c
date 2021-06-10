#include<stdio.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};

struct book input()
{
    struct book b;
    int c;
    printf("Enter bookid : ");
    scanf("%d",&b.bookid);
    //fflush(stdin);
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
    printf("Enter title of book : ");
    //fflush(stdin);
    //fgets(b.title,20,stdin);
    scanf("%[^\n]%*c",b.title);
    printf("Enter price of book : ");
    scanf("%f",&b.price);
    return b;
}

void output(struct book b)
{
    printf("BookID     TitleOfBook     Price \n");
    printf("%6.2d%19s%9.2f\n",b.bookid,b.title,b.price);
}

int main()
{
    struct book b1;
    b1=input();
    output(b1);
    return 0;
}