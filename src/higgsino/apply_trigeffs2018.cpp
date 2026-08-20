#include <vector>
#include "core/baby.hpp"
#include "core/process.hpp"
#include "core/named_func.hpp"
#include "higgsino/hig_functions.hpp"
#include "higgsino/hig_utilities.hpp"
#include "higgsino/apply_trigeffs2018.hpp"

namespace Higfuncs{

const NamedFunc get_0l_trigeff2018("get_0l_trigeff2018", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.;
  float eff = 1., met = b.met(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 200 && met> 150 && met<= 155) {eff = 0.0753623; errup = 0.0210585; errdown = 0.0189363;}
  else if (ht> 0 && ht<= 200 && met> 155 && met<= 160) {eff = 0.101695; errup = 0.0289692; errdown = 0.0260135;}
  else if (ht> 0 && ht<= 200 && met> 160 && met<= 165) {eff = 0.148649; errup = 0.0585673; errdown = 0.0570074;}
  else if (ht> 0 && ht<= 200 && met> 165 && met<= 170) {eff = 0.175; errup = 0.0702074; errdown = 0.0680691;}
  else if (ht> 0 && ht<= 200 && met> 170 && met<= 180) {eff = 0.211982; errup = 0.0799304; errdown = 0.0788473;}
  else if (ht> 0 && ht<= 200 && met> 180 && met<= 190) {eff = 0.231884; errup = 0.0695221; errdown = 0.067064;}
  else if (ht> 0 && ht<= 200 && met> 190 && met<= 200) {eff = 0.273973; errup = 0.090532; errdown = 0.0859168;}
  else if (ht> 0 && ht<= 200 && met> 200 && met<= 9999) {eff = 0.362637; errup = 0.0636306; errdown = 0.0606582;}
  else if (ht> 200 && ht<= 300 && met> 150 && met<= 155) {eff = 0.189736; errup = 0.0354087; errdown = 0.0349414;}
  else if (ht> 200 && ht<= 300 && met> 155 && met<= 160) {eff = 0.242202; errup = 0.0444587; errdown = 0.0440269;}
  else if (ht> 200 && ht<= 300 && met> 160 && met<= 165) {eff = 0.315556; errup = 0.11188; errdown = 0.111703;}
  else if (ht> 200 && ht<= 300 && met> 165 && met<= 170) {eff = 0.348028; errup = 0.12311; errdown = 0.122965;}
  else if (ht> 200 && ht<= 300 && met> 170 && met<= 175) {eff = 0.399457; errup = 0.141123; errdown = 0.141013;}
  else if (ht> 200 && ht<= 300 && met> 175 && met<= 180) {eff = 0.427007; errup = 0.151444; errdown = 0.151326;}
  else if (ht> 200 && ht<= 300 && met> 180 && met<= 185) {eff = 0.507042; errup = 0.125839; errdown = 0.125852;}
  else if (ht> 200 && ht<= 300 && met> 185 && met<= 190) {eff = 0.562189; errup = 0.140116; errdown = 0.140292;}
  else if (ht> 200 && ht<= 300 && met> 190 && met<= 195) {eff = 0.622549; errup = 0.153826; errdown = 0.154128;}
  else if (ht> 200 && ht<= 300 && met> 195 && met<= 200) {eff = 0.666667; errup = 0.164805; errdown = 0.165328;}
  else if (ht> 200 && ht<= 300 && met> 200 && met<= 210) {eff = 0.707483; errup = 0.060804; errdown = 0.0614949;}
  else if (ht> 200 && ht<= 300 && met> 210 && met<= 220) {eff = 0.827778; errup = 0.0697439; errdown = 0.0714867;}
  else if (ht> 200 && ht<= 300 && met> 220 && met<= 230) {eff = 0.836257; errup = 0.0703913; errdown = 0.07228;}
  else if (ht> 200 && ht<= 300 && met> 230 && met<= 240) {eff = 0.891089; errup = 0.0655719; errdown = 0.0702867;}
  else if (ht> 200 && ht<= 300 && met> 240 && met<= 250) {eff = 0.859155; errup = 0.0697454; errdown = 0.0774175;}
  else if (ht> 200 && ht<= 300 && met> 250 && met<= 275) {eff = 0.934211; errup = 0.0657895; errdown = 0.0787797;}
  else if (ht> 200 && ht<= 300 && met> 275 && met<= 9999) {eff = 0.974359; errup = 0.025641; errdown = 0.0895547;}
  else if (ht> 300 && ht<= 400 && met> 150 && met<= 155) {eff = 0.267327; errup = 0.0709166; errdown = 0.0702916;}
  else if (ht> 300 && ht<= 400 && met> 155 && met<= 160) {eff = 0.364662; errup = 0.0945021; errdown = 0.0941434;}
  else if (ht> 300 && ht<= 400 && met> 160 && met<= 165) {eff = 0.493617; errup = 0.271978; errdown = 0.27197;}
  else if (ht> 300 && ht<= 400 && met> 165 && met<= 170) {eff = 0.52; errup = 0.286365; errdown = 0.286388;}
  else if (ht> 300 && ht<= 400 && met> 170 && met<= 175) {eff = 0.57732; errup = 0.317721; errdown = 0.317823;}
  else if (ht> 300 && ht<= 400 && met> 175 && met<= 180) {eff = 0.640777; errup = 0.351926; errdown = 0.352074;}
  else if (ht> 300 && ht<= 400 && met> 180 && met<= 185) {eff = 0.659218; errup = 0.0897642; errdown = 0.0905725;}
  else if (ht> 300 && ht<= 400 && met> 185 && met<= 190) {eff = 0.666667; errup = 0.0913299; errdown = 0.0922972;}
  else if (ht> 300 && ht<= 400 && met> 190 && met<= 195) {eff = 0.766917; errup = 0.102409; errdown = 0.104127;}
  else if (ht> 300 && ht<= 400 && met> 195 && met<= 200) {eff = 0.825175; errup = 0.107373; errdown = 0.109007;}
  else if (ht> 300 && ht<= 400 && met> 200 && met<= 210) {eff = 0.847458; errup = 0.0578777; errdown = 0.0592716;}
  else if (ht> 300 && ht<= 400 && met> 210 && met<= 220) {eff = 0.910995; errup = 0.0603679; errdown = 0.0622;}
  else if (ht> 300 && ht<= 400 && met> 220 && met<= 230) {eff = 0.905405; errup = 0.0613467; errdown = 0.0640677;}
  else if (ht> 300 && ht<= 400 && met> 230 && met<= 240) {eff = 0.933333; errup = 0.0521847; errdown = 0.0551457;}
  else if (ht> 300 && ht<= 400 && met> 240 && met<= 250) {eff = 0.951613; errup = 0.0483871; errdown = 0.0563073;}
  else if (ht> 300 && ht<= 400 && met> 250 && met<= 275) {eff = 0.979695; errup = 0.0200706; errdown = 0.0236084;}
  else if (ht> 300 && ht<= 400 && met> 275 && met<= 300) {eff = 0.992481; errup = 0.0075188; errdown = 0.0246696;}
  else if (ht> 300 && ht<= 400 && met> 300 && met<= 9999) {eff = 0.988095; errup = 0.0119048; errdown = 0.10006;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 155) {eff = 0.379613; errup = 0.116978; errdown = 0.116898;}
  else if (ht> 400 && ht<= 600 && met> 155 && met<= 160) {eff = 0.393443; errup = 0.121191; errdown = 0.121119;}
  else if (ht> 400 && ht<= 600 && met> 160 && met<= 165) {eff = 0.45679; errup = 0.101467; errdown = 0.101423;}
  else if (ht> 400 && ht<= 600 && met> 165 && met<= 170) {eff = 0.556064; errup = 0.122627; errdown = 0.122682;}
  else if (ht> 400 && ht<= 600 && met> 170 && met<= 175) {eff = 0.606061; errup = 0.133364; errdown = 0.133472;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 180) {eff = 0.69437; errup = 0.151983; errdown = 0.152164;}
  else if (ht> 400 && ht<= 600 && met> 180 && met<= 185) {eff = 0.671233; errup = 0.0388724; errdown = 0.0395263;}
  else if (ht> 400 && ht<= 600 && met> 185 && met<= 190) {eff = 0.762821; errup = 0.0415822; errdown = 0.042674;}
  else if (ht> 400 && ht<= 600 && met> 190 && met<= 195) {eff = 0.800687; errup = 0.0424958; errdown = 0.0437839;}
  else if (ht> 400 && ht<= 600 && met> 195 && met<= 200) {eff = 0.79845; errup = 0.0433596; errdown = 0.0448746;}
  else if (ht> 400 && ht<= 600 && met> 200 && met<= 210) {eff = 0.877847; errup = 0.0719429; errdown = 0.072312;}
  else if (ht> 400 && ht<= 600 && met> 210 && met<= 220) {eff = 0.924779; errup = 0.0751483; errdown = 0.0755152;}
  else if (ht> 400 && ht<= 600 && met> 220 && met<= 230) {eff = 0.971347; errup = 0.0286533; errdown = 0.0787493;}
  else if (ht> 400 && ht<= 600 && met> 230 && met<= 240) {eff = 0.990323; errup = 0.00967742; errdown = 0.0523581;}
  else if (ht> 400 && ht<= 600 && met> 240 && met<= 250) {eff = 0.981273; errup = 0.0187266; errdown = 0.0525513;}
  else if (ht> 400 && ht<= 600 && met> 250 && met<= 275) {eff = 0.985989; errup = 0.010703; errdown = 0.0117443;}
  else if (ht> 400 && ht<= 600 && met> 275 && met<= 300) {eff = 0.992736; errup = 0.00726392; errdown = 0.0119018;}
  else if (ht> 400 && ht<= 600 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0968677;}
  else if (ht> 600 && ht<= 950 && met> 150 && met<= 155) {eff = 0.415473; errup = 0.0726824; errdown = 0.0724874;}
  else if (ht> 600 && ht<= 950 && met> 155 && met<= 160) {eff = 0.476584; errup = 0.081734; errdown = 0.0816883;}
  else if (ht> 600 && ht<= 950 && met> 160 && met<= 165) {eff = 0.5; errup = 0.0968325; errdown = 0.0968325;}
  else if (ht> 600 && ht<= 950 && met> 165 && met<= 170) {eff = 0.595318; errup = 0.113257; errdown = 0.113436;}
  else if (ht> 600 && ht<= 950 && met> 170 && met<= 175) {eff = 0.617647; errup = 0.117507; errdown = 0.11775;}
  else if (ht> 600 && ht<= 950 && met> 175 && met<= 180) {eff = 0.667897; errup = 0.126183; errdown = 0.1265;}
  else if (ht> 600 && ht<= 950 && met> 180 && met<= 185) {eff = 0.764957; errup = 0.0555358; errdown = 0.0568263;}
  else if (ht> 600 && ht<= 950 && met> 185 && met<= 190) {eff = 0.760204; errup = 0.0568669; errdown = 0.0585064;}
  else if (ht> 600 && ht<= 950 && met> 190 && met<= 195) {eff = 0.809278; errup = 0.0581199; errdown = 0.0599256;}
  else if (ht> 600 && ht<= 950 && met> 195 && met<= 200) {eff = 0.857988; errup = 0.0600337; errdown = 0.0623137;}
  else if (ht> 600 && ht<= 950 && met> 200 && met<= 210) {eff = 0.874233; errup = 0.0372859; errdown = 0.0385877;}
  else if (ht> 600 && ht<= 950 && met> 210 && met<= 220) {eff = 0.922794; errup = 0.0377818; errdown = 0.0393961;}
  else if (ht> 600 && ht<= 950 && met> 220 && met<= 230) {eff = 0.952586; errup = 0.0378317; errdown = 0.0397035;}
  else if (ht> 600 && ht<= 950 && met> 230 && met<= 240) {eff = 0.976744; errup = 0.0232558; errdown = 0.050422;}
  else if (ht> 600 && ht<= 950 && met> 240 && met<= 250) {eff = 0.981013; errup = 0.0189873; errdown = 0.0515083;}
  else if (ht> 600 && ht<= 950 && met> 250 && met<= 275) {eff = 0.990172; errup = 0.00982801; errdown = 0.0149607;}
  else if (ht> 600 && ht<= 950 && met> 275 && met<= 300) {eff = 0.990099; errup = 0.00990099; errdown = 0.015982;}
  else if (ht> 600 && ht<= 950 && met> 300 && met<= 9999) {eff = 0.997396; errup = 0.00260417; errdown = 0.0967696;}
  else if (ht> 950 && ht<= 9999 && met> 150 && met<= 160) {eff = 0.48855; errup = 0.161205; errdown = 0.16115;}
  else if (ht> 950 && ht<= 9999 && met> 160 && met<= 170) {eff = 0.619469; errup = 0.0726791; errdown = 0.0742444;}
  else if (ht> 950 && ht<= 9999 && met> 170 && met<= 180) {eff = 0.719626; errup = 0.0775089; errdown = 0.0802521;}
  else if (ht> 950 && ht<= 9999 && met> 180 && met<= 190) {eff = 0.73; errup = 0.092722; errdown = 0.0953799;}
  else if (ht> 950 && ht<= 9999 && met> 190 && met<= 200) {eff = 0.908046; errup = 0.091954; errdown = 0.108269;}
  else if (ht> 950 && ht<= 9999 && met> 200 && met<= 210) {eff = 0.941176; errup = 0.0588235; errdown = 0.0914694;}
  else if (ht> 950 && ht<= 9999 && met> 210 && met<= 220) {eff = 0.901639; errup = 0.0885043; errdown = 0.096409;}
  else if (ht> 950 && ht<= 9999 && met> 220 && met<= 230) {eff = 0.888889; errup = 0.0897238; errdown = 0.0992086;}
  else if (ht> 950 && ht<= 9999 && met> 230 && met<= 240) {eff = 0.969697; errup = 0.030303; errdown = 0.0870295;}
  else if (ht> 950 && ht<= 9999 && met> 240 && met<= 250) {eff = 0.945946; errup = 0.0540541; errdown = 0.0866214;}
  else if (ht> 950 && ht<= 9999 && met> 250 && met<= 275) {eff = 0.989247; errup = 0.0107527; errdown = 0.027806;}
  else if (ht> 950 && ht<= 9999 && met> 275 && met<= 300) {eff = 1; errup = 0; errdown = 0.0373784;}
  else if (ht> 950 && ht<= 9999 && met> 300 && met<= 9999) {eff = 0.987805; errup = 0.0121951; errdown = 0.10055;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_0l_trigeff2018_mettru("get_0l_trigeff2018_mettru", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.;
  float eff = 1., met = b.met_tru(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 200 && met> 150 && met<= 155) {eff = 0.0753623; errup = 0.0210585; errdown = 0.0189363;}
  else if (ht> 0 && ht<= 200 && met> 155 && met<= 160) {eff = 0.101695; errup = 0.0289692; errdown = 0.0260135;}
  else if (ht> 0 && ht<= 200 && met> 160 && met<= 165) {eff = 0.148649; errup = 0.0585673; errdown = 0.0570074;}
  else if (ht> 0 && ht<= 200 && met> 165 && met<= 170) {eff = 0.175; errup = 0.0702074; errdown = 0.0680691;}
  else if (ht> 0 && ht<= 200 && met> 170 && met<= 180) {eff = 0.211982; errup = 0.0799304; errdown = 0.0788473;}
  else if (ht> 0 && ht<= 200 && met> 180 && met<= 190) {eff = 0.231884; errup = 0.0695221; errdown = 0.067064;}
  else if (ht> 0 && ht<= 200 && met> 190 && met<= 200) {eff = 0.273973; errup = 0.090532; errdown = 0.0859168;}
  else if (ht> 0 && ht<= 200 && met> 200 && met<= 9999) {eff = 0.362637; errup = 0.0636306; errdown = 0.0606582;}
  else if (ht> 200 && ht<= 300 && met> 150 && met<= 155) {eff = 0.189736; errup = 0.0354087; errdown = 0.0349414;}
  else if (ht> 200 && ht<= 300 && met> 155 && met<= 160) {eff = 0.242202; errup = 0.0444587; errdown = 0.0440269;}
  else if (ht> 200 && ht<= 300 && met> 160 && met<= 165) {eff = 0.315556; errup = 0.11188; errdown = 0.111703;}
  else if (ht> 200 && ht<= 300 && met> 165 && met<= 170) {eff = 0.348028; errup = 0.12311; errdown = 0.122965;}
  else if (ht> 200 && ht<= 300 && met> 170 && met<= 175) {eff = 0.399457; errup = 0.141123; errdown = 0.141013;}
  else if (ht> 200 && ht<= 300 && met> 175 && met<= 180) {eff = 0.427007; errup = 0.151444; errdown = 0.151326;}
  else if (ht> 200 && ht<= 300 && met> 180 && met<= 185) {eff = 0.507042; errup = 0.125839; errdown = 0.125852;}
  else if (ht> 200 && ht<= 300 && met> 185 && met<= 190) {eff = 0.562189; errup = 0.140116; errdown = 0.140292;}
  else if (ht> 200 && ht<= 300 && met> 190 && met<= 195) {eff = 0.622549; errup = 0.153826; errdown = 0.154128;}
  else if (ht> 200 && ht<= 300 && met> 195 && met<= 200) {eff = 0.666667; errup = 0.164805; errdown = 0.165328;}
  else if (ht> 200 && ht<= 300 && met> 200 && met<= 210) {eff = 0.707483; errup = 0.060804; errdown = 0.0614949;}
  else if (ht> 200 && ht<= 300 && met> 210 && met<= 220) {eff = 0.827778; errup = 0.0697439; errdown = 0.0714867;}
  else if (ht> 200 && ht<= 300 && met> 220 && met<= 230) {eff = 0.836257; errup = 0.0703913; errdown = 0.07228;}
  else if (ht> 200 && ht<= 300 && met> 230 && met<= 240) {eff = 0.891089; errup = 0.0655719; errdown = 0.0702867;}
  else if (ht> 200 && ht<= 300 && met> 240 && met<= 250) {eff = 0.859155; errup = 0.0697454; errdown = 0.0774175;}
  else if (ht> 200 && ht<= 300 && met> 250 && met<= 275) {eff = 0.934211; errup = 0.0657895; errdown = 0.0787797;}
  else if (ht> 200 && ht<= 300 && met> 275 && met<= 9999) {eff = 0.974359; errup = 0.025641; errdown = 0.0895547;}
  else if (ht> 300 && ht<= 400 && met> 150 && met<= 155) {eff = 0.267327; errup = 0.0709166; errdown = 0.0702916;}
  else if (ht> 300 && ht<= 400 && met> 155 && met<= 160) {eff = 0.364662; errup = 0.0945021; errdown = 0.0941434;}
  else if (ht> 300 && ht<= 400 && met> 160 && met<= 165) {eff = 0.493617; errup = 0.271978; errdown = 0.27197;}
  else if (ht> 300 && ht<= 400 && met> 165 && met<= 170) {eff = 0.52; errup = 0.286365; errdown = 0.286388;}
  else if (ht> 300 && ht<= 400 && met> 170 && met<= 175) {eff = 0.57732; errup = 0.317721; errdown = 0.317823;}
  else if (ht> 300 && ht<= 400 && met> 175 && met<= 180) {eff = 0.640777; errup = 0.351926; errdown = 0.352074;}
  else if (ht> 300 && ht<= 400 && met> 180 && met<= 185) {eff = 0.659218; errup = 0.0897642; errdown = 0.0905725;}
  else if (ht> 300 && ht<= 400 && met> 185 && met<= 190) {eff = 0.666667; errup = 0.0913299; errdown = 0.0922972;}
  else if (ht> 300 && ht<= 400 && met> 190 && met<= 195) {eff = 0.766917; errup = 0.102409; errdown = 0.104127;}
  else if (ht> 300 && ht<= 400 && met> 195 && met<= 200) {eff = 0.825175; errup = 0.107373; errdown = 0.109007;}
  else if (ht> 300 && ht<= 400 && met> 200 && met<= 210) {eff = 0.847458; errup = 0.0578777; errdown = 0.0592716;}
  else if (ht> 300 && ht<= 400 && met> 210 && met<= 220) {eff = 0.910995; errup = 0.0603679; errdown = 0.0622;}
  else if (ht> 300 && ht<= 400 && met> 220 && met<= 230) {eff = 0.905405; errup = 0.0613467; errdown = 0.0640677;}
  else if (ht> 300 && ht<= 400 && met> 230 && met<= 240) {eff = 0.933333; errup = 0.0521847; errdown = 0.0551457;}
  else if (ht> 300 && ht<= 400 && met> 240 && met<= 250) {eff = 0.951613; errup = 0.0483871; errdown = 0.0563073;}
  else if (ht> 300 && ht<= 400 && met> 250 && met<= 275) {eff = 0.979695; errup = 0.0200706; errdown = 0.0236084;}
  else if (ht> 300 && ht<= 400 && met> 275 && met<= 300) {eff = 0.992481; errup = 0.0075188; errdown = 0.0246696;}
  else if (ht> 300 && ht<= 400 && met> 300 && met<= 9999) {eff = 0.988095; errup = 0.0119048; errdown = 0.10006;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 155) {eff = 0.379613; errup = 0.116978; errdown = 0.116898;}
  else if (ht> 400 && ht<= 600 && met> 155 && met<= 160) {eff = 0.393443; errup = 0.121191; errdown = 0.121119;}
  else if (ht> 400 && ht<= 600 && met> 160 && met<= 165) {eff = 0.45679; errup = 0.101467; errdown = 0.101423;}
  else if (ht> 400 && ht<= 600 && met> 165 && met<= 170) {eff = 0.556064; errup = 0.122627; errdown = 0.122682;}
  else if (ht> 400 && ht<= 600 && met> 170 && met<= 175) {eff = 0.606061; errup = 0.133364; errdown = 0.133472;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 180) {eff = 0.69437; errup = 0.151983; errdown = 0.152164;}
  else if (ht> 400 && ht<= 600 && met> 180 && met<= 185) {eff = 0.671233; errup = 0.0388724; errdown = 0.0395263;}
  else if (ht> 400 && ht<= 600 && met> 185 && met<= 190) {eff = 0.762821; errup = 0.0415822; errdown = 0.042674;}
  else if (ht> 400 && ht<= 600 && met> 190 && met<= 195) {eff = 0.800687; errup = 0.0424958; errdown = 0.0437839;}
  else if (ht> 400 && ht<= 600 && met> 195 && met<= 200) {eff = 0.79845; errup = 0.0433596; errdown = 0.0448746;}
  else if (ht> 400 && ht<= 600 && met> 200 && met<= 210) {eff = 0.877847; errup = 0.0719429; errdown = 0.072312;}
  else if (ht> 400 && ht<= 600 && met> 210 && met<= 220) {eff = 0.924779; errup = 0.0751483; errdown = 0.0755152;}
  else if (ht> 400 && ht<= 600 && met> 220 && met<= 230) {eff = 0.971347; errup = 0.0286533; errdown = 0.0787493;}
  else if (ht> 400 && ht<= 600 && met> 230 && met<= 240) {eff = 0.990323; errup = 0.00967742; errdown = 0.0523581;}
  else if (ht> 400 && ht<= 600 && met> 240 && met<= 250) {eff = 0.981273; errup = 0.0187266; errdown = 0.0525513;}
  else if (ht> 400 && ht<= 600 && met> 250 && met<= 275) {eff = 0.985989; errup = 0.010703; errdown = 0.0117443;}
  else if (ht> 400 && ht<= 600 && met> 275 && met<= 300) {eff = 0.992736; errup = 0.00726392; errdown = 0.0119018;}
  else if (ht> 400 && ht<= 600 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0968677;}
  else if (ht> 600 && ht<= 950 && met> 150 && met<= 155) {eff = 0.415473; errup = 0.0726824; errdown = 0.0724874;}
  else if (ht> 600 && ht<= 950 && met> 155 && met<= 160) {eff = 0.476584; errup = 0.081734; errdown = 0.0816883;}
  else if (ht> 600 && ht<= 950 && met> 160 && met<= 165) {eff = 0.5; errup = 0.0968325; errdown = 0.0968325;}
  else if (ht> 600 && ht<= 950 && met> 165 && met<= 170) {eff = 0.595318; errup = 0.113257; errdown = 0.113436;}
  else if (ht> 600 && ht<= 950 && met> 170 && met<= 175) {eff = 0.617647; errup = 0.117507; errdown = 0.11775;}
  else if (ht> 600 && ht<= 950 && met> 175 && met<= 180) {eff = 0.667897; errup = 0.126183; errdown = 0.1265;}
  else if (ht> 600 && ht<= 950 && met> 180 && met<= 185) {eff = 0.764957; errup = 0.0555358; errdown = 0.0568263;}
  else if (ht> 600 && ht<= 950 && met> 185 && met<= 190) {eff = 0.760204; errup = 0.0568669; errdown = 0.0585064;}
  else if (ht> 600 && ht<= 950 && met> 190 && met<= 195) {eff = 0.809278; errup = 0.0581199; errdown = 0.0599256;}
  else if (ht> 600 && ht<= 950 && met> 195 && met<= 200) {eff = 0.857988; errup = 0.0600337; errdown = 0.0623137;}
  else if (ht> 600 && ht<= 950 && met> 200 && met<= 210) {eff = 0.874233; errup = 0.0372859; errdown = 0.0385877;}
  else if (ht> 600 && ht<= 950 && met> 210 && met<= 220) {eff = 0.922794; errup = 0.0377818; errdown = 0.0393961;}
  else if (ht> 600 && ht<= 950 && met> 220 && met<= 230) {eff = 0.952586; errup = 0.0378317; errdown = 0.0397035;}
  else if (ht> 600 && ht<= 950 && met> 230 && met<= 240) {eff = 0.976744; errup = 0.0232558; errdown = 0.050422;}
  else if (ht> 600 && ht<= 950 && met> 240 && met<= 250) {eff = 0.981013; errup = 0.0189873; errdown = 0.0515083;}
  else if (ht> 600 && ht<= 950 && met> 250 && met<= 275) {eff = 0.990172; errup = 0.00982801; errdown = 0.0149607;}
  else if (ht> 600 && ht<= 950 && met> 275 && met<= 300) {eff = 0.990099; errup = 0.00990099; errdown = 0.015982;}
  else if (ht> 600 && ht<= 950 && met> 300 && met<= 9999) {eff = 0.997396; errup = 0.00260417; errdown = 0.0967696;}
  else if (ht> 950 && ht<= 9999 && met> 150 && met<= 160) {eff = 0.48855; errup = 0.161205; errdown = 0.16115;}
  else if (ht> 950 && ht<= 9999 && met> 160 && met<= 170) {eff = 0.619469; errup = 0.0726791; errdown = 0.0742444;}
  else if (ht> 950 && ht<= 9999 && met> 170 && met<= 180) {eff = 0.719626; errup = 0.0775089; errdown = 0.0802521;}
  else if (ht> 950 && ht<= 9999 && met> 180 && met<= 190) {eff = 0.73; errup = 0.092722; errdown = 0.0953799;}
  else if (ht> 950 && ht<= 9999 && met> 190 && met<= 200) {eff = 0.908046; errup = 0.091954; errdown = 0.108269;}
  else if (ht> 950 && ht<= 9999 && met> 200 && met<= 210) {eff = 0.941176; errup = 0.0588235; errdown = 0.0914694;}
  else if (ht> 950 && ht<= 9999 && met> 210 && met<= 220) {eff = 0.901639; errup = 0.0885043; errdown = 0.096409;}
  else if (ht> 950 && ht<= 9999 && met> 220 && met<= 230) {eff = 0.888889; errup = 0.0897238; errdown = 0.0992086;}
  else if (ht> 950 && ht<= 9999 && met> 230 && met<= 240) {eff = 0.969697; errup = 0.030303; errdown = 0.0870295;}
  else if (ht> 950 && ht<= 9999 && met> 240 && met<= 250) {eff = 0.945946; errup = 0.0540541; errdown = 0.0866214;}
  else if (ht> 950 && ht<= 9999 && met> 250 && met<= 275) {eff = 0.989247; errup = 0.0107527; errdown = 0.027806;}
  else if (ht> 950 && ht<= 9999 && met> 275 && met<= 300) {eff = 1; errup = 0; errdown = 0.0373784;}
  else if (ht> 950 && ht<= 9999 && met> 300 && met<= 9999) {eff = 0.987805; errup = 0.0121951; errdown = 0.10055;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_0l_fakemet_trigeff2018("get_0l_fakemet_trigeff2018", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.;
  float eff = 1., met = b.met(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 350 && met> 150 && met<= 160) {eff = 0.092511; errup = 0.0156708; errdown = 0.0137329;}
  else if (ht> 0 && ht<= 350 && met> 160 && met<= 170) {eff = 0.109966; errup = 0.0215151; errdown = 0.0185894;}
  else if (ht> 0 && ht<= 350 && met> 170 && met<= 180) {eff = 0.202532; errup = 0.0371122; errdown = 0.0329907;}
  else if (ht> 0 && ht<= 350 && met> 180 && met<= 190) {eff = 0.247619; errup = 0.0493409; errdown = 0.0440232;}
  else if (ht> 0 && ht<= 350 && met> 190 && met<= 200) {eff = 0.333333; errup = 0.066209; errdown = 0.0608132;}
  else if (ht> 0 && ht<= 350 && met> 200 && met<= 225) {eff = 0.349206; errup = 0.0701038; errdown = 0.064741;}
  else if (ht> 0 && ht<= 350 && met> 225 && met<= 250) {eff = 0.772727; errup = 0.0944237; errdown = 0.12452;}
  else if (ht> 0 && ht<= 350 && met> 250 && met<= 9999) {eff = 0.842105; errup = 0.0607858; errdown = 0.0823864;}
  else if (ht> 350 && ht<= 450 && met> 150 && met<= 155) {eff = 0.137232; errup = 0.0129348; errdown = 0.0120262;}
  else if (ht> 350 && ht<= 450 && met> 155 && met<= 160) {eff = 0.194313; errup = 0.0170143; errdown = 0.0160009;}
  else if (ht> 350 && ht<= 450 && met> 160 && met<= 165) {eff = 0.22824; errup = 0.0199632; errdown = 0.0188581;}
  else if (ht> 350 && ht<= 450 && met> 165 && met<= 170) {eff = 0.225201; errup = 0.0237257; errdown = 0.0221635;}
  else if (ht> 350 && ht<= 450 && met> 170 && met<= 175) {eff = 0.227425; errup = 0.026851; errdown = 0.024906;}
  else if (ht> 350 && ht<= 450 && met> 175 && met<= 180) {eff = 0.293103; errup = 0.032928; errdown = 0.031021;}
  else if (ht> 350 && ht<= 450 && met> 180 && met<= 185) {eff = 0.378698; errup = 0.0409192; errdown = 0.0393757;}
  else if (ht> 350 && ht<= 450 && met> 185 && met<= 190) {eff = 0.366667; errup = 0.0434927; errdown = 0.0415726;}
  else if (ht> 350 && ht<= 450 && met> 190 && met<= 195) {eff = 0.37069; errup = 0.0501478; errdown = 0.0477176;}
  else if (ht> 350 && ht<= 450 && met> 195 && met<= 200) {eff = 0.477273; errup = 0.0588427; errdown = 0.0582753;}
  else if (ht> 350 && ht<= 450 && met> 200 && met<= 210) {eff = 0.509934; errup = 0.0437649; errdown = 0.0439065;}
  else if (ht> 350 && ht<= 450 && met> 210 && met<= 220) {eff = 0.59633; errup = 0.050364; errdown = 0.0522925;}
  else if (ht> 350 && ht<= 450 && met> 220 && met<= 230) {eff = 0.78125; errup = 0.0540704; errdown = 0.0640827;}
  else if (ht> 350 && ht<= 450 && met> 230 && met<= 240) {eff = 0.777778; errup = 0.0548637; errdown = 0.0649106;}
  else if (ht> 350 && ht<= 450 && met> 240 && met<= 250) {eff = 0.76; errup = 0.0907807; errdown = 0.11573;}
  else if (ht> 350 && ht<= 450 && met> 250 && met<= 300) {eff = 0.870588; errup = 0.037145; errdown = 0.0471935;}
  else if (ht> 350 && ht<= 450 && met> 300 && met<= 9999) {eff = 0.9375; errup = 0.033822; errdown = 0.0570774;}
  else if (ht> 450 && ht<= 550 && met> 150 && met<= 155) {eff = 0.187797; errup = 0.0107244; errdown = 0.0102872;}
  else if (ht> 450 && ht<= 550 && met> 155 && met<= 160) {eff = 0.204464; errup = 0.0127672; errdown = 0.0122202;}
  else if (ht> 450 && ht<= 550 && met> 160 && met<= 165) {eff = 0.249191; errup = 0.0150201; errdown = 0.0144588;}
  else if (ht> 450 && ht<= 550 && met> 165 && met<= 170) {eff = 0.33033; errup = 0.0192271; errdown = 0.0186971;}
  else if (ht> 450 && ht<= 550 && met> 170 && met<= 175) {eff = 0.34087; errup = 0.020908; errdown = 0.0203308;}
  else if (ht> 450 && ht<= 550 && met> 175 && met<= 180) {eff = 0.383442; errup = 0.0240239; errdown = 0.0234924;}
  else if (ht> 450 && ht<= 550 && met> 180 && met<= 185) {eff = 0.41779; errup = 0.0271484; errdown = 0.0266827;}
  else if (ht> 450 && ht<= 550 && met> 185 && met<= 190) {eff = 0.478261; errup = 0.0294134; errdown = 0.0292712;}
  else if (ht> 450 && ht<= 550 && met> 190 && met<= 195) {eff = 0.515267; errup = 0.0326561; errdown = 0.0327796;}
  else if (ht> 450 && ht<= 550 && met> 195 && met<= 200) {eff = 0.5; errup = 0.0362459; errdown = 0.0362459;}
  else if (ht> 450 && ht<= 550 && met> 200 && met<= 210) {eff = 0.610738; errup = 0.0294784; errdown = 0.0302641;}
  else if (ht> 450 && ht<= 550 && met> 210 && met<= 220) {eff = 0.723958; errup = 0.0335259; errdown = 0.0360388;}
  else if (ht> 450 && ht<= 550 && met> 220 && met<= 230) {eff = 0.714286; errup = 0.0389459; errdown = 0.0421136;}
  else if (ht> 450 && ht<= 550 && met> 230 && met<= 240) {eff = 0.816667; errup = 0.0364361; errdown = 0.0423046;}
  else if (ht> 450 && ht<= 550 && met> 240 && met<= 250) {eff = 0.759036; errup = 0.0491827; errdown = 0.0561698;}
  else if (ht> 450 && ht<= 550 && met> 250 && met<= 300) {eff = 0.857143; errup = 0.0238441; errdown = 0.0273276;}
  else if (ht> 450 && ht<= 550 && met> 300 && met<= 400) {eff = 0.903509; errup = 0.0279465; errdown = 0.0361003;}
  else if (ht> 450 && ht<= 550 && met> 400 && met<= 9999) {eff = 0.789474; errup = 0.0978662; errdown = 0.135427;}
  else if (ht> 550 && ht<= 650 && met> 150 && met<= 155) {eff = 0.207151; errup = 0.0101075; errdown = 0.00976542;}
  else if (ht> 550 && ht<= 650 && met> 155 && met<= 160) {eff = 0.251317; errup = 0.012464; errdown = 0.0120781;}
  else if (ht> 550 && ht<= 650 && met> 160 && met<= 165) {eff = 0.291038; errup = 0.0141603; errdown = 0.0137775;}
  else if (ht> 550 && ht<= 650 && met> 165 && met<= 170) {eff = 0.334515; errup = 0.0170056; errdown = 0.0166005;}
  else if (ht> 550 && ht<= 650 && met> 170 && met<= 175) {eff = 0.371553; errup = 0.0193147; errdown = 0.0189275;}
  else if (ht> 550 && ht<= 650 && met> 175 && met<= 180) {eff = 0.407348; errup = 0.0205739; errdown = 0.0202662;}
  else if (ht> 550 && ht<= 650 && met> 180 && met<= 185) {eff = 0.5; errup = 0.023385; errdown = 0.023385;}
  else if (ht> 550 && ht<= 650 && met> 185 && met<= 190) {eff = 0.511568; errup = 0.0265625; errdown = 0.0266249;}
  else if (ht> 550 && ht<= 650 && met> 190 && met<= 195) {eff = 0.515581; errup = 0.0279277; errdown = 0.0280205;}
  else if (ht> 550 && ht<= 650 && met> 195 && met<= 200) {eff = 0.573883; errup = 0.0303836; errdown = 0.0309203;}
  else if (ht> 550 && ht<= 650 && met> 200 && met<= 210) {eff = 0.629291; errup = 0.023911; errdown = 0.0245312;}
  else if (ht> 550 && ht<= 650 && met> 210 && met<= 220) {eff = 0.645161; errup = 0.0282464; errdown = 0.0292365;}
  else if (ht> 550 && ht<= 650 && met> 220 && met<= 230) {eff = 0.783333; errup = 0.0273594; errdown = 0.0298988;}
  else if (ht> 550 && ht<= 650 && met> 230 && met<= 240) {eff = 0.75; errup = 0.0323708; errdown = 0.0351827;}
  else if (ht> 550 && ht<= 650 && met> 240 && met<= 250) {eff = 0.793548; errup = 0.0335734; errdown = 0.0377199;}
  else if (ht> 550 && ht<= 650 && met> 250 && met<= 275) {eff = 0.803279; errup = 0.0261174; errdown = 0.0287966;}
  else if (ht> 550 && ht<= 650 && met> 275 && met<= 300) {eff = 0.863309; errup = 0.0297559; errdown = 0.0356015;}
  else if (ht> 550 && ht<= 650 && met> 300 && met<= 400) {eff = 0.829431; errup = 0.0222168; errdown = 0.0245848;}
  else if (ht> 550 && ht<= 650 && met> 400 && met<= 9999) {eff = 0.942085; errup = 0.0145447; errdown = 0.0184033;}
  else if (ht> 650 && ht<= 800 && met> 150 && met<= 155) {eff = 0.288184; errup = 0.007894; errdown = 0.00776965;}
  else if (ht> 650 && ht<= 800 && met> 155 && met<= 160) {eff = 0.335408; errup = 0.00900886; errdown = 0.00889282;}
  else if (ht> 650 && ht<= 800 && met> 160 && met<= 165) {eff = 0.350756; errup = 0.0101979; errdown = 0.0100662;}
  else if (ht> 650 && ht<= 800 && met> 165 && met<= 170) {eff = 0.382075; errup = 0.0114462; errdown = 0.0113197;}
  else if (ht> 650 && ht<= 800 && met> 170 && met<= 175) {eff = 0.42; errup = 0.0126987; errdown = 0.0125962;}
  else if (ht> 650 && ht<= 800 && met> 175 && met<= 180) {eff = 0.443667; errup = 0.0142765; errdown = 0.0141865;}
  else if (ht> 650 && ht<= 800 && met> 180 && met<= 185) {eff = 0.502267; errup = 0.0154989; errdown = 0.0155031;}
  else if (ht> 650 && ht<= 800 && met> 185 && met<= 190) {eff = 0.548559; errup = 0.016728; errdown = 0.016835;}
  else if (ht> 650 && ht<= 800 && met> 190 && met<= 195) {eff = 0.587145; errup = 0.0178053; errdown = 0.0180283;}
  else if (ht> 650 && ht<= 800 && met> 195 && met<= 200) {eff = 0.620053; errup = 0.018113; errdown = 0.0184413;}
  else if (ht> 650 && ht<= 800 && met> 200 && met<= 210) {eff = 0.653622; errup = 0.0140088; errdown = 0.0142723;}
  else if (ht> 650 && ht<= 800 && met> 210 && met<= 220) {eff = 0.718714; errup = 0.0155406; errdown = 0.0160614;}
  else if (ht> 650 && ht<= 800 && met> 220 && met<= 230) {eff = 0.768606; errup = 0.0158023; errdown = 0.0165604;}
  else if (ht> 650 && ht<= 800 && met> 230 && met<= 240) {eff = 0.79732; errup = 0.0167571; errdown = 0.0178028;}
  else if (ht> 650 && ht<= 800 && met> 240 && met<= 250) {eff = 0.811355; errup = 0.0170473; errdown = 0.0182489;}
  else if (ht> 650 && ht<= 800 && met> 250 && met<= 275) {eff = 0.840081; errup = 0.011805; errdown = 0.0125229;}
  else if (ht> 650 && ht<= 800 && met> 275 && met<= 300) {eff = 0.880051; errup = 0.011669; errdown = 0.0126805;}
  else if (ht> 650 && ht<= 800 && met> 300 && met<= 350) {eff = 0.905941; errup = 0.00844686; errdown = 0.00914937;}
  else if (ht> 650 && ht<= 800 && met> 350 && met<= 400) {eff = 0.93505; errup = 0.00829093; errdown = 0.00933082;}
  else if (ht> 650 && ht<= 800 && met> 400 && met<= 450) {eff = 0.968794; errup = 0.00653768; errdown = 0.00801057;}
  else if (ht> 650 && ht<= 800 && met> 450 && met<= 500) {eff = 0.968992; errup = 0.00760253; errdown = 0.00964895;}
  else if (ht> 650 && ht<= 800 && met> 500 && met<= 9999) {eff = 0.987179; errup = 0.00471619; errdown = 0.00683715;}
  else if (ht> 800 && ht<= 1000 && met> 150 && met<= 155) {eff = 0.491461; errup = 0.00404596; errdown = 0.00404485;}
  else if (ht> 800 && ht<= 1000 && met> 155 && met<= 160) {eff = 0.534463; errup = 0.00436419; errdown = 0.00436943;}
  else if (ht> 800 && ht<= 1000 && met> 160 && met<= 165) {eff = 0.579677; errup = 0.00466051; errdown = 0.00467463;}
  else if (ht> 800 && ht<= 1000 && met> 165 && met<= 170) {eff = 0.608639; errup = 0.00490772; errdown = 0.00492957;}
  else if (ht> 800 && ht<= 1000 && met> 170 && met<= 175) {eff = 0.649199; errup = 0.00521944; errdown = 0.00525498;}
  else if (ht> 800 && ht<= 1000 && met> 175 && met<= 180) {eff = 0.672952; errup = 0.00550766; errdown = 0.00555516;}
  else if (ht> 800 && ht<= 1000 && met> 180 && met<= 185) {eff = 0.69506; errup = 0.00577574; errdown = 0.00583697;}
  else if (ht> 800 && ht<= 1000 && met> 185 && met<= 190) {eff = 0.726545; errup = 0.00592728; errdown = 0.00600731;}
  else if (ht> 800 && ht<= 1000 && met> 190 && met<= 195) {eff = 0.752014; errup = 0.006101; errdown = 0.00620164;}
  else if (ht> 800 && ht<= 1000 && met> 195 && met<= 200) {eff = 0.764937; errup = 0.00649293; errdown = 0.00661733;}
  else if (ht> 800 && ht<= 1000 && met> 200 && met<= 210) {eff = 0.790161; errup = 0.00467824; errdown = 0.00475503;}
  else if (ht> 800 && ht<= 1000 && met> 210 && met<= 220) {eff = 0.819557; errup = 0.00493354; errdown = 0.00503925;}
  else if (ht> 800 && ht<= 1000 && met> 220 && met<= 230) {eff = 0.849831; errup = 0.00506986; errdown = 0.00521194;}
  else if (ht> 800 && ht<= 1000 && met> 230 && met<= 240) {eff = 0.856447; errup = 0.00550685; errdown = 0.00568444;}
  else if (ht> 800 && ht<= 1000 && met> 240 && met<= 250) {eff = 0.874928; errup = 0.00565536; errdown = 0.00587749;}
  else if (ht> 800 && ht<= 1000 && met> 250 && met<= 275) {eff = 0.894373; errup = 0.00378496; errdown = 0.003906;}
  else if (ht> 800 && ht<= 1000 && met> 275 && met<= 300) {eff = 0.909152; errup = 0.00432247; errdown = 0.00451079;}
  else if (ht> 800 && ht<= 1000 && met> 300 && met<= 350) {eff = 0.93609; errup = 0.00328222; errdown = 0.00344261;}
  else if (ht> 800 && ht<= 1000 && met> 350 && met<= 400) {eff = 0.946862; errup = 0.00424947; errdown = 0.00458156;}
  else if (ht> 800 && ht<= 1000 && met> 400 && met<= 450) {eff = 0.964643; errup = 0.00477687; errdown = 0.00543997;}
  else if (ht> 800 && ht<= 1000 && met> 450 && met<= 500) {eff = 0.975364; errup = 0.00517213; errdown = 0.00635108;}
  else if (ht> 800 && ht<= 1000 && met> 500 && met<= 9999) {eff = 0.980167; errup = 0.00448289; errdown = 0.00560095;}
  else if (ht> 1000 && ht<= 9999 && met> 150 && met<= 155) {eff = 0.396612; errup = 0.00137603; errdown = 0.0013744;}
  else if (ht> 1000 && ht<= 9999 && met> 155 && met<= 160) {eff = 0.42593; errup = 0.00150386; errdown = 0.0015025;}
  else if (ht> 1000 && ht<= 9999 && met> 160 && met<= 165) {eff = 0.463102; errup = 0.00163217; errdown = 0.00163138;}
  else if (ht> 1000 && ht<= 9999 && met> 165 && met<= 170) {eff = 0.491056; errup = 0.00176398; errdown = 0.00176376;}
  else if (ht> 1000 && ht<= 9999 && met> 170 && met<= 175) {eff = 0.522925; errup = 0.00189924; errdown = 0.0018999;}
  else if (ht> 1000 && ht<= 9999 && met> 175 && met<= 180) {eff = 0.550302; errup = 0.00203839; errdown = 0.00204008;}
  else if (ht> 1000 && ht<= 9999 && met> 180 && met<= 185) {eff = 0.577447; errup = 0.00217706; errdown = 0.00218006;}
  else if (ht> 1000 && ht<= 9999 && met> 185 && met<= 190) {eff = 0.608964; errup = 0.00231707; errdown = 0.00232197;}
  else if (ht> 1000 && ht<= 9999 && met> 190 && met<= 195) {eff = 0.628483; errup = 0.00245837; errdown = 0.002465;}
  else if (ht> 1000 && ht<= 9999 && met> 195 && met<= 200) {eff = 0.652984; errup = 0.00258487; errdown = 0.00259387;}
  else if (ht> 1000 && ht<= 9999 && met> 200 && met<= 210) {eff = 0.681443; errup = 0.00198352; errdown = 0.00199009;}
  else if (ht> 1000 && ht<= 9999 && met> 210 && met<= 220) {eff = 0.720929; errup = 0.00216933; errdown = 0.00217966;}
  else if (ht> 1000 && ht<= 9999 && met> 220 && met<= 230) {eff = 0.749016; errup = 0.00236589; errdown = 0.00238072;}
  else if (ht> 1000 && ht<= 9999 && met> 230 && met<= 240) {eff = 0.773675; errup = 0.00257565; errdown = 0.0025964;}
  else if (ht> 1000 && ht<= 9999 && met> 240 && met<= 250) {eff = 0.790742; errup = 0.00281409; errdown = 0.00284196;}
  else if (ht> 1000 && ht<= 9999 && met> 250 && met<= 275) {eff = 0.822998; errup = 0.0019724; errdown = 0.00198969;}
  else if (ht> 1000 && ht<= 9999 && met> 275 && met<= 300) {eff = 0.847192; errup = 0.00234625; errdown = 0.00237588;}
  else if (ht> 1000 && ht<= 9999 && met> 300 && met<= 350) {eff = 0.868647; errup = 0.00209369; errdown = 0.00212214;}
  else if (ht> 1000 && ht<= 9999 && met> 350 && met<= 400) {eff = 0.890059; errup = 0.00276058; errdown = 0.00282182;}
  else if (ht> 1000 && ht<= 9999 && met> 400 && met<= 450) {eff = 0.906376; errup = 0.00357243; errdown = 0.00369633;}
  else if (ht> 1000 && ht<= 9999 && met> 450 && met<= 500) {eff = 0.919012; errup = 0.0044641; errdown = 0.00469324;}
  else if (ht> 1000 && ht<= 9999 && met> 500 && met<= 9999) {eff = 0.930158; errup = 0.00418489; errdown = 0.00442247;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_1el_trigeff2018("get_1el_trigeff2018", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.; // Not used, but for reference
  float eff = 1., el_pt = Higfuncs::lead_signal_lepton_pt.GetScalar(b), met = b.met(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 20 && el_pt<= 25) {eff = 0.011811; errup = 0.00534754; errdown = 0.00385263;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 20 && el_pt<= 25) {eff = 0.255791; errup = 0.0145979; errdown = 0.0140885;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 20 && el_pt<= 25) {eff = 0.521921; errup = 0.0237937; errdown = 0.0238893;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 20 && el_pt<= 25) {eff = 0.00865801; errup = 0.0113049; errdown = 0.00559033;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 20 && el_pt<= 25) {eff = 0.282276; errup = 0.0226278; errdown = 0.0216268;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 20 && el_pt<= 25) {eff = 0.510989; errup = 0.0396191; errdown = 0.0397483;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 20 && el_pt<= 25) {eff = 0.0222222; errup = 0.0285586; errdown = 0.0143406;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 20 && el_pt<= 25) {eff = 0.311224; errup = 0.0365677; errdown = 0.0344996;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 20 && el_pt<= 25) {eff = 0.601695; errup = 0.0481441; errdown = 0.0500195;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 20 && el_pt<= 25) {eff = 0.0465116; errup = 0.0580755; errdown = 0.0299851;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 20 && el_pt<= 25) {eff = 0.413043; errup = 0.0574733; errdown = 0.0553976;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 20 && el_pt<= 25) {eff = 0.623188; errup = 0.0630833; errdown = 0.0670592;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 20 && el_pt<= 25) {eff = 0.307692; errup = 0.177171; errdown = 0.140801;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 20 && el_pt<= 25) {eff = 0.533333; errup = 0.0835657; errdown = 0.0852432;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 20 && el_pt<= 25) {eff = 0.8; errup = 0.0763181; errdown = 0.100306;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 20 && el_pt<= 25) {eff = 0.625; errup = 0.196076; errdown = 0.234946;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 20 && el_pt<= 25) {eff = 0.823529; errup = 0.0944267; errdown = 0.142403;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 20 && el_pt<= 25) {eff = 0.904762; errup = 0.0612701; errdown = 0.112063;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 20 && el_pt<= 25) {eff = 0.571429; errup = 0.222488; errdown = 0.247841;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 20 && el_pt<= 25) {eff = 0.8; errup = 0.0835235; errdown = 0.112668;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 20 && el_pt<= 25) {eff = 0.966667; errup = 0.0275914; errdown = 0.072517;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 20 && el_pt<= 25) {eff = 1; errup = 0; errdown = 0.23126;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 20 && el_pt<= 25) {eff = 1; errup = 0; errdown = 0.0738409;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 20 && el_pt<= 25) {eff = 1; errup = 0; errdown = 0.0595223;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 25 && el_pt<= 30) {eff = 0.0322034; errup = 0.00902066; errdown = 0.00725161;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 25 && el_pt<= 30) {eff = 0.324176; errup = 0.0182736; errdown = 0.0177719;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 25 && el_pt<= 30) {eff = 0.640845; errup = 0.0296497; errdown = 0.0307005;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 25 && el_pt<= 30) {eff = 0.0460829; errup = 0.0190148; errdown = 0.0141688;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 25 && el_pt<= 30) {eff = 0.318681; errup = 0.0306854; errdown = 0.029274;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 25 && el_pt<= 30) {eff = 0.62963; errup = 0.0400341; errdown = 0.0417579;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 25 && el_pt<= 30) {eff = 0.0520833; errup = 0.0336975; errdown = 0.0223143;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 25 && el_pt<= 30) {eff = 0.442424; errup = 0.0419364; errdown = 0.0411867;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 25 && el_pt<= 30) {eff = 0.7; errup = 0.04837; errdown = 0.0527776;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 25 && el_pt<= 30) {eff = 0.105263; errup = 0.0754353; errdown = 0.0496878;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 25 && el_pt<= 30) {eff = 0.455556; errup = 0.0582406; errdown = 0.0571564;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 25 && el_pt<= 30) {eff = 0.806452; errup = 0.0521796; errdown = 0.0635295;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 25 && el_pt<= 30) {eff = 0.238095; errup = 0.128988; errdown = 0.0987131;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 25 && el_pt<= 30) {eff = 0.7; errup = 0.0780739; errdown = 0.0896007;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 25 && el_pt<= 30) {eff = 0.903226; errup = 0.052199; errdown = 0.0852576;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 25 && el_pt<= 30) {eff = 0.5; errup = 0.161982; errdown = 0.161982;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 25 && el_pt<= 30) {eff = 0.75; errup = 0.0872543; errdown = 0.108468;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 25 && el_pt<= 30) {eff = 0.944444; errup = 0.046004; errdown = 0.116415;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 25 && el_pt<= 30) {eff = 1; errup = 0; errdown = 0.205568;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 25 && el_pt<= 30) {eff = 0.76; errup = 0.0907807; errdown = 0.11573;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 25 && el_pt<= 30) {eff = 0.952381; errup = 0.0394264; errdown = 0.101134;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 25 && el_pt<= 30) {eff = 1; errup = 0; errdown = 0.184992;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 25 && el_pt<= 30) {eff = 0.952381; errup = 0.0394264; errdown = 0.101134;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 25 && el_pt<= 30) {eff = 0.967742; errup = 0.0267009; errdown = 0.0703044;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 30 && el_pt<= 40) {eff = 0.251961; errup = 0.0143297; errdown = 0.0138261;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 30 && el_pt<= 40) {eff = 0.499014; errup = 0.0161877; errdown = 0.0161857;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 30 && el_pt<= 40) {eff = 0.618102; errup = 0.0236315; errdown = 0.0241773;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 30 && el_pt<= 40) {eff = 0.380353; errup = 0.0259085; errdown = 0.0252755;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 30 && el_pt<= 40) {eff = 0.559829; errup = 0.0238546; errdown = 0.0241219;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 30 && el_pt<= 40) {eff = 0.672269; errup = 0.0316877; errdown = 0.0332312;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 30 && el_pt<= 40) {eff = 0.477987; errup = 0.0427631; errdown = 0.0424655;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 30 && el_pt<= 40) {eff = 0.629771; errup = 0.0311526; errdown = 0.0322041;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 30 && el_pt<= 40) {eff = 0.760234; errup = 0.0338313; errdown = 0.0371352;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 30 && el_pt<= 40) {eff = 0.56044; errup = 0.0564507; errdown = 0.0579088;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 30 && el_pt<= 40) {eff = 0.704; errup = 0.0428724; errdown = 0.0464377;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 30 && el_pt<= 40) {eff = 0.7875; errup = 0.0476593; errdown = 0.0557616;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 30 && el_pt<= 40) {eff = 0.58; errup = 0.0771039; errdown = 0.0807137;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 30 && el_pt<= 40) {eff = 0.806452; errup = 0.0521796; errdown = 0.0635295;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 30 && el_pt<= 40) {eff = 0.821429; errup = 0.0530287; errdown = 0.0663472;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 30 && el_pt<= 40) {eff = 0.681818; errup = 0.109079; errdown = 0.12875;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 30 && el_pt<= 40) {eff = 0.888889; errup = 0.0524058; errdown = 0.0791717;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 30 && el_pt<= 40) {eff = 0.878788; errup = 0.0570897; errdown = 0.0855134;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 30 && el_pt<= 40) {eff = 0.956522; errup = 0.0359954; errdown = 0.0929875;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 30 && el_pt<= 40) {eff = 0.977778; errup = 0.0183906; errdown = 0.0492514;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 30 && el_pt<= 40) {eff = 0.977778; errup = 0.0183906; errdown = 0.0492514;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 30 && el_pt<= 40) {eff = 0.916667; errup = 0.0690403; errdown = 0.16652;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 30 && el_pt<= 40) {eff = 1; errup = 0; errdown = 0.0392319;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 30 && el_pt<= 40) {eff = 1; errup = 0; errdown = 0.0335184;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 40 && el_pt<= 110) {eff = 0.418542; errup = 0.0065145; errdown = 0.00648658;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 40 && el_pt<= 110) {eff = 0.624528; errup = 0.00777757; errdown = 0.00784131;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 40 && el_pt<= 110) {eff = 0.730387; errup = 0.0100171; errdown = 0.0102515;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 40 && el_pt<= 110) {eff = 0.522263; errup = 0.0109763; errdown = 0.0109974;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 40 && el_pt<= 110) {eff = 0.692688; errup = 0.0109814; errdown = 0.0111986;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 40 && el_pt<= 110) {eff = 0.781222; errup = 0.0124847; errdown = 0.0130005;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 40 && el_pt<= 110) {eff = 0.641791; errup = 0.0160238; errdown = 0.0163362;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 40 && el_pt<= 110) {eff = 0.77001; errup = 0.0136124; errdown = 0.0141799;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 40 && el_pt<= 110) {eff = 0.815138; errup = 0.01505; errdown = 0.0160117;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 40 && el_pt<= 110) {eff = 0.75576; errup = 0.021133; errdown = 0.0223757;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 40 && el_pt<= 110) {eff = 0.825243; errup = 0.0170274; errdown = 0.0183622;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 40 && el_pt<= 110) {eff = 0.845783; errup = 0.0180334; errdown = 0.0198105;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 40 && el_pt<= 110) {eff = 0.810219; errup = 0.0242653; errdown = 0.0266986;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 40 && el_pt<= 110) {eff = 0.893688; errup = 0.0179967; errdown = 0.0208514;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 40 && el_pt<= 110) {eff = 0.923664; errup = 0.0165254; errdown = 0.0201273;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 40 && el_pt<= 110) {eff = 0.916084; errup = 0.02336; errdown = 0.0300262;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 40 && el_pt<= 110) {eff = 0.923858; errup = 0.01902; errdown = 0.0238853;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 40 && el_pt<= 110) {eff = 0.971591; errup = 0.0122172; errdown = 0.0187612;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 40 && el_pt<= 110) {eff = 0.984; errup = 0.0103279; errdown = 0.020713;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 40 && el_pt<= 110) {eff = 0.966667; errup = 0.0122125; errdown = 0.0174929;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 40 && el_pt<= 110) {eff = 0.983936; errup = 0.00767263; errdown = 0.0125193;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 40 && el_pt<= 110) {eff = 1; errup = 0; errdown = 0.0196013;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 40 && el_pt<= 110) {eff = 1; errup = 0; errdown = 0.00902807;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 40 && el_pt<= 110) {eff = 0.994723; errup = 0.00340776; errdown = 0.00691752;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 110 && el_pt<= 120) {eff = 0.434475; errup = 0.0176917; errdown = 0.0175317;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 110 && el_pt<= 120) {eff = 0.699164; errup = 0.0249788; errdown = 0.0261501;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 110 && el_pt<= 120) {eff = 0.704082; errup = 0.0339504; errdown = 0.0361885;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 110 && el_pt<= 120) {eff = 0.512903; errup = 0.0299066; errdown = 0.0299944;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 110 && el_pt<= 120) {eff = 0.731707; errup = 0.0417836; errdown = 0.0459128;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 110 && el_pt<= 120) {eff = 0.715909; errup = 0.0507346; errdown = 0.0561808;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 110 && el_pt<= 120) {eff = 0.649123; errup = 0.0474329; errdown = 0.0502895;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 110 && el_pt<= 120) {eff = 0.824176; errup = 0.0411967; errdown = 0.0492438;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 110 && el_pt<= 120) {eff = 0.784615; errup = 0.0532994; errdown = 0.0632744;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 110 && el_pt<= 120) {eff = 0.821918; errup = 0.0463238; errdown = 0.0563995;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 110 && el_pt<= 120) {eff = 0.916667; errup = 0.0394539; errdown = 0.0609994;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 110 && el_pt<= 120) {eff = 0.892857; errup = 0.0577336; errdown = 0.0933526;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 110 && el_pt<= 120) {eff = 0.88; errup = 0.06458; errdown = 0.103115;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 110 && el_pt<= 120) {eff = 0.894737; errup = 0.0676897; errdown = 0.122322;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 110 && el_pt<= 120) {eff = 0.965517; errup = 0.0285434; errdown = 0.0748731;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 110 && el_pt<= 120) {eff = 0.791667; errup = 0.0868677; errdown = 0.116379;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.123222;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 110 && el_pt<= 120) {eff = 0.882353; errup = 0.0756114; errdown = 0.134601;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.205568;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.0839348;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.0839348;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.23126;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.0769247;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.0329191;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 120 && el_pt<= 9999) {eff = 0.784568; errup = 0.0081136; errdown = 0.00833611;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 120 && el_pt<= 9999) {eff = 0.811902; errup = 0.0129212; errdown = 0.0136113;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 120 && el_pt<= 9999) {eff = 0.851429; errup = 0.0157582; errdown = 0.0171775;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 120 && el_pt<= 9999) {eff = 0.796178; errup = 0.0146144; errdown = 0.0154019;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 120 && el_pt<= 9999) {eff = 0.855153; errup = 0.0188937; errdown = 0.021017;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 120 && el_pt<= 9999) {eff = 0.868132; errup = 0.0208283; errdown = 0.0237598;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 120 && el_pt<= 9999) {eff = 0.816265; errup = 0.0217194; errdown = 0.0237558;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 120 && el_pt<= 9999) {eff = 0.86911; errup = 0.0248618; errdown = 0.0291273;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 120 && el_pt<= 9999) {eff = 0.897727; errup = 0.0231402; errdown = 0.0282036;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 120 && el_pt<= 9999) {eff = 0.924242; errup = 0.0231217; errdown = 0.0305687;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 120 && el_pt<= 9999) {eff = 0.94; errup = 0.0235436; errdown = 0.0341184;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 120 && el_pt<= 9999) {eff = 0.927835; errup = 0.0262312; errdown = 0.0367062;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 120 && el_pt<= 9999) {eff = 0.966102; errup = 0.021865; errdown = 0.0429671;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 120 && el_pt<= 9999) {eff = 0.984848; errup = 0.0125375; errdown = 0.0339781;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 120 && el_pt<= 9999) {eff = 0.946429; errup = 0.0290144; errdown = 0.0493757;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0559083;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0512411;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 120 && el_pt<= 9999) {eff = 0.964286; errup = 0.0230346; errdown = 0.0451714;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0576587;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0461088;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0283562;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0738409;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0312433;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0150999;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_1mu_trigeff2018("get_1mu_trigeff2018", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.; // Not used, but for reference
  float eff = 1., mu_pt = Higfuncs::lead_signal_lepton_pt.GetScalar(b), met = b.met(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && mu_pt> 20 && mu_pt<= 25) {eff = 0.0493827; errup = 0.0100518; errdown = 0.00853615;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && mu_pt> 20 && mu_pt<= 25) {eff = 0.432765; errup = 0.0157782; errdown = 0.015647;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && mu_pt> 20 && mu_pt<= 25) {eff = 0.907071; errup = 0.0131765; errdown = 0.0149464;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && mu_pt> 20 && mu_pt<= 25) {eff = 0.0787402; errup = 0.020727; errdown = 0.0170326;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && mu_pt> 20 && mu_pt<= 25) {eff = 0.426263; errup = 0.0233691; errdown = 0.023058;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && mu_pt> 20 && mu_pt<= 25) {eff = 0.865385; errup = 0.0215434; errdown = 0.0246021;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && mu_pt> 20 && mu_pt<= 25) {eff = 0.0721649; errup = 0.0367062; errdown = 0.0262312;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && mu_pt> 20 && mu_pt<= 25) {eff = 0.507752; errup = 0.0329631; errdown = 0.0330268;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && mu_pt> 20 && mu_pt<= 25) {eff = 0.952663; errup = 0.0162161; errdown = 0.0225172;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && mu_pt> 20 && mu_pt<= 25) {eff = 0.117647; errup = 0.063656; errdown = 0.0456588;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && mu_pt> 20 && mu_pt<= 25) {eff = 0.594595; errup = 0.04993; errdown = 0.0517883;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && mu_pt> 20 && mu_pt<= 25) {eff = 0.95; errup = 0.0237772; errdown = 0.0377702;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && mu_pt> 20 && mu_pt<= 25) {eff = 0.266667; errup = 0.161145; errdown = 0.122867;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && mu_pt> 20 && mu_pt<= 25) {eff = 0.557143; errup = 0.0650822; errdown = 0.0668941;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && mu_pt> 20 && mu_pt<= 25) {eff = 0.94; errup = 0.0324767; errdown = 0.054936;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && mu_pt> 20 && mu_pt<= 25) {eff = 0.769231; errup = 0.122762; errdown = 0.174724;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && mu_pt> 20 && mu_pt<= 25) {eff = 0.787879; errup = 0.0747285; errdown = 0.0954437;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && mu_pt> 20 && mu_pt<= 25) {eff = 0.952381; errup = 0.0394264; errdown = 0.101134;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && mu_pt> 20 && mu_pt<= 25) {eff = 0.75; errup = 0.159659; errdown = 0.239567;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && mu_pt> 20 && mu_pt<= 25) {eff = 0.771429; errup = 0.0749545; errdown = 0.0932188;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.0972223;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.23126;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.0709947;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.0419109;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && mu_pt> 25 && mu_pt<= 30) {eff = 0.286957; errup = 0.0226419; errdown = 0.0216692;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && mu_pt> 25 && mu_pt<= 30) {eff = 0.602941; errup = 0.019327; errdown = 0.0196413;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && mu_pt> 25 && mu_pt<= 30) {eff = 0.913174; errup = 0.0155545; errdown = 0.0182641;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && mu_pt> 25 && mu_pt<= 30) {eff = 0.42246; errup = 0.0391294; errdown = 0.0382417;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && mu_pt> 25 && mu_pt<= 30) {eff = 0.640777; errup = 0.0283829; errdown = 0.0293461;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && mu_pt> 25 && mu_pt<= 30) {eff = 0.961538; errup = 0.0140769; errdown = 0.0201022;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && mu_pt> 25 && mu_pt<= 30) {eff = 0.380952; errup = 0.0601267; errdown = 0.0569983;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && mu_pt> 25 && mu_pt<= 30) {eff = 0.723077; errup = 0.033295; errdown = 0.0357581;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && mu_pt> 25 && mu_pt<= 30) {eff = 0.915966; errup = 0.0255939; errdown = 0.0336938;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && mu_pt> 25 && mu_pt<= 30) {eff = 0.65625; errup = 0.0921925; errdown = 0.103529;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && mu_pt> 25 && mu_pt<= 30) {eff = 0.785714; errup = 0.0431; errdown = 0.049605;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && mu_pt> 25 && mu_pt<= 30) {eff = 0.933333; errup = 0.0284952; errdown = 0.0425828;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && mu_pt> 25 && mu_pt<= 30) {eff = 0.733333; errup = 0.122867; errdown = 0.161145;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && mu_pt> 25 && mu_pt<= 30) {eff = 0.877551; errup = 0.0474775; errdown = 0.0659727;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && mu_pt> 25 && mu_pt<= 30) {eff = 0.944444; errup = 0.0358019; errdown = 0.0686188;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && mu_pt> 25 && mu_pt<= 30) {eff = 0.75; errup = 0.132707; errdown = 0.1849;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && mu_pt> 25 && mu_pt<= 30) {eff = 0.967742; errup = 0.0267009; errdown = 0.0703044;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && mu_pt> 25 && mu_pt<= 30) {eff = 0.969697; errup = 0.0250817; errdown = 0.0662602;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.308024;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.0576587;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && mu_pt> 25 && mu_pt<= 30) {eff = 0.95; errup = 0.0413995; errdown = 0.105764;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.458642;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.102638;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.0472931;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && mu_pt> 30 && mu_pt<= 50) {eff = 0.454735; errup = 0.0166228; errdown = 0.0165256;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && mu_pt> 30 && mu_pt<= 50) {eff = 0.739478; errup = 0.012004; errdown = 0.0123621;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && mu_pt> 30 && mu_pt<= 50) {eff = 0.920904; errup = 0.0102172; errdown = 0.011488;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && mu_pt> 30 && mu_pt<= 50) {eff = 0.550285; errup = 0.022497; errdown = 0.0226959;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && mu_pt> 30 && mu_pt<= 50) {eff = 0.789044; errup = 0.0141544; errdown = 0.0148558;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && mu_pt> 30 && mu_pt<= 50) {eff = 0.944325; errup = 0.0106491; errdown = 0.0127415;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && mu_pt> 30 && mu_pt<= 50) {eff = 0.662021; errup = 0.0290143; errdown = 0.0302111;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && mu_pt> 30 && mu_pt<= 50) {eff = 0.843284; errup = 0.0159496; errdown = 0.0173051;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && mu_pt> 30 && mu_pt<= 50) {eff = 0.923875; errup = 0.0157159; errdown = 0.0189678;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && mu_pt> 30 && mu_pt<= 50) {eff = 0.742857; errup = 0.0384846; errdown = 0.042272;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && mu_pt> 30 && mu_pt<= 50) {eff = 0.897959; errup = 0.0178718; errdown = 0.0208336;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && mu_pt> 30 && mu_pt<= 50) {eff = 0.934783; errup = 0.0182476; errdown = 0.0236598;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && mu_pt> 30 && mu_pt<= 50) {eff = 0.903226; errup = 0.0377108; errdown = 0.0533288;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && mu_pt> 30 && mu_pt<= 50) {eff = 0.938679; errup = 0.0165113; errdown = 0.0212279;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && mu_pt> 30 && mu_pt<= 50) {eff = 0.960938; errup = 0.0167705; errdown = 0.025561;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && mu_pt> 30 && mu_pt<= 50) {eff = 0.956522; errup = 0.0280331; errdown = 0.0544852;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && mu_pt> 30 && mu_pt<= 50) {eff = 0.98913; errup = 0.00899357; errdown = 0.0245495;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && mu_pt> 30 && mu_pt<= 50) {eff = 0.951456; errup = 0.0208096; errdown = 0.0315047;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && mu_pt> 30 && mu_pt<= 50) {eff = 1; errup = 0; errdown = 0.0472931;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && mu_pt> 30 && mu_pt<= 50) {eff = 0.984127; errup = 0.0131346; errdown = 0.0355535;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && mu_pt> 30 && mu_pt<= 50) {eff = 1; errup = 0; errdown = 0.0180628;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && mu_pt> 30 && mu_pt<= 50) {eff = 1; errup = 0; errdown = 0.0559083;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && mu_pt> 30 && mu_pt<= 50) {eff = 0.99115; errup = 0.00732193; errdown = 0.0200542;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && mu_pt> 30 && mu_pt<= 50) {eff = 1; errup = 0; errdown = 0.0123623;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.914159; errup = 0.00839128; errdown = 0.00916286;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.951385; errup = 0.00535199; errdown = 0.00593941;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.954693; errup = 0.00684866; errdown = 0.00790655;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.911859; errup = 0.0114467; errdown = 0.0128586;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.954109; errup = 0.00685441; errdown = 0.0078988;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.96302; errup = 0.00740666; errdown = 0.00898066;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.9375; errup = 0.012678; errdown = 0.0153075;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.953125; errup = 0.00837482; errdown = 0.00992195;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.942094; errup = 0.0110676; errdown = 0.013233;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.957746; errup = 0.0136873; errdown = 0.0187014;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.979112; errup = 0.00719638; errdown = 0.0101399;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.971731; errup = 0.0097239; errdown = 0.0136458;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.962963; errup = 0.0176424; errdown = 0.0283159;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.983936; errup = 0.00767263; errdown = 0.0125193;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.980488; errup = 0.00931537; errdown = 0.0151589;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.973684; errup = 0.0169795; errdown = 0.0336566;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.012972;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0131574;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.971831; errup = 0.0181738; errdown = 0.035948;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.992366; errup = 0.00631573; errdown = 0.0173336;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.00944492;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0384134;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0133482;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.00566605;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_2el_trigeff2018("get_2el_trigeff2018", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.; // Not used, but for reference
  float eff = 1., el_pt = Higfuncs::lead_signal_lepton_pt.GetScalar(b);
  errup+=errdown; //suppress unused warning
  if (el_pt> 40 && el_pt<= 45) {eff = 0.923567; errup = 0.0213207; errdown = 0.0275009;}
  else if (el_pt> 45 && el_pt<= 50) {eff = 0.964427; errup = 0.0115411; errdown = 0.0158241;}
  else if (el_pt> 50 && el_pt<= 55) {eff = 0.957447; errup = 0.0119785; errdown = 0.015693;}
  else if (el_pt> 55 && el_pt<= 60) {eff = 0.93662; errup = 0.0145188; errdown = 0.0179606;}
  else if (el_pt> 60 && el_pt<= 65) {eff = 0.953177; errup = 0.0122049; errdown = 0.0156439;}
  else if (el_pt> 65 && el_pt<= 70) {eff = 0.955224; errup = 0.0125968; errdown = 0.0164865;}
  else if (el_pt> 70 && el_pt<= 75) {eff = 0.964789; errup = 0.0108548; errdown = 0.0146461;}
  else if (el_pt> 75 && el_pt<= 80) {eff = 0.954545; errup = 0.0127854; errdown = 0.0167281;}
  else if (el_pt> 80 && el_pt<= 85) {eff = 0.96281; errup = 0.0120612; errdown = 0.0165232;}
  else if (el_pt> 85 && el_pt<= 90) {eff = 0.959459; errup = 0.0131376; errdown = 0.0179664;}
  else if (el_pt> 90 && el_pt<= 95) {eff = 0.958716; errup = 0.0133763; errdown = 0.0182858;}
  else if (el_pt> 95 && el_pt<= 100) {eff = 0.984043; errup = 0.00867228; errdown = 0.0152785;}
  else if (el_pt> 100 && el_pt<= 105) {eff = 0.984293; errup = 0.00853626; errdown = 0.0150422;}
  else if (el_pt> 105 && el_pt<= 110) {eff = 0.98125; errup = 0.0101874; errdown = 0.0179022;}
  else if (el_pt> 110 && el_pt<= 9999) {eff = 0.987013; errup = 0.00620528; errdown = 0.0101494;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_2mu_trigeff2018("get_2mu_trigeff2018", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.; // Not used, but for reference
  float eff = 1., mu_pt = Higfuncs::lead_signal_lepton_pt.GetScalar(b);
  errup+=errdown; //suppress unused warning
  if (mu_pt> 40 && mu_pt<= 45) {eff = 0.980159; errup = 0.00854406; errdown = 0.0131994;}
  else if (mu_pt> 45 && mu_pt<= 50) {eff = 0.973545; errup = 0.00817271; errdown = 0.0110748;}
  else if (mu_pt> 50 && mu_pt<= 9999) {eff = 0.992635; errup = 0.00240477; errdown = 0.00334546;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

}
