#include <stdio.h>
#include <stdlib.h>

struct suiv
{
    int data ;
    suiv *succ;
};
typedef struct suiv list ;
LISTE insialise(LISTE debut)
{
    LISTE ptrdebut;
    while (ptr!=null)
    {
        ptr=debut;
        debut=debut->succ;
        free(ptr);
    }
    return debut;
}
LISTE liste_vide(LISTE debut)
{
    return debut==null ;

}
LISTE ajouter_tete(LISTE debut,int ali)
{
    LISTE ptr= malloc(sizeof(struct suiv));
    ptr->data=ali;
    ptr->succ=debut;
    return ptr;
}
void affiche_liste(LISTE debut)
{
    LISTE ptr=debut
    while (ptr!=null)
    {


        printf("%d liste des element=")
        ptr=ptr->succ;
    }
}
LISTE ajouter_queue(LISTE debut,int samir)
{ if (liste_vide(LISTE debut))
    LISTE ptr= malloc(sizeof(struct suiv));
    ptr->data=x;
    ptr->succ=null;
    LISTE compte=debut liste;
    while (compte->succ!=null)
    {
        compte=compte->succ;
    }
      compte->succ=ptr;
      return ptr;
}
LISTE suppre_tete(liste debut)
{
    if (debut!=null)
{


    liste ptr=debut ;
    debut=debut->succ;
    free (ptr);
}
    return debut

}

LISTE suppre_queue(liste debut)
{
    if (debut!=null)
    {

    if (debut->succ==null)
        return suppre_tete(debut);


       LISTE ptr=debut liste;
      while (compte->succ->succ!=null)
    {
        ptr=ptr->succ

       LISTE ptrfree=ptr->succ

      return ptr;

}
