/* ----------------------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   http://lammps.sandia.gov, Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#include "dump_deprecated.h"

#include "comm.h"
#include "error.h"

using namespace LAMMPS_NS;

/* ---------------------------------------------------------------------- */

DumpDeprecated::DumpDeprecated(LAMMPS *lmp, int narg, char **arg) :
  Dump(lmp, narg, arg)
{
  std::string my_style = style;

  if (my_style == "DEPRECATED") {
    if (lmp->comm->me == 0)
      utils::logmesg(lmp,"\nDump style 'DEPRECATED' is a dummy style\n\n");
    return;
  }
  error->all(FLERR,"This dump style is no longer available");
}
