#ifndef _EXAMPLEAPPWIN_H
#define _EXAMPLEAPPWIN_H

#include <gtk/gtk.h>
#include "exampleappwin.h"

G_DECLARE_FINAL_TYPE(ExampleAppWindow, example_app_window, EXAMPLE, APP_WINDOW, GtkApplicationWindow)

ExampleAppWindow *example_app_window_new (ExampleApp *app);
void              example_app_window_open (ExampleAppWindow *win, GFile *file);


#endif
