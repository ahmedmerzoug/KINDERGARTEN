#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/socket.h>


#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#include "medecin.h"
#include "aide.h"
#include "classe.h"
#include "pannes.h"
#include "braclet.h"
#include "alerte.h"
#include "parent.h"
#include "enfant.h"
#include "camera.h"
#include "envoyer_parent.h"
#include "tech.h"



#include "enum.h"
#include "maitresse.h"
#include<string.h>
gboolean gb_radiobutton1=TRUE;
gboolean gb_radiobutton2=FALSE;

//////////////////////////////login ///////////
void
on_button1_clicked                     (GtkWidget   *objet_graphique, gpointer  user_data)
{
         GtkWidget *input;
         GtkWidget *input1;
         GtkWidget *output1;
          GtkWidget *output2;
           GtkLabel *label3;//étiquette d'avertissement initialment contenant rien (invisible)
int x=0 ;
         char username[20] ; char password[30]; 
         input=lookup_widget (objet_graphique,"entry1");         
         input1=lookup_widget (objet_graphique,"entry2");
        label3 = lookup_widget(objet_graphique, "label3");
        strcpy(username,gtk_entry_get_text (GTK_ENTRY(input)));
         strcpy(password,gtk_entry_get_text (GTK_ENTRY(input1)));
         x=validation_par_nom(username,password);
		if(x==1)

{

                GtkWidget *window2;
		GtkWidget *window1;
		window2 = create_window2();
		window1 = lookup_widget(objet_graphique, "window1");
		gtk_widget_show(window2);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window1);//on ferme la première fenêtre

}



else if(x==2) 
{
                GtkWidget *window13;
		GtkWidget *window1;
		window13 = create_window13();
		window1 = lookup_widget(objet_graphique, "window1");
		gtk_widget_show(window13);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window1);//on ferme la première fenêtre

}
else if(x==3) 
{
                GtkWidget *maitresse;
		GtkWidget *window1;
		maitresse = create_maitresse();
		window1 = lookup_widget(objet_graphique, "window1");
		gtk_widget_show(maitresse);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window1);//on ferme la première fenêtre

}
else if(x==4) 
{
                GtkWidget *parent;
		GtkWidget *window1;
		parent = create_parent();
		window1 = lookup_widget(objet_graphique, "window1");
		gtk_widget_show(parent);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window1);//on ferme la première fenêtre

}
	else 
	{
		gtk_label_set_markup (label3, "<b>Veuillez Réessayez! </b>");//au cas ou les données sont érronées on modifie le texte de l'étiquette d'avertissement (on a utilisé gtk_label_set_markup au lieu de gtk_label_set_text parceque cette dernière ne permet pas de modifier l'apparence du texte)
	}
}



////////////////////////////////////////////////gestion des fenetres /////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void
on_button2_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data) 
{
                GtkWidget *window2;
		GtkWidget *window3;
		window3 = create_window3();
		window2 = lookup_widget(objet_graphique, "window2");
		gtk_widget_show(window3);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window2);//on ferme la première fenêtre

}


void
on_button3_clicked                     (GtkWidget   *objet_graphique, gpointer  user_data)
{
                 GtkWidget *window2;
		GtkWidget *window4;
		window4 = create_window4();
		window2 = lookup_widget(objet_graphique, "window2");
		gtk_widget_show(window4);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window2);//on ferme la première fenêtre

}


void
on_button4_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window2;
		GtkWidget *window5;
		window5 = create_window5();
		window2 = lookup_widget(objet_graphique, "window2");
		gtk_widget_show(window5);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window2);//on ferme la première fenêtre

}


void
on_button26_clicked                   (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window5;
		GtkWidget *window6;
		window6 = create_window6();
		window5 = lookup_widget(objet_graphique, "window5");
		gtk_widget_show(window6);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window5);//on ferme la première fenêtre

}


void
on_button28_clicked                   (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window5;
		GtkWidget *window8;
		window8 = create_window8();
		window5 = lookup_widget(objet_graphique, "window5");
		gtk_widget_show(window8);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window5);//on ferme la première fenêtre
}


void
on_button27_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window5;
		GtkWidget *window7;
		window7 = create_window7();
		window5 = lookup_widget(objet_graphique, "window5");
		gtk_widget_show(window7);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window5);//on ferme la première fenêtre

}


void
on_button6_clicked                     (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window2;
		GtkWidget *window9;
		window9 = create_window9();
		window2 = lookup_widget(objet_graphique, "window2");
		gtk_widget_show(window9);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window2);//on ferme la première fenêtre
}


void
on_button5_clicked                     (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window2;
		GtkWidget *window10;
		window10 = create_window10();
		window2 = lookup_widget(objet_graphique, "window2");
		gtk_widget_show(window10);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window2);//on ferme la première fenêtre
}


void
on_button8_clicked                      (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window2;
		GtkWidget *window11;
		window11 = create_window11();
		window2 = lookup_widget(objet_graphique, "window2");
		gtk_widget_show(window11);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window2);//on ferme la première fenêtre

}


void
on_button77_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window2;
		GtkWidget *window10;
		window2 = create_window2();
		window10 = lookup_widget(objet_graphique, "window10");
		gtk_widget_show(window2);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window10);//on ferme la première fenêtre
}


void
on_button78_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
gtk_main_quit();//on ferme la fenêtre
}

void
on_button81_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window12;
		GtkWidget *window2;
		window2 = create_window2();
		window12 = lookup_widget(objet_graphique, "window12");
		gtk_widget_show(window2);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window12);//on ferme la première fenêtre
}


void
on_button83_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
gtk_main_quit();//on ferme la fenêtre
}


void
on_button7_clicked                     (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *window2;
		GtkWidget *window12;
		window12 = create_window12();
		window2 = lookup_widget(objet_graphique, "window2");
		gtk_widget_show(window12);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window2);//on ferme la première fenêtre
}


void
on_button80_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
gtk_main_quit();//on ferme la fenêtre
}


void
on_button79_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window2;
		GtkWidget *window11;
		window2 = create_window2();
		window11 = lookup_widget(objet_graphique, "window11");
		gtk_widget_show(window2);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window11);//on ferme la première fenêtre
}

void
on_button11_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window3;
		GtkWidget *window2;
		window2 = create_window2();
		window3 = lookup_widget(objet_graphique, "window3");
		gtk_widget_show(window2);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window3);//on ferme la première fenêtre
}


void
on_button19_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window4;
		GtkWidget *window2;
		window2 = create_window2();
		window4 = lookup_widget(objet_graphique, "window4");
		gtk_widget_show(window2);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window4);//on ferme la première fenêtre
}


void
on_button29_clicked       (GtkWidget   *objet_graphique, gpointer  user_data)             
{
                GtkWidget *window5;
		GtkWidget *window2;
		window2 = create_window2();
		window5 = lookup_widget(objet_graphique, "window5");
		gtk_widget_show(window2);//on affiche la prochaine fenêtre
                gtk_widget_destroy(window5);//on ferme la première fenêtre
}


void
on_button43_clicked                   (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window6;
		GtkWidget *window5;
		window5 = create_window5();
		window6 = lookup_widget(objet_graphique, "window6");
		gtk_widget_show(window5);//on affiche la prochaine fenêtre
                gtk_widget_destroy(window6);//on ferme la première fenêtre
}


void
on_button53_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window7;
		GtkWidget *window5;
		window5 = create_window5();
		window7 = lookup_widget(objet_graphique, "window7");
		gtk_widget_show(window5);//on affiche la prochaine fenêtre
                gtk_widget_destroy(window7);//on ferme la première fenêtre
}


void
on_button61_clicked                        (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window8;
		GtkWidget *window5;
		window5 = create_window5();
		window8 = lookup_widget(objet_graphique, "window8");
		gtk_widget_show(window5);//on affiche la prochaine fenêtre
                gtk_widget_destroy(window8);//on ferme la première fenêtre

}


void
on_button69_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
            GtkWidget *window9;
		GtkWidget *window2;
		window2 = create_window2();
		window9 = lookup_widget(objet_graphique, "window9");
		gtk_widget_show(window2);//on affiche la prochaine fenêtre
                gtk_widget_destroy(window9);//on ferme la première fenêtre
}


void
on_button91_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window13;
		GtkWidget *window15;
		window15 = create_window15();
		window13 = lookup_widget(objet_graphique, "window13");
		gtk_widget_show(window15);//on affiche la prochaine fenêtre
                gtk_widget_destroy(window13);//on ferme la première fenêtre
}
void
on_button104_clicked                   (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window15;
		GtkWidget *alerteca;
		alerteca = create_alerteca();
		window15 = lookup_widget(objet_graphique, "window15");
		gtk_widget_show(alerteca);//on affiche la prochaine fenêtre
                gtk_widget_destroy(window15);//on ferme la première fenêtre

}
void
on_button9_clicked                      (GtkWidget   *objet_graphique, gpointer  user_data)
{
                 GtkWidget *window2;
		GtkWidget *window18;
		window18 = create_window18();
		window2 = lookup_widget(objet_graphique, "window2");
		gtk_widget_show(window18);//on affiche la prochaine fenêtre
                gtk_widget_destroy(window2);//on ferme la première fenêtre

}

void
on_button101_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window13;
		GtkWidget *window14;
		window13 = create_window13();
		window14 = lookup_widget(objet_graphique, "window14");
		gtk_widget_show(window13);//on affiche la prochaine fenêtre
                gtk_widget_destroy(window14);//on ferme la première fenêtre
}

void
on_button90_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window13;
		GtkWidget *window14;
		window14 = create_window14();
		window13 = lookup_widget(objet_graphique, "window13");
		gtk_widget_show(window14);//on affiche la prochaine fenêtre
                gtk_widget_destroy(window13);//on ferme la première fenêtre
}
 void
on_button117_clicked                   (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window18;
		GtkWidget *window2;
		window2 = create_window2();
		window18 = lookup_widget(objet_graphique, "window18");
		gtk_widget_show(window2);//on affiche la prochaine fenêtre
                gtk_widget_destroy(window18);//on ferme la première fenêtre

}

void
on_button126_clicked                   (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window1;
		GtkWidget *window2;

		window1 = create_window1();
		window2 = lookup_widget(objet_graphique, "window2");
		gtk_widget_show(window1);//on affiche la prochaine fenêtre
                gtk_widget_destroy(window2);//on ferme la première fenêtre
}

void
on_button127_clicked                 (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window1;
		GtkWidget *window13;

		window1 = create_window1();
		window13 = lookup_widget(objet_graphique, "window13");
		gtk_widget_show(window1);//on affiche la prochaine fenêtre
                gtk_widget_destroy(window13);//on ferme la première fenêtre
}

void
on_button128_clicked                   (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *window1;
		GtkWidget *parent;

		window1 = create_window1();
		parent = lookup_widget(objet_graphique, "parent");
		gtk_widget_show(window1);//on affiche la prochaine fenêtre
                gtk_widget_destroy(parent);//on ferme la première fenêtre
}
/////////////////////////////interface medecin //////////////////////////////////////
/////////////////////////////////affichage par défaut ////////////////////////
gtk_window12_show                     (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *image134;GtkWidget *image135;GtkWidget *image136;GtkWidget *image137;GtkWidget *image138;GtkWidget *image139;
GtkWidget *image140;GtkWidget *image141;GtkWidget *image142;GtkWidget *image143;GtkWidget *image144;
GtkWidget *image145;GtkWidget *image146;GtkWidget *image147;GtkWidget *image148;GtkWidget *image149;

image134=lookup_widget(objet_graphique,"image134");image135=lookup_widget(objet_graphique,"image135");
image136=lookup_widget(objet_graphique,"image136");image137=lookup_widget(objet_graphique,"image137");
image138=lookup_widget(objet_graphique,"image138");image139=lookup_widget(objet_graphique,"image139");
image140=lookup_widget(objet_graphique,"image140");image141=lookup_widget(objet_graphique,"image141");
image142=lookup_widget(objet_graphique,"image142");image143=lookup_widget(objet_graphique,"image143");
image144=lookup_widget(objet_graphique,"image144");

image145=lookup_widget(objet_graphique,"image145");image146=lookup_widget(objet_graphique,"image146");
image147=lookup_widget(objet_graphique,"image147");image148=lookup_widget(objet_graphique,"image148");
image149=lookup_widget(objet_graphique,"image149");

gtk_widget_hide(image134);gtk_widget_hide(image135);gtk_widget_hide(image136);gtk_widget_hide(image137);gtk_widget_hide(image138);
gtk_widget_hide(image139);gtk_widget_hide(image140);gtk_widget_hide(image141);gtk_widget_hide(image142);
gtk_widget_hide(image143); gtk_widget_hide(image144);
gtk_widget_hide(image145);gtk_widget_hide(image146);gtk_widget_hide(image147);gtk_widget_hide(image148);gtk_widget_hide(image149);

GtkListStore  *store;
  GtkTreeIter    iter;
GtkTreeViewColumn   *col;
  GtkCellRenderer     *renderer;
  GtkTreeModel        *model;
  GtkWidget           *treeview17;
	int i,n;
	char chemin[]="medecin.txt";
	medecin ma[20];
	FILE *f;
	i=0;
       
         
	f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s \n",ma[i].Nom,ma[i].Prenom,ma[i].CIN,ma[i].email,ma[i].adresse,ma[i].tel)!=EOF)
	{
	i++;
	}
n=i*1;
        fclose(f);
	
treeview17 = lookup_widget(objet_graphique, "treeview17"); 
 renderer = gtk_cell_renderer_text_new ();
gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview17),
                                               -1,      
                                               "Nom",  
                                               renderer,
                                               "text", COL_Nom,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview17),
                                               -1,      
                                               "Prenom",  
                                               renderer,
                                               "text", COL_Prenom,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview17),
                                               -1,      
                                               "CIN",  
                                               renderer,
                                               "text", COL_CIN,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview17),
                                               -1,      
                                               "email",  
                                               renderer,
                                               "text", COL_email,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview17),
                                               -1,      
                                               "adresse",  
                                               renderer,
                                               "text", COL_adresse,
                                               NULL); 

renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview17),
                                               -1,      
                                               "tel",  
                                               renderer,
                                               "text", COL_tel,
                                               NULL); 


 


store= gtk_list_store_new (NUM0_COL,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);                                             
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview17) , model);
for (i=0;i<n;i++)
{	
gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter,   COL_Nom,ma[i].Nom,
COL_Prenom,ma[i].Prenom,
COL_CIN,ma[i].CIN,
COL_email,ma[i].email,
COL_adresse,ma[i].adresse,
COL_tel,ma[i].tel,-1);

}
  
model=GTK_TREE_MODEL (store);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview17) , model);
}


////////////////////////////ajouter un medecin ////////////////////////

