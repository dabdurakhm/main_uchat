#include "cJSON.h"
#include "my_json.h"    //тут должен быть наш общий header...


char *jsn_empty_private_message() {
    cJSON *object = NULL;
    char *str = NULL;   //вывод

    object = cJSON_CreateObject(); //создается объект object
    cJSON_AddStringToObject(object, "type", "private_message"); //создается ключ "type" и значение "private_message" в объекте object
    cJSON_AddStringToObject(object, "user1_id", "none");  //создается ключ "user1_id" и значение "none" в объекте "none"
    cJSON_AddStringToObject(object, "user2_id", "none");   //создается ключ "user2_id" и значение "none" в объекте object
    cJSON_AddStringToObject(object, "message", "none");   //создается ключ "message" и значение "none" в объекте object
    cJSON_AddStringToObject(object, "message_sent_at", "none");   //создается ключ "message_sent_at" и значение "none" в объекте object

    cJSON_AddStringToObject(object, "additional_field", "none");    //создается ключ "additional_field" и значение "none" в объекте object

    str = cJSON_Print(object);    //конвертирую json в строку
    cJSON_Delete(object);     //удаляю объект user, содержащий свои ключи - значения
    return str;
}
