/*
 * $Id: wmstickynotes.h 22 2015-06-04 20:18:25Z hnc $
 *
 * Copyright (C) 2009 Heath Caldwell <hncaldwell@gmail.com>
 *
 */

#ifndef WMSTICKYNOTES_H
#define WMSTICKYNOTES_H

typedef struct {
	char *name;
	char *top;
	char *background;
        char *text;
} ColorScheme;

typedef struct {
	long int id;
	int x;
	int y;
	int width;
	int height;
	int workspace;
	ColorScheme *scheme;
	GtkWidget *window;
	GtkWidget *text_widget;
	GtkWidget *top_bar_box;
	GtkWidget *delete_button_box;
	GtkWidget *resize_button_box;
} Note;

/* The default directory under $HOME in which to store notes */
const char *default_wmstickynotes_dir = ".wmstickynotes";

const num_color_schemes = 19;
ColorScheme color_schemes[] = {
    {"Yello/Purple",	"#ffff00",	"#ffff88", "#4b0082"},
    {"Yello/Black",	"#ffff00",	"#ffff88", "#000000"},

    {"Green/Red",	"#66ff00",	"#d0f0c0", "#ff0000"},
    {"Green/White",	"#66ff00",	"#008a00", "#ffffff"},

    {"Orange/Purple",	"#ff7f00",	"#ffe5b4", "#4b0082"},
    {"Orange/Black",	"#ff7f00",	"#ffe5b4", "#000000"},

    {"Pink/Brown",	"#ff007f",	"#ffc0cb", "#964b00"},
    {"Pink/Black",	"#ff007f",	"#ffc0cb", "#000000"},

    {"Blue/Yellow",	"#ccccff",	"#0000ff", "#ffee31"},
    {"Blue/White",	"#ccccff",	"#0000ff", "#ffffff"},

    {"Purple/Orange",	"#c8a2c8",	"#4b0082", "#ff7f00"},
    {"Purple/White",	"#4b0082",	"#c8a2c8", "#ffffff"},

    {"Brown/Pink",	"#964b00",	"#f0dc82", "#ff007f"},
    {"Brown/Black",	"#964b00",	"#f0dc82", "#000000"},

    {"White/Blue",	"#aaaaaa",	"#ffffff", "#0000ff"},
    {"White/Black",	"#aaaaaa",	"#ffffff", "#000000"},
    {"White/Green",     "#aaaaaa",	"#ffffff", "#008a00"},

    {"Black/Green",     "#aaaaaa",	"#000000", "#66ff00"},
    {"Black/White",	"#aaaaaa",	"#000000", "#ffffff"}
};

void delete_note(GtkWidget *widget, Note *note);
void save_note(GtkWidget *widget, Note *note);
gboolean note_configure_event(GtkWidget *window, GdkEventConfigure *event, Note *note);
void bar_pressed(GtkWidget *widget, GdkEventButton *event, Note *note);
void resize_button_pressed(GtkWidget *widget, GdkEventButton *event, Note *note);
void delete_button_pressed(GtkWidget *widget, GdkEventButton *event, GtkWidget *window);
void create_note(Note *old_note, ColorScheme *scheme);
void new_note_from_menu(GtkMenuItem *menuitem, ColorScheme *scheme);
void read_old_notes();
void populate_note_popup(GtkTextView *entry, GtkMenu *menu, Note *note);
void set_current_note_color(GtkMenuItem *menuitem, ColorScheme *scheme);
void set_note_color(Note *note, ColorScheme *scheme);
void main_button_pressed(GtkWidget *widget, GdkEventButton *event, gpointer user_data);
void usage();

#endif /* WMSTICKYNOTES_H */
