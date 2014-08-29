#ifndef HcalODFCorrections_h
#define HcalODFCorrections_h

/** 
class HcalODFCorrections

POOL object to store ODF Corrections values
ODF stands for Optical Density Filter

$Author: Audrius Mecionis
*/

#include "CondFormats/Serialization/interface/Serializable.h"

#include "CondFormats/HcalObjects/interface/HcalCondObjectContainer.h"
#include "CondFormats/HcalObjects/interface/HcalODFCorrection.h"

//typedef HcalCondObjectContainer<HcalODFCorrection> HcalODFCorrections;

class HcalODFCorrections: public HcalCondObjectContainer<HcalODFCorrection>
{
 public:
#ifndef HCAL_COND_SUPPRESS_DEFAULT
  HcalODFCorrections():HcalCondObjectContainer<HcalODFCorrection>(0) {}
#endif
  HcalODFCorrections(const HcalTopology* topo):HcalCondObjectContainer<HcalODFCorrection>(topo) {}

  std::string myname() const {return (std::string)"HcalODFCorrections";}

 private:

 COND_SERIALIZABLE;
};

#endif
