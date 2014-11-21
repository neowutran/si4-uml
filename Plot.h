#ifndef _PLOT_H
#define _PLOT_H
class Plot{

    public:
        Plot(Object object);

        int getHauteur() const;
        Plot(int hauteur);
        Object getObject();

   private:
        int _hauteur;
        Object _object;
};
#endif
