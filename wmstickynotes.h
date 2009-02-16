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
	GtkWidget *text_widget;
	GtkWidget *top_bar_box;
	GtkWidget *delete_button_box;
	GtkWidget *resize_button_box;
} Note;

ColorScheme color_schemes[] = {
	{"Yellow",	"#ffff00",	"#ffff88"},
	{"Green",	"#66ff00",	"#d0f0c0"},
	{"Orange",	"#ff7f00",	"#ffe5b4"},
	{"Red",		"#ff007f",	"#ffc0cb"},
	{"Blue",	"#0000ff",	"#ccccff"},
	{"White",	"#aaaaaa",	"#ffffff"}};


void delete_note(GtkWidget *widget, Note *note);
void save_note(GtkWidget *widget, Note *note);
gboolean note_configure_event(GtkWidget *window, GdkEventConfigure *event, Note *note);
void bar_pressed(GtkWidget *widget, GdkEventButton *event, Note *note);
void resize_button_pressed(GtkWidget *widget, GdkEventButton *event, Note *note);
void delete_button_pressed(GtkWidget *widget, GdkEventButton *event, GtkWidget *window);
void create_note(Note *old_note, int color);
void new_note_button_clicked(GtkButton *button, gpointer color);
void read_old_notes();
void populate_note_popup(GtkTextView *entry, GtkMenu *menu, Note *note);
void set_current_note_color(GtkMenuItem *menuitem, gpointer color);
void set_note_color(Note *note, int color);

#endif /* WMSTICKYNOTES_H */
