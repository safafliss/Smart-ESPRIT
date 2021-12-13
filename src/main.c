/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "interface.h"
#include "support.h"





int
main (int argc, char *argv[])
{
  GtkWidget *safaflissespacefoyer;
  GtkWidget *safaflissAjout;
  GtkWidget *safaflissModifier;
  GtkWidget *safaflissaffichage;
  GtkWidget *safaflissstatistique;
  GtkWidget *safaflissInscription;
  GtkWidget *safaflissauthentification;
  GtkWidget *monimage; 
#ifdef ENABLE_NLS
  bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
#endif

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  //add_pixmap_directory (PACKAGE_DATA_DIR "/" PACKAGE "/pixmaps");
  add_pixmap_directory ("../pixmaps");

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
  
  safaflissespacefoyer = create_safaflissespacefoyer ();
  gtk_widget_show (safaflissespacefoyer);


  monimage= gtk_image_new_from_file("./projet2/pixmaps/111 (1).png");
  gtk_widget_show(monimage);


  safaflissAjout = create_safaflissAjout ();
  //gtk_widget_show (safaflissAjout);
  safaflissModifier = create_safaflissModifier ();
  //gtk_widget_show (safaflissModifier);
  safaflissaffichage = create_safaflissaffichage ();
  //gtk_widget_show (safaflissaffichage);
  safaflissstatistique = create_safaflissstatistique ();
  //gtk_widget_show (safaflissstatistique);
  safaflissInscription = create_safaflissInscription ();
  //gtk_widget_show (safaflissInscription);
  safaflissauthentification = create_safaflissauthentification ();
  //gtk_widget_show (safaflissauthentification);




  gtk_main ();
  return 0;
}

