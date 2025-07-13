// Changes
//------------
// gps.cpp
// 300 ID4=RMC
// 303 ID2=GSA
// 646 nur RMC
//------------
// parameters.h
// 266 FSB_DEFAULTS einbauen
//------------
// proc.cpp
// 292 // Format_String ($POGNR) auskommentieren
// 645 // Format_String ($PFLAU) auskommentieren
//------------
// ctrl.cpp
// 168 void ProcessCtrl() reinkopieren
// 366 if(BYTE==0x13) ProcessCtrlS() aufrufen
// 401 PrintPogns auskommentieren
//------------

// RAPA - Parameters
#define FSB_DEFAULTS
#define DMXIR
#define x_acft  0x08
#define x_verb  0x00
#define x_rate  0x01
// GLIDER
#ifdef DNXXX
#define x_id    0x123456
#define x_acft  0x07
#define x_adrt  3
#define x_pilot "FSB"
#define x_manuf "--"
#define x_model "--"
#define x_type  "--"
#define x_sn    "xxxx-xxxx"
#define x_reg   "D-NXXX"
#define x_base  "EDOR"
#endif
// DMXIB
#ifdef DMXIB
#define x_id    0x003FF193
#define x_acft  0x08
#define x_adrt  1
#define x_pilot "BORNEMANN"
#define x_manuf "COMCO"
#define x_model "C42"
#define x_type  "C42C-100PS"
#define x_sn    "1307-7269"
#define x_reg   "D-MXIB"
#define x_base  "SAW "
#endif
// DMXIV
#ifdef DMXIV
#define x_id    0x003FF95F
#define x_acft  0x08
#define x_adrt  1
#define x_pilot "FSB"
#define x_manuf "COMCO"
#define x_model "C42"
#define x_type  "C42B-100PS"
#define x_sn    "2105-7649"
#define x_reg   "D-MXIV"
#define x_base  "EDBF"
#endif
// DMXIY
#ifdef DMXIY
#define x_id    0x003FF936
#define x_adrt  1
#define x_acft  0x08
#define x_pilot "FSB"
#define x_manuf "COMCO"
#define x_model "C42"
#define x_type  "C42B-100PS"
#define x_sn    "2012-7641"
#define x_reg   "D-MXIY"
#define x_base  "EDBF"
#endif
// DMXIN
#ifdef DMXIN
#define x_id    0x003FF116
#define x_adrt  1
#define x_acft  0x08
#define x_pilot "FSB"
#define x_manuf "COMCO"
#define x_model "C42"
#define x_type  "C42B-100PS"
#define x_sn    "1806-7533"
#define x_reg   "D-MXIN"
#define x_base  "EDBF"
#endif
// DMXIH
#ifdef DMXIH
#define x_id    0x003FF643
#define x_adrt  1
#define x_acft  0x08
#define x_pilot "FSB"
#define x_manuf "COMCO"
#define x_model "C42"
#define x_type  "C42B-100PS"
#define x_sn    "1904-7563"
#define x_reg   "D-MXIH"
#define x_base  "EDBF"
#endif
// DMPPO
#ifdef DMPPO
#define x_id    0x3FF220
#define x_adrt  1
#define x_acft  0x08
#define x_pilot "Pomrenke"
#define x_manuf "COMCO"
#define x_model "C42C"
#define x_type  "C42C-100PS"
#define x_sn    "1303-7242"
#define x_reg   "D-MPPO"
#define x_base  "EDBF"
#endif
// DMXIR
#ifdef DMXIR
#define x_id    0x3FF72F
#define x_adrt  1
#define x_acft  0x08
#define x_pilot "FSB"
#define x_manuf "COMCO"
#define x_model "C42B"
#define x_type  "C42B-100PS"
#define x_sn    "1904-7563"
#define x_reg   "D-MXIR"
#define x_base  "EDBF"
#endif
// DMXIO
#ifdef DMXIO
#define x_id    0x3FF5D4
#define x_adrt  1
#define x_acft  0x08
#define x_pilot "FSB"
#define x_manuf "COMCO"
#define x_model "C42B"
#define x_type  "C42B-100PS"
#define x_sn    "1703-7486"
#define x_reg   "D-MXIO"
#define x_base  "EDBF"
#endif
// DMXIF
#ifdef DMXIF
#define x_id    0x3FF4CC
#define x_adrt  1
#define x_acft  0x08
#define x_pilot "FSB"
#define x_manuf "COMCO"
#define x_model "C42B"
#define x_type  "C42B-100PS"
#define x_sn    "1603-4774"
#define x_reg   "D-MXIF"
#define x_base  "EDBF"
#endif
// DMXPC
#ifdef DMXPC
#define x_id    0x3FEC89
#define x_adrt  1
#define x_acft  0x08
#define x_pilot "FSB"
#define x_manuf "RANS"
#define x_model "S6 COYOTE-II"
#define x_type  "RANS S6 80PS"
#define x_sn    "0994877"
#define x_reg   "D-MXPC"
#define x_base  "EDBF"
#endif
// DMXPT
#ifdef DMXPT
#define x_id    0x3FF7FA
#define x_adrt  1
#define x_acft  0x08
#define x_pilot "FSB"
#define x_manuf "COMCO"
#define x_model "C42B"
#define x_type  "C42B-100PS"
#define x_sn    "0907-7057"
#define x_reg   "D-MXPT"
#define x_base  "EDBF"
#endif
// DMXIL
#ifdef DMXIL
#define x_id    0x3FF98C
#define x_adrt  1
#define x_acft  0x08
#define x_pilot "FSB"
#define x_manuf "COMCO"
#define x_model "C42B"
#define x_type  "C42B-100PS"
#define x_sn    "2106-7653"
#define x_reg   "D-MXIL"
#define x_base  "EDBF"
#endif
// DMXIZ
#ifdef DMXIZ
#define x_id    0x3FFA80
#define x_adrt  1
#define x_acft  0x08
#define x_pilot "FSB"
#define x_manuf "COMCO"
#define x_model "C42B"
#define x_type  "C42B-100PS"
#define x_sn    "2201-7674"
#define x_reg   "D-MXIZ"
#define x_base  "EDBF"
#endif

#ifdef DMXPV
#define x_id    0x123456
#define x_adrt  3
#define x_acft  0x08
#define x_pilot "FSB"
#define x_manuf "AIRTRIKE"
#define x_model "EAGLE-V"
#define x_type  "EAGLE-V"
#define x_sn    "W0107"
#define x_reg   "D-MXPV"
#define x_base  "EDBF"
#endif
// END RAPA