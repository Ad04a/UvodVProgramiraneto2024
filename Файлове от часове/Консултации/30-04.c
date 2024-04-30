#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_ITEMS 6

/*Създаваме структура за Предмет*/
struct Item_struct
{
    unsigned int id;
    char name[30];
    unsigned int price;
};

/*Дефинираме тип за Предмет за да не се налага жсеки пут да писхем "struct item_struct", а просто да пишем Item*/
typedef struct Item_struct Item;


/*създаваме структура и дефинираме типа за нея едновременно */
typedef struct Player_struct
{
    int id;
    char name[20];
    Item inventory[MAX_ITEMS];

} Player;


Item createItem()
{
    static unsigned int currentId = 0; 
    //статик за да може всеки път като се създава инстанция да се вдига и така всяка да е с различени идентификатор
    Item item;

    item.id = currentId++;

    printf("Enter item(%d) name: ", item.id);
    fgets(item.name, sizeof(item.name), stdin);//взимаме входа от клавиатората
    item.name[strlen(item.name)-1] = '\0';//премахваме '\n', който идва от използването на fgets

    printf("Enter item(%d) price: ", item.id);
    scanf("%u", &item.price);//записваме цената
    getc(stdin);//премахваме '\n', който е останал в конзолата, защото scanf оставя whitespace в конзолата след използване

    return item;
}

Player createPlayer()
{
    Player p;
    p.id = 4;
    strcpy(p.name, "Player");
    for(int i=0; i<MAX_ITEMS; i++)
    {
        strcpy(p.inventory[i].name, "N/A");//копираме "N/A" и го пайстваме в p.inventory[i].name
        //правим това за да подсигурим, че всичките ни данни са с регулирано невалидни данни, а не случайни 
    }
    return p;
}


int getNumItems(Item* invetoryToUpdate)
{
    int numItems=0;
    //минаваме през виски предмети като броим всеки валиден предмет
    for(int i=0; i<MAX_ITEMS; i++)
    {
        
        if( strcmp(invetoryToUpdate[i].name, "N/A") == 0)//проверяваме дали invetoryToUpdate[i].name е равно на "N/A"
        //правим това за да можем да разграничим кога започват невалидни предмети
        {
            //прекъсваме проенето ако стигнем невалиден предмет
            break;
        }
        numItems++;
    }
    return numItems;
}

bool addItem(Item* invetoryToUpdate ,Item itemToAdd)
{
    int numItems = getNumItems(invetoryToUpdate);
    //ако имаме максималния брой предмети просто отказваме да добавим още
    if(numItems >= MAX_ITEMS)
    {
        return false;
    }
    //в случая боря предмети е индекса на който трябжа да запишем следващи1 предмет
    invetoryToUpdate[numItems] = itemToAdd;

    return true;
}

//pop в терминологията за работа със структури от данни се използва за премахване на следващия поред елемент
//в случая ние искаме да премахваме най-новия поставен предмет, тоест имплементираме стек
bool popItem(Item* invetoryToUpdate)
{
    int numItems = getNumItems(invetoryToUpdate);
    //ако нямаме предмети няма какво да махнем
    if(numItems <= 0)
    {
        return false;
    }
    //правим така че предмета който трябжа да се pop-не да се счита като невалиден
    strcpy(invetoryToUpdate[numItems-1].name, "N/A");
    return true;
}


void printItem(Item item)
{
    printf("Item(%d): %s - price: %d\n", item.id, item.name, item.price);
}

void printPlayer(Player p)
{
    printf("\nPlayer: %s\n", p.name);
    for(int i=0; i<MAX_ITEMS; i++)
    {
        //принтираме докато не срещнем невалиден предмет
        if( strcmp(p.inventory[i].name, "N/A") == 0)
        {
            break;
        }
        printItem(p.inventory[i]);
    }
}



int main()
{
    //създаваме си променливите
    Player p1 = createPlayer();
   
    Item IE = createItem();
    Item DB = createItem();
    Item BT = createItem();
    Item I4 = createItem();


    //-----------------------------------демонстрираме добаване на предмети-----------------------
    if(addItem(p1.inventory, IE) == false)
    {
        printf("Item(%u) could not be added\n", IE.id);
    }
    printPlayer(p1);


    if(addItem(p1.inventory, DB) == false)
    {
        printf("Item(%u) could not be added\n", DB.id);
    }
    addItem(p1.inventory, BT);
    printPlayer(p1);
    //-------------------------------------------------------------------------------------------


    //-------демонстрираме маханем на последните предмети и как си взаимодейства с добавянето----
    if(popItem(p1.inventory))
    {
        printf("Pop\n");
    }
    printPlayer(p1);
    

    if(addItem(p1.inventory, I4) == false)
    {
        printf("Item(%u) could not be added\n", DB.id);
    }
    printPlayer(p1);


    if(popItem(p1.inventory))
    {
        printf("Pop\n");
    }
    printPlayer(p1);


    if(popItem(p1.inventory))
    {
        printf("Pop\n");
    }
    printPlayer(p1);


    if(popItem(p1.inventory))
    {
        printf("Pop\n");
    }
    printPlayer(p1);
}

