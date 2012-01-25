#include "Higgs/ntupleProducer/interface/TCPhoton.h"
#include <iostream>

TCPhoton::TCPhoton() {
}

TCPhoton::~TCPhoton() {
}


// "get" methods -------------------------------------

TLorentzVector TCPhoton::P4() const {
   return _p4;
}

TVector3 TCPhoton::Vtx() const {
   return _vtx;
}

float TCPhoton::Pt() const {
   return _p4.Pt();
}

float TCPhoton::Eta() const {
 return _p4.Eta();
}

float TCPhoton::Phi() const {
  return _p4.Phi();
}

int TCPhoton::Charge() const {
   return _charge;
}

float TCPhoton::NormChi2() const {
   return _normChi2;
}

float TCPhoton::EmIso() const {
   return _emIso;
}

float TCPhoton::HadIso() const {
   return _hadIso;
}

float TCPhoton::TrkIso() const {
   return _trkIso;
}

float TCPhoton::PFIsoNeutral() const {
   return _pfIsoNeutral;
}

float TCPhoton::PFIsoCharged() const {
   return _pfIsoCharged;
}

float TCPhoton::PFIsoPhoton() const {
   return _pfIsoPhoton;
}

float TCPhoton::HadOverEm() const {
  return _hadOverEm;
}
float TCPhoton::DPhiSuperCluster() const {
  return _dPhiSuperCluster;
}
float TCPhoton::DEtaSuperCluster() const {
  return _dEtaSuperCluster;
}
float TCPhoton::SigmaIEtaIEta() const {
  return _sigmaIEtaIEta;
}
float TCPhoton::R9() const {
  return _r9;
}
float TCPhoton::SigmaIPhiIPhi() const {
	return _sigmaIPhiIPhi;
}
float TCPhoton::E2OverE9() const {
	return _e2OverE9;
}
float TCPhoton::EtaSupercluster() const {
	return _etaSupercluster;
}
bool  TCPhoton::TrackVeto() const {
	return _trackVeto;
}

int  TCPhoton::NumberOfConversions() const {
	return _nConversions;
}

float  TCPhoton::ConversionDz() const {
	return _conversionDz;
}

float  TCPhoton::ConversionDxy() const {
	return _conversionDxy;
}

//std::pair<TLorentzVector, TLorentzVector> TCPhoton::ConversionPairP4() const {
//    return _convP4;
//}

// "set" methods ---------------------------------------------

void TCPhoton::SetP4(TLorentzVector p4) {
  _p4 = p4;
}

void TCPhoton::SetP4(float px, float py, float pz, float e) {
  TLorentzVector p4(px, py, pz, e);
  _p4 = p4;
}

void TCPhoton::SetVtx(float vx, float vy, float vz) {
  TVector3 v3(vx, vy, vz);
  _vtx = v3;
}

void TCPhoton::SetCharge(int c){
  _charge = c;
}

void TCPhoton::SetNormChi2(float c){
  _normChi2 = c;
}
void TCPhoton::SetEMIso(float e){
  _emIso = e;
}
void TCPhoton::SetHADIso(float h){
  _hadIso = h;
}
void TCPhoton::SetTRKIso(float t){
    _trkIso = t;
}

void TCPhoton::SetPFIsoNeutral(float n){
    _pfIsoNeutral = n;
}
void TCPhoton::SetPFIsoCharged(float c){
    _pfIsoCharged = c;
}
void TCPhoton::SetPFIsoPhoton(float p){
    _pfIsoPhoton = p;
}

void TCPhoton::SetHadOverEm(float h){
  _hadOverEm = h;
}
void TCPhoton::SetDPhiSuperCluster(float d){
  _dPhiSuperCluster = d;
}
void TCPhoton::SetDEtaSuperCluster(float d){
  _dEtaSuperCluster = d;
}
void TCPhoton::SetSigmaIEtaIEta(float s){
  _sigmaIEtaIEta = s;
}
void TCPhoton::SetR9(float r){
  _r9 = r;
}
void TCPhoton::SetSigmaIPhiIPhi(float s) {
	_sigmaIPhiIPhi = s;
}
void TCPhoton::Sete2OverE9(float e) {
	_e2OverE9 = e;
}
void TCPhoton::SetEtaSupercluster(float e) {
	_etaSupercluster = e;
}

void TCPhoton::SetTrackVeto(bool t) {
	_trackVeto = t;
}

void TCPhoton::SetNumberOfConversions(int n) {
	_nConversions = n;
}

void TCPhoton::SetConversionDz(float d) {
	_conversionDz = d;
}

void TCPhoton::SetConversionDxy(float d) {
	_conversionDxy = d;
}

//void TCPhoton::SetConversionPairP4(TLorentzVector p1, TLorentzVector p2) {
//    _convP4.first = p1;
//    _convP4.second = p2;
//}