void
on_button84_clicked                  (GtkWidget   *objet_graphique, gpointer  user_data)
{
int a,b,c,d,e,g;
medecin M;
char chemin[] = "medecin.txt";
GtkWidget *image134;GtkWidget *image135;GtkWidget *image136;GtkWidget *image137;GtkWidget *image138;GtkWidget *image139;
image134=lookup_widget(objet_graphique,"image134");image135=lookup_widget(objet_graphique,"image135");
image136=lookup_widget(objet_graphique,"image136");image137=lookup_widget(objet_graphique,"image137");
image138=lookup_widget(objet_graphique,"image138");image139=lookup_widget(objet_graphique,"image139");

GtkWidget *window12; GtkWidget *entry116; GtkWidget *entry117; GtkWidget *entry118; GtkWidget *entry119;
GtkWidget *entry120; GtkWidget *entry121; 
GtkLabel *label290; label290 = lookup_widget(objet_graphique, "label290");

entry116 = lookup_widget(objet_graphique, "entry116"); entry117 = lookup_widget(objet_graphique, "entry117");
entry118 = lookup_widget(objet_graphique, "entry118"); entry119 = lookup_widget(objet_graphique, "entry119");
entry120 = lookup_widget(objet_graphique, "entry120"); entry121 = lookup_widget(objet_graphique, "entry121");

strcpy(M.Nom, gtk_entry_get_text(GTK_ENTRY(entry116)));
strcpy(M.Prenom, gtk_entry_get_text(GTK_ENTRY(entry117)));
strcpy(M.CIN, gtk_entry_get_text(GTK_ENTRY(entry118)));
strcpy(M.email, gtk_entry_get_text(GTK_ENTRY(entry119)));
strcpy(M.adresse, gtk_entry_get_text(GTK_ENTRY(entry120)));
strcpy(M.tel, gtk_entry_get_text(GTK_ENTRY(entry121)));
 
a=strlen(M.Nom);
b=strlen(M.Prenom);
c=strlen(M.CIN);
d=strlen(M.email);
e=strlen(M.adresse);
g=strlen(M.tel);
if ((a==0)||(b==0)||(c==0)||(d==0)||(e==0)||(g==0))
{
gtk_label_set_text(label290, "veuillez saisir tout les données ");
gtk_widget_show(image134);gtk_widget_show(image135);gtk_widget_show(image136);gtk_widget_show(image137);gtk_widget_show(image138);
gtk_widget_show(image139);
if (a!=0) {gtk_widget_hide(image134);}
if (b!=0){gtk_widget_hide(image135);}
if (c!=0){gtk_widget_hide(image136);}
if (d!=0){ gtk_widget_hide(image137); }
if (e!=0) {gtk_widget_hide(image138);}
if (g!=0) {gtk_widget_hide(image139);}
}


if ((a!=0)&&(b!=0)&&(c!=8)&&(d!=0)&&(e!=0)&&(g!=0)) 
{
gtk_label_set_text(label290, "verifier votre cin");
gtk_widget_show(image136);
gtk_widget_hide(image134);gtk_widget_hide(image135);gtk_widget_hide(image137);gtk_widget_hide(image138);
gtk_widget_hide(image139);
}

if ((a!=0)&&(b!=0)&&(c==8)&&(d!=0)&&(e!=0)&&(g!=8)) 
{
gtk_label_set_text(label290, "verifier votre numéro tel");
gtk_widget_hide(image134);gtk_widget_hide(image135);gtk_widget_hide(image136);gtk_widget_hide(image137);
gtk_widget_hide(image138);gtk_widget_show(image139);
}

else if ((a!=0)&&(b!=0)&&(c==8)&&(d!=0)&&(e!=0)&&(g==8)) {
gtk_widget_hide(image134);gtk_widget_hide(image135);gtk_widget_hide(image136);gtk_widget_hide(image137);
gtk_widget_hide(image138);gtk_widget_hide(image139);
ajouter_medecin(chemin, M) ;
gtk_label_set_text(label290, "medecin ajouter");
gtk_entry_set_text(GTK_ENTRY(entry116),"");
gtk_entry_set_text(GTK_ENTRY(entry117),"");
gtk_entry_set_text(GTK_ENTRY(entry118),"");
gtk_entry_set_text(GTK_ENTRY(entry119),"");
gtk_entry_set_text(GTK_ENTRY(entry120),"");
gtk_entry_set_text(GTK_ENTRY(entry121),"");

}
}


////////////////////afficher les medecins ////////////////////////
void
on_button82_clicked                     (GtkWidget   *objet_graphique, gpointer  user_data)
{	
GtkLabel *label73;
label73 = lookup_widget(objet_graphique, "label73");
gtk_label_set_text(label73, "");

GtkWidget *window12;
GtkListStore  *store;
  GtkTreeIter    iter;
GtkTreeViewColumn   *col;
  GtkCellRenderer     *renderer;
  GtkTreeModel        *model;
  GtkWidget           *treeview17;
int i,n;
	char chemin[]="medecin.txt";
	medecin p[20];
	FILE *f;
	i=0;
       
         
	f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s \n",p[i].Nom,p[i].Prenom,p[i].CIN,p[i].email,p[i].adresse,p[i].tel)!=EOF)
	{
	i++;
	}
n=i*1;
        fclose(f);
treeview17 = lookup_widget(objet_graphique, "treeview17"); 
store= gtk_list_store_new (NUM0_COL,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);                                             
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview17) , model);
for (i=0;i<n;i++)
{	
gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter,   COL_Nom,p[i].Nom,
COL_Prenom,p[i].Prenom,
COL_CIN,p[i].CIN,
COL_email,p[i].email,
COL_adresse,p[i].adresse,
COL_tel,p[i].tel,-1);
}
model=GTK_TREE_MODEL (store);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview17) , model);

}

///////////////////////////recchercher un medecin avant le modifier ///////////////////////
void
on_button85_clicked                     (GtkWidget   *objet_graphique, gpointer  user_data)
{

char chemin[]="medecin.txt";

FILE *A;
int a,b; medecin M;
GtkWidget *image140;GtkWidget *image141;GtkWidget *image142;GtkWidget *image143;GtkWidget *image144;GtkWidget *image145;
GtkWidget *image146;GtkWidget *image147;
image140=lookup_widget(objet_graphique,"image140");image141=lookup_widget(objet_graphique,"image141");
image142=lookup_widget(objet_graphique,"image142");image143=lookup_widget(objet_graphique,"image143");
image144=lookup_widget(objet_graphique,"image144");image145=lookup_widget(objet_graphique,"image145");
image146=lookup_widget(objet_graphique,"image146");image147=lookup_widget(objet_graphique,"image147");

gtk_widget_hide(image142);gtk_widget_hide(image143);gtk_widget_hide(image144);
gtk_widget_hide(image145);gtk_widget_hide(image146);gtk_widget_hide(image147);

GtkWidget *entry122; GtkWidget *entry123; GtkWidget *entry124; GtkWidget *entry125; GtkWidget *entry126; GtkWidget *entry127;
GtkWidget *entry128; GtkWidget *entry129;
entry124=lookup_widget(objet_graphique,"entry124"); entry125=lookup_widget(objet_graphique,"entry125");
entry126=lookup_widget(objet_graphique,"entry126"); entry127=lookup_widget(objet_graphique,"entry127");
entry128=lookup_widget(objet_graphique,"entry128"); entry129=lookup_widget(objet_graphique,"entry129");
GtkWidget *label307;    label307=lookup_widget(objet_graphique, "label307");
GtkWidget *label302;    label302=lookup_widget(objet_graphique, "label302");
gtk_label_set_text(label302, "");
  
entry122=lookup_widget(objet_graphique,"entry122");    strcpy(M.Nom,gtk_entry_get_text(GTK_ENTRY(entry122)));  
entry123=lookup_widget(objet_graphique,"entry123");    strcpy(M.Prenom,gtk_entry_get_text(GTK_ENTRY(entry123))); 

a=strlen(M.Nom);
b=strlen(M.Prenom);
if ((a==0)||(b==0))
{
gtk_label_set_text(label307, "veuillez saisir tout les données ");
gtk_widget_show(image140);gtk_widget_show(image141);
if (a!=0) {gtk_widget_hide(image140);}
if (b!=0){gtk_widget_hide(image141);}
}
if ((a!=0)&&(b!=0))
{
gtk_widget_hide(image140);gtk_widget_hide(image141); 
M=rechercher_medecin(chemin,M);
if ((strcmp(M.Nom,"-1")!=0) && (strcmp(M.Prenom,"-1")!=0))
{
gtk_label_set_text(label307,"");
gtk_entry_set_text(entry124,M.Nom);
gtk_entry_set_text(entry125,M.Prenom);
gtk_entry_set_text(entry126,M.CIN); 
gtk_entry_set_text(entry127,M.email);
gtk_entry_set_text(entry128,M.adresse);
gtk_entry_set_text(entry129,M.tel);
}
else gtk_label_set_text(label307,"medecin n'existe pas");
}
}

/////////////////////modifier medecin ////////////////////////////
void
on_button86_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
int a,b,c,d,e,g;
char chemin[]="medecin.txt";      
  FILE *A;
	medecin M;medecin mm;

A = fopen(chemin, "a+");
GtkWidget *label302;    label302=lookup_widget(objet_graphique, "label302");

GtkWidget *image140;GtkWidget *image141;GtkWidget *image142;GtkWidget *image143;GtkWidget *image144;GtkWidget *image145;
GtkWidget *image146;GtkWidget *image147;
image140=lookup_widget(objet_graphique,"image140");image141=lookup_widget(objet_graphique,"image141");
image142=lookup_widget(objet_graphique,"image142");image143=lookup_widget(objet_graphique,"image143");
image144=lookup_widget(objet_graphique,"image144");image145=lookup_widget(objet_graphique,"image145");
image146=lookup_widget(objet_graphique,"image146");image147=lookup_widget(objet_graphique,"image147");

GtkWidget *entry122; GtkWidget *entry123; GtkWidget *entry124;
GtkWidget *entry125; GtkWidget *entry126;
GtkWidget *entry127; GtkWidget *entry128; GtkWidget *entry129;
entry124=lookup_widget(objet_graphique,"entry124");strcpy(mm.Nom,gtk_entry_get_text(GTK_ENTRY(entry124)));
entry125=lookup_widget(objet_graphique,"entry125");strcpy(mm.Prenom,gtk_entry_get_text(GTK_ENTRY(entry125)));
entry126=lookup_widget(objet_graphique,"entry126");strcpy(mm.CIN,gtk_entry_get_text(GTK_ENTRY(entry126)));
entry127=lookup_widget(objet_graphique,"entry127");strcpy(mm.email,gtk_entry_get_text(GTK_ENTRY(entry127)));
entry128=lookup_widget(objet_graphique,"entry128");strcpy(mm.adresse,gtk_entry_get_text(GTK_ENTRY(entry128)));
entry129=lookup_widget(objet_graphique,"entry129");strcpy(mm.tel,gtk_entry_get_text(GTK_ENTRY(entry129)));


entry122=lookup_widget(objet_graphique,"entry122");    strcpy(M.Nom,gtk_entry_get_text(GTK_ENTRY(entry122)));  
entry123=lookup_widget(objet_graphique,"entry123");    strcpy(M.Prenom,gtk_entry_get_text(GTK_ENTRY(entry123))); 


a=strlen(mm.Nom);
b=strlen(mm.Prenom);
c=strlen(mm.CIN);
d=strlen(mm.email);
e=strlen(mm.adresse);
g=strlen(mm.tel);
if ((a==0)||(b==0)||(d==0)||(e==0)||(g==0)||(c==0))
{
gtk_label_set_text(label302, "veuillez saisir tout les données ");
gtk_widget_show(image142);gtk_widget_show(image143);gtk_widget_show(image144);gtk_widget_show(image145);gtk_widget_show(image146);
gtk_widget_show(image147);
if (a!=0) {gtk_widget_hide(image142);}
if (b!=0){gtk_widget_hide(image143);}
if (c!=0){gtk_widget_hide(image144);}
if (d!=0){ gtk_widget_hide(image145); }
if (e!=0) {gtk_widget_hide(image146);}
if (g!=0) {gtk_widget_hide(image147);}
}

if ((a!=0)&&(b!=0)&&(c!=8)&&(d!=0)&&(e!=0)&&(g!=0)) 
{
gtk_label_set_text(label302, "verifier cin à modifier");
gtk_widget_show(image144);
gtk_widget_hide(image142);gtk_widget_hide(image143);gtk_widget_hide(image145);gtk_widget_hide(image146);
gtk_widget_hide(image147);
}
if ((a!=0)&&(b!=0)&&(c==8)&&(d!=0)&&(e!=0)&&(g!=8)) 
{
gtk_label_set_text(label302, "verifier votre numéro tel");
gtk_widget_show(image147);
gtk_widget_hide(image142); gtk_widget_hide(image143);gtk_widget_hide(image144);gtk_widget_hide(image145);gtk_widget_hide(image146);
gtk_widget_hide(image146);
}
if ((a!=0)&&(b!=0)&&(c==8)&&(d!=0)&&(e!=0)&&(g==8)) {
M=rechercher_medecin(chemin,M);
int x=supprimer_medecin(chemin ,M.Nom, M.Prenom);
if (x==1)
{
strcpy(M.Nom,gtk_entry_get_text(GTK_ENTRY(entry124))); 
strcpy(M.Prenom,gtk_entry_get_text(GTK_ENTRY(entry125))); 
strcpy(M.CIN,gtk_entry_get_text(GTK_ENTRY(entry126))); 
strcpy(M.email,gtk_entry_get_text(GTK_ENTRY(entry127))); 
strcpy(M.adresse,gtk_entry_get_text(GTK_ENTRY(entry128))); 
strcpy(M.tel,gtk_entry_get_text(GTK_ENTRY(entry129))); 

ajouter_medecin(chemin,M);
gtk_label_set_text(label302, "medecin modifier avec succée");

}
fclose(A);
gtk_entry_set_text(GTK_ENTRY(entry124),"");
gtk_entry_set_text(GTK_ENTRY(entry125),"");
gtk_entry_set_text(GTK_ENTRY(entry126),"");
gtk_entry_set_text(GTK_ENTRY(entry127),"");
gtk_entry_set_text(GTK_ENTRY(entry128),"");
gtk_entry_set_text(GTK_ENTRY(entry129),""); 
}
}
////////////////////////supprimer medecin ///////////////////
void
on_button87_clicked                     (GtkWidget   *objet_graphique, gpointer  user_data)
{
int a,b;
medecin M;
char chemin[]="medecin.txt";
char nom[80];
char prenom[80];
GtkWidget *image148;GtkWidget *image149;
image148=lookup_widget(objet_graphique,"image148");image149=lookup_widget(objet_graphique,"image149");
GtkWidget *window12;      
GtkWidget *entry130;
GtkWidget *entry131;
GtkWidget *label305;
label305 = lookup_widget(objet_graphique, "label305");
entry130=lookup_widget(objet_graphique,"entry130");
entry131=lookup_widget(objet_graphique,"entry131");
strcpy(nom,gtk_entry_get_text(GTK_ENTRY(entry130)));
strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(entry131)));
a=strlen(nom);
b=strlen(prenom);
if ((a==0)||(b==0))
{
gtk_label_set_text(label305, "veuillez saisir tout les données ");
gtk_widget_show(image148);gtk_widget_show(image149);
if (a!=0) {gtk_widget_hide(image148);}
if (b!=0){gtk_widget_hide(image149);}
}
if ((a!=0)&&(b!=0))
{
gtk_widget_hide(image148);gtk_widget_hide(image149);
int x=supprimer_medecin(chemin ,nom, prenom);
if (x==1) gtk_label_set_text(label305, "medecin supprimer");
else
gtk_label_set_text(label305, "medecin n'existe pas ");
}
}


/////////////////////////////////////////////espace maitresse////////////////
////////////////////////////////////////ajouter maitresse /////////////////////////////
void
on_button56_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
maitresse ma;
char chemin[] = "maitresse.txt";
GtkWidget *window7;
GtkWidget *entry71;
GtkWidget *entry72;
GtkWidget *entry73;
GtkWidget *entry74;
GtkWidget *entry75;
GtkWidget *entry76;
GtkLabel *label185;
GtkWidget *comboboxentry5;
label185 = lookup_widget(objet_graphique, "label185");


entry71 = lookup_widget(objet_graphique, "entry71");
entry72 = lookup_widget(objet_graphique, "entry72");
entry73 = lookup_widget(objet_graphique, "entry73");
entry74 = lookup_widget(objet_graphique, "entry74");
entry75 = lookup_widget(objet_graphique, "entry75");
entry76 = lookup_widget(objet_graphique, "entry76");
comboboxentry5 = lookup_widget(objet_graphique, "comboboxentry5");

strcpy(ma.Nom, gtk_entry_get_text(GTK_ENTRY(entry71)));
strcpy(ma.Prenom, gtk_entry_get_text(GTK_ENTRY(entry72)));
strcpy(ma.CIN, gtk_entry_get_text(GTK_ENTRY(entry73)));
strcpy(ma.email, gtk_entry_get_text(GTK_ENTRY(entry74)));
strcpy(ma.adresse, gtk_entry_get_text(GTK_ENTRY(entry75)));
strcpy(ma.tel, gtk_entry_get_text(GTK_ENTRY(entry76)));

 strcpy(ma.classe, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry5)));
