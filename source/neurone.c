#include "../header/data.h"

typedef struct neurone
{
	double* poids;
	double entree, erreur;
}*Neurone;