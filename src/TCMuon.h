#ifndef _TCMUON_H
#define	_TCMUON_H

#include "TObject.h"
#include "TLorentzVector.h"
#include "TVector2.h"
#include "TVector3.h"

class TCMuon : public TObject {
private:
    TLorentzVector _p4;
    TVector3 _vtx;
    int _charge;
    bool _isTRK;
    bool _isGLB;
    float _caloComp;
    float _segComp;
    float _emIso;
    float _hadIso;
    float _trkIso;
    float _ptError; 

    int _numberOfMatches;
    int _nTracks;
    int _numberOfValidPixelHits;
    int _numberOfValidTrackerHits;
    int _numberOfLostPixelHits;
    int _numberOfLostTrackerHits;
    int _numberOfValidMuonHits;
    float _normalizedChi2;

    float _pfIso_Pt03;
    float _pfIso_Neutral03;
    float _pfIso_Gamma03;
    float _pfIso_Pt04;
    float _pfIso_Neutral04;
    float _pfIso_Gamma04;
    float _pfIso_Pt05;
    float _pfIso_Neutral05;
    float _pfIso_Gamma05;

public:
    TCMuon();
    virtual ~TCMuon();

    // "get" methods -----------

    TLorentzVector P4() const;
    TVector2 P2() const;
    float Pt() const;
    float PtError() const;
    TVector3 Vtx() const;
    float Et() const;
    float Eta() const;
    float Phi() const;
    int Charge() const;
    bool IsGLB() const;
    bool IsTRK() const;
    float CaloComp() const;
    float SegComp() const;
    float EmIso() const;
    float HadIso() const;
    float TrkIso() const;

    int Ntracks() const;
    int NumberOfValidPixelHits() const;
    int NumberOfValidTrackerHits() const;
    int NumberOfLostPixelHits() const;
    int NumberOfLostTrackerHits() const;
    int NumberOfValidMuonHits() const;
    float NormalizedChi2() const;
    int NumberOfMatches() const;

    float PfRelIso(float coneSize) const;
    float PfSumPt(float coneSize) const;
    float PfEGamma(float coneSize) const;
    float PfENeutral(float coneSize) const;

  // float dxy(TVector3 *primVtx) const;
  // float dz(TVector3 *primVtx) const;

   // "set" methods ---------
    void SetP4(TLorentzVector p4);
    void SetP4(float px, float py, float pz, float e);
    void SetPtError(float er);
    void SetVtx(float vx, float vy, float vz);

    void SetNtracks(int n);
    void SetCharge(int c);
    void SetIsGLB(bool t);
    void SetIsTRK(bool t);
    void SetCaloComp(float c);
    void SetSegComp(float s);
    void SetEMIso(float e);
    void SetHADIso(float h);
    void SetTRKIso(float t);
    void SetNumberOfMatches(int n);
    void SetNumberOfValidPixelHits(int n);
    void SetNumberOfValidTrackerHits(int n);
    void SetNumberOfValidMuonHits(int n);
    void SetNumberOfLostPixelHits(int n);
    void SetNumberOfLostTrackerHits(int n);
    void SetNormalizedChi2(float n);

    void SetPfSumPt(float coneSize, float f); 
    void SetPfEGamma(float coneSize, float f);
    void SetPfENeutral(float coneSize, float f);

    ClassDef(TCMuon, 1);

};

#endif	/* _TCMUON_H */