ajouter_maitresse(chemin, ma) ;
gtk_label_set_text(label185, "maitresse ajouter");
gtk_entry_set_text(GTK_ENTRY(entry71),"");
gtk_entry_set_text(GTK_ENTRY(entry72),"");
gtk_entry_set_text(GTK_ENTRY(entry73),"");
gtk_entry_set_text(GTK_ENTRY(entry74),"");
gtk_entry_set_text(GTK_ENTRY(entry75),"");
gtk_entry_set_text(GTK_ENTRY(entry76),"");


}
//////////////////////ajouter un classe pour une maitresse :interface ajouter maitresse //////////////
void
on_button122_clicked                   (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *comboboxentry5;
classe c[200];

char chemin[] ="classe.txt";
 int n=0,i;
comboboxentry5=lookup_widget(objet_graphique,"comboboxentry5");
FILE *f;
printf(n);
f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s \n",c[i].Niveau ,c[i].Nom_classe,c[i].CIN_maitresse,c[i].CIN_aide,c[i].capacite,c[i].ID_camera)!=EOF)

	{
	i++;
	}
n=i*1;
        fclose(f);

for (int i=0;i<n;i++)
gtk_combo_box_remove_text(GTK_COMBO_BOX(comboboxentry5),i);
for (int i=0;i<n;i++)
gtk_combo_box_insert_text(GTK_COMBO_BOX(comboboxentry5),i,c[i].Nom_classe);

}
//////////////////////ajouter un classe pour une maitresse :interface modifier maitresse //////////////
void
on_button123_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *comboboxentry6;
classe c[200];

char chemin[] ="classe.txt";
 int n=0,i;
comboboxentry6=lookup_widget(objet_graphique,"comboboxentry6");
FILE *f;
printf(n);
f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s \n",c[i].Niveau ,c[i].Nom_classe,c[i].CIN_maitresse,c[i].CIN_aide,c[i].capacite,c[i].ID_camera)!=EOF)

	{
	i++;
	}
n=i*1;
        fclose(f);

for (int i=0;i<n;i++)
gtk_combo_box_remove_text(GTK_COMBO_BOX(comboboxentry6),i);
for (int i=0;i<n;i++)
gtk_combo_box_insert_text(GTK_COMBO_BOX(comboboxentry6),i,c[i].Nom_classe);

}


////////////////////////////////////////////afficher les maitresse aprés apuit sur la button Actualiser  //////////////////////////////

void
on_button54_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *window7;
GtkListStore  *store;
  GtkTreeIter    iter;
GtkTreeViewColumn   *col;
  GtkCellRenderer     *renderer;
  GtkTreeModel        *model;
  GtkWidget           *treeview3;
GtkLabel *label189;
label189=lookup_widget(objet_graphique, "label189");

	int i,n;
	char chemin[]="maitresse.txt";
	maitresse ma[20];
	FILE *f;
	i=0;
       
        window7 = lookup_widget(objet_graphique, "window7"); 
	f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s %s \n",ma[i].Nom,ma[i].Prenom,ma[i].CIN,ma[i].email,ma[i].tel,ma[i].adresse,ma[i].classe)!=EOF)
	{
	i++;
	}
n=i*1;
        fclose(f);
	
treeview3 = lookup_widget(objet_graphique, "treeview3"); 



store= gtk_list_store_new (NUM_COLS,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);                                             
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview3) , model);
for (i=0;i<n;i++)
{	
gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter,   COLO_Nom,ma[i].Nom,
COLO_Prenom,ma[i].Prenom,
COLO_CIN,ma[i].CIN,
COLO_email,ma[i].email,
COLO_tel,ma[i].tel,
COLO_adresse,ma[i].adresse,
COLO_classe,ma[i].classe,-1);
}
  
model=GTK_TREE_MODEL (store);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview3) , model);
g_print("ffff");
 gtk_label_set_text(label189,"");
}

//////////////////////////////afficher la listes des maitresses par défaut ////////////////////////
void
gtk_window7_show              (GtkWidget  *objet_graphique, gpointer         user_data)
{

GtkListStore  *store;
  GtkTreeIter    iter;
GtkTreeViewColumn   *col;
  GtkCellRenderer     *renderer;
  GtkTreeModel        *model;
  GtkWidget           *treeview3;
	int i,n;
	char chemin[]="maitresse.txt";
	maitresse ma[20];
	FILE *f;
	i=0;
       
         
	f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s %s \n",ma[i].Nom,ma[i].Prenom,ma[i].CIN,ma[i].email,ma[i].tel,ma[i].adresse,ma[i].classe)!=EOF)
	{
	i++;
	}
n=i*1;
        fclose(f);
	
treeview3 = lookup_widget(objet_graphique, "treeview3"); 
 renderer = gtk_cell_renderer_text_new ();
gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview3),
                                               -1,      
                                               "Nom",  
                                               renderer,
                                               "text", COLO_Nom,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview3),
                                               -1,      
                                               "Prenom",  
                                               renderer,
                                               "text", COLO_Prenom,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview3),
                                               -1,      
                                               "CIN",  
                                               renderer,
                                               "text", COLO_CIN,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview3),
                                               -1,      
                                               "email",  
                                               renderer,
                                               "text", COLO_email,
                                               NULL); 

 
renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview3),
                                               -1,      
                                               "tel",  
                                               renderer,
                                               "text", COLO_tel,
                                               NULL); 
renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview3),
                                               -1,      
                                               "adresse",  
                                               renderer,
                                               "text", COLO_adresse,
                                               NULL); 

 
   renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview3),
                                               -1,      
                                               "classe",  
                                               renderer,
                                               "text", COLO_classe, NULL);
 


store= gtk_list_store_new (NUM_COLS,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);                                             
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview3) , model);
for (i=0;i<n;i++)
{	
gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter,   COLO_Nom,ma[i].Nom,
COLO_Prenom,ma[i].Prenom,
COLO_CIN,ma[i].CIN,
COLO_email,ma[i].email,
COLO_tel,ma[i].tel,
COLO_adresse,ma[i].adresse,
COLO_classe,ma[i].classe,-1);

}
  
model=GTK_TREE_MODEL (store);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview3) , model);
}


//////////////////////////////////////////button supprimer maitresse ///////////////////
void
on_button58_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
maitresse ma;
char chemin[]="maitresse.txt";
char nom[80];
char prenom[80];
GtkWidget *window7;      
GtkWidget *entry79;
GtkWidget *entry80;
GtkWidget *label193;
label193 = lookup_widget(objet_graphique, "label193");
entry79=lookup_widget(objet_graphique,"entry79");
entry80=lookup_widget(objet_graphique,"entry80");
strcpy(nom,gtk_entry_get_text(GTK_ENTRY(entry79)));
strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(entry80)));
int x=supprimer_maitresse(chemin ,nom, prenom);
if (x==1) gtk_label_set_text(label193, "maitresse supprimer");
else
gtk_label_set_text(label193, "maitresse n'existe pas ");
}




/////////////////////////////////////////////////rechercher maitresse   avant de le supprimer /////////////////
void
on_button59_clicked                   (GtkWidget   *objet_graphique, gpointer  user_data)
{
char chemin[]="maitresse.txt";

FILE *f;

maitresse ma;

GtkWidget *entry81;
GtkWidget *entry82;
GtkWidget *entry83;
GtkWidget *entry84;
GtkWidget *entry85;
GtkWidget *entry86;
GtkWidget *entry87;
GtkWidget *entry88;
GtkWidget *entry146;
entry83=lookup_widget(objet_graphique,"entry83");
entry84=lookup_widget(objet_graphique,"entry84");
entry85=lookup_widget(objet_graphique,"entry85");
entry86=lookup_widget(objet_graphique,"entry86");
entry87=lookup_widget(objet_graphique,"entry87");
entry88=lookup_widget(objet_graphique,"entry88");
entry146=lookup_widget(objet_graphique,"entry146");
  GtkWidget *label382;
   label382=lookup_widget(objet_graphique, "label382");
  
entry81=lookup_widget(objet_graphique,"entry81");    strcpy(ma.Nom,gtk_entry_get_text(GTK_ENTRY(entry81)));  
entry82=lookup_widget(objet_graphique,"entry82");    strcpy(ma.Prenom,gtk_entry_get_text(GTK_ENTRY(entry82))); 
  
ma=rechercher_maitresse(chemin,ma);
if ((strcmp(ma.Nom,"-1")!=0) && (strcmp(ma.Prenom,"-1")!=0))
{
gtk_label_set_text(label382,"");
gtk_entry_set_text(entry83,ma.Nom);
gtk_entry_set_text(entry84,ma.Prenom);
gtk_entry_set_text(entry85,ma.CIN); 
gtk_entry_set_text(entry86,ma.email);
gtk_entry_set_text(entry87,ma.tel);
gtk_entry_set_text(entry88,ma.adresse);
gtk_entry_set_text(entry146,ma.classe);
}
else gtk_label_set_text(label382,"sorry");
}


/////////////////////////////////////modifier maitresse /////////////////////////////////////

void
on_button60_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
char chemin[]="maitresse.txt";      
  FILE *f;
	maitresse ma;
f = fopen(chemin, "a+");
GtkWidget *entry81; GtkWidget *entry82; GtkWidget *entry83; GtkWidget *entry146;
GtkWidget *entry84;  GtkWidget *entry85; GtkWidget *entry86; GtkWidget *entry87; GtkWidget *entry88;
GtkWidget *comboboxentry6;
comboboxentry6 = lookup_widget(objet_graphique, "comboboxentry6");
entry83=lookup_widget(objet_graphique,"entry83");
entry84=lookup_widget(objet_graphique,"entry84");
entry85=lookup_widget(objet_graphique,"entry85");
entry86=lookup_widget(objet_graphique,"entry86");
entry87=lookup_widget(objet_graphique,"entry87");
entry88=lookup_widget(objet_graphique,"entry88");
entry146=lookup_widget(objet_graphique,"entry146");
GtkWidget *label204;    label204=lookup_widget(objet_graphique, "label204");
entry81=lookup_widget(objet_graphique,"entry81");    strcpy(ma.Nom,gtk_entry_get_text(GTK_ENTRY(entry81)));  
entry82=lookup_widget(objet_graphique,"entry82");    strcpy(ma.Prenom,gtk_entry_get_text(GTK_ENTRY(entry82))); 
ma=rechercher_maitresse(chemin,ma);
int x=supprimer_maitresse(chemin ,ma.Nom, ma.Prenom);
if (x==1)
{
strcpy(ma.Nom,gtk_entry_get_text(GTK_ENTRY(entry83))); 
strcpy(ma.Prenom,gtk_entry_get_text(GTK_ENTRY(entry84))); 
strcpy(ma.CIN,gtk_entry_get_text(GTK_ENTRY(entry85))); 
strcpy(ma.email,gtk_entry_get_text(GTK_ENTRY(entry86))); 
strcpy(ma.tel,gtk_entry_get_text(GTK_ENTRY(entry87))); 
strcpy(ma.adresse,gtk_entry_get_text(GTK_ENTRY(entry88))); 
strcpy(ma.classe, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry6)));
ajouter_maitresse(chemin,ma);
gtk_label_set_text(label204, "maitresse modifier avec succée");
}
fclose(f);
gtk_entry_set_text(GTK_ENTRY(entry83),"");
gtk_entry_set_text(GTK_ENTRY(entry84),"");
gtk_entry_set_text(GTK_ENTRY(entry85),"");
gtk_entry_set_text(GTK_ENTRY(entry86),"");
gtk_entry_set_text(GTK_ENTRY(entry87),"");
gtk_entry_set_text(GTK_ENTRY(entry88),"");
gtk_entry_set_text(GTK_ENTRY(entry146),""); 
}

///////////////////////////////////////////////afficher la maitresse rechercher dans un tableau //////////////
void
on_button57_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)

{
GtkWidget *window7;
GtkListStore  *store;
  GtkTreeIter    iter;
GtkTreeViewColumn   *col;
  GtkCellRenderer     *renderer;
  GtkTreeModel        *model;
  GtkWidget           *treeview3;
char chemin[]="maitresse.txt";
int i;
	maitresse ma[20];
maitresse ll ;
	FILE *f;
	  	f=fopen(chemin,"r");


GtkWidget *entry77;
GtkWidget *entry78;
GtkWidget *label189;
label189=lookup_widget(objet_graphique, "label189");
entry77=lookup_widget(objet_graphique,"entry77");
entry78=lookup_widget(objet_graphique,"entry78");
   strcpy(ll.Nom,gtk_entry_get_text(GTK_ENTRY(entry77)));  
   strcpy(ll.Prenom,gtk_entry_get_text(GTK_ENTRY(entry78))); 

ll=rechercher_maitresse(chemin,ll);

while (fscanf(f,"%s %s %s %s %s %s %s \n",ma[i].Nom,ma[i].Prenom,ma[i].CIN,ma[i].email,ma[i].tel,ma[i].adresse,ma[i].classe)!=EOF)
{
if ((strcmp(ll.Nom,"-1")!=0) && (strcmp(ll.Prenom,"-1")!=0))
{
treeview3 = lookup_widget(objet_graphique, "treeview3"); 
store= gtk_list_store_new (NUM_COLS,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);                                             
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview3) , model);

gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter,   COLO_Nom,ll.Nom,
COLO_Prenom,ll.Prenom,
COLO_CIN,ll.CIN,
COLO_email,ll.email,
COLO_tel,ll.tel,
COLO_adresse,ll.adresse,
COLO_classe,ll.classe,-1); 
}

} 
fclose (f);
model=GTK_TREE_MODEL (store);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview3) , model);
printf("fefe"); 
if ((strcmp(ll.Nom,"-1")==0) && (strcmp(ll.Prenom,"-1")==0))

 gtk_label_set_text(label189,"sorry");
}


////////////////////////////////end espace maitresse/////////////////////////

///////////////////////////////////interface aide maitresse ////////////////////

////////////////////////// combo nom de classe dans ajout aide maitresse///////////////// 
void
on_button112_clicked                   (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *comboboxentry12;
classe c[200];

char chemin[] ="classe.txt";
 int n=0,i;
comboboxentry12=lookup_widget(objet_graphique,"comboboxentry12");
FILE *f;
printf(n);
f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s \n",c[i].Niveau ,c[i].Nom_classe,c[i].CIN_maitresse,c[i].CIN_aide,c[i].capacite,c[i].ID_camera)!=EOF)

	{
	i++;
	}
n=i*1;
        fclose(f);

for (int i=0;i<n;i++)
gtk_combo_box_remove_text(GTK_COMBO_BOX(comboboxentry12),i);
for (int i=0;i<n;i++)
gtk_combo_box_insert_text(GTK_COMBO_BOX(comboboxentry12),i,c[i].Nom_classe);
}
////////////////////////// combo nom de classe dans modifier aide maitresse///////////////// 
void
on_button124_clicked                       (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *comboboxentry13;
classe c[200];

char chemin[] ="classe.txt";
 int n=0,i;
comboboxentry13=lookup_widget(objet_graphique,"comboboxentry13");
FILE *f;
printf(n);
f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s \n",c[i].Niveau ,c[i].Nom_classe,c[i].CIN_maitresse,c[i].CIN_aide,c[i].capacite,c[i].ID_camera)!=EOF)

	{
	i++;
	}
n=i*1;
        fclose(f);

for (int i=0;i<n;i++)
gtk_combo_box_remove_text(GTK_COMBO_BOX(comboboxentry13),i);
for (int i=0;i<n;i++)
gtk_combo_box_insert_text(GTK_COMBO_BOX(comboboxentry13),i,c[i].Nom_classe);
}

/////////////////////////////////////ajouter aide maitresse //////////////////
void
on_button64_clicked                   (GtkWidget   *objet_graphique, gpointer  user_data)

