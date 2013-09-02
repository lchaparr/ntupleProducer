//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Mon Sep  2 09:05:57 2013 by ROOT version 5.32/00)
//      from the StreamerInfo in file nuTuple.root
//////////////////////////////////////////////////////////


#ifndef TCPhoton_h
#define TCPhoton_h
class TCPhoton;

#include "TCPhysObject.h"
#include "TCPhoton.h"

class TCPhoton : public TCPhysObject {

public:
// Nested classes forward declaration.
class CrystalInfo;

public:
// Nested classes declaration.
class CrystalInfo {

public:
// Nested classes declaration.

public:
// Data Members.
   int         rawId;       //
   int         ieta;        //
   int         iphi;        //
   int         ix;          //
   int         iy;          //
   double      energy;      //
   double      time;        //
   double      timeErr;     //
   int         recoFlag;    //

   CrystalInfo();
   CrystalInfo(const CrystalInfo & );
   virtual ~CrystalInfo();

};

public:
// Data Members.
   float       _normChi2;    //
   float       _hadOverEm;    //
   float       _sigmaIEtaIEta;    //
   float       _r9;               //
   float       _sigmaIPhiIPhi;    //
   float       _e2OverE9;         //
   bool        _trackVeto;        //
   float       _SCdPhi;           //
   float       _SCdEta;           //
   float       _SCeta;            //
   float       _SCphi;            //
   float       _SCenergy;         //
   bool        _convVeto;         //
   TCPhoton::CrystalInfo* _crysArray;        //
   int                    _nCrystals;        //

   TCPhoton();
   TCPhoton(const TCPhoton & );
   virtual ~TCPhoton();

   ClassDef(TCPhoton,2); // Generated by MakeProject.
};
#endif