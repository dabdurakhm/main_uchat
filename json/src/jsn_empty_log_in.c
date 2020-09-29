#include "cJSON.h"
#include "my_json.h"

/*создается пустой json (при входе user-а)*/
char *jsn_empty_log_in() {  //добавьте этот прототип в общий header!!!
    cJSON *object = NULL;
    char *str = NULL;   //вывод

    object = cJSON_CreateObject(); //создается объект object
    cJSON_AddStringToObject(object, "type", "log_in"); //создается ключ "type" и значение "log_in" в объекте object
    cJSON_AddStringToObject(object, "user_login", "none");  //создается ключ "user_login" и значение "none" в объекте object
    cJSON_AddStringToObject(object, "user_password", "none");   //создается ключ "user_password" и значение "none" в объекте object
    cJSON_AddStringToObject(object, "additional_field", "none");    //создается ключ "additional_field" и значение "none" в объекте object

    str = cJSON_Print(object);  //конвертирую json в строку
    cJSON_Delete(object);   //удаляю объект user, содержащий свои ключи - значения
    return str;
}