{
aide ma;
char chemin[] = "aide.txt";
GtkWidget *window8;
GtkWidget *entry89;
GtkWidget *entry90;
GtkWidget *entry91;
GtkWidget *entry92;
GtkWidget *entry93;
GtkWidget *entry94;
GtkLabel *label223;
GtkWidget *comboboxentry12;
label223 = lookup_widget(objet_graphique, "label223");
entry89 = lookup_widget(objet_graphique, "entry89");
entry90 = lookup_widget(objet_graphique, "entry90");
entry91 = lookup_widget(objet_graphique, "entry91");
entry92 = lookup_widget(objet_graphique, "entry92");
entry93 = lookup_widget(objet_graphique, "entry93");
entry94 = lookup_widget(objet_graphique, "entry94");
comboboxentry12 = lookup_widget(objet_graphique, "comboboxentry12");

strcpy(ma.Nom, gtk_entry_get_text(GTK_ENTRY(entry89)));
strcpy(ma.Prenom, gtk_entry_get_text(GTK_ENTRY(entry90)));
strcpy(ma.CIN, gtk_entry_get_text(GTK_ENTRY(entry91)));
strcpy(ma.email, gtk_entry_get_text(GTK_ENTRY(entry92)));
strcpy(ma.adresse, gtk_entry_get_text(GTK_ENTRY(entry93)));
strcpy(ma.tel, gtk_entry_get_text(GTK_ENTRY(entry94)));

 strcpy(ma.classe, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry12)));
ajouter_aide(chemin, ma) ;
gtk_label_set_text(label223, "aide maitresse ajouter");
gtk_entry_set_text(GTK_ENTRY(entry89),"");
gtk_entry_set_text(GTK_ENTRY(entry90),"");
gtk_entry_set_text(GTK_ENTRY(entry91),"");
gtk_entry_set_text(GTK_ENTRY(entry92),"");
gtk_entry_set_text(GTK_ENTRY(entry93),"");
gtk_entry_set_text(GTK_ENTRY(entry94),"");

} 


/////////////////////////////consulter tous les aide maitresses
void
on_button62_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *window8;
GtkListStore  *store;
  GtkTreeIter    iter;
GtkTreeViewColumn   *col;
  GtkCellRenderer     *renderer;
  GtkTreeModel        *model;
  GtkWidget           *treeview4;
GtkLabel *label226;  /////////////////label interface recherche 
label226=lookup_widget(objet_graphique, "label226");

	int i,n;
	char chemin[]="aide.txt";
	maitresse ma[20];
	FILE *f;
	i=0;
       
        window8 = lookup_widget(objet_graphique, "window8"); 
	f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s %s \n",ma[i].Nom,ma[i].Prenom,ma[i].CIN,ma[i].email,ma[i].tel,ma[i].adresse,ma[i].classe)!=EOF)
	{
	i++;
	}
n=i*1;
        fclose(f);
	
treeview4 = lookup_widget(objet_graphique, "treeview4"); 



store= gtk_list_store_new (NUM_COLS,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);                                             
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview4) , model);
for (i=0;i<n;i++)
{	
gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter,   COLO_Nom,ma[i].Nom,
COLO_Prenom,ma[i].Prenom,
COLO_CIN,ma[i].CIN,
COLO_email,ma[i].email,
COLO_tel,ma[i].tel,
COLO_adresse,ma[i].adresse,
COLO_classe,ma[i].classe,-1);
}
  
model=GTK_TREE_MODEL (store);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview4) , model);
 gtk_label_set_text(label226,"");
}

///////////////////////////////affichage des aide maitresses par défaut //////////////////
void
gtk_window8_show                       (GtkWidget   *objet_graphique, gpointer  user_data)

{
GtkListStore  *store;
  GtkTreeIter    iter;
GtkTreeViewColumn   *col;
  GtkCellRenderer     *renderer;
  GtkTreeModel        *model;
  GtkWidget           *treeview4;
	int i,n;
	char chemin[]="aide.txt";
	aide ma[20];
	FILE *f;
	i=0;
       
         
	f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s %s \n",ma[i].Nom,ma[i].Prenom,ma[i].CIN,ma[i].email,ma[i].tel,ma[i].adresse,ma[i].classe)!=EOF)
	{
	i++;
	}
n=i*1;
        fclose(f);
	
treeview4 = lookup_widget(objet_graphique, "treeview4"); 
 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview4),
                                               -1,      
                                               "Nom",  
                                               renderer,
                                               "text", COLO_Nom,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview4),
                                               -1,      
                                               "Prenom",  
                                               renderer,
                                               "text", COLO_Prenom,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview4),
                                               -1,      
                                               "CIN",  
                                               renderer,
                                               "text", COLO_CIN,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview4),
                                               -1,      
                                               "email",  
                                               renderer,
                                               "text", COLO_email,
                                               NULL); 

 
renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview4),
                                               -1,      
                                               "tel",  
                                               renderer,
                                               "text", COLO_tel,
                                               NULL); 
renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview4),
                                               -1,      
                                               "adresse",  
                                               renderer,
                                               "text", COLO_adresse,
                                               NULL); 

 
   renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview4),
                                               -1,      
                                               "classe",  
                                               renderer,
                                               "text", COLO_classe, NULL);
 


store= gtk_list_store_new (NUM_COLS,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);                                             
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview4) , model);
for (i=0;i<n;i++)
{	
gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter,   COLO_Nom,ma[i].Nom,
COLO_Prenom,ma[i].Prenom,
COLO_CIN,ma[i].CIN,
COLO_email,ma[i].email,
COLO_tel,ma[i].tel,
COLO_adresse,ma[i].adresse,
COLO_classe,ma[i].classe,-1);
}
model=GTK_TREE_MODEL (store);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview4) , model);
}


//////////////////////////////rechercher une aide maitresse et afficher dans un tableau////////////
void
on_button65_clicked                     (GtkWidget   *objet_graphique, gpointer  user_data)
{

GtkWidget *window8;
GtkListStore  *store;
  GtkTreeIter    iter;
GtkTreeViewColumn   *col;
  GtkCellRenderer     *renderer;
  GtkTreeModel        *model;
  GtkWidget           *treeview4;
char chemin[]="aide.txt";
int i;
	aide ma[20];
aide ll ;
	FILE *f;
	  	f=fopen(chemin,"r");


GtkWidget *entry96;
GtkWidget *entry97;
GtkWidget *label226;
label226=lookup_widget(objet_graphique, "label226");
entry96=lookup_widget(objet_graphique,"entry96");
entry97=lookup_widget(objet_graphique,"entry97");
   strcpy(ll.Nom,gtk_entry_get_text(GTK_ENTRY(entry96)));  
   strcpy(ll.Prenom,gtk_entry_get_text(GTK_ENTRY(entry97))); 

ll=rechercher_aide(chemin,ll);

while (fscanf(f,"%s %s %s %s %s %s %s \n",ma[i].Nom,ma[i].Prenom,ma[i].CIN,ma[i].email,ma[i].tel,ma[i].adresse,ma[i].classe)!=EOF)
{
if ((strcmp(ll.Nom,"-1")!=0) && (strcmp(ll.Prenom,"-1")!=0))
{
treeview4 = lookup_widget(objet_graphique, "treeview4"); 
store= gtk_list_store_new (NUM_COLS,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);                                             
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview4) , model);

gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter,   COLO_Nom,ll.Nom,
COLO_Prenom,ll.Prenom,
COLO_CIN,ll.CIN,
COLO_email,ll.email,
COLO_tel,ll.tel,
COLO_adresse,ll.adresse,
COLO_classe,ll.classe,-1); 
}

} 
fclose (f);
model=GTK_TREE_MODEL (store);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview4) , model);

if ((strcmp(ll.Nom,"-1")==0) && (strcmp(ll.Prenom,"-1")==0))
 gtk_label_set_text(label226,"sorry");
}

/////////////////////////////button supprimer aide maitresse //////////////////////
void
on_button66_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
aide a;
char chemin[]="aide.txt";
char nom[80];
char prenom[80];
GtkWidget *window8;      
GtkWidget *entry98;
GtkWidget *entry99;
GtkWidget *label230;
label230 = lookup_widget(objet_graphique, "label230");
entry98=lookup_widget(objet_graphique,"entry98");
entry99=lookup_widget(objet_graphique,"entry99");
strcpy(nom,gtk_entry_get_text(GTK_ENTRY(entry98)));
strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(entry99)));
int x=supprimer_maitresse(chemin ,nom, prenom);
if (x==1) gtk_label_set_text(label230, "aide maitresse supprimer");
else
gtk_label_set_text(label230, "aide maitresse n'existe pas ");
}
/////////////////rechercher une aide maitresse avant le modifier ///////////////
void
on_button67_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
char chemin[]="aide.txt";
FILE *f;
aide a;

GtkWidget *entry100;
GtkWidget *entry101;
GtkWidget *entry102;
GtkWidget *entry103;
GtkWidget *entry104;
GtkWidget *entry105;
GtkWidget *entry106;
GtkWidget *entry107;
GtkWidget *entry147;
entry102=lookup_widget(objet_graphique,"entry102");
entry103=lookup_widget(objet_graphique,"entry103");
entry104=lookup_widget(objet_graphique,"entry104");
entry105=lookup_widget(objet_graphique,"entry105");
entry106=lookup_widget(objet_graphique,"entry106");
entry107=lookup_widget(objet_graphique,"entry107");
entry147=lookup_widget(objet_graphique,"entry147");
  GtkWidget *label386;
   label386=lookup_widget(objet_graphique, "label386");
  
entry100=lookup_widget(objet_graphique,"entry100");    strcpy(a.Nom,gtk_entry_get_text(GTK_ENTRY(entry100)));  
entry101=lookup_widget(objet_graphique,"entry101");    strcpy(a.Prenom,gtk_entry_get_text(GTK_ENTRY(entry101))); 
  
a=rechercher_aide(chemin,a);
if ((strcmp(a.Nom,"-1")!=0) && (strcmp(a.Prenom,"-1")!=0))
{
gtk_label_set_text(label386,"");
gtk_entry_set_text(entry102,a.Nom);
gtk_entry_set_text(entry103,a.Prenom);
gtk_entry_set_text(entry104,a.CIN); 
gtk_entry_set_text(entry105,a.email);
gtk_entry_set_text(entry147,a.tel);
gtk_entry_set_text(entry106,a.adresse);
gtk_entry_set_text(entry107,a.classe);
}
else gtk_label_set_text(label386,"sorry");
}


void
on_button68_clicked                     (GtkWidget   *objet_graphique, gpointer  user_data)
{
char chemin[]="aide.txt";      
  FILE *f;
	aide ma;
f = fopen(chemin, "a+");
GtkWidget *entry100; GtkWidget *entry101; GtkWidget *entry102; GtkWidget *entry103;
GtkWidget *entry104;  GtkWidget *entry105; GtkWidget *entry106; GtkWidget *entry107; GtkWidget *entry147;
GtkWidget *comboboxentry13;
comboboxentry13 = lookup_widget(objet_graphique, "comboboxentry13");
entry102=lookup_widget(objet_graphique,"entry102");
entry103=lookup_widget(objet_graphique,"entry103");
entry104=lookup_widget(objet_graphique,"entry104");
entry105=lookup_widget(objet_graphique,"entry105");
entry106=lookup_widget(objet_graphique,"entry106");
entry107=lookup_widget(objet_graphique,"entry107");
entry147=lookup_widget(objet_graphique,"entry147");
GtkWidget *label241;    label241=lookup_widget(objet_graphique, "label241");
entry100=lookup_widget(objet_graphique,"entry100");    strcpy(ma.Nom,gtk_entry_get_text(GTK_ENTRY(entry100)));  
entry101=lookup_widget(objet_graphique,"entry101");    strcpy(ma.Prenom,gtk_entry_get_text(GTK_ENTRY(entry101))); 
ma=rechercher_aide(chemin,ma);
int x=supprimer_aide(chemin ,ma.Nom, ma.Prenom);
if (x==1)
{
strcpy(ma.Nom,gtk_entry_get_text(GTK_ENTRY(entry102))); 
strcpy(ma.Prenom,gtk_entry_get_text(GTK_ENTRY(entry103))); 
strcpy(ma.CIN,gtk_entry_get_text(GTK_ENTRY(entry104))); 
strcpy(ma.email,gtk_entry_get_text(GTK_ENTRY(entry105))); 
strcpy(ma.tel,gtk_entry_get_text(GTK_ENTRY(entry147))); 
strcpy(ma.adresse,gtk_entry_get_text(GTK_ENTRY(entry106))); 
strcpy(ma.classe, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry13)));
ajouter_aide(chemin,ma);
gtk_label_set_text(label241, "aide maitresse modifier avec succée");
}
fclose(f);
gtk_entry_set_text(GTK_ENTRY(entry102),"");
gtk_entry_set_text(GTK_ENTRY(entry103),"");
gtk_entry_set_text(GTK_ENTRY(entry104),"");
gtk_entry_set_text(GTK_ENTRY(entry105),"");
gtk_entry_set_text(GTK_ENTRY(entry106),"");
gtk_entry_set_text(GTK_ENTRY(entry107),"");
gtk_entry_set_text(GTK_ENTRY(entry147),""); 
}

//////////////////////////////////////end espace aide maitresse ////////////////////////

/////////////////////////////////////////espace classe ///////////////////////////////////

//////////////////////////////////////////// combo qui sélectionne cin de maitresse dans window classe /////////////////
void
on_button108_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *comboboxentry8;
maitresse ma[200];

char chemin[] ="maitresse.txt";
 int n=0,i;
comboboxentry8=lookup_widget(objet_graphique,"comboboxentry8");
FILE *f;
printf(n);
f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s %s \n",ma[i].Nom,ma[i].Prenom,ma[i].CIN,ma[i].email,ma[i].tel,ma[i].adresse,ma[i].classe)!=EOF)

	{
	i++;
	}
n=i*1;
        fclose(f);

for (int i=0;i<n;i++)
gtk_combo_box_remove_text(GTK_COMBO_BOX(comboboxentry8),i);
for (int i=0;i<n;i++)
gtk_combo_box_insert_text(GTK_COMBO_BOX(comboboxentry8),i,ma[i].CIN);
}



void
on_button109_clicked                   (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *comboboxentry14;
aide a[200];

char chemin[] ="aide.txt";
 int n=0,i;
comboboxentry14=lookup_widget(objet_graphique,"comboboxentry14");
FILE *f;
printf(n);
f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s %s \n",a[i].Nom ,a[i].Prenom,a[i].CIN,a[i].email,a[i].tel,a[i].adresse,a[i].classe)!=EOF)

	{
	i++;
	}
n=i*1;
        fclose(f);

for (int i=0;i<n;i++)
gtk_combo_box_remove_text(GTK_COMBO_BOX(comboboxentry14),i);
for (int i=0;i<n;i++)
gtk_combo_box_insert_text(GTK_COMBO_BOX(comboboxentry14),i,a[i].CIN);
}


void
on_button72_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
classe c;
char chemin[] = "classe.txt";
GtkWidget *window9;
GtkWidget *entry108;
GtkWidget *entry109;

GtkLabel *label257;
GtkWidget *comboboxentry8;
GtkWidget *comboboxentry14;
GtkWidget *comboboxentry9;
GtkWidget *comboboxentry7;
label257 = lookup_widget(objet_graphique, "label257");
entry108 = lookup_widget(objet_graphique, "entry108");
entry109 = lookup_widget(objet_graphique, "entry109");
comboboxentry7 = lookup_widget(objet_graphique, "comboboxentry7");
comboboxentry8 = lookup_widget(objet_graphique, "comboboxentry8");
comboboxentry14 = lookup_widget(objet_graphique, "comboboxentry14");
comboboxentry9 = lookup_widget(objet_graphique, "comboboxentry9");

strcpy(c.Nom_classe, gtk_entry_get_text(GTK_ENTRY(entry108)));
strcpy(c.capacite, gtk_entry_get_text(GTK_ENTRY(entry109)));
 strcpy(c.Niveau, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry7)));
 strcpy(c.CIN_maitresse, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry8)));
 strcpy(c.ID_camera, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry9)));
 strcpy(c.CIN_aide, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry14)));
ajouter_classe(chemin, c) ;
gtk_label_set_text(label257, "classe ajouter");

gtk_entry_set_text(GTK_ENTRY(entry108),"");
gtk_entry_set_text(GTK_ENTRY(entry109),"");

}
///////////////////////////////afficher la liste de classe par défaut ////////////////////////////////

void
on_window9_show                           (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkListStore  *store;
  GtkTreeIter    iter;
GtkTreeViewColumn   *col;
  GtkCellRenderer     *renderer;
  GtkTreeModel        *model;
  GtkWidget           *treeview5;
	int i,n;
	char chemin[]="classe.txt";
	classe c[20];
	FILE *f;
	i=0;
       
         
	f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s \n",c[i].Niveau,c[i].Nom_classe,c[i].CIN_maitresse,c[i].CIN_aide,c[i].capacite,c[i].ID_camera)!=EOF)
	{
	i++;
	}
n=i*1;
        fclose(f);
	
treeview5 = lookup_widget(objet_graphique, "treeview5"); 
 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview5),
                                               -1,      
                                               "Niveau",  
                                               renderer,
                                               "text", COLO_Niveau,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview5),
                                               -1,      
                                               "Nom",  
                                               renderer,
                                               "text", COLO_Nom_classe,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview5),
                                               -1,      
                                               "Maitresse",  
                                               renderer,
                                               "text", COLO_CIN_maitresse,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview5),
                                               -1,      
                                               "Aide",  
                                               renderer,
                                               "text", COLO_CIN_aide_maitresse,
                                               NULL); 

 
renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview5),
                                               -1,      
                                               "capacite",  
                                               renderer,
                                               "text", COLO_capacite,
                                               NULL); 
renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview5),
                                               -1,      
                                               "ID_camera",  
                                               renderer,
                                               "text", COLO_ID_camera,
                                               NULL); 



store= gtk_list_store_new (NUM1_COLS,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);                                             
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview5) , model);
for (i=0;i<n;i++)
{	
gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter,   COLO_Niveau,c[i].Niveau,
COLO_Nom_classe,c[i].Nom_classe,
COLO_CIN_maitresse,c[i].CIN_maitresse,
COLO_CIN_aide_maitresse,c[i].CIN_aide,
COLO_capacite,c[i].capacite,
COLO_ID_camera,c[i].ID_camera,-1);
}
model=GTK_TREE_MODEL (store);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview5) , model);
}

////////////////////////////////actualiser la liste de classe /////////////////
void
on_button70_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *window9;
GtkListStore  *store;
  GtkTreeIter    iter;
GtkTreeViewColumn   *col;
  GtkCellRenderer     *renderer;
  GtkTreeModel        *model;
  GtkWidget           *treeview5;
GtkLabel *label260;  /////////////////label interface recherche 
label260=lookup_widget(objet_graphique, "label260");

	int i,n;
	char chemin[]="classe.txt";
	classe c[20];
	FILE *f;
	i=0;
       
        window9 = lookup_widget(objet_graphique, "window9"); 
	f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s \n",c[i].Niveau,c[i].Nom_classe,c[i].CIN_maitresse,c[i].CIN_aide,c[i].capacite,c[i].ID_camera)!=EOF)
	{
	i++;
	}
n=i*1;
        fclose(f);
	
treeview5 = lookup_widget(objet_graphique, "treeview5"); 



store= gtk_list_store_new (NUM1_COLS,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);                                             
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview5) , model);
for (i=0;i<n;i++)
{	
gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter,   COLO_Niveau,c[i].Niveau,
COLO_Nom_classe,c[i].Nom_classe,
COLO_CIN_maitresse,c[i].CIN_maitresse,
COLO_CIN_aide_maitresse,c[i].CIN_aide,
COLO_capacite,c[i].capacite,
COLO_ID_camera,c[i].ID_camera,-1);
}
model=GTK_TREE_MODEL (store);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview5) , model);
 gtk_label_set_text(label260,"");
}


void
on_button73_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{

GtkWidget *window9;
GtkListStore  *store;
  GtkTreeIter    iter;
GtkTreeViewColumn   *col;
  GtkCellRenderer     *renderer;
  GtkTreeModel        *model;
  GtkWidget           *treeview5;
char chemin[]="classe.txt";
int i;
	classe c[20];
classe ll ;
	FILE *f;
	  	f=fopen(chemin,"r");


GtkWidget *entry142;
GtkWidget *label260;
label260=lookup_widget(objet_graphique, "label260");
entry142=lookup_widget(objet_graphique,"entry142");
   strcpy(ll.Nom_classe,gtk_entry_get_text(GTK_ENTRY(entry142)));  


ll=rechercher_classe(chemin,ll);

while (fscanf(f,"%s %s %s %s %s %s \n",c[i].Niveau,c[i].Nom_classe,c[i].CIN_maitresse,c[i].CIN_aide,c[i].capacite,c[i].ID_camera)!=EOF)
{
if (strcmp(ll.Nom_classe,"-1")!=0)
{
treeview5 = lookup_widget(objet_graphique, "treeview5"); 
store= gtk_list_store_new (NUM1_COLS,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);                                             
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview5) , model);

gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter,   COLO_Niveau,ll.Niveau,
COLO_Nom_classe,ll.Nom_classe,
COLO_CIN_maitresse,ll.CIN_maitresse,
COLO_CIN_aide_maitresse,ll.CIN_aide,
COLO_capacite,ll.capacite,
COLO_ID_camera,ll.ID_camera,-1); 
}} 
fclose (f);
model=GTK_TREE_MODEL (store);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview5) , model);

if (strcmp(ll.Nom_classe,"-1")==0)
 gtk_label_set_text(label260,"n'existe pas");
}

///////////////////////////////////supprimer a classe ////////////////
void
on_button76_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
classe c;
char chemin[]="classe.txt";
char nom[80];
GtkWidget *window9;      
GtkWidget *entry115;
GtkWidget *label269;
label269 = lookup_widget(objet_graphique, "label269");
entry115=lookup_widget(objet_graphique,"entry115");
strcpy(nom,gtk_entry_get_text(GTK_ENTRY(entry115)));
int x=supprimer_classe(chemin ,nom);
if (x==1) gtk_label_set_text(label269, "classe supprimer");
else
gtk_label_set_text(label269, "classen'existe pas ");
}

///////////////////////////////////rechercher avant la modification /////////////////
void
on_button74_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
char chemin[]="classe.txt";
FILE *f;
classe c;
GtkWidget *entry112; GtkWidget *entry113; GtkWidget *entry114; GtkWidget *entry148; GtkWidget *entry149;
GtkWidget *entry150; GtkWidget *entry111;
entry112=lookup_widget(objet_graphique,"entry112");
entry113=lookup_widget(objet_graphique,"entry113");
entry114=lookup_widget(objet_graphique,"entry114");
entry148=lookup_widget(objet_graphique,"entry148");
entry149=lookup_widget(objet_graphique,"entry149");
entry150=lookup_widget(objet_graphique,"entry150");
  GtkWidget *label391; label391=lookup_widget(objet_graphique, "label391");
entry111=lookup_widget(objet_graphique,"entry111");    strcpy(c.Nom_classe,gtk_entry_get_text(GTK_ENTRY(entry111)));  
c=rechercher_classe(chemin,c);
if (strcmp(c.Nom_classe,"-1")!=0) 
{
gtk_label_set_text(label391,"");
gtk_entry_set_text(entry112,c.Niveau);
gtk_entry_set_text(entry113,c.Nom_classe);
gtk_entry_set_text(entry114,c.CIN_maitresse); 
gtk_entry_set_text(entry148,c.CIN_aide);
gtk_entry_set_text(entry149,c.capacite);
gtk_entry_set_text(entry150,c.ID_camera);

}
else gtk_label_set_text(label391,"sorry");
}


void
on_button110_clicked                   (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *comboboxentry10;
maitresse ma[200];

char chemin[] ="maitresse.txt";
 int n=0,i;
comboboxentry10=lookup_widget(objet_graphique,"comboboxentry10");
FILE *f;
printf(n);
f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s %s \n",ma[i].Nom,ma[i].Prenom,ma[i].CIN,ma[i].email,ma[i].tel,ma[i].adresse,ma[i].classe)!=EOF)

	{
	i++;
	}
n=i*1;
        fclose(f);

for (int i=0;i<n;i++)
gtk_combo_box_remove_text(GTK_COMBO_BOX(comboboxentry10),i);
for (int i=0;i<n;i++)
gtk_combo_box_insert_text(GTK_COMBO_BOX(comboboxentry10),i,ma[i].CIN);
}

void
on_button111_clicked                   (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *comboboxentry11;
aide a[200];

char chemin[] ="aide.txt";
 int n=0,i;
comboboxentry11=lookup_widget(objet_graphique,"comboboxentry11");
FILE *f;
printf(n);
f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s %s \n",a[i].Nom ,a[i].Prenom,a[i].CIN,a[i].email,a[i].tel,a[i].adresse,a[i].classe)!=EOF)

	{
	i++;
	}
n=i*1;
        fclose(f);

for (int i=0;i<n;i++)
gtk_combo_box_remove_text(GTK_COMBO_BOX(comboboxentry11),i);
for (int i=0;i<n;i++)
gtk_combo_box_insert_text(GTK_COMBO_BOX(comboboxentry11),i,a[i].CIN);
}

///////////////////////////////modifier classe //////////////////////////
void
on_button75_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
char chemin[]="classe.txt";      
  FILE *f;
	classe c;
f = fopen(chemin, "a+");
GtkWidget *entry111; GtkWidget *entry112; GtkWidget *entry113;
GtkWidget *entry114; GtkWidget *entry148; GtkWidget *entry150; GtkWidget *entry149;
GtkWidget *comboboxentry16; comboboxentry16 = lookup_widget(objet_graphique, "comboboxentry16");
GtkWidget *comboboxentry15; comboboxentry15 = lookup_widget(objet_graphique, "comboboxentry15");
GtkWidget *comboboxentry10; comboboxentry10 = lookup_widget(objet_graphique, "comboboxentry10");
GtkWidget *comboboxentry11; comboboxentry11 = lookup_widget(objet_graphique, "comboboxentry11");

entry111=lookup_widget(objet_graphique,"entry111");
entry112=lookup_widget(objet_graphique,"entry112");
entry113=lookup_widget(objet_graphique,"entry113");
entry114=lookup_widget(objet_graphique,"entry114");

entry148=lookup_widget(objet_graphique,"entry148");
entry149=lookup_widget(objet_graphique,"entry149");
entry150=lookup_widget(objet_graphique,"entry150");

GtkWidget *label267;    label267=lookup_widget(objet_graphique, "label267");
entry111=lookup_widget(objet_graphique,"entry111");    strcpy(c.Nom_classe,gtk_entry_get_text(GTK_ENTRY(entry111)));  

c=rechercher_classe(chemin,c);
int x=supprimer_classe(chemin ,c.Nom_classe);
if (x==1)
{
strcpy(c.Nom_classe,gtk_entry_get_text(GTK_ENTRY(entry113))); 
strcpy(c.capacite,gtk_entry_get_text(GTK_ENTRY(entry149))); 
strcpy(c.ID_camera, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry16)));
strcpy(c.Niveau, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry15)));
strcpy(c.CIN_maitresse, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry10)));
strcpy(c.CIN_aide, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry11)));
ajouter_classe(chemin,c);
gtk_label_set_text(label267, "classe modifier avec succée");
}
fclose(f);
gtk_entry_set_text(GTK_ENTRY(entry112),"");
gtk_entry_set_text(GTK_ENTRY(entry113),"");
gtk_entry_set_text(GTK_ENTRY(entry114),"");
gtk_entry_set_text(GTK_ENTRY(entry148),"");
gtk_entry_set_text(GTK_ENTRY(entry149),"");
gtk_entry_set_text(GTK_ENTRY(entry150),"");

}

/////////////////////////////////////espace enfant ////////////////////////////////////
////////////////////////////en ajout enfant : combo active pour choisir un classe ////////////////////////
void
on_button113_activate                   (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *comboboxentry25;
classe c[200];

char chemin[] ="classe.txt";
 int n=0,i;
comboboxentry25=lookup_widget(objet_graphique,"comboboxentry25");
FILE *f;
printf(n);
f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s \n",c[i].Niveau ,c[i].Nom_classe,c[i].CIN_maitresse,c[i].CIN_aide,c[i].capacite,c[i].ID_camera)!=EOF)

	{
	i++;
	}
n=i*1;
        fclose(f);

for (int i=0;i<n;i++)
gtk_combo_box_remove_text(GTK_COMBO_BOX(comboboxentry25),i);
for (int i=0;i<n;i++)
gtk_combo_box_insert_text(GTK_COMBO_BOX(comboboxentry25),i,c[i].Nom_classe);

}
//////////////////////////////////////////////en ajout enfant : combo active pour choisir un ID de braclet ////////////////////////
void
on_button121_clicked                  (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *comboboxentry17;
bracelet b[200];
char chemin[] ="stock.txt";
 int n=0,i;
comboboxentry17=lookup_widget(objet_graphique,"comboboxentry17");
FILE *f;
printf(n);
f=fopen(chemin,"r");
while (fscanf(f,"%s \n",b[i].id)!=EOF)

	{
	i++;
	}
n=i*1;
        fclose(f);

for (int i=0;i<n;i++)
gtk_combo_box_remove_text(GTK_COMBO_BOX(comboboxentry17),i);
for (int i=0;i<n;i++)
gtk_combo_box_insert_text(GTK_COMBO_BOX(comboboxentry17),i,b[i].id);

}
void
on_radiobutton1_toggled                (GtkToggleButton *togglebutton,     gpointer         user_data)
{
        gb_radiobutton1=TRUE;
	gb_radiobutton2=FALSE;

}

on_radiobutton2_toggled                 (GtkToggleButton *togglebutton,   gpointer         user_data)
{
        gb_radiobutton2=TRUE;
	gb_radiobutton1=FALSE;
}

//////////////////////////////////////ajouter un enfant ///////////////////////////

void
on_button14_clicked                  (GtkWidget   *objet_graphique, gpointer  user_data)
{
enfant e;
char chemin[] = "enfant.txt";
GtkWidget *window3; GtkWidget *entry3;
GtkWidget *entry4; GtkWidget *entry8; GtkWidget *entry9; GtkWidget *entry10; GtkWidget *entry143;

GtkLabel *label28;    label28 = lookup_widget(objet_graphique, "label28");
GtkWidget *comboboxentry20; GtkWidget *comboboxentry21; GtkWidget *comboboxentry22;
GtkWidget *comboboxentry1;GtkWidget *comboboxentry25;GtkWidget *comboboxentry17;


entry3 = lookup_widget(objet_graphique, "entry3"); entry4 = lookup_widget(objet_graphique, "entry4");
entry8 = lookup_widget(objet_graphique, "entry8"); entry9 = lookup_widget(objet_graphique, "entry9");
entry10 = lookup_widget(objet_graphique, "entry10"); entry143 = lookup_widget(objet_graphique, "entry143");

comboboxentry20 = lookup_widget(objet_graphique, "comboboxentry20"); comboboxentry21 = lookup_widget(objet_graphique, "comboboxentry21");
comboboxentry22 = lookup_widget(objet_graphique, "comboboxentry22"); comboboxentry25 = lookup_widget(objet_graphique, "comboboxentry25");
comboboxentry1 = lookup_widget(objet_graphique, "comboboxentry1"); comboboxentry17 = lookup_widget(objet_graphique, "comboboxentry17");

strcpy(e.Nom, gtk_entry_get_text(GTK_ENTRY(entry3)));
strcpy(e.Prenom, gtk_entry_get_text(GTK_ENTRY(entry4)));
strcpy(e.CIN_parent, gtk_entry_get_text(GTK_ENTRY(entry9)));
strcpy(e.adresse, gtk_entry_get_text(GTK_ENTRY(entry8)));

 strcpy(e.d.jour, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry20)));
 strcpy(e.d.mois, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry21)));
 strcpy(e.d.annee, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry22)));

 strcpy(e.type_regime, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry1)));
 strcpy(e.classe, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry25)));
 strcpy(e.ID_b, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry17)));
///////////////////////////radio button ////////////////
GtkWidget *radiobutton1; GtkWidget *radiobutton2;
radiobutton1= lookup_widget(objet_graphique,"radiobutton1");
radiobutton2= lookup_widget(objet_graphique,"radiobutton2");
////////////////end declaration radio button/////////////// 
if (gb_radiobutton1==TRUE) {
strcpy(e.nom_med, gtk_entry_get_text(GTK_ENTRY(entry10)));
strcpy(e.fois, gtk_entry_get_text(GTK_ENTRY(entry143)));
strcpy(e.maladie, "a_une_maladie");

ajouter_enfant(chemin, e) ;
gtk_label_set_text(label28,"enfant ajouter");
}

else if  (gb_radiobutton2==TRUE) {
strcpy(e.maladie, "enfant_sain");
strcpy(e.nom_med, "vide");
strcpy(e.fois, "vide");
ajouter_enfant(chemin, e) ;
gtk_label_set_text(label28,"enfant ajouter");
}
gtk_entry_set_text(GTK_ENTRY(entry3),"");
gtk_entry_set_text(GTK_ENTRY(entry4),"");

}
///////////////////////////////////end espace enfant /////////////////////////////////////


///////////////////////////////////////espace parent //////////////////////////

////////////////////////ajouter un parent ////////////////////////////////////////////
void on_button22_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{char a_mail[50]="";
parent p,pp;
int a,b,c,d,e,g,h,r,n;
char chemin[] = "parent.txt";
GtkWidget *window4;GtkWidget *window3;
GtkWidget *entry28; GtkWidget *entry29;GtkWidget *entry30;
GtkWidget *entry31;GtkWidget *entry32;
GtkWidget *entry33;GtkWidget *entry34; 
GtkLabel *label73;   label73 = lookup_widget(objet_graphique, "label73");
GtkWidget *comboboxentry26;          comboboxentry26 = lookup_widget(objet_graphique, "comboboxentry26");
entry28 = lookup_widget(objet_graphique, "entry28");
entry29 = lookup_widget(objet_graphique, "entry29");
entry30 = lookup_widget(objet_graphique, "entry30");
entry31 = lookup_widget(objet_graphique, "entry31");
entry32 = lookup_widget(objet_graphique, "entry32");
entry33 = lookup_widget(objet_graphique, "entry33");
entry34 = lookup_widget(objet_graphique, "entry34");
GtkWidget *image110;GtkWidget *image111;GtkWidget *image112;GtkWidget *image113;GtkWidget *image114;GtkWidget *image115;
GtkWidget *image116;
image110=lookup_widget(objet_graphique,"image110");image111=lookup_widget(objet_graphique,"image111");
image112=lookup_widget(objet_graphique,"image112");image113=lookup_widget(objet_graphique,"image113");
image114=lookup_widget(objet_graphique,"image114");image115=lookup_widget(objet_graphique,"image115");
image116=lookup_widget(objet_graphique,"image116");


strcpy(pp.Nom, gtk_entry_get_text(GTK_ENTRY(entry28)));
strcpy(pp.Prenom, gtk_entry_get_text(GTK_ENTRY(entry29)));
strcpy(pp.CIN, gtk_entry_get_text(GTK_ENTRY(entry30)));
strcpy(pp.email, gtk_entry_get_text(GTK_ENTRY(entry31)));
strcpy(pp.adresse, gtk_entry_get_text(GTK_ENTRY(entry32)));
strcpy(pp.profession, gtk_entry_get_text(GTK_ENTRY(entry33)));

strcpy(pp.tel, gtk_entry_get_text(GTK_ENTRY(entry34)));        
 strcpy(pp.nombre, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry26)));

strcpy(a_mail,pp.email);
a=strlen(pp.Nom);
b=strlen(pp.Prenom);
c=strlen(pp.CIN);
d=strlen(pp.email);
e=strlen(pp.adresse);
g=strlen(pp.tel);
h=strlen(pp.nombre);
r=strlen(pp.profession);
if (r==0)
{ strcpy(pp.profession, "vide");
}
if ((a==0)||(b==0)||(d==0)||(e==0)||(g==0)||(h==0)||(c==0))
{

gtk_label_set_text(label73, "veuillez saisir tout les données ");
gtk_widget_show(image110);gtk_widget_show(image111);gtk_widget_show(image112);gtk_widget_show(image113);gtk_widget_show(image114);
gtk_widget_show(image115);gtk_widget_show(image116);
if (a!=0) {gtk_widget_hide(image110);}
if (b!=0){gtk_widget_hide(image111);}
if (c!=0){gtk_widget_hide(image112);}
if (d!=0){ gtk_widget_hide(image113); }
if (e!=0) {gtk_widget_hide(image114);}
if (g!=0) {gtk_widget_hide(image115);}
if (h!=0) {gtk_widget_hide(image116);}
}
if ((a!=0)&&(b!=0)&&(c!=8)&&(d!=0)&&(e!=0)&&(g!=0)&&(h!=0)) 
{
gtk_label_set_text(label73, "verifier votre cin");
gtk_widget_show(image112);
gtk_widget_hide(image110);gtk_widget_hide(image111);gtk_widget_hide(image113);gtk_widget_hide(image114);
gtk_widget_hide(image115);gtk_widget_hide(image116);
}
if ((a!=0)&&(b!=0)&&(c==8)&&(d!=0)&&(e!=0)&&(g!=8)&&(h!=0)) 
{
gtk_label_set_text(label73, "verifier votre numéro tel");
gtk_widget_hide(image112);
gtk_widget_hide(image110);gtk_widget_hide(image111);gtk_widget_hide(image113);gtk_widget_hide(image114);
gtk_widget_show(image115);gtk_widget_hide(image116);
}


else if ((a!=0)&&(b!=0)&&(c==8)&&(d!=0)&&(e!=0)&&(g==8)&&(h!=0)) {
p=rechercher_parent_CIN(chemin, pp);
if (strcmp(p.CIN,"-1")==0)
{
ajouter_parent(chemin,pp) ;
            
gtk_label_set_text(label73, "parent ajouter");
gtk_widget_hide(image110);gtk_widget_hide(image111);gtk_widget_hide(image112);gtk_widget_hide(image113);gtk_widget_hide(image114);
gtk_widget_hide(image115);gtk_widget_hide(image116);
                window3 = create_window3();
		window4 = lookup_widget(objet_graphique, "window4");
		gtk_widget_show(window3);//on affiche la prochaine fenêtre
		gtk_widget_destroy(window4);//on ferme la première fenêtre

       



}
else gtk_label_set_text(label73, "parent déja inscrit");
}
 char cmd[100];  // to hold the command. 
	char to[70] ; // email id of the recepient.
	strcpy(to,a_mail);
        char body[] = "votre inscription a ete efectuer avec sucess" ;// email body.
printf("%s",body);
         char tempFile[100];     // name of tempfile.
      
        strcpy(tempFile,tempnam("/tmp","sendmail")); // generate temp file name.
        FILE *fp = fopen(tempFile,"w"); // open it for writing.
        fprintf(fp,"%s\n",body);        // write body to it.
        fclose(fp);             // close it.
        sprintf(cmd,"sendmail %s < %s",to,tempFile); // prepare command.
        system(cmd);     // execute it.
}


/////////////////////////show espace parent ////////////////////
void
gtk_window4_show                        (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *image110;GtkWidget *image111;GtkWidget *image112;GtkWidget *image113;GtkWidget *image114;GtkWidget *image115;
GtkWidget *image116;GtkWidget *image121;GtkWidget *image122;GtkWidget *image123;GtkWidget *image124;
GtkWidget *image125;GtkWidget *image126;GtkWidget *image127;GtkWidget *image128;GtkWidget *image129;GtkWidget *image130;GtkWidget *image131;GtkWidget *image132;GtkWidget *image133;
image110=lookup_widget(objet_graphique,"image110");image111=lookup_widget(objet_graphique,"image111");
image112=lookup_widget(objet_graphique,"image112");image113=lookup_widget(objet_graphique,"image113");
image114=lookup_widget(objet_graphique,"image114");image115=lookup_widget(objet_graphique,"image115");
image116=lookup_widget(objet_graphique,"image116");image121=lookup_widget(objet_graphique,"image121");
image122=lookup_widget(objet_graphique,"image122");image123=lookup_widget(objet_graphique,"image123");
image124=lookup_widget(objet_graphique,"image124");

image125=lookup_widget(objet_graphique,"image125");image126=lookup_widget(objet_graphique,"image126");
image127=lookup_widget(objet_graphique,"image127");image128=lookup_widget(objet_graphique,"image128");
image129=lookup_widget(objet_graphique,"image129");image130=lookup_widget(objet_graphique,"image130");
image131=lookup_widget(objet_graphique,"image131");image132=lookup_widget(objet_graphique,"image132");
image133=lookup_widget(objet_graphique,"image133");

gtk_widget_hide(image110);gtk_widget_hide(image111);gtk_widget_hide(image112);gtk_widget_hide(image113);gtk_widget_hide(image114);
gtk_widget_hide(image115);gtk_widget_hide(image116);gtk_widget_hide(image121);gtk_widget_hide(image122);
gtk_widget_hide(image123); gtk_widget_hide(image124);
gtk_widget_hide(image125);gtk_widget_hide(image126);gtk_widget_hide(image127);gtk_widget_hide(image128);gtk_widget_hide(image129);
gtk_widget_hide(image130);gtk_widget_hide(image131);gtk_widget_hide(image132);gtk_widget_hide(image133);

GtkListStore  *store;
  GtkTreeIter    iter;
GtkTreeViewColumn   *col;
  GtkCellRenderer     *renderer;
  GtkTreeModel        *model;
  GtkWidget           *treeview2;
	int i,n;
	char chemin[]="parent.txt";
	parent p[20];
	FILE *f;
	i=0;
       
         
	f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s %s %s \n",p[i].Nom,p[i].Prenom,p[i].CIN,p[i].email,p[i].adresse,p[i].profession,p[i].tel,p[i].nombre)!=EOF)
	{
	i++;
	}
n=i*1;
        fclose(f);
	
treeview2 = lookup_widget(objet_graphique, "treeview2"); 
 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview2),
                                               -1,      
                                               "Nom",  
                                               renderer,
                                               "text", COLOO_Nom,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview2),
                                               -1,      
                                               "Prenom",  
                                               renderer,
                                               "text", COLOO_Prenom,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview2),
                                               -1,      
                                               "CIN",  
                                               renderer,
                                               "text", COLOO_CIN,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview2),
                                               -1,      
                                               "email",  
                                               renderer,
                                               "text", COLOO_email,
                                               NULL); 

 
renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview2),
                                               -1,      
                                               "Adresse",  
                                               renderer,
                                               "text", COLOO_adresse,
                                               NULL); 
renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview2),
                                               -1,      
                                               "Profession",  
                                               renderer,
                                               "text", COLOO_profession,
                                               NULL); 

 
   renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview2),
                                               -1,      
                                               "Numéro telephone",  
                                               renderer,
                                               "text", COLOO_tel, NULL);
renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview2),
                                               -1,      
                                               "Nombre d'enfant",  
                                               renderer,
                                               "text", COLOO_nombre, NULL);
 
 


store= gtk_list_store_new (NUM_COLOO,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING);                                             
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview2) , model);
for (i=0;i<n;i++)
{	
gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter,   COLOO_Nom,p[i].Nom,
COLOO_Prenom,p[i].Prenom,
COLOO_CIN,p[i].CIN,
COLOO_email,p[i].email,
COLOO_adresse,p[i].adresse,
COLOO_profession,p[i].profession,
COLOO_tel,p[i].tel,
COLOO_nombre,p[i].nombre,-1);
}
model=GTK_TREE_MODEL (store);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview2) , model);
}
//////////////////////button actualiser  espace parent ////////////// 
void
on_button20_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *window4;
GtkListStore  *store;
  GtkTreeIter    iter;
GtkTreeViewColumn   *col;
  GtkCellRenderer     *renderer;
  GtkTreeModel        *model;
  GtkWidget           *treeview2;
int i,n;
	char chemin[]="parent.txt";
	parent p[20];
	FILE *f;
	i=0;
       
         
	f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s %s %s \n",p[i].Nom,p[i].Prenom,p[i].CIN,p[i].email,p[i].adresse,p[i].profession,p[i].tel,p[i].nombre)!=EOF)
	{
	i++;
	}
n=i*1;
        fclose(f);
treeview2 = lookup_widget(objet_graphique, "treeview2"); 
store= gtk_list_store_new (NUM_COLOO,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING);                                             
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview2) , model);
for (i=0;i<n;i++)
{	
gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter,   COLOO_Nom,p[i].Nom,
COLOO_Prenom,p[i].Prenom,
COLOO_CIN,p[i].CIN,
COLOO_email,p[i].email,
COLOO_adresse,p[i].adresse,
COLOO_profession,p[i].profession,
COLOO_tel,p[i].tel,
COLOO_nombre,p[i].nombre,-1);
}
model=GTK_TREE_MODEL (store);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview2) , model);

}

/////////////////////////supprimer parent /////////////////////
void
on_button25_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
int a,b;
parent p;
char chemin[]="parent.txt";
char nom[80];
char prenom[80];
GtkWidget *image121;GtkWidget *image122;
image121=lookup_widget(objet_graphique,"image121");image122=lookup_widget(objet_graphique,"image122");
GtkWidget *window4;      
GtkWidget *entry46;
GtkWidget *entry47;
GtkWidget *label90;
label90 = lookup_widget(objet_graphique, "label90");
entry46=lookup_widget(objet_graphique,"entry46");
entry47=lookup_widget(objet_graphique,"entry47");
strcpy(nom,gtk_entry_get_text(GTK_ENTRY(entry46)));
strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(entry47)));
a=strlen(nom);
b=strlen(prenom);
if ((a==0)||(b==0))
{
gtk_label_set_text(label90, "veuillez saisir tout les données ");
gtk_widget_show(image121);gtk_widget_show(image122);
if (a!=0) {gtk_widget_hide(image121);}
if (b!=0){gtk_widget_hide(image122);}
}
if ((a!=0)&&(b!=0))
{
gtk_widget_hide(image121);gtk_widget_hide(image122);
int x=supprimer_parent(chemin ,nom, prenom);
if (x==1) gtk_label_set_text(label90, "parent supprimer");
else
gtk_label_set_text(label90, "parent n'existe pas ");
}
}


////////////////////rechercher et afficher un parent ////////////////
void
on_button23_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *window4;
GtkListStore  *store;
  GtkTreeIter    iter;
GtkTreeViewColumn   *col;
  GtkCellRenderer     *renderer;
  GtkTreeModel        *model;
  GtkWidget           *treeview2;
int i,a,b;
	char chemin[]="parent.txt";
	parent p[50];
parent pp;
	FILE *f;
	i=0;
       
GtkWidget *entry35; GtkWidget *entry36;GtkWidget *image123;GtkWidget *image124;
image123=lookup_widget(objet_graphique,"image123"); image124=lookup_widget(objet_graphique,"image124");
GtkWidget *label76; label76=lookup_widget(objet_graphique, "label76");
entry35=lookup_widget(objet_graphique,"entry35");
entry36=lookup_widget(objet_graphique,"entry36");
   strcpy(pp.Nom,gtk_entry_get_text(GTK_ENTRY(entry35)));  
   strcpy(pp.Prenom,gtk_entry_get_text(GTK_ENTRY(entry36))); 

