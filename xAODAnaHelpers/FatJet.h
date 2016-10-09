#ifndef xAODAnaHelpers_FatJet_H
#define xAODAnaHelpers_FatJet_H

#include "xAODAnaHelpers/Particle.h"
#include "xAODAnaHelpers/Jet.h"

namespace xAH {

  class FatJet : public Particle
    {
    public:

      // substructure
      float  Split12;
      float  Split23;
      float  Split34;
      float  tau1_wta;
      float  tau2_wta;
      float  tau3_wta;
      float  tau21_wta;
      float  tau32_wta;
      float  ECF1;
      float  ECF2;
      float  ECF3;
      float  C2;
      float  D2;
      float  NTrimSubjets;
      int    NClusters;
      int    nTracks;

      // constituent
      int    numConstituents;

      // constituentAll
      std::vector<float>  constituentWeights;
      std::vector<float>  constituent_pt;
      std::vector<float>  constituent_eta;
      std::vector<float>  constituent_phi;
      std::vector<float>  constituent_e;

      // bosons 
      int nHBosons;
      int nWBosons;
      int nZBosons;

      // VTag
      int Wtag_medium;
      int Ztag_medium;

      int Wtag_tight;
      int Ztag_tight;

      std::vector<xAH::Jet> trkJets;
      
    };

}//xAH
#endif // xAODAnaHelpers_Particle_H
