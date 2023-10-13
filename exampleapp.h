#ifndef _EXAMPLEAPP_H
#define _EXAMPLEAPP_H

#include <gtk/gtk.h>

G_DECLARE_FINAL_TYPE(ExampleApp, example_app, EXAMPLE, APP, GtkApplication)

ExampleApp *example_app_new (void);

#endif
