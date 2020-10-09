#include <gtk/gtk.h>
#include <stdio.h>

GtkWidget *window;
GtkWidget *login_butoon;
GtkBuilder *builder;

int main () {
    gtk_init(NULL, NULL);
    builder = gtk_builder_new();
    builder = gtk_builder_new_from_file("../jjj.glade");
    window = GTK_WIDGET(gtk_builder_get_object(builder, "window"));
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    gtk_builder_connect_signals(builder, NULL);
    login_butoon = GTK_WIDGET(gtk_builder_get_object(builder, "login_butoon"));
    gtk_widget_show(window);
    gtk_main();
}

void on_login_butoon_clicked() {
    printf("Hello world!");
    exit (0);
}
