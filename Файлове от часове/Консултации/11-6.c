#include <stdio.h>
#include <string.h>

void fill_matrix_segment(int rows, int columns, char matrix[][columns], int start_x, int start_y, int end_x, int end_y, char symbol)
{
    for(int y=start_y; y<end_y+1; y++)
    {
        for(int x=start_x; x<end_x+1; x++)
        {
            matrix[y][x] = symbol;
        }
    }
}

void copy_to_matrix_segment(int rows, int columns, char matrix[][columns], int start_x, int start_y, int end_x, int end_y, char* str, int len)
{
    int counter=0;
    for(int y=start_y; y<end_y+1; y++)
    {
        for(int x=start_x; x<end_x+1; x++)
        {
            if(counter>strlen(str)-1)continue;
            matrix[y][x] = *(str+counter);
            counter++;
        }
    }
}

void print_crossword(int columns, int rows, char matrix[][columns] )
{
    for(int i=0; i<columns*2; i++){printf("-");}
    printf("\n");
    
    for(int y=0; y<rows; y++)
    {
        for(int x=0; x<columns; x++)
        {
            printf("|%c", matrix[y][x]);
        }
        printf("|\n");
    }
    for(int i=0; i<columns*2; i++){printf("-");}
    printf("\n");
}

void ready_crossword(int rows, int columns, char crossword[][columns])
{
    fill_matrix_segment(rows,columns,crossword, 0,0, 9,9, ' ');
    
    fill_matrix_segment(rows,columns,crossword, 3,0, 3,5, '1');
    fill_matrix_segment(rows,columns,crossword, 0,2, 5,2, '2');
    fill_matrix_segment(rows,columns,crossword, 2,4, 7,4, '4');
    fill_matrix_segment(rows,columns,crossword, 7,2, 7,9, '3');
    fill_matrix_segment(rows,columns,crossword, 0,7, 9,7, '5');
    fill_matrix_segment(rows,columns,crossword, 2,7, 2,9, '6');
}

void print_tooltips()
{
    printf("1.A sport you play in an ice ring.- 6 letters\n");
    printf("2.You kick a white and black ball.- 6 letters\n");
    printf("3.You need a glove and a bat.- 8 letters\n");
    printf("4.You need a racket and a net.- 6 letters\n");
    printf("5.You throw a ball in a basket.- 10 letters\n");
    printf("6.A winter sport.- 3 letters\n");
    printf("7.Exit\n");
}

int main()
{
    char crossword[10][10];
    ready_crossword(10, 10, crossword);
    
    int start_x, start_y, end_x, end_y,choice,word_len =0;
    char word[11];
    
    while(1)
    {   
        print_crossword(10,10,crossword);
        print_tooltips();
        printf("\nWich word are you entering: ");
        scanf("%d", &choice);
        getchar();
        
        switch(choice)
        {
            case 1: start_x = 3; start_y = 0; end_x = 3; end_y = 5; word_len = 6; break;
            case 2: start_x = 0; start_y = 2; end_x = 5; end_y = 2; word_len = 6; break;
            case 3: start_x = 7; start_y = 2; end_x = 7; end_y = 9; word_len = 8; break;
            case 4: start_x = 2; start_y = 4; end_x = 7; end_y = 4; word_len = 6; break;
            case 5: start_x = 0; start_y = 7; end_x = 9; end_y = 7; word_len = 10;break;
            case 6: start_x = 2; start_y = 7; end_x = 2; end_y = 9; word_len = 3; break;
            case 7: return 0;
            
            default: printf("No such case\n");continue;
        }
        printf("Enter word: ");
        fgets(word, 11, stdin);
        word[strcspn(word, "\n")] = '\0';
        
        copy_to_matrix_segment(10,10,crossword, start_x,start_y, end_x,end_y, word,word_len) ;
    }
    
    return 0;
}