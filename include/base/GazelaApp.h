#ifndef GAZELAAPP_H
#define GAZELAAPP_H

#include "MooseApp.h"

class GazelaApp;

template<>
InputParameters validParams<GazelaApp>();

class GazelaApp : public MooseApp
{
public:
  GazelaApp(InputParameters parameters);
  virtual ~GazelaApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* GAZELAAPP_H */
