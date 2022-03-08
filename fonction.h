#include "fonction.h"
void initPerso(Personne *p)
void afficherPerso(Personne p, SDL_Surface * screen)
void deplacerPerso (Personne *p, , int dt)
void animerPerso (Personne* p)
void saut (Personne* p)

void initBack(Background * b)
void aficherBack(Background b, SDL_Surface * screen)
void animerBackground( Background * e)
int collisionPP( Personne p, SDL_Surface * Masque)
 void scrolling (background * b, int direction, int pasAvancement); soit void scrolling (SDL_Rect * b, int direction ,int pasAvancement);

void initEnnemi(Ennemi*e)
void afficherEnnemi(Ennemi e, SDL_Surface * screen)
void animerEnnemi( Ennemi * e)
void deplacer( Ennemi * e)
int collisionBB( personne p, Ennemi e) ou int collisionBB( SDL_Rect posp, SDL_Rect pose)
void deplacerIA( Ennemi * e, SDL_Rect posPerso)
initminimap( minimap * m);
MAJMinimap(SDL_Rect posJoueur , minimap * m, SDL_Rect camera, int redimensionnement);
afficherminimap (minimap m, SDL_Surface * screen)
void sauvegarder( int score, char nomjoueur[], char nomfichier[]); sauvegarder le score dans un fichier texte ou binaire

void afficherEnigme(enigme e, SDL_Surface * screen)

void InitEnigme(enigme * e, char *nomfichier)
void animer (enigme * e); il faut ajouter un tableau d'images et un entier indiquant le numero de l'image a afficher dans la structure enigme . voir atelier animation pour travailler cette tache
#endif0
