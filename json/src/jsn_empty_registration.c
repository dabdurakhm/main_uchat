#include "cJSON.h"
#include "my_json.h"    //тут должен быть наш общий header...
 
 /*создается пустой json (при регистрации user-а)*/
char *jsn_empty_registration() {    //добавьте этот прототип в общий header!!!
    cJSON *object = NULL; 
    char *str = NULL;    //вывод

    object = cJSON_CreateObject();    //создается объект user
    cJSON_AddStringToObject(object, "type", "registration");  //создается ключ "type" и значение "registration" в объекте object
    cJSON_AddStringToObject(object, "user_id", "none");       //создается ключ "user_id" и значение "none" в объекте object
    cJSON_AddStringToObject(object, "user_first_name", "none");    //создается ключ "user_first_name" и значение "none" в объекте object
    cJSON_AddStringToObject(object, "user_last_name", "none");//создается ключ "user_last_name" и значение "none" в объекте object
    cJSON_AddStringToObject(object, "user_login", "none");      //создается ключ "user_login" и значение "none" в объекте object
    cJSON_AddStringToObject(object, "user_password", "none");          //создается ключ "user_password" и значение "none" в объекте object
    cJSON_AddStringToObject(object, "user_email", "none");    //создается ключ "user_email" и значение "none" в объекте object
    cJSON_AddStringToObject(object, "user_phone_number", "none");//создается ключ "user_phone_number" и значение "none" в объекте object
    cJSON_AddStringToObject(object, "registration_time", "none"); //создается ключ "registration_time" и значение "none" в объекте object
    
    cJSON_AddStringToObject(object, "additional_field", "none"); //создается ключ "additional_field" и значение "none" в объекте object
    
    str = cJSON_Print(object);    //конвертирую json в строку
    cJSON_Delete(object);     //удаляю объект user, содержащий свои ключи - значения
    return str;
}
