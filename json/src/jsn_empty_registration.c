#include "cJSON.h"
#include "my_json.h"    //тут должен быть наш общий header...
 
 /*создается пустой json (при регистрации user-а)*/
char *jsn_empty_registration() {    //добавьте этот прототип в общий header!!!
    cJSON *user = NULL; 
    char *str = NULL;    //вывод

    user = cJSON_CreateObject();    //создается объект user
    cJSON_AddStringToObject(user, "type", "registration");  //создается ключ "type" и значение "registration" в объекте user
    cJSON_AddStringToObject(user, "user_id", "none");       //создается ключ "user_id" и значение "none" в объекте user
    cJSON_AddStringToObject(user, "user_first_name", "none");    //создается ключ "user_first_name" и значение "none" в объекте user
    cJSON_AddStringToObject(user, "user_last_name", "none");//создается ключ "user_last_name" и значение "none" в объекте user
    cJSON_AddStringToObject(user, "user_login", "none");      //создается ключ "user_login" и значение "none" в объекте user
    cJSON_AddStringToObject(user, "user_password", "none");          //создается ключ "user_password" и значение "none" в объекте user
    cJSON_AddStringToObject(user, "user_email", "none");    //создается ключ "user_email" и значение "none" в объекте user
    cJSON_AddStringToObject(user, "user_phone_number", "none");//создается ключ "user_phone_number" и значение "none" в объекте user

    str = cJSON_Print(user);    //конвертирую json в строку
    cJSON_Delete(user);     //удаляю объект user, содержащий свои ключи - значения
    return str;
}