a=strlen(pp.Nom);
b=strlen(pp.Prenom);
if ((a==0)||(b==0))
{
gtk_label_set_text(label76, "veuillez saisir tout les données ");
gtk_widget_show(image123);gtk_widget_show(image124);
if (a!=0) {gtk_widget_hide(image123);}
if (b!=0){gtk_widget_hide(image124);}
}
if ((a!=0)&&(b!=0))
{
 gtk_label_set_text(label76,"");
gtk_widget_hide(image123);gtk_widget_hide(image124);
pp=rechercher_parent(chemin,pp);
	f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s %s %s \n",p[i].Nom,p[i].Prenom,p[i].CIN,p[i].email,p[i].adresse,p[i].profession,p[i].tel,p[i].nombre)!=EOF)
{
if ((strcmp(pp.Nom,"-1")!=0) && (strcmp(pp.Prenom,"-1")!=0))
{
treeview2 = lookup_widget(objet_graphique, "treeview2");
 
store= gtk_list_store_new (NUM_COLOO,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING);                                             
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview2) , model);
	
gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter, COLOO_Nom,pp.Nom,
COLOO_Prenom,pp.Prenom,
COLOO_CIN,pp.CIN,
COLOO_email,pp.email,
COLOO_adresse,pp.adresse,
COLOO_profession,pp.profession,
COLOO_tel,pp.tel,
COLOO_nombre,pp.nombre,-1);
}
} 
fclose (f);
model=GTK_TREE_MODEL (store);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview2) , model);

if ((strcmp(pp.Nom,"-1")==0) && (strcmp(pp.Prenom,"-1")==0))
 gtk_label_set_text(label76,"parent n'existe pas");
}
}
/////////////////////rechercher parent avant le modifier //////////////////////
void
on_button24_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
char chemin[]="parent.txt";
FILE *f;
parent p;
int a,b;
GtkWidget *image127;GtkWidget *image128;GtkWidget *image129;GtkWidget *image130;GtkWidget *image131;GtkWidget *image132;
GtkWidget *image133; GtkWidget *image125;GtkWidget *image126;
image125=lookup_widget(objet_graphique,"image125"); image126=lookup_widget(objet_graphique,"image126");
image127=lookup_widget(objet_graphique,"image127");image128=lookup_widget(objet_graphique,"image128");
image129=lookup_widget(objet_graphique,"image129");image130=lookup_widget(objet_graphique,"image130");
image131=lookup_widget(objet_graphique,"image131");image132=lookup_widget(objet_graphique,"image132");
image133=lookup_widget(objet_graphique,"image133");////////si on a cliker sur le button modifier avat rechercher il faut cacher tous les icon en modifier ////

gtk_widget_hide(image127);gtk_widget_hide(image128);gtk_widget_hide(image129);
gtk_widget_hide(image130);gtk_widget_hide(image131);gtk_widget_hide(image132);gtk_widget_hide(image133);

GtkWidget *entry37;GtkWidget *entry38; GtkWidget *entry39; GtkWidget *entry40;GtkWidget *entry41;GtkWidget *entry42;GtkWidget *entry43;
GtkWidget *entry44; GtkWidget *entry45;GtkWidget *entry156;
entry39=lookup_widget(objet_graphique,"entry39"); entry40=lookup_widget(objet_graphique,"entry40");
entry41=lookup_widget(objet_graphique,"entry41");entry42=lookup_widget(objet_graphique,"entry42");
entry43=lookup_widget(objet_graphique,"entry43");entry44=lookup_widget(objet_graphique,"entry44");
entry45=lookup_widget(objet_graphique,"entry45");entry156=lookup_widget(objet_graphique,"entry156");
GtkWidget *label417;   label417=lookup_widget(objet_graphique, "label417");
 GtkWidget *label352;   label352=lookup_widget(objet_graphique, "label352"); 
gtk_label_set_text(label352, "");
entry37=lookup_widget(objet_graphique,"entry37");    strcpy(p.Nom,gtk_entry_get_text(GTK_ENTRY(entry37)));  
entry38=lookup_widget(objet_graphique,"entry38");    strcpy(p.Prenom,gtk_entry_get_text(GTK_ENTRY(entry38))); 
 a=strlen(p.Nom);
b=strlen(p.Prenom);
if ((a==0)||(b==0))
{
gtk_label_set_text(label417, "veuillez saisir tout les données ");
gtk_widget_show(image125);gtk_widget_show(image126);
if (a!=0) {gtk_widget_hide(image125);}
if (b!=0){gtk_widget_hide(image126);}
}
if ((a!=0)&&(b!=0))
{

gtk_widget_hide(image125);gtk_widget_hide(image126); 
p=rechercher_parent(chemin,p);
if ((strcmp(p.Nom,"-1")!=0) && (strcmp(p.Prenom,"-1")!=0))
{
gtk_label_set_text(label417,"");
gtk_entry_set_text(entry39,p.Nom);
gtk_entry_set_text(entry40,p.Prenom);
gtk_entry_set_text(entry41,p.CIN); 
gtk_entry_set_text(entry42,p.email);
gtk_entry_set_text(entry43,p.adresse);
gtk_entry_set_text(entry44,p.profession);
gtk_entry_set_text(entry45,p.tel);
gtk_entry_set_text(entry156,p.nombre);
}
else{ 
gtk_label_set_text(label417,"parent n'existe pas");
gtk_entry_set_text(entry39,"");
gtk_entry_set_text(entry40,"");
gtk_entry_set_text(entry41,""); 
gtk_entry_set_text(entry42,"");
gtk_entry_set_text(entry43,"");
gtk_entry_set_text(entry44,"");
gtk_entry_set_text(entry45,"");
gtk_entry_set_text(entry156,"");
}}
}
//////////////////////////////////modifier parent ////////////////////////////
void
on_button99_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
int a,b,c,d,e,g,h,r;
char chemin[]="parent.txt";      
  FILE *f;
	parent p;
parent gg;
f = fopen(chemin, "a+");
GtkWidget *image127;GtkWidget *image128;GtkWidget *image129;GtkWidget *image130;GtkWidget *image131;GtkWidget *image132;
GtkWidget *image133;
image127=lookup_widget(objet_graphique,"image127");image128=lookup_widget(objet_graphique,"image128");
image129=lookup_widget(objet_graphique,"image129");image130=lookup_widget(objet_graphique,"image130");
image131=lookup_widget(objet_graphique,"image131");image132=lookup_widget(objet_graphique,"image132");
image133=lookup_widget(objet_graphique,"image133");

GtkWidget *entry37; GtkWidget *entry38; GtkWidget *entry39; GtkWidget *entry40;GtkWidget *entry156;
GtkWidget *entry41;  GtkWidget *entry42; GtkWidget *entry43; GtkWidget *entry44; GtkWidget *entry45;
GtkWidget *comboboxentry27;
comboboxentry27 = lookup_widget(objet_graphique, "comboboxentry27");strcpy(gg.nombre, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry27)));
entry39=lookup_widget(objet_graphique,"entry39");strcpy(gg.Nom,gtk_entry_get_text(GTK_ENTRY(entry39)));  
entry40=lookup_widget(objet_graphique,"entry40");strcpy(gg.Prenom,gtk_entry_get_text(GTK_ENTRY(entry40)));  
entry41=lookup_widget(objet_graphique,"entry41");strcpy(gg.CIN,gtk_entry_get_text(GTK_ENTRY(entry41)));  
entry42=lookup_widget(objet_graphique,"entry42");strcpy(gg.email,gtk_entry_get_text(GTK_ENTRY(entry42)));  
entry43=lookup_widget(objet_graphique,"entry43");strcpy(gg.adresse,gtk_entry_get_text(GTK_ENTRY(entry43)));  
entry44=lookup_widget(objet_graphique,"entry44");strcpy(gg.profession,gtk_entry_get_text(GTK_ENTRY(entry44)));  
entry45=lookup_widget(objet_graphique,"entry45");strcpy(gg.tel,gtk_entry_get_text(GTK_ENTRY(entry45)));  
entry156=lookup_widget(objet_graphique,"entry156"); 
GtkWidget *label352;    label352=lookup_widget(objet_graphique, "label352");

entry37=lookup_widget(objet_graphique,"entry37");    strcpy(p.Nom,gtk_entry_get_text(GTK_ENTRY(entry37)));  
entry38=lookup_widget(objet_graphique,"entry38");    strcpy(p.Prenom,gtk_entry_get_text(GTK_ENTRY(entry38)));

a=strlen(gg.Nom);
b=strlen(gg.Prenom);
c=strlen(gg.CIN);
d=strlen(gg.email);
e=strlen(gg.adresse);
g=strlen(gg.tel);
h=strlen(gg.nombre);


if ((a==0)||(b==0)||(d==0)||(e==0)||(g==0)||(h==0)||(c==0))
{

gtk_label_set_text(label352, "veuillez saisir tout les données ");
gtk_widget_show(image127);gtk_widget_show(image128);gtk_widget_show(image129);gtk_widget_show(image130);gtk_widget_show(image131);
gtk_widget_show(image132);gtk_widget_show(image133);
if (a!=0) {gtk_widget_hide(image127);}
if (b!=0){gtk_widget_hide(image128);}
if (c!=0){gtk_widget_hide(image129);}
if (d!=0){ gtk_widget_hide(image130); }
if (e!=0) {gtk_widget_hide(image131);}
if (g!=0) {gtk_widget_hide(image132);}
if (h!=0) {gtk_widget_hide(image133);}
}
if ((a!=0)&&(b!=0)&&(c!=8)&&(d!=0)&&(e!=0)&&(g!=0)&&(h!=0)) 
{
gtk_label_set_text(label352, "verifier cin à modifier");
gtk_widget_show(image129);
gtk_widget_hide(image127);gtk_widget_hide(image128);gtk_widget_hide(image130);gtk_widget_hide(image131);
gtk_widget_hide(image132);gtk_widget_hide(image133);
}
if ((a!=0)&&(b!=0)&&(c==8)&&(d!=0)&&(e!=0)&&(g!=8)&&(h!=0)) 
{
gtk_label_set_text(label352, "verifier votre numéro tel");
gtk_widget_hide(image129);
gtk_widget_hide(image127);gtk_widget_hide(image128);gtk_widget_hide(image130);gtk_widget_hide(image131);
gtk_widget_show(image132);gtk_widget_hide(image133);
}

if ((a!=0)&&(b!=0)&&(c==8)&&(d!=0)&&(e!=0)&&(g==8)&&(h!=0)) {
p =rechercher_parent(chemin,p);
int x=supprimer_parent(chemin ,p.Nom, p.Prenom);
if (x==1)
{
strcpy(p.Nom,gtk_entry_get_text(GTK_ENTRY(entry39))); 
strcpy(p.Prenom,gtk_entry_get_text(GTK_ENTRY(entry40))); 
strcpy(p.CIN,gtk_entry_get_text(GTK_ENTRY(entry41))); 
strcpy(p.email,gtk_entry_get_text(GTK_ENTRY(entry42))); 
strcpy(p.adresse,gtk_entry_get_text(GTK_ENTRY(entry43))); 
strcpy(p.profession,gtk_entry_get_text(GTK_ENTRY(entry44))); 
r=strlen(p.profession);
if (r==0)
{ strcpy(p.profession, "vide");
}
strcpy(p.tel,gtk_entry_get_text(GTK_ENTRY(entry45))); 
strcpy(p.nombre, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry27)));
ajouter_parent(chemin,p);
gtk_label_set_text(label352, "parent modifier avec succée");
}
fclose(f);
gtk_entry_set_text(GTK_ENTRY(entry39),"");
gtk_entry_set_text(GTK_ENTRY(entry40),"");
gtk_entry_set_text(GTK_ENTRY(entry41),"");
gtk_entry_set_text(GTK_ENTRY(entry42),"");
gtk_entry_set_text(GTK_ENTRY(entry43),"");
gtk_entry_set_text(GTK_ENTRY(entry44),"");
gtk_entry_set_text(GTK_ENTRY(entry45),""); 
gtk_entry_set_text(GTK_ENTRY(entry156),""); 

}
}

///////////////////////////////////////////end espace parent ////////////////
/////////////////////////////////////////////////   gestion des alértes ////////////////////////////
void
on_button114_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *window18;
GtkListStore  *store;
  GtkTreeIter    iter;
GtkTreeViewColumn   *col;
  GtkCellRenderer     *renderer;
  GtkTreeModel        *model;
  GtkWidget           *treeview14;

        
        

char classe[20];
char ano[30];


treeview14 = lookup_widget(objet_graphique, "treeview14"); 
       
        window18 = lookup_widget(objet_graphique, "window18"); 
GtkWidget *comboboxentry18;

comboboxentry18 = lookup_widget(objet_graphique, "comboboxentry18");
strcpy(classe, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry18)));

GtkWidget *comboboxentry19;
comboboxentry19 = lookup_widget(objet_graphique, "comboboxentry19");
strcpy(ano, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry19)));
if((strcmp(classe,"classe1")==0)  &&  (strcmp(ano,"braclets_en_pannes")==0))
{
char chr[30]="state.txt";
char che11[] = "pannes.txt";
int i,n;
	FILE *f;
	i=0;treebr b[40];
panne(chr,che11);

f=fopen(che11,"r");
while(fscanf(f,"%s %s %s %s %s\n",b[i].id,b[i].h,b[i].t,b[i].p,b[i].pos)!=EOF)
	{
	i++;
	}

n=i*1;
        fclose(f); 


renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview14),
                                               -1,      
                                               "Id",  
                                               renderer,
                                               "text", COLO_id,
                                               NULL);
 
 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview14),
                                               -1,      
                                               "horaire",  
                                               renderer,
                                               "text",COLO_horaire,
                                               NULL); 
 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview14),
                                               -1,      
                                               "Température",  
                                               renderer,
                                               "text",COLO_temp,
                                               NULL); 
 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview14),
                                               -1,      
                                               "indice de Poul",  
                                               renderer,
                                               "text",COLO_poul,
                                               NULL); 
 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview14),
                                               -1,      
                                               "Position",  
                                               renderer,
                                               "text", COLO_pos,
                                               NULL);
store= gtk_list_store_new (NUM3_COLS,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview14), GTK_TREE_MODEL (store));	

 	
	for(i=0;i<n;i++)
	{
gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter,                    
COLO_id,b[i].id,
COLO_horaire,b[i].h,
COLO_temp,b[i].t,
COLO_poul,b[i].p,
COLO_pos,b[i].pos, -1);
}
GtkLabel *label405;
label405= lookup_widget(objet_graphique, "label405");
gtk_label_set_text(GTK_LABEL(label405),"note : 0 signifie en panne et 1: fonctionne correctement" );
         

model=GTK_TREE_MODEL (store);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview14) , model);
}


else if ((strcmp(classe,"classe1")==0)  &&  (strcmp(ano,"alertes_braclets")==0))
{
char chr[30]="state.txt";
char type1[30];
char ch[] = "alerte.txt";
int i,n;
	FILE *f1;
	i=0;treeal a[40];
int typ[20];
alerte(chr,ch);

f1=fopen(ch,"r");
while(fscanf(f1,"%s %s %s %s %s %s %d\n",a[i].id,a[i].h,a[i].t,a[i].p,a[i].lat,a[i].lon,&typ[i])!=EOF)
	{
	i++;
	}

n=i*1;
        fclose(f1); 


renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview14),
                                               -1,      
                                               "Id",  
                                               renderer,
                                               "text", COLOS_id,
                                               NULL);

renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview14),
                                               -1,      
                                               "horiare",  
                                               renderer,
                                               "text", COLOS_horaire,
                                               NULL);

renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview14),
                                               -1,      
                                               "température",  
                                               renderer,
                                               "text", COLOS_temp,
                                               NULL);
 
 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview14),
                                               -1,      
                                               "poul",  
                                               renderer,
                                               "text", COLOS_poul,
                                               NULL);
 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview14),
                                               -1,      
                                               "latitude",  
                                               renderer,
                                               "text", COLOS_lat,
                                               NULL);
  renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview14),
                                               -1,      
                                               "longitude",  
                                               renderer,
                                               "text", COLOS_lon,
                                               NULL);
 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview14),
                                               -1,      
                                               "type",  
                                               renderer,
                                               "text", COLOS_type,
                                               NULL);
 
 store= gtk_list_store_new (NUM4_COLS,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview14), GTK_TREE_MODEL (store));	

	for(i=0;i<n;i++)
	{
if (typ[i]==0)
{
strcpy(type1,"temperature");
 }	

if (typ[i]==1)
{
strcpy(type1,"poul");
 }

if (typ[i]==2)
{
strcpy(type1,"position");
 }
gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter,                    
COLOS_id,a[i].id,
COLOS_horaire,a[i].h,
COLOS_temp,a[i].t,
COLOS_poul,a[i].p,
COLOS_lat,a[i].lat,
COLOS_lon,a[i].lon,
COLOS_type,type1,-1);
}
model=GTK_TREE_MODEL (store);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview14) , model);


}
}





