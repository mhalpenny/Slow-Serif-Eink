#pragma once

/* GxEPD_PP_C library by Clone
 */

// This will load the definition for common Particle variable types
#include "Particle.h"

// This is your main class that users will import into their application
class GxEPD_PP_C
{
public:
  /**
   * Constructor
   */
  GxEPD_PP_C();

  /**
   * Example method
   */
  void begin();

  /**
   * Example method
   */
  void process();

private:
  /**
   * Example private method
   */
  void doit();
};
