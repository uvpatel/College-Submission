#include <gtk/gtk.h>
#include <stdio.h>

// Callback function when button is clicked
static void on_button_clicked(GtkWidget *widget, gpointer data)
{
    g_print("Hello, World!\n");
}

int main(int argc, char *argv[])
{
    GtkWidget *window;
    GtkWidget *button;

    // Initialize GTK
    gtk_init(&argc, &argv);

    // Create a new window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "C GUI Example - GTK");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 200);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);

    // Connect the destroy event to exit the app
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Create a new button with label
    button = gtk_button_new_with_label("Click Me!");

    // Connect button click to callback function
    g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), NULL);

    // Add the button to the window
    gtk_container_add(GTK_CONTAINER(window), button);

    // Show all widgets
    gtk_widget_show_all(window);

    // Run the GTK main loop
    gtk_main();

    return 0;
}
