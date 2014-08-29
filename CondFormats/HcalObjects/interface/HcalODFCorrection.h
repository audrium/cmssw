#ifndef HcalODFCorrection_h
#define HcalODFCorrection_h

/** 

class HcalODFCorrection

POOL object to store ODF Corrections values
ODF stands for Optical Density Filter

$Author: Audrius Mecionis

eta	phi	low	high
-1	6	0.635	0.875
-2	6	0.623	0.937
-3	6	0.67	0.942
-4	6	0.633	0.9
-5	6	0.644	0.922
-6	6	0.648	0.925
-7	6	0.6	0.901
-8	6	0.57	0.85
-9	6	0.595	0.852
-10	6	0.554	0.818
-11	6	0.505	0.731
-12	6	0.513	0.717
-13	6	0.515	0.782
-14	6	0.561	0.853
-15	6	0.579	0.778
-1	32	0.741	0.973
-2	32	0.721	0.925
-3	32	0.73	0.9
-4	32	0.698	0.897
-5	32	0.708	0.95
-6	32	0.751	0.935
-7	32	0.861	1


*/

#include "CondFormats/Serialization/interface/Serializable.h"

#include <boost/cstdint.hpp>

class HcalODFCorrection {
    
    public:
    
        /// get values
        const float* getValues () const {
            return &mValue0;
        }
      
        float getValue (int fId) const {
            return *(getValues () + fId);
        }
    
        // functions below are not supposed to be used by consumer applications
    
        HcalODFCorrection () : mId (0), mValue0 (0), mValue1 (0) {}
      
        HcalODFCorrection (unsigned long fId, float f0, float f1) :
            mId (fId),
            mValue0 (f0),
            mValue1 (f1) {}
    
            uint32_t rawId () const {
                return mId;
            }

    private:
        
        uint32_t mId;
        float mValue0;
        float mValue1;

    COND_SERIALIZABLE;
};

#endif
