/* variable statement*/
#define Size 10
typedef struct Table
{
    int *head;
    int length;
    int size;
} Table;

/* function statement*/
Table initTable();
void showTable(Table t);
Table insertTable(Table t, int elem, int addIndex);
Table deleteTable(Table t, int deleteIndex);
int selectTable(Table t, int elem);
Table updateTable(Table t, int elem, int updateElem);