#include <stdio.h>
#include "cJSON.h"

int main(void)
{
    FILE *fp = NULL;
    char buff[255];

    fp = fopen("./1.json", "r");

    fgets(buff, 255, (FILE *)fp);
    cJSON *json = cJSON_Parse(buff);
    char *json_data = NULL;
    // printf("%s\n",json_data = cJSON_Print(json));
    puts(json_data = cJSON_Print(buff));

    free(json_data);
    //将JSON结构所占用的数据空间释放
    cJSON_Delete(json);

    return 0;
}