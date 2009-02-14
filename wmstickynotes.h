/*
 * $Id: $
 *
 * Heath Caldwell <hncaldwell@gmail.com>
 *
 */

#ifndef WMSTICKYNOTES_H
#define WMSTICKYNOTES_H

typedef struct {
	char *name;
	char *top;
	char *background;
} ColorScheme;

typedef struct {
	long int id;
	int x;
	int y;
	int width;
	int height;
	int color;
	GtkWidget *window;
	GtkTextBuffer *text_buffer;
} Note;

ColorScheme color_schemes[] = {
	{"yellow",	"#ffff00",	"#ffff88"},
	{"green",	"#66ff00",	"#d0f0c0"},
	{"orange",	"#ff7f00",	"#ffe5b4"},
	{"red",		"#ff007f",	"#ffc0cb"},
	{"blue",	"#0000ff",	"#ccccff"},
	{"white",	"#aaaaaa",	"#ffffff"}};


void delete_note(GtkWidget *widget, Note *note);
void save_note(GtkWidget *widget, Note *note);
gboolean note_configure_event(GtkWidget *window, GdkEventConfigure *event, Note *note);
void bar_pressed(GtkWidget *widget, GdkEventButton *event, Note *note);
void resize_button_pressed(GtkWidget *widget, GdkEventButton *event, Note *note);
void delete_button_pressed(GtkWidget *widget, GdkEventButton *event, GtkWidget *window);
void create_note(Note *old_note, int color);
void new_note_button_clicked(GtkButton *button, char *color);
void read_old_notes();

#endif /* WMSTICKYNOTES_H */
