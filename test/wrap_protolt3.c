/**
 *  Wrappers
 *  ========
 *
 *  Test with the Elixir nodes, using NIFs (native implemented functions) to
 *  avoid isolating the C processes and invoking them via an IPC way.
 *
 *  Here are the wrappers of Proto<3's C function calls that could be invoked
 *  by Elixir.
 */

#include "../src/protolt3.h"

#include <erl_nif.h>

