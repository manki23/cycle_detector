# cycle_detector

Assignment name  : cycle_detector

Expected files   : cycle_detector.c

Allowed functions: malloc, free
***

Créez une fonction cycle_detector qui prends un ```const t_list *list``` en 
argument, qui vérifiera qu'il n'y a aucun __cycle__ à l'intérieur de la liste chainée
*list*.

Un __cycle__ est défini quand, lors du parcours de la liste, vous passez au moins 2
fois à travers le même maillon.

Cette fonction retournera 1 si la fonction détecte un cycle, sinon elle renverra 0.

Cette fonction sera prototypé comme suit : 
```
int        cycle_detector(const t_list *list)
```
Le type *__t_list__* est défini comme suit :
```
typedef struct     s_list 
{
    int            data;
    struct s_list  *next;
}                  t_list;
```
Ce type sera fourni dans le header *__"list.h"__*. Vous n'avez pas besoin de le fournir,
nous utiliserons le notre en correction.