///////////////////////////////////////ajout braclet dans un stock  //////////////////////////////////////////////////////

void
on_button116_clicked                   (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkWidget *window14;
GtkWidget *entry151;
GtkLabel *label402;
label402 = lookup_widget(objet_graphique, "label402");
entry151 = lookup_widget(objet_graphique, "entry151");
char ch[] = "stock.txt";
FILE *f;
f=NULL;     
bracelet b,bc[20];
int n,i=0,x=0;
strcpy(b.id,gtk_entry_get_text(GTK_ENTRY(entry151)));
f=fopen(ch,"a+");
 while(fscanf(f,"%s\n",bc[i].id)!=EOF)
{
i++;
}
n=i;
for (i=0;i<n;i++)
{

if (strcmp(bc[i].id,b.id)==0)
{
x=1;
}
}
if(x!=1)
{
fprintf(f,"%s\n",b.id);
gtk_label_set_text(GTK_LABEL(label402),"braclet ajouter avec succée ! ");
fclose(f);
}
else
{
gtk_label_set_text(GTK_LABEL(label402),"cet ID déja existe ! ");


}
}

/////////////////////////afficher les braclet en stock par défaut ////////////////////

void
gtk_window14_show                      (GtkWidget   *objet_graphique, gpointer  user_data)
{      
GtkLabel *label403;

         
	label403= lookup_widget(objet_graphique, "label403");
         


	char * buffer  =0;
	long length;
	FILE *f;
char chemin[] = "stock.txt";
	f=fopen(chemin,"r");
	if (f){
		fseek(f,0,SEEK_END);
		length = ftell(f);
		fseek(f,0,SEEK_SET);
		buffer = malloc (length);
		if (buffer)	
		{
			fread(buffer, 1,length, f);
		}
	fclose(f);
	if (buffer)	
		{
		gtk_label_set_text(GTK_LABEL(label403), buffer);

}
}
}















void
on_button125_clicked                   (GtkWidget   *objet_graphique, gpointer  user_data)
{
 

 
		

		

}

////////////////////////////////affichage la liste des caméra par défaut dans l'espace admin ////////
void
gtk_window10_show                      (GtkWidget   *objet_graphique, gpointer  user_data)

{
GtkListStore  *store;
  GtkTreeIter    iter;
GtkTreeViewColumn   *col;
  GtkCellRenderer     *renderer;
  GtkTreeModel        *model;
  GtkWidget           *treeview6;
	int i,n;
	char chemin[]="camera.txt";
	camera c[20];
	FILE *f;
	i=0;
       
         
	f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s \n",c[i].id,c[i].emplacement,c[i].ov,c[i].oh)!=EOF)
	{
	i++;
	}
n=i*1;
        fclose(f);
	
treeview6 = lookup_widget(objet_graphique, "treeview6"); 
 renderer = gtk_cell_renderer_text_new ();
gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview6),
                                               -1,      
                                               "ID caméra",  
                                               renderer,
                                               "text", COL_idc,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview6),
                                               -1,      
                                               "Emplacement",  
                                               renderer,
                                               "text", COL_emplacement,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview6),
                                               -1,      
                                               "Orientation Verticale",  
                                               renderer,
                                               "text", COL_ov,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview6),
                                               -1,      
                                               "Orientation Horizontale",  
                                               renderer,
                                               "text", COL_oh,
                                               NULL); 

 
 


store= gtk_list_store_new (NUMa_COL,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,    G_TYPE_STRING);                                             
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview6) , model);
for (i=0;i<n;i++)
{	
gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter,   COL_idc,c[i].id,
COL_emplacement,c[i].emplacement,
COL_ov,c[i].ov,
COL_oh,c[i].oh,-1);

}
  
model=GTK_TREE_MODEL (store);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview6) , model);
}



void
gtk_window11_show                       (GtkWidget   *objet_graphique, gpointer  user_data)
{

GtkListStore  *store;
  GtkTreeIter    iter;
GtkTreeViewColumn   *col;
  GtkCellRenderer     *renderer;
  GtkTreeModel        *model;
  GtkWidget           *treeview7;
	int i,n;
	char chemin[]="enfant.txt";
	enfant e[20];

	FILE *f;
	i=0;
       
         
	f=fopen(chemin,"r");
while (fscanf(f,"%s %s %s %s %s %s %s %s %s %s %s %s %s\n",e[i].Nom,e[i].Prenom,e[i].d.jour,e[i].d.mois,e[i].d.annee,e[i].adresse,e[i].type_regime,e[i].classe,e[i].CIN_parent,e[i].ID_b,e[i].maladie,e[i].nom_med,e[i].fois)!=EOF)
	{
	i++;
	}
n=i*1;
        fclose(f);
	
treeview7 = lookup_widget(objet_graphique, "treeview7"); 
 renderer = gtk_cell_renderer_text_new ();
gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview7),
                                               -1,      
                                               "Nom enfant",  
                                               renderer,
                                               "text", COL_nom2,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview7),
                                               -1,      
                                               "prénom enfant",  
                                               renderer,
                                               "text", COL_prenom2,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview7),
                                               -1,      
                                               "ID braclet",  
                                               renderer,
                                               "text", COL_idbraclet2,
                                               NULL); 


 
 


store= gtk_list_store_new (NUMb_COL,G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING);                                             
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview7) , model);
for (i=0;i<n;i++)
{	
gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter,   COL_nom2,e[i].Nom,
COL_prenom2,e[i].Prenom,
COL_idbraclet2,e[i].ID_b,-1);

}
  
model=GTK_TREE_MODEL (store);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview7) , model);
}







void
on_button118_clicked                  (GtkWidget   *objet_graphique, gpointer  user_data)
{
char des[20];
char id_b[20];
char id_des[20];
char type[20];
char remarque[20];
GtkLabel *label431;   label431 = lookup_widget(objet_graphique, "label431");
char chemin[]="parent.txt";
char chemin1[]="envoyer_parent.txt";
char chemin2[]="envoyer_maitresse.txt";
char chemin3[]="envoyer_tech.txt";

GtkWidget *comboboxentry23; comboboxentry23 = lookup_widget(objet_graphique, "comboboxentry23");
GtkWidget *comboboxentry24; comboboxentry24 = lookup_widget(objet_graphique, "comboboxentry24");
GtkWidget *entry152;  entry152 = lookup_widget(objet_graphique, "entry152");
GtkWidget *entry153;  entry153 = lookup_widget(objet_graphique, "entry153");
GtkWidget *entry157;  entry157 = lookup_widget(objet_graphique, "entry157");

strcpy(des, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry23)));
strcpy(type, gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry24)));
strcpy(id_b,gtk_entry_get_text(GTK_ENTRY(entry152))); 
strcpy(id_des,gtk_entry_get_text(GTK_ENTRY(entry153))); 
strcpy(remarque,gtk_entry_get_text(GTK_ENTRY(entry157))); 

if(strcmp(des,"Parent")==0) 
{


 FILE *f;

    f=fopen(chemin1,"a");

fprintf(f, "%s %s %s %s %s\n",des,id_b,id_des,type,remarque);
gtk_entry_set_text(GTK_ENTRY(entry152),"");
gtk_entry_set_text(GTK_ENTRY(entry153),"");
gtk_entry_set_text(GTK_ENTRY(entry157),"");
gtk_label_set_text(label431, "notification envoyé");
fclose(f);
}
if(strcmp(des,"maitresse")==0) 
{


 FILE *f;

    f=fopen(chemin2,"a");

fprintf(f, "%s %s %s %s %s\n",des,id_b,id_des,type,remarque);
gtk_label_set_text(label431, "notification envoyé");
gtk_entry_set_text(GTK_ENTRY(entry152),"");
gtk_entry_set_text(GTK_ENTRY(entry153),"");
gtk_entry_set_text(GTK_ENTRY(entry157),"");
fclose(f);
}
if(strcmp(des,"technicien ")==0) 
{


 FILE *f;

    f=fopen(chemin3,"a");

fprintf(f, "%s %s %s %s %s\n",des,id_b,id_des,type,remarque);
gtk_label_set_text(label431, "notification envoyé");
gtk_entry_set_text(GTK_ENTRY(entry152),"");
gtk_entry_set_text(GTK_ENTRY(entry153),"");
gtk_entry_set_text(GTK_ENTRY(entry157),"");
fclose(f);
}
}




void
on_button119_clicked                  (GtkWidget   *objet_graphique, gpointer  user_data)
{
GtkListStore  *store;
  GtkTreeIter    iter;
GtkTreeViewColumn   *col;
  GtkCellRenderer     *renderer;
  GtkTreeModel        *model;
  GtkWidget           *treeview15;
	int i,n;
char chemin1[]="envoyer_parent.txt";
envoyer_parent pp[20];

	FILE *f;
	i=0;

GtkLabel *label416;
label416 = lookup_widget(objet_graphique, "label416");
enfant e;
envoyer_parent p;
char chemin[]="enfant.txt";
char ahmed[20] ;
GtkWidget *entry154;  entry154 = lookup_widget(objet_graphique, "entry154");
GtkWidget *entry155;  entry155 = lookup_widget(objet_graphique, "entry155");

char nom[20];
char prenom[20];

strcpy(nom,gtk_entry_get_text(GTK_ENTRY(entry154))); 
strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(entry155))); 


e=rechercher_enfant(chemin,e);

if ((strcmp(e.Nom,nom)!=0) && (strcmp(e.Prenom,prenom)!=0)) 
{
strcpy(e.ID_b,"ahmed");

p=rechercher_evoyyer(chemin1,p);
if  (strcmp(p.id_b,ahmed)!=0)
{
         
	f=fopen(chemin1,"r");
while (fscanf(f,"%s %s %s %s %s\n",pp[i].destinateur,pp[i].id_b,pp[i].id_des,pp[i].type,pp[i].remarque)!=EOF)
	{
	i++;
	}
n=i*1;
        fclose(f);
	
	
treeview15 = lookup_widget(objet_graphique, "treeview15"); 
 renderer = gtk_cell_renderer_text_new ();
gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview15),
                                               -1,      
                                               "type",  
                                               renderer,
                                               "text", COL_typpe,
                                               NULL); 

 renderer = gtk_cell_renderer_text_new ();
 gtk_tree_view_insert_column_with_attributes (GTK_TREE_VIEW (treeview15),
                                               -1,      
                                               "Remarque",  
                                               renderer,
                                               "text",COL_remarque,
                                               NULL); 



 
 


store= gtk_list_store_new (NUMb_COLj,G_TYPE_STRING, G_TYPE_STRING);                                             
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview15) , model);
for (i=0;i<n;i++)
{	
gtk_list_store_append (store, &iter);
gtk_list_store_set (store, &iter, COL_typpe,pp[i].type,
COL_remarque,pp[i].remarque,-1);

} 
model=GTK_TREE_MODEL (store);
gtk_tree_view_set_model (GTK_TREE_VIEW (treeview15) , model);
}
else gtk_label_set_text(GTK_LABEL(label416),"braclet ajouter avec succée ! ");
}
else gtk_label_set_text(GTK_LABEL(label416),"braclet ajouter avec succée ! ");
}
 





void
on_button129_clicked                   (GtkWidget   *objet_graphique, gpointer  user_data)
{
    tech t;
char chemin[20] ;
strcpy(chemin,"tech.txt");
GtkWidget *window6;
GtkWidget *entry49;
GtkWidget *entry51;
GtkWidget *entry52;
GtkWidget *entry53;
GtkWidget *entry54;
GtkWidget *entry50;





entry49 = lookup_widget(objet_graphique, "entry49");
entry51 = lookup_widget(objet_graphique, "entry51");
entry52 = lookup_widget(objet_graphique, "entry52");
entry53 = lookup_widget(objet_graphique, "entry53");
entry54 = lookup_widget(objet_graphique, "entry54");
entry50 = lookup_widget(objet_graphique, "entry50");


strcpy(t.Nom, gtk_entry_get_text(GTK_ENTRY(entry49)));
strcpy(t.Prenom, gtk_entry_get_text(GTK_ENTRY(entry51)));
strcpy(t.CIN, gtk_entry_get_text(GTK_ENTRY(entry52)));
strcpy(t.email, gtk_entry_get_text(GTK_ENTRY(entry53)));
strcpy(t.adresse, gtk_entry_get_text(GTK_ENTRY(entry54)));
strcpy(t.tel, gtk_entry_get_text(GTK_ENTRY(entry50)));

 
ajouter_tech(chemin, t) ;

gtk_entry_set_text(GTK_ENTRY(entry49),"");
gtk_entry_set_text(GTK_ENTRY(entry51),"");
gtk_entry_set_text(GTK_ENTRY(entry52),"");
gtk_entry_set_text(GTK_ENTRY(entry53),"");
gtk_entry_set_text(GTK_ENTRY(entry54),"");
gtk_entry_set_text(GTK_ENTRY(entry50),"");
}






void
on_button49_clicked                    (GtkWidget   *objet_graphique, gpointer  user_data)
{

tech t;
char chemin[]="tech.txt";
char Nom[80];
char Prenom[80];
GtkWidget *window6;      
GtkWidget *entry63;
GtkWidget *entry64;
GtkWidget *label149;
label149 = lookup_widget(objet_graphique, "label149");
entry63=lookup_widget(objet_graphique,"entry63");
entry64=lookup_widget(objet_graphique,"entry64");
strcpy(Nom,gtk_entry_get_text(GTK_ENTRY(entry63)));
strcpy(Prenom,gtk_entry_get_text(GTK_ENTRY(entry64)));
int x=supprimer_tech(chemin ,Nom, Prenom);
if (x==1) gtk_label_set_text(label149, "technicien supprimer");
else
gtk_label_set_text(label149, "technicien n'existe pas ");
}



void
on_button130_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
system("vlc foussy.mp4");
}


void
on_button135_clicked                   (GtkWidget   *objet_graphique, gpointer  user_data)
{
                GtkWidget *maitresse;
		GtkWidget *window1;
		window1 = create_window1();
		maitresse = lookup_widget(objet_graphique, "maitresse");
		gtk_widget_show(window1);//on affiche la prochaine fenêtre
                gtk_widget_destroy(maitresse);//on ferme la première fenêtre
}




void
on_button136_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *cb;
char ch[30],str[30];
FILE *pipe = popen("gnuplot -persist","w");
sprintf(str,"'alerte.txt'");

/*fprintf(pipe, "set style data linespoints \n");*/
fprintf(pipe, "set xlabel 'ID bracelet' \n");
fprintf(pipe, "set ylabel 'Temérature  ' \n");
fprintf(pipe, "set grid \n");
fprintf(pipe, "set xrange [0:13] \n");
fprintf(pipe, "set yrange [36:40] \n");

/*fprintf(pipe, "set xdata time \n");
fprintf(pipe, "set timefmt '%T' \n");
fprintf(pipe, "set format y '%s' \n");
fprintf(pipe, "set key reverse Left outside \n");*/
fprintf(pipe, "set hidden3d \n");
fprintf(pipe, "set title 'Statistique Température ' \n");
fprintf(pipe, "set lmargin 8 \n");
fprintf(pipe, "set label '' \n");
fprintf(pipe, "set rmargin 8 \n");

/*fprintf(pipe, "plot 'fichier.dat' using 7:1 title 'age' with lines lt 3\n");*/
/*fprintf(pipe, "set data style line lc 1\n");*/
/*fprintf(pipe, "plot 'fichier.dat' using 7:1 title 'age' ls 10 lw 4 lc rgb 'red' \n");*/
/*fprintf(pipe, "plot 'Alertes_Classe1.txt' using 1:4 title 'Température' w l lc rgb 'green' \n");*/
fprintf(pipe, "plot %s using 1:3 title 'Température' w l lc rgb 'red' \n ",str);
/*fprintf(pipe,"plot 'fichier.dat' using 3:4 w l \n");*/


pclose(pipe);
}

