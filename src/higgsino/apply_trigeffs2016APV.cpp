#include <vector>
#include "core/baby.hpp"
#include "core/process.hpp"
#include "core/named_func.hpp"
#include "higgsino/hig_functions.hpp"
#include "higgsino/hig_utilities.hpp"
#include "higgsino/apply_trigeffs2016APV.hpp"

namespace Higfuncs{

const NamedFunc get_0l_trigeff2016APV("get_0l_trigeff2016APV", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.;
  float eff = 1., met = b.met(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 200 && met> 150 && met<= 155) {eff = 0.684426; errup = 0.0758947; errdown = 0.0765657;}
  else if (ht> 0 && ht<= 200 && met> 155 && met<= 160) {eff = 0.678571; errup = 0.0770412; errdown = 0.077945;}
  else if (ht> 0 && ht<= 200 && met> 160 && met<= 165) {eff = 0.824324; errup = 0.11165; errdown = 0.113138;}
  else if (ht> 0 && ht<= 200 && met> 165 && met<= 170) {eff = 0.842975; errup = 0.114484; errdown = 0.116522;}
  else if (ht> 0 && ht<= 200 && met> 170 && met<= 180) {eff = 0.869565; errup = 0.115985; errdown = 0.117282;}
  else if (ht> 0 && ht<= 200 && met> 180 && met<= 190) {eff = 0.932692; errup = 0.0480872; errdown = 0.0537961;}
  else if (ht> 0 && ht<= 200 && met> 190 && met<= 200) {eff = 0.890909; errup = 0.0579753; errdown = 0.071412;}
  else if (ht> 0 && ht<= 200 && met> 200 && met<= 9999) {eff = 0.948276; errup = 0.0510775; errdown = 0.064072;}
  else if (ht> 200 && ht<= 300 && met> 150 && met<= 155) {eff = 0.812; errup = 0.0841284; errdown = 0.084417;}
  else if (ht> 200 && ht<= 300 && met> 155 && met<= 160) {eff = 0.855292; errup = 0.0881843; errdown = 0.0885066;}
  else if (ht> 200 && ht<= 300 && met> 160 && met<= 165) {eff = 0.887701; errup = 0.112299; errdown = 0.116659;}
  else if (ht> 200 && ht<= 300 && met> 165 && met<= 170) {eff = 0.894737; errup = 0.105263; errdown = 0.11755;}
  else if (ht> 200 && ht<= 300 && met> 170 && met<= 175) {eff = 0.957447; errup = 0.0425532; errdown = 0.125;}
  else if (ht> 200 && ht<= 300 && met> 175 && met<= 180) {eff = 0.949153; errup = 0.0508475; errdown = 0.124511;}
  else if (ht> 200 && ht<= 300 && met> 180 && met<= 185) {eff = 0.95671; errup = 0.04329; errdown = 0.0460688;}
  else if (ht> 200 && ht<= 300 && met> 185 && met<= 190) {eff = 0.982353; errup = 0.0176471; errdown = 0.0467371;}
  else if (ht> 200 && ht<= 300 && met> 190 && met<= 195) {eff = 0.994595; errup = 0.00540541; errdown = 0.0458176;}
  else if (ht> 200 && ht<= 300 && met> 195 && met<= 200) {eff = 0.99359; errup = 0.00641026; errdown = 0.0464358;}
  else if (ht> 200 && ht<= 300 && met> 200 && met<= 210) {eff = 0.98556; errup = 0.0144404; errdown = 0.0457943;}
  else if (ht> 200 && ht<= 300 && met> 210 && met<= 220) {eff = 0.994318; errup = 0.00568182; errdown = 0.0466133;}
  else if (ht> 200 && ht<= 300 && met> 220 && met<= 230) {eff = 0.976378; errup = 0.023622; errdown = 0.049369;}
  else if (ht> 200 && ht<= 300 && met> 230 && met<= 240) {eff = 1; errup = 0; errdown = 0.0472659;}
  else if (ht> 200 && ht<= 300 && met> 240 && met<= 250) {eff = 0.984127; errup = 0.015873; errdown = 0.0542093;}
  else if (ht> 200 && ht<= 300 && met> 250 && met<= 275) {eff = 1; errup = 0; errdown = 0.0241895;}
  else if (ht> 200 && ht<= 300 && met> 275 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0400838;}
  else if (ht> 300 && ht<= 400 && met> 150 && met<= 155) {eff = 0.822943; errup = 0.0420326; errdown = 0.0428519;}
  else if (ht> 300 && ht<= 400 && met> 155 && met<= 160) {eff = 0.896458; errup = 0.0436716; errdown = 0.0445878;}
  else if (ht> 300 && ht<= 400 && met> 160 && met<= 165) {eff = 0.891239; errup = 0.0858084; errdown = 0.0863638;}
  else if (ht> 300 && ht<= 400 && met> 165 && met<= 170) {eff = 0.92515; errup = 0.0748503; errdown = 0.0889373;}
  else if (ht> 300 && ht<= 400 && met> 170 && met<= 175) {eff = 0.962838; errup = 0.0371622; errdown = 0.0919459;}
  else if (ht> 300 && ht<= 400 && met> 175 && met<= 180) {eff = 0.953488; errup = 0.0465116; errdown = 0.091933;}
  else if (ht> 300 && ht<= 400 && met> 180 && met<= 185) {eff = 0.954733; errup = 0.0340878; errdown = 0.0359867;}
  else if (ht> 300 && ht<= 400 && met> 185 && met<= 190) {eff = 0.977273; errup = 0.0227273; errdown = 0.0354959;}
  else if (ht> 300 && ht<= 400 && met> 190 && met<= 195) {eff = 0.970874; errup = 0.0291262; errdown = 0.0361625;}
  else if (ht> 300 && ht<= 400 && met> 195 && met<= 200) {eff = 0.994118; errup = 0.00588235; errdown = 0.0353247;}
  else if (ht> 300 && ht<= 400 && met> 200 && met<= 210) {eff = 0.977848; errup = 0.0221519; errdown = 0.0439232;}
  else if (ht> 300 && ht<= 400 && met> 210 && met<= 220) {eff = 0.98513; errup = 0.0148699; errdown = 0.0441936;}
  else if (ht> 300 && ht<= 400 && met> 220 && met<= 230) {eff = 0.994737; errup = 0.00526316; errdown = 0.0446999;}
  else if (ht> 300 && ht<= 400 && met> 230 && met<= 240) {eff = 1; errup = 0; errdown = 0.0416224;}
  else if (ht> 300 && ht<= 400 && met> 240 && met<= 250) {eff = 1; errup = 0; errdown = 0.0426185;}
  else if (ht> 300 && ht<= 400 && met> 250 && met<= 275) {eff = 1; errup = 0; errdown = 0.0108667;}
  else if (ht> 300 && ht<= 400 && met> 275 && met<= 300) {eff = 1; errup = 0; errdown = 0.0135983;}
  else if (ht> 300 && ht<= 400 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0115844;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 155) {eff = 0.824427; errup = 0.0712239; errdown = 0.0717268;}
  else if (ht> 400 && ht<= 600 && met> 155 && met<= 160) {eff = 0.864048; errup = 0.0742852; errdown = 0.0749317;}
  else if (ht> 400 && ht<= 600 && met> 160 && met<= 165) {eff = 0.898734; errup = 0.0842114; errdown = 0.0848159;}
  else if (ht> 400 && ht<= 600 && met> 165 && met<= 170) {eff = 0.904605; errup = 0.0847107; errdown = 0.0853449;}
  else if (ht> 400 && ht<= 600 && met> 170 && met<= 175) {eff = 0.955556; errup = 0.0444444; errdown = 0.0891688;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 180) {eff = 0.926407; errup = 0.0735931; errdown = 0.0876413;}
  else if (ht> 400 && ht<= 600 && met> 180 && met<= 185) {eff = 0.962656; errup = 0.0373444; errdown = 0.0450329;}
  else if (ht> 400 && ht<= 600 && met> 185 && met<= 190) {eff = 0.955157; errup = 0.0437693; errdown = 0.0454812;}
  else if (ht> 400 && ht<= 600 && met> 190 && met<= 195) {eff = 0.977528; errup = 0.0224719; errdown = 0.0459398;}
  else if (ht> 400 && ht<= 600 && met> 195 && met<= 200) {eff = 0.976331; errup = 0.0236686; errdown = 0.0462435;}
  else if (ht> 400 && ht<= 600 && met> 200 && met<= 210) {eff = 0.987988; errup = 0.012012; errdown = 0.0428776;}
  else if (ht> 400 && ht<= 600 && met> 210 && met<= 220) {eff = 0.996377; errup = 0.00362319; errdown = 0.0429959;}
  else if (ht> 400 && ht<= 600 && met> 220 && met<= 230) {eff = 1; errup = 0; errdown = 0.0430225;}
  else if (ht> 400 && ht<= 600 && met> 230 && met<= 240) {eff = 1; errup = 0; errdown = 0.041663;}
  else if (ht> 400 && ht<= 600 && met> 240 && met<= 250) {eff = 1; errup = 0; errdown = 0.0418781;}
  else if (ht> 400 && ht<= 600 && met> 250 && met<= 275) {eff = 0.997396; errup = 0.00260417; errdown = 0.0105435;}
  else if (ht> 400 && ht<= 600 && met> 275 && met<= 300) {eff = 0.995918; errup = 0.00408163; errdown = 0.0127398;}
  else if (ht> 400 && ht<= 600 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.00679234;}
  else if (ht> 600 && ht<= 950 && met> 150 && met<= 155) {eff = 0.783019; errup = 0.0584044; errdown = 0.0627692;}
  else if (ht> 600 && ht<= 950 && met> 155 && met<= 160) {eff = 0.876106; errup = 0.0556755; errdown = 0.0602871;}
  else if (ht> 600 && ht<= 950 && met> 160 && met<= 165) {eff = 0.909091; errup = 0.0909091; errdown = 0.0981887;}
  else if (ht> 600 && ht<= 950 && met> 165 && met<= 170) {eff = 0.886598; errup = 0.0948069; errdown = 0.0983523;}
  else if (ht> 600 && ht<= 950 && met> 170 && met<= 175) {eff = 0.910112; errup = 0.0898876; errdown = 0.10027;}
  else if (ht> 600 && ht<= 950 && met> 175 && met<= 180) {eff = 0.964286; errup = 0.0357143; errdown = 0.10243;}
  else if (ht> 600 && ht<= 950 && met> 180 && met<= 185) {eff = 0.96875; errup = 0.03125; errdown = 0.052563;}
  else if (ht> 600 && ht<= 950 && met> 185 && met<= 190) {eff = 0.95082; errup = 0.0430192; errdown = 0.0566908;}
  else if (ht> 600 && ht<= 950 && met> 190 && met<= 195) {eff = 0.952381; errup = 0.0425468; errdown = 0.0556262;}
  else if (ht> 600 && ht<= 950 && met> 195 && met<= 200) {eff = 1; errup = 0; errdown = 0.0582036;}
  else if (ht> 600 && ht<= 950 && met> 200 && met<= 210) {eff = 0.990909; errup = 0.00909091; errdown = 0.0491165;}
  else if (ht> 600 && ht<= 950 && met> 210 && met<= 220) {eff = 0.974684; errup = 0.0253165; errdown = 0.0545401;}
  else if (ht> 600 && ht<= 950 && met> 220 && met<= 230) {eff = 0.990196; errup = 0.00980392; errdown = 0.0497749;}
  else if (ht> 600 && ht<= 950 && met> 230 && met<= 240) {eff = 0.983871; errup = 0.016129; errdown = 0.0568003;}
  else if (ht> 600 && ht<= 950 && met> 240 && met<= 250) {eff = 1; errup = 0; errdown = 0.0569456;}
  else if (ht> 600 && ht<= 950 && met> 250 && met<= 275) {eff = 1; errup = 0; errdown = 0.0170833;}
  else if (ht> 600 && ht<= 950 && met> 275 && met<= 300) {eff = 1; errup = 0; errdown = 0.0241886;}
  else if (ht> 600 && ht<= 950 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0137469;}
  else if (ht> 950 && ht<= 9999 && met> 150 && met<= 160) {eff = 0.755556; errup = 0.108172; errdown = 0.116848;}
  else if (ht> 950 && ht<= 9999 && met> 160 && met<= 170) {eff = 0.805556; errup = 0.136698; errdown = 0.147868;}
  else if (ht> 950 && ht<= 9999 && met> 170 && met<= 180) {eff = 0.966667; errup = 0.0333333; errdown = 0.159225;}
  else if (ht> 950 && ht<= 9999 && met> 180 && met<= 190) {eff = 0.84; errup = 0.10286; errdown = 0.129409;}
  else if (ht> 950 && ht<= 9999 && met> 190 && met<= 200) {eff = 0.88; errup = 0.0980735; errdown = 0.126809;}
  else if (ht> 950 && ht<= 9999 && met> 200 && met<= 210) {eff = 0.956522; errup = 0.0434783; errdown = 0.101396;}
  else if (ht> 950 && ht<= 9999 && met> 210 && met<= 220) {eff = 0.965517; errup = 0.0344828; errdown = 0.0852725;}
  else if (ht> 950 && ht<= 9999 && met> 220 && met<= 230) {eff = 0.909091; errup = 0.0845611; errdown = 0.183366;}
  else if (ht> 950 && ht<= 9999 && met> 230 && met<= 240) {eff = 1; errup = 0; errdown = 0.148583;}
  else if (ht> 950 && ht<= 9999 && met> 240 && met<= 250) {eff = 1; errup = 0; errdown = 0.111276;}
  else if (ht> 950 && ht<= 9999 && met> 250 && met<= 275) {eff = 1; errup = 0; errdown = 0.0927146;}
  else if (ht> 950 && ht<= 9999 && met> 275 && met<= 300) {eff = 1; errup = 0; errdown = 0.0688521;}
  else if (ht> 950 && ht<= 9999 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0738411;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_0l_trigeff2016APV_mettru("get_0l_trigeff2016APV_mettru", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.;
  float eff = 1., met = b.met_tru(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 200 && met> 150 && met<= 155) {eff = 0.684426; errup = 0.0758947; errdown = 0.0765657;}
  else if (ht> 0 && ht<= 200 && met> 155 && met<= 160) {eff = 0.678571; errup = 0.0770412; errdown = 0.077945;}
  else if (ht> 0 && ht<= 200 && met> 160 && met<= 165) {eff = 0.824324; errup = 0.11165; errdown = 0.113138;}
  else if (ht> 0 && ht<= 200 && met> 165 && met<= 170) {eff = 0.842975; errup = 0.114484; errdown = 0.116522;}
  else if (ht> 0 && ht<= 200 && met> 170 && met<= 180) {eff = 0.869565; errup = 0.115985; errdown = 0.117282;}
  else if (ht> 0 && ht<= 200 && met> 180 && met<= 190) {eff = 0.932692; errup = 0.0480872; errdown = 0.0537961;}
  else if (ht> 0 && ht<= 200 && met> 190 && met<= 200) {eff = 0.890909; errup = 0.0579753; errdown = 0.071412;}
  else if (ht> 0 && ht<= 200 && met> 200 && met<= 9999) {eff = 0.948276; errup = 0.0510775; errdown = 0.064072;}
  else if (ht> 200 && ht<= 300 && met> 150 && met<= 155) {eff = 0.812; errup = 0.0841284; errdown = 0.084417;}
  else if (ht> 200 && ht<= 300 && met> 155 && met<= 160) {eff = 0.855292; errup = 0.0881843; errdown = 0.0885066;}
  else if (ht> 200 && ht<= 300 && met> 160 && met<= 165) {eff = 0.887701; errup = 0.112299; errdown = 0.116659;}
  else if (ht> 200 && ht<= 300 && met> 165 && met<= 170) {eff = 0.894737; errup = 0.105263; errdown = 0.11755;}
  else if (ht> 200 && ht<= 300 && met> 170 && met<= 175) {eff = 0.957447; errup = 0.0425532; errdown = 0.125;}
  else if (ht> 200 && ht<= 300 && met> 175 && met<= 180) {eff = 0.949153; errup = 0.0508475; errdown = 0.124511;}
  else if (ht> 200 && ht<= 300 && met> 180 && met<= 185) {eff = 0.95671; errup = 0.04329; errdown = 0.0460688;}
  else if (ht> 200 && ht<= 300 && met> 185 && met<= 190) {eff = 0.982353; errup = 0.0176471; errdown = 0.0467371;}
  else if (ht> 200 && ht<= 300 && met> 190 && met<= 195) {eff = 0.994595; errup = 0.00540541; errdown = 0.0458176;}
  else if (ht> 200 && ht<= 300 && met> 195 && met<= 200) {eff = 0.99359; errup = 0.00641026; errdown = 0.0464358;}
  else if (ht> 200 && ht<= 300 && met> 200 && met<= 210) {eff = 0.98556; errup = 0.0144404; errdown = 0.0457943;}
  else if (ht> 200 && ht<= 300 && met> 210 && met<= 220) {eff = 0.994318; errup = 0.00568182; errdown = 0.0466133;}
  else if (ht> 200 && ht<= 300 && met> 220 && met<= 230) {eff = 0.976378; errup = 0.023622; errdown = 0.049369;}
  else if (ht> 200 && ht<= 300 && met> 230 && met<= 240) {eff = 1; errup = 0; errdown = 0.0472659;}
  else if (ht> 200 && ht<= 300 && met> 240 && met<= 250) {eff = 0.984127; errup = 0.015873; errdown = 0.0542093;}
  else if (ht> 200 && ht<= 300 && met> 250 && met<= 275) {eff = 1; errup = 0; errdown = 0.0241895;}
  else if (ht> 200 && ht<= 300 && met> 275 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0400838;}
  else if (ht> 300 && ht<= 400 && met> 150 && met<= 155) {eff = 0.822943; errup = 0.0420326; errdown = 0.0428519;}
  else if (ht> 300 && ht<= 400 && met> 155 && met<= 160) {eff = 0.896458; errup = 0.0436716; errdown = 0.0445878;}
  else if (ht> 300 && ht<= 400 && met> 160 && met<= 165) {eff = 0.891239; errup = 0.0858084; errdown = 0.0863638;}
  else if (ht> 300 && ht<= 400 && met> 165 && met<= 170) {eff = 0.92515; errup = 0.0748503; errdown = 0.0889373;}
  else if (ht> 300 && ht<= 400 && met> 170 && met<= 175) {eff = 0.962838; errup = 0.0371622; errdown = 0.0919459;}
  else if (ht> 300 && ht<= 400 && met> 175 && met<= 180) {eff = 0.953488; errup = 0.0465116; errdown = 0.091933;}
  else if (ht> 300 && ht<= 400 && met> 180 && met<= 185) {eff = 0.954733; errup = 0.0340878; errdown = 0.0359867;}
  else if (ht> 300 && ht<= 400 && met> 185 && met<= 190) {eff = 0.977273; errup = 0.0227273; errdown = 0.0354959;}
  else if (ht> 300 && ht<= 400 && met> 190 && met<= 195) {eff = 0.970874; errup = 0.0291262; errdown = 0.0361625;}
  else if (ht> 300 && ht<= 400 && met> 195 && met<= 200) {eff = 0.994118; errup = 0.00588235; errdown = 0.0353247;}
  else if (ht> 300 && ht<= 400 && met> 200 && met<= 210) {eff = 0.977848; errup = 0.0221519; errdown = 0.0439232;}
  else if (ht> 300 && ht<= 400 && met> 210 && met<= 220) {eff = 0.98513; errup = 0.0148699; errdown = 0.0441936;}
  else if (ht> 300 && ht<= 400 && met> 220 && met<= 230) {eff = 0.994737; errup = 0.00526316; errdown = 0.0446999;}
  else if (ht> 300 && ht<= 400 && met> 230 && met<= 240) {eff = 1; errup = 0; errdown = 0.0416224;}
  else if (ht> 300 && ht<= 400 && met> 240 && met<= 250) {eff = 1; errup = 0; errdown = 0.0426185;}
  else if (ht> 300 && ht<= 400 && met> 250 && met<= 275) {eff = 1; errup = 0; errdown = 0.0108667;}
  else if (ht> 300 && ht<= 400 && met> 275 && met<= 300) {eff = 1; errup = 0; errdown = 0.0135983;}
  else if (ht> 300 && ht<= 400 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0115844;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 155) {eff = 0.824427; errup = 0.0712239; errdown = 0.0717268;}
  else if (ht> 400 && ht<= 600 && met> 155 && met<= 160) {eff = 0.864048; errup = 0.0742852; errdown = 0.0749317;}
  else if (ht> 400 && ht<= 600 && met> 160 && met<= 165) {eff = 0.898734; errup = 0.0842114; errdown = 0.0848159;}
  else if (ht> 400 && ht<= 600 && met> 165 && met<= 170) {eff = 0.904605; errup = 0.0847107; errdown = 0.0853449;}
  else if (ht> 400 && ht<= 600 && met> 170 && met<= 175) {eff = 0.955556; errup = 0.0444444; errdown = 0.0891688;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 180) {eff = 0.926407; errup = 0.0735931; errdown = 0.0876413;}
  else if (ht> 400 && ht<= 600 && met> 180 && met<= 185) {eff = 0.962656; errup = 0.0373444; errdown = 0.0450329;}
  else if (ht> 400 && ht<= 600 && met> 185 && met<= 190) {eff = 0.955157; errup = 0.0437693; errdown = 0.0454812;}
  else if (ht> 400 && ht<= 600 && met> 190 && met<= 195) {eff = 0.977528; errup = 0.0224719; errdown = 0.0459398;}
  else if (ht> 400 && ht<= 600 && met> 195 && met<= 200) {eff = 0.976331; errup = 0.0236686; errdown = 0.0462435;}
  else if (ht> 400 && ht<= 600 && met> 200 && met<= 210) {eff = 0.987988; errup = 0.012012; errdown = 0.0428776;}
  else if (ht> 400 && ht<= 600 && met> 210 && met<= 220) {eff = 0.996377; errup = 0.00362319; errdown = 0.0429959;}
  else if (ht> 400 && ht<= 600 && met> 220 && met<= 230) {eff = 1; errup = 0; errdown = 0.0430225;}
  else if (ht> 400 && ht<= 600 && met> 230 && met<= 240) {eff = 1; errup = 0; errdown = 0.041663;}
  else if (ht> 400 && ht<= 600 && met> 240 && met<= 250) {eff = 1; errup = 0; errdown = 0.0418781;}
  else if (ht> 400 && ht<= 600 && met> 250 && met<= 275) {eff = 0.997396; errup = 0.00260417; errdown = 0.0105435;}
  else if (ht> 400 && ht<= 600 && met> 275 && met<= 300) {eff = 0.995918; errup = 0.00408163; errdown = 0.0127398;}
  else if (ht> 400 && ht<= 600 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.00679234;}
  else if (ht> 600 && ht<= 950 && met> 150 && met<= 155) {eff = 0.783019; errup = 0.0584044; errdown = 0.0627692;}
  else if (ht> 600 && ht<= 950 && met> 155 && met<= 160) {eff = 0.876106; errup = 0.0556755; errdown = 0.0602871;}
  else if (ht> 600 && ht<= 950 && met> 160 && met<= 165) {eff = 0.909091; errup = 0.0909091; errdown = 0.0981887;}
  else if (ht> 600 && ht<= 950 && met> 165 && met<= 170) {eff = 0.886598; errup = 0.0948069; errdown = 0.0983523;}
  else if (ht> 600 && ht<= 950 && met> 170 && met<= 175) {eff = 0.910112; errup = 0.0898876; errdown = 0.10027;}
  else if (ht> 600 && ht<= 950 && met> 175 && met<= 180) {eff = 0.964286; errup = 0.0357143; errdown = 0.10243;}
  else if (ht> 600 && ht<= 950 && met> 180 && met<= 185) {eff = 0.96875; errup = 0.03125; errdown = 0.052563;}
  else if (ht> 600 && ht<= 950 && met> 185 && met<= 190) {eff = 0.95082; errup = 0.0430192; errdown = 0.0566908;}
  else if (ht> 600 && ht<= 950 && met> 190 && met<= 195) {eff = 0.952381; errup = 0.0425468; errdown = 0.0556262;}
  else if (ht> 600 && ht<= 950 && met> 195 && met<= 200) {eff = 1; errup = 0; errdown = 0.0582036;}
  else if (ht> 600 && ht<= 950 && met> 200 && met<= 210) {eff = 0.990909; errup = 0.00909091; errdown = 0.0491165;}
  else if (ht> 600 && ht<= 950 && met> 210 && met<= 220) {eff = 0.974684; errup = 0.0253165; errdown = 0.0545401;}
  else if (ht> 600 && ht<= 950 && met> 220 && met<= 230) {eff = 0.990196; errup = 0.00980392; errdown = 0.0497749;}
  else if (ht> 600 && ht<= 950 && met> 230 && met<= 240) {eff = 0.983871; errup = 0.016129; errdown = 0.0568003;}
  else if (ht> 600 && ht<= 950 && met> 240 && met<= 250) {eff = 1; errup = 0; errdown = 0.0569456;}
  else if (ht> 600 && ht<= 950 && met> 250 && met<= 275) {eff = 1; errup = 0; errdown = 0.0170833;}
  else if (ht> 600 && ht<= 950 && met> 275 && met<= 300) {eff = 1; errup = 0; errdown = 0.0241886;}
  else if (ht> 600 && ht<= 950 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0137469;}
  else if (ht> 950 && ht<= 9999 && met> 150 && met<= 160) {eff = 0.755556; errup = 0.108172; errdown = 0.116848;}
  else if (ht> 950 && ht<= 9999 && met> 160 && met<= 170) {eff = 0.805556; errup = 0.136698; errdown = 0.147868;}
  else if (ht> 950 && ht<= 9999 && met> 170 && met<= 180) {eff = 0.966667; errup = 0.0333333; errdown = 0.159225;}
  else if (ht> 950 && ht<= 9999 && met> 180 && met<= 190) {eff = 0.84; errup = 0.10286; errdown = 0.129409;}
  else if (ht> 950 && ht<= 9999 && met> 190 && met<= 200) {eff = 0.88; errup = 0.0980735; errdown = 0.126809;}
  else if (ht> 950 && ht<= 9999 && met> 200 && met<= 210) {eff = 0.956522; errup = 0.0434783; errdown = 0.101396;}
  else if (ht> 950 && ht<= 9999 && met> 210 && met<= 220) {eff = 0.965517; errup = 0.0344828; errdown = 0.0852725;}
  else if (ht> 950 && ht<= 9999 && met> 220 && met<= 230) {eff = 0.909091; errup = 0.0845611; errdown = 0.183366;}
  else if (ht> 950 && ht<= 9999 && met> 230 && met<= 240) {eff = 1; errup = 0; errdown = 0.148583;}
  else if (ht> 950 && ht<= 9999 && met> 240 && met<= 250) {eff = 1; errup = 0; errdown = 0.111276;}
  else if (ht> 950 && ht<= 9999 && met> 250 && met<= 275) {eff = 1; errup = 0; errdown = 0.0927146;}
  else if (ht> 950 && ht<= 9999 && met> 275 && met<= 300) {eff = 1; errup = 0; errdown = 0.0688521;}
  else if (ht> 950 && ht<= 9999 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0738411;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_0l_fakemet_trigeff2016APV("get_0l_fakemet_trigeff2016APV", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.;
  float eff = 1., met = b.met(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 350 && met> 150 && met<= 160) {eff = 0.238318; errup = 0.0327157; errdown = 0.0300816;}
  else if (ht> 0 && ht<= 350 && met> 160 && met<= 170) {eff = 0.308824; errup = 0.0446653; errdown = 0.0416075;}
  else if (ht> 0 && ht<= 350 && met> 170 && met<= 180) {eff = 0.391892; errup = 0.0646615; errdown = 0.0614207;}
  else if (ht> 0 && ht<= 350 && met> 180 && met<= 190) {eff = 0.403509; errup = 0.0749393; errdown = 0.0711413;}
  else if (ht> 0 && ht<= 350 && met> 190 && met<= 200) {eff = 0.606061; errup = 0.0947793; errdown = 0.102197;}
  else if (ht> 0 && ht<= 350 && met> 200 && met<= 225) {eff = 0.681818; errup = 0.0758668; errdown = 0.085322;}
  else if (ht> 0 && ht<= 350 && met> 225 && met<= 250) {eff = 0.888889; errup = 0.0714316; errdown = 0.128174;}
  else if (ht> 0 && ht<= 350 && met> 250 && met<= 9999) {eff = 0.8; errup = 0.128046; errdown = 0.205454;}
  else if (ht> 350 && ht<= 450 && met> 150 && met<= 155) {eff = 0.350515; errup = 0.0301813; errdown = 0.0290932;}
  else if (ht> 350 && ht<= 450 && met> 155 && met<= 160) {eff = 0.36194; errup = 0.0317084; errdown = 0.0306152;}
  else if (ht> 350 && ht<= 450 && met> 160 && met<= 165) {eff = 0.382199; errup = 0.0383362; errdown = 0.0370152;}
  else if (ht> 350 && ht<= 450 && met> 165 && met<= 170) {eff = 0.5; errup = 0.0439995; errdown = 0.0439995;}
  else if (ht> 350 && ht<= 450 && met> 170 && met<= 175) {eff = 0.504348; errup = 0.050689; errdown = 0.0507712;}
  else if (ht> 350 && ht<= 450 && met> 175 && met<= 180) {eff = 0.516854; errup = 0.0580181; errdown = 0.058434;}
  else if (ht> 350 && ht<= 450 && met> 180 && met<= 185) {eff = 0.475; errup = 0.0619984; errdown = 0.0613091;}
  else if (ht> 350 && ht<= 450 && met> 185 && met<= 190) {eff = 0.594937; errup = 0.0598089; errdown = 0.0624656;}
  else if (ht> 350 && ht<= 450 && met> 190 && met<= 195) {eff = 0.565217; errup = 0.0653404; errdown = 0.0674401;}
  else if (ht> 350 && ht<= 450 && met> 195 && met<= 200) {eff = 0.595238; errup = 0.0838913; errdown = 0.0890555;}
  else if (ht> 350 && ht<= 450 && met> 200 && met<= 210) {eff = 0.695652; errup = 0.0590013; errdown = 0.0653529;}
  else if (ht> 350 && ht<= 450 && met> 210 && met<= 220) {eff = 0.705882; errup = 0.0843479; errdown = 0.0984489;}
  else if (ht> 350 && ht<= 450 && met> 220 && met<= 230) {eff = 0.709677; errup = 0.0880518; errdown = 0.103897;}
  else if (ht> 350 && ht<= 450 && met> 230 && met<= 240) {eff = 0.730769; errup = 0.0935066; errdown = 0.114603;}
  else if (ht> 350 && ht<= 450 && met> 240 && met<= 250) {eff = 0.409091; errup = 0.129031; errdown = 0.119289;}
  else if (ht> 350 && ht<= 450 && met> 250 && met<= 300) {eff = 0.824561; errup = 0.0521443; errdown = 0.0653558;}
  else if (ht> 350 && ht<= 450 && met> 300 && met<= 9999) {eff = 0.896552; errup = 0.0557628; errdown = 0.090491;}
  else if (ht> 450 && ht<= 550 && met> 150 && met<= 155) {eff = 0.38829; errup = 0.0200645; errdown = 0.0197067;}
  else if (ht> 450 && ht<= 550 && met> 155 && met<= 160) {eff = 0.42915; errup = 0.0234067; errdown = 0.0231072;}
  else if (ht> 450 && ht<= 550 && met> 160 && met<= 165) {eff = 0.417633; errup = 0.0250856; errdown = 0.0246853;}
  else if (ht> 450 && ht<= 550 && met> 165 && met<= 170) {eff = 0.44713; errup = 0.0289616; errdown = 0.0286252;}
  else if (ht> 450 && ht<= 550 && met> 170 && met<= 175) {eff = 0.462838; errup = 0.0307487; errdown = 0.0304836;}
  else if (ht> 450 && ht<= 550 && met> 175 && met<= 180) {eff = 0.526087; errup = 0.0348964; errdown = 0.0351376;}
  else if (ht> 450 && ht<= 550 && met> 180 && met<= 185) {eff = 0.58296; errup = 0.0347815; errdown = 0.0355738;}
  else if (ht> 450 && ht<= 550 && met> 185 && met<= 190) {eff = 0.53886; errup = 0.0381512; errdown = 0.0385816;}
  else if (ht> 450 && ht<= 550 && met> 190 && met<= 195) {eff = 0.542683; errup = 0.0415332; errdown = 0.0420924;}
  else if (ht> 450 && ht<= 550 && met> 195 && met<= 200) {eff = 0.651515; errup = 0.0438385; errdown = 0.0463317;}
  else if (ht> 450 && ht<= 550 && met> 200 && met<= 210) {eff = 0.575419; errup = 0.0391684; errdown = 0.0400716;}
  else if (ht> 450 && ht<= 550 && met> 210 && met<= 220) {eff = 0.688889; errup = 0.0418665; errdown = 0.0449104;}
  else if (ht> 450 && ht<= 550 && met> 220 && met<= 230) {eff = 0.694444; errup = 0.0467532; errdown = 0.0507063;}
  else if (ht> 450 && ht<= 550 && met> 230 && met<= 240) {eff = 0.704545; errup = 0.0514347; errdown = 0.056588;}
  else if (ht> 450 && ht<= 550 && met> 240 && met<= 250) {eff = 0.552239; errup = 0.0667824; errdown = 0.0685161;}
  else if (ht> 450 && ht<= 550 && met> 250 && met<= 300) {eff = 0.666667; errup = 0.0404808; errdown = 0.0428851;}
  else if (ht> 450 && ht<= 550 && met> 300 && met<= 400) {eff = 0.683673; errup = 0.0497458; errdown = 0.0538738;}
  else if (ht> 450 && ht<= 550 && met> 400 && met<= 9999) {eff = 0.727273; errup = 0.144396; errdown = 0.196072;}
  else if (ht> 550 && ht<= 650 && met> 150 && met<= 155) {eff = 0.379416; errup = 0.0139218; errdown = 0.0137314;}
  else if (ht> 550 && ht<= 650 && met> 155 && met<= 160) {eff = 0.425571; errup = 0.0154611; errdown = 0.0153211;}
  else if (ht> 550 && ht<= 650 && met> 160 && met<= 165) {eff = 0.434286; errup = 0.0173954; errdown = 0.0172402;}
  else if (ht> 550 && ht<= 650 && met> 165 && met<= 170) {eff = 0.496823; errup = 0.0184501; errdown = 0.0184417;}
  else if (ht> 550 && ht<= 650 && met> 170 && met<= 175) {eff = 0.509985; errup = 0.0203285; errdown = 0.0203604;}
  else if (ht> 550 && ht<= 650 && met> 175 && met<= 180) {eff = 0.531083; errup = 0.0218421; errdown = 0.0219571;}
  else if (ht> 550 && ht<= 650 && met> 180 && met<= 185) {eff = 0.528604; errup = 0.0249248; errdown = 0.0250618;}
  else if (ht> 550 && ht<= 650 && met> 185 && met<= 190) {eff = 0.610422; errup = 0.0252127; errdown = 0.0257878;}
  else if (ht> 550 && ht<= 650 && met> 190 && met<= 195) {eff = 0.598131; errup = 0.0285533; errdown = 0.0291982;}
  else if (ht> 550 && ht<= 650 && met> 195 && met<= 200) {eff = 0.631902; errup = 0.0277745; errdown = 0.0286285;}
  else if (ht> 550 && ht<= 650 && met> 200 && met<= 210) {eff = 0.654886; errup = 0.022356; errdown = 0.02303;}
  else if (ht> 550 && ht<= 650 && met> 210 && met<= 220) {eff = 0.65374; errup = 0.0259411; errdown = 0.0268384;}
  else if (ht> 550 && ht<= 650 && met> 220 && met<= 230) {eff = 0.636054; errup = 0.0292201; errdown = 0.0301996;}
  else if (ht> 550 && ht<= 650 && met> 230 && met<= 240) {eff = 0.675; errup = 0.0314734; errdown = 0.0330282;}
  else if (ht> 550 && ht<= 650 && met> 240 && met<= 250) {eff = 0.766304; errup = 0.0322689; errdown = 0.0354048;}
  else if (ht> 550 && ht<= 650 && met> 250 && met<= 275) {eff = 0.649351; errup = 0.0282534; errdown = 0.029279;}
  else if (ht> 550 && ht<= 650 && met> 275 && met<= 300) {eff = 0.67033; errup = 0.0364839; errdown = 0.0384962;}
  else if (ht> 550 && ht<= 650 && met> 300 && met<= 400) {eff = 0.736264; errup = 0.0275322; errdown = 0.0293777;}
  else if (ht> 550 && ht<= 650 && met> 400 && met<= 9999) {eff = 0.967742; errup = 0.0138641; errdown = 0.0212328;}
  else if (ht> 650 && ht<= 800 && met> 150 && met<= 155) {eff = 0.405732; errup = 0.00645598; errdown = 0.00642397;}
  else if (ht> 650 && ht<= 800 && met> 155 && met<= 160) {eff = 0.435599; errup = 0.00719874; errdown = 0.00717208;}
  else if (ht> 650 && ht<= 800 && met> 160 && met<= 165) {eff = 0.463374; errup = 0.00782993; errdown = 0.00781218;}
  else if (ht> 650 && ht<= 800 && met> 165 && met<= 170) {eff = 0.504128; errup = 0.00842923; errdown = 0.00843154;}
  else if (ht> 650 && ht<= 800 && met> 170 && met<= 175) {eff = 0.533844; errup = 0.00906096; errdown = 0.00908295;}
  else if (ht> 650 && ht<= 800 && met> 175 && met<= 180) {eff = 0.543331; errup = 0.00983889; errdown = 0.00987217;}
  else if (ht> 650 && ht<= 800 && met> 180 && met<= 185) {eff = 0.565613; errup = 0.0105006; errdown = 0.0105586;}
  else if (ht> 650 && ht<= 800 && met> 185 && met<= 190) {eff = 0.592402; errup = 0.0113387; errdown = 0.0114357;}
  else if (ht> 650 && ht<= 800 && met> 190 && met<= 195) {eff = 0.627417; errup = 0.0119153; errdown = 0.0120683;}
  else if (ht> 650 && ht<= 800 && met> 195 && met<= 200) {eff = 0.638328; errup = 0.0129289; errdown = 0.0131269;}
  else if (ht> 650 && ht<= 800 && met> 200 && met<= 210) {eff = 0.671793; errup = 0.00998298; errdown = 0.0101373;}
  else if (ht> 650 && ht<= 800 && met> 210 && met<= 220) {eff = 0.712592; errup = 0.0109102; errdown = 0.0111565;}
  else if (ht> 650 && ht<= 800 && met> 220 && met<= 230) {eff = 0.72575; errup = 0.0119685; errdown = 0.0122928;}
  else if (ht> 650 && ht<= 800 && met> 230 && met<= 240) {eff = 0.765612; errup = 0.012243; errdown = 0.0126881;}
  else if (ht> 650 && ht<= 800 && met> 240 && met<= 250) {eff = 0.772936; errup = 0.0144284; errdown = 0.0150792;}
  else if (ht> 650 && ht<= 800 && met> 250 && met<= 275) {eff = 0.803825; errup = 0.00997623; errdown = 0.0103627;}
  else if (ht> 650 && ht<= 800 && met> 275 && met<= 300) {eff = 0.839519; errup = 0.0117681; errdown = 0.0124782;}
  else if (ht> 650 && ht<= 800 && met> 300 && met<= 350) {eff = 0.898445; errup = 0.00921173; errdown = 0.00997693;}
  else if (ht> 650 && ht<= 800 && met> 350 && met<= 400) {eff = 0.92228; errup = 0.0112096; errdown = 0.0127799;}
  else if (ht> 650 && ht<= 800 && met> 400 && met<= 450) {eff = 0.950769; errup = 0.0120063; errdown = 0.01513;}
  else if (ht> 650 && ht<= 800 && met> 450 && met<= 500) {eff = 0.981395; errup = 0.00888312; errdown = 0.0144657;}
  else if (ht> 650 && ht<= 800 && met> 500 && met<= 9999) {eff = 0.995763; errup = 0.00350555; errdown = 0.00967581;}
  else if (ht> 800 && ht<= 1000 && met> 150 && met<= 155) {eff = 0.410636; errup = 0.00329278; errdown = 0.00328485;}
  else if (ht> 800 && ht<= 1000 && met> 155 && met<= 160) {eff = 0.456087; errup = 0.00364269; errdown = 0.00363803;}
  else if (ht> 800 && ht<= 1000 && met> 160 && met<= 165) {eff = 0.494192; errup = 0.00402639; errdown = 0.00402565;}
  else if (ht> 800 && ht<= 1000 && met> 165 && met<= 170) {eff = 0.52535; errup = 0.00445045; errdown = 0.00445444;}
  else if (ht> 800 && ht<= 1000 && met> 170 && met<= 175) {eff = 0.564946; errup = 0.0047913; errdown = 0.00480335;}
  else if (ht> 800 && ht<= 1000 && met> 175 && met<= 180) {eff = 0.593156; errup = 0.0051474; errdown = 0.00516772;}
  else if (ht> 800 && ht<= 1000 && met> 180 && met<= 185) {eff = 0.633451; errup = 0.00545749; errdown = 0.00549155;}
  else if (ht> 800 && ht<= 1000 && met> 185 && met<= 190) {eff = 0.671523; errup = 0.00574517; errdown = 0.00579631;}
  else if (ht> 800 && ht<= 1000 && met> 190 && met<= 195) {eff = 0.690258; errup = 0.0060755; errdown = 0.00614099;}
  else if (ht> 800 && ht<= 1000 && met> 195 && met<= 200) {eff = 0.716921; errup = 0.00639993; errdown = 0.00648732;}
  else if (ht> 800 && ht<= 1000 && met> 200 && met<= 210) {eff = 0.746154; errup = 0.00483941; errdown = 0.00490028;}
  else if (ht> 800 && ht<= 1000 && met> 210 && met<= 220) {eff = 0.775584; errup = 0.00525695; errdown = 0.00534461;}
  else if (ht> 800 && ht<= 1000 && met> 220 && met<= 230) {eff = 0.827175; errup = 0.00531897; errdown = 0.00544925;}
  else if (ht> 800 && ht<= 1000 && met> 230 && met<= 240) {eff = 0.846509; errup = 0.00581206; errdown = 0.00599386;}
  else if (ht> 800 && ht<= 1000 && met> 240 && met<= 250) {eff = 0.860086; errup = 0.00612305; errdown = 0.00635006;}
  else if (ht> 800 && ht<= 1000 && met> 250 && met<= 275) {eff = 0.877645; errup = 0.00446601; errdown = 0.00460784;}
  else if (ht> 800 && ht<= 1000 && met> 275 && met<= 300) {eff = 0.905442; errup = 0.0050704; errdown = 0.00531858;}
  else if (ht> 800 && ht<= 1000 && met> 300 && met<= 350) {eff = 0.922409; errup = 0.00435611; errdown = 0.00458502;}
  else if (ht> 800 && ht<= 1000 && met> 350 && met<= 400) {eff = 0.946459; errup = 0.00542077; errdown = 0.00596207;}
  else if (ht> 800 && ht<= 1000 && met> 400 && met<= 450) {eff = 0.962348; errup = 0.00634133; errdown = 0.00745427;}
  else if (ht> 800 && ht<= 1000 && met> 450 && met<= 500) {eff = 0.982301; errup = 0.00610195; errdown = 0.00861277;}
  else if (ht> 800 && ht<= 1000 && met> 500 && met<= 9999) {eff = 0.985149; errup = 0.00587553; errdown = 0.00876518;}
  else if (ht> 1000 && ht<= 9999 && met> 150 && met<= 155) {eff = 0.320841; errup = 0.00243514; errdown = 0.00242548;}
  else if (ht> 1000 && ht<= 9999 && met> 155 && met<= 160) {eff = 0.353154; errup = 0.002699; errdown = 0.00268972;}
  else if (ht> 1000 && ht<= 9999 && met> 160 && met<= 165) {eff = 0.37695; errup = 0.00297659; errdown = 0.0029674;}
  else if (ht> 1000 && ht<= 9999 && met> 165 && met<= 170) {eff = 0.399853; errup = 0.00324613; errdown = 0.00323742;}
  else if (ht> 1000 && ht<= 9999 && met> 170 && met<= 175) {eff = 0.427572; errup = 0.00353859; errdown = 0.00353125;}
  else if (ht> 1000 && ht<= 9999 && met> 175 && met<= 180) {eff = 0.452812; errup = 0.00384422; errdown = 0.00383864;}
  else if (ht> 1000 && ht<= 9999 && met> 180 && met<= 185) {eff = 0.471592; errup = 0.00414358; errdown = 0.0041397;}
  else if (ht> 1000 && ht<= 9999 && met> 185 && met<= 190) {eff = 0.504259; errup = 0.00445834; errdown = 0.00445901;}
  else if (ht> 1000 && ht<= 9999 && met> 190 && met<= 195) {eff = 0.521548; errup = 0.00477601; errdown = 0.00477991;}
  else if (ht> 1000 && ht<= 9999 && met> 195 && met<= 200) {eff = 0.534327; errup = 0.0051045; errdown = 0.00511163;}
  else if (ht> 1000 && ht<= 9999 && met> 200 && met<= 210) {eff = 0.578567; errup = 0.00394109; errdown = 0.00395105;}
  else if (ht> 1000 && ht<= 9999 && met> 210 && met<= 220) {eff = 0.593563; errup = 0.00444371; errdown = 0.00445894;}
  else if (ht> 1000 && ht<= 9999 && met> 220 && met<= 230) {eff = 0.632842; errup = 0.00489752; errdown = 0.00492481;}
  else if (ht> 1000 && ht<= 9999 && met> 230 && met<= 240) {eff = 0.668062; errup = 0.00534505; errdown = 0.00538819;}
  else if (ht> 1000 && ht<= 9999 && met> 240 && met<= 250) {eff = 0.682297; errup = 0.00584018; errdown = 0.00589735;}
  else if (ht> 1000 && ht<= 9999 && met> 250 && met<= 275) {eff = 0.728256; errup = 0.0041616; errdown = 0.00420152;}
  else if (ht> 1000 && ht<= 9999 && met> 275 && met<= 300) {eff = 0.766542; errup = 0.0050035; errdown = 0.00507816;}
  else if (ht> 1000 && ht<= 9999 && met> 300 && met<= 350) {eff = 0.806977; errup = 0.00437403; errdown = 0.0044497;}
  else if (ht> 1000 && ht<= 9999 && met> 350 && met<= 400) {eff = 0.858853; errup = 0.00553118; errdown = 0.0057142;}
  else if (ht> 1000 && ht<= 9999 && met> 400 && met<= 450) {eff = 0.881603; errup = 0.00694231; errdown = 0.00730125;}
  else if (ht> 1000 && ht<= 9999 && met> 450 && met<= 500) {eff = 0.912281; errup = 0.00804313; errdown = 0.0087332;}
  else if (ht> 1000 && ht<= 9999 && met> 500 && met<= 9999) {eff = 0.93295; errup = 0.00778263; errdown = 0.00866291;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_1el_trigeff2016APV("get_1el_trigeff2016APV", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.; // Not used, but for reference
  float eff = 1., el_pt = Higfuncs::lead_signal_lepton_pt.GetScalar(b), met = b.met(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 20 && el_pt<= 25) {eff = 0.130115; errup = 0.00816849; errdown = 0.00776727;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 20 && el_pt<= 25) {eff = 0.596996; errup = 0.0178414; errdown = 0.0180928;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 20 && el_pt<= 25) {eff = 0.648474; errup = 0.011767; errdown = 0.0119456;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 20 && el_pt<= 25) {eff = 0.236301; errup = 0.0274979; errdown = 0.0255715;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 20 && el_pt<= 25) {eff = 0.709434; errup = 0.028883; errdown = 0.0305666;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 20 && el_pt<= 25) {eff = 0.662295; errup = 0.019675; errdown = 0.0202293;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 20 && el_pt<= 25) {eff = 0.263889; errup = 0.0621764; errdown = 0.0548091;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 20 && el_pt<= 25) {eff = 0.704082; errup = 0.0486554; errdown = 0.0532505;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 20 && el_pt<= 25) {eff = 0.674121; errup = 0.0274578; errdown = 0.0286351;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 20 && el_pt<= 25) {eff = 0.575758; errup = 0.0967863; errdown = 0.102076;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 20 && el_pt<= 25) {eff = 0.772727; errup = 0.0540649; errdown = 0.0634475;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 20 && el_pt<= 25) {eff = 0.872727; errup = 0.0264294; errdown = 0.0314555;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 20 && el_pt<= 25) {eff = 0.9375; errup = 0.051761; errdown = 0.129429;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 20 && el_pt<= 25) {eff = 0.944444; errup = 0.0358019; errdown = 0.0686188;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 20 && el_pt<= 25) {eff = 0.908046; errup = 0.0311873; errdown = 0.0422192;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 20 && el_pt<= 25) {eff = 0.875; errup = 0.103637; errdown = 0.23225;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 20 && el_pt<= 25) {eff = 0.9; errup = 0.0643201; errdown = 0.116971;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 20 && el_pt<= 25) {eff = 0.924528; errup = 0.0357695; errdown = 0.0556609;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 20 && el_pt<= 25) {eff = 1; errup = 0; errdown = 0.168149;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 20 && el_pt<= 25) {eff = 1; errup = 0; errdown = 0.142229;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 20 && el_pt<= 25) {eff = 0.985294; errup = 0.0121686; errdown = 0.0330032;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 20 && el_pt<= 25) {eff = 1; errup = 0; errdown = 0.23126;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 20 && el_pt<= 25) {eff = 1; errup = 0; errdown = 0.23126;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 20 && el_pt<= 25) {eff = 1; errup = 0; errdown = 0.0329191;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 25 && el_pt<= 30) {eff = 0.256192; errup = 0.0127222; errdown = 0.0123329;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 25 && el_pt<= 30) {eff = 0.644128; errup = 0.0207997; errdown = 0.0213346;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 25 && el_pt<= 30) {eff = 0.688333; errup = 0.0136203; errdown = 0.0139438;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 25 && el_pt<= 30) {eff = 0.513636; errup = 0.0358172; errdown = 0.0359491;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 25 && el_pt<= 30) {eff = 0.715026; errup = 0.033799; errdown = 0.036197;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 25 && el_pt<= 30) {eff = 0.716243; errup = 0.0204597; errdown = 0.0213465;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 25 && el_pt<= 30) {eff = 0.666667; errup = 0.0608132; errdown = 0.066209;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 25 && el_pt<= 30) {eff = 0.77451; errup = 0.0430943; errdown = 0.0490761;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 25 && el_pt<= 30) {eff = 0.760456; errup = 0.0271146; errdown = 0.0292333;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 25 && el_pt<= 30) {eff = 0.785714; errup = 0.081517; errdown = 0.105994;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 25 && el_pt<= 30) {eff = 0.804878; errup = 0.0645464; errdown = 0.082049;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 25 && el_pt<= 30) {eff = 0.840278; errup = 0.0313099; errdown = 0.03655;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 25 && el_pt<= 30) {eff = 1; errup = 0; errdown = 0.0769247;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 25 && el_pt<= 30) {eff = 0.962963; errup = 0.0306592; errdown = 0.080075;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 25 && el_pt<= 30) {eff = 0.885714; errup = 0.031545; errdown = 0.0399651;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 25 && el_pt<= 30) {eff = 1; errup = 0; errdown = 0.205568;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 25 && el_pt<= 30) {eff = 0.958333; errup = 0.0344944; errdown = 0.0893855;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 25 && el_pt<= 30) {eff = 1; errup = 0; errdown = 0.0392319;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 25 && el_pt<= 30) {eff = 1; errup = 0; errdown = 0.15411;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 25 && el_pt<= 30) {eff = 1; errup = 0; errdown = 0.108691;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 25 && el_pt<= 30) {eff = 0.983051; errup = 0.0140254; errdown = 0.037896;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 25 && el_pt<= 30) {eff = 1; errup = 0; errdown = 0.368878;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 25 && el_pt<= 30) {eff = 1; errup = 0; errdown = 0.15411;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 25 && el_pt<= 30) {eff = 1; errup = 0; errdown = 0.0297298;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 30 && el_pt<= 40) {eff = 0.377698; errup = 0.012242; errdown = 0.0120917;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 30 && el_pt<= 40) {eff = 0.705238; errup = 0.0162528; errdown = 0.0167715;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 30 && el_pt<= 40) {eff = 0.734633; errup = 0.00999797; errdown = 0.0102383;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 30 && el_pt<= 40) {eff = 0.571839; errup = 0.0277025; errdown = 0.028137;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 30 && el_pt<= 40) {eff = 0.776074; errup = 0.0236909; errdown = 0.0254937;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 30 && el_pt<= 40) {eff = 0.78884; errup = 0.0137127; errdown = 0.0143699;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 30 && el_pt<= 40) {eff = 0.75; errup = 0.0370129; errdown = 0.040696;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 30 && el_pt<= 40) {eff = 0.830601; errup = 0.0284304; errdown = 0.0323859;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 30 && el_pt<= 40) {eff = 0.83619; errup = 0.0164188; errdown = 0.0177735;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 30 && el_pt<= 40) {eff = 0.846154; errup = 0.0460012; errdown = 0.0583524;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 30 && el_pt<= 40) {eff = 0.882979; errup = 0.0337039; errdown = 0.0430922;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 30 && el_pt<= 40) {eff = 0.893617; errup = 0.0186022; errdown = 0.0216568;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 30 && el_pt<= 40) {eff = 0.928571; errup = 0.046; errdown = 0.0865438;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 30 && el_pt<= 40) {eff = 0.914286; errup = 0.0462826; errdown = 0.0764033;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 30 && el_pt<= 40) {eff = 0.956522; errup = 0.0149067; errdown = 0.0207436;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 30 && el_pt<= 40) {eff = 1; errup = 0; errdown = 0.115502;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 30 && el_pt<= 40) {eff = 1; errup = 0; errdown = 0.0542609;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 30 && el_pt<= 40) {eff = 0.965217; errup = 0.0165733; errdown = 0.0266476;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 30 && el_pt<= 40) {eff = 1; errup = 0; errdown = 0.115502;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 30 && el_pt<= 40) {eff = 1; errup = 0; errdown = 0.0472931;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 30 && el_pt<= 40) {eff = 0.991736; errup = 0.00683776; errdown = 0.0187465;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 30 && el_pt<= 40) {eff = 1; errup = 0; errdown = 0.264229;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 30 && el_pt<= 40) {eff = 1; errup = 0; errdown = 0.115502;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 30 && el_pt<= 40) {eff = 1; errup = 0; errdown = 0.0152248;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 40 && el_pt<= 110) {eff = 0.585451; errup = 0.00625334; errdown = 0.00628065;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 40 && el_pt<= 110) {eff = 0.770799; errup = 0.00648653; errdown = 0.00661575;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 40 && el_pt<= 110) {eff = 0.784068; errup = 0.00392273; errdown = 0.00397446;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 40 && el_pt<= 110) {eff = 0.717232; errup = 0.0117968; errdown = 0.012094;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 40 && el_pt<= 110) {eff = 0.827964; errup = 0.0094019; errdown = 0.00981352;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 40 && el_pt<= 110) {eff = 0.827505; errup = 0.00532802; errdown = 0.00545908;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 40 && el_pt<= 110) {eff = 0.8125; errup = 0.0172979; errdown = 0.0185462;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 40 && el_pt<= 110) {eff = 0.874046; errup = 0.0119679; errdown = 0.0129701;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 40 && el_pt<= 110) {eff = 0.883651; errup = 0.00589808; errdown = 0.00616188;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 40 && el_pt<= 110) {eff = 0.904382; errup = 0.0187743; errdown = 0.0223335;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 40 && el_pt<= 110) {eff = 0.925373; errup = 0.0122221; errdown = 0.014193;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 40 && el_pt<= 110) {eff = 0.918919; errup = 0.00688324; errdown = 0.00743385;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 40 && el_pt<= 110) {eff = 0.972603; errup = 0.0130667; errdown = 0.0211322;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 40 && el_pt<= 110) {eff = 0.938776; errup = 0.0140343; errdown = 0.0173753;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 40 && el_pt<= 110) {eff = 0.959854; errup = 0.00594073; errdown = 0.00684405;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 40 && el_pt<= 110) {eff = 0.978947; errup = 0.0135865; errdown = 0.0270927;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 40 && el_pt<= 110) {eff = 0.980952; errup = 0.00909411; errdown = 0.0148042;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 40 && el_pt<= 110) {eff = 0.979224; errup = 0.00527331; errdown = 0.00677292;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 40 && el_pt<= 110) {eff = 1; errup = 0; errdown = 0.0186106;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 40 && el_pt<= 110) {eff = 0.989583; errup = 0.00672538; errdown = 0.0135734;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 40 && el_pt<= 110) {eff = 0.98995; errup = 0.00347054; errdown = 0.004919;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 40 && el_pt<= 110) {eff = 1; errup = 0; errdown = 0.0249041;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 40 && el_pt<= 110) {eff = 0.995215; errup = 0.00395846; errdown = 0.0109159;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 40 && el_pt<= 110) {eff = 1; errup = 0; errdown = 0.0023015;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 110 && el_pt<= 120) {eff = 0.848138; errup = 0.0137711; errdown = 0.0148203;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 110 && el_pt<= 120) {eff = 0.854717; errup = 0.0155338; errdown = 0.0169532;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 110 && el_pt<= 120) {eff = 0.870671; errup = 0.00900093; errdown = 0.00954538;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 110 && el_pt<= 120) {eff = 0.834395; errup = 0.0304372; errdown = 0.0351352;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 110 && el_pt<= 120) {eff = 0.856322; errup = 0.0271621; errdown = 0.0316838;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 110 && el_pt<= 120) {eff = 0.885; errup = 0.0131735; errdown = 0.0145376;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 110 && el_pt<= 120) {eff = 0.909091; errup = 0.0387024; errdown = 0.0568211;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 110 && el_pt<= 120) {eff = 0.96875; errup = 0.0169598; errdown = 0.0294646;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 110 && el_pt<= 120) {eff = 0.929712; errup = 0.0145391; errdown = 0.0175826;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.0542609;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 110 && el_pt<= 120) {eff = 0.957143; errup = 0.0232345; errdown = 0.0399358;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 110 && el_pt<= 120) {eff = 0.960227; errup = 0.0145529; errdown = 0.0207658;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.0879414;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 110 && el_pt<= 120) {eff = 0.916667; errup = 0.0450072; errdown = 0.0744674;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.0152248;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.308024;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.0542609;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 110 && el_pt<= 120) {eff = 0.987654; errup = 0.0102152; errdown = 0.0278152;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.23126;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.0683597;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 110 && el_pt<= 120) {eff = 0.990291; errup = 0.00803292; errdown = 0.0219699;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.601684;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.0769247;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.0165973;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 120 && el_pt<= 9999) {eff = 0.875068; errup = 0.0077494; errdown = 0.00816924;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 120 && el_pt<= 9999) {eff = 0.890258; errup = 0.00762749; errdown = 0.00810313;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 120 && el_pt<= 9999) {eff = 0.90709; errup = 0.00466553; errdown = 0.00487964;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 120 && el_pt<= 9999) {eff = 0.883117; errup = 0.0165956; errdown = 0.0187403;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 120 && el_pt<= 9999) {eff = 0.925865; errup = 0.0107075; errdown = 0.012218;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 120 && el_pt<= 9999) {eff = 0.92428; errup = 0.00665405; errdown = 0.00720999;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 120 && el_pt<= 9999) {eff = 0.911765; errup = 0.0245331; errdown = 0.03147;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 120 && el_pt<= 9999) {eff = 0.95203; errup = 0.0129642; errdown = 0.0167656;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 120 && el_pt<= 9999) {eff = 0.950617; errup = 0.00763704; errdown = 0.00883913;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0312433;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 120 && el_pt<= 9999) {eff = 0.978417; errup = 0.0117235; errdown = 0.0205485;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 120 && el_pt<= 9999) {eff = 0.962185; errup = 0.00873078; errdown = 0.0109035;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0485397;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 120 && el_pt<= 9999) {eff = 0.988636; errup = 0.00940245; errdown = 0.0256444;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 120 && el_pt<= 9999) {eff = 0.982301; errup = 0.00699856; errdown = 0.0104218;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0923495;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0267106;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.00800717;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.102638;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 120 && el_pt<= 9999) {eff = 0.986842; errup = 0.0108874; errdown = 0.0296052;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 120 && el_pt<= 9999) {eff = 0.996016; errup = 0.00329604; errdown = 0.00910139;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.205568;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0189946;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 120 && el_pt<= 9999) {eff = 0.996364; errup = 0.00300837; errdown = 0.00831186;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_1mu_trigeff2016APV("get_1mu_trigeff2016APV", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.; // Not used, but for reference
  float eff = 1., mu_pt = Higfuncs::lead_signal_lepton_pt.GetScalar(b), met = b.met(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && mu_pt> 20 && mu_pt<= 25) {eff = 0.343384; errup = 0.01429; errdown = 0.0140198;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && mu_pt> 20 && mu_pt<= 25) {eff = 0.904011; errup = 0.0112516; errdown = 0.0124826;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && mu_pt> 20 && mu_pt<= 25) {eff = 0.878537; errup = 0.00865446; errdown = 0.00919774;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && mu_pt> 20 && mu_pt<= 25) {eff = 0.448; errup = 0.0336014; errdown = 0.0331601;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && mu_pt> 20 && mu_pt<= 25) {eff = 0.913858; errup = 0.0173347; errdown = 0.020765;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && mu_pt> 20 && mu_pt<= 25) {eff = 0.894563; errup = 0.0125964; errdown = 0.013981;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && mu_pt> 20 && mu_pt<= 25) {eff = 0.553398; errup = 0.0529889; errdown = 0.0541213;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && mu_pt> 20 && mu_pt<= 25) {eff = 0.9375; errup = 0.0227635; errdown = 0.0320416;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && mu_pt> 20 && mu_pt<= 25) {eff = 0.922043; errup = 0.0140104; errdown = 0.0164949;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && mu_pt> 20 && mu_pt<= 25) {eff = 0.685714; errup = 0.085175; errdown = 0.0974756;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && mu_pt> 20 && mu_pt<= 25) {eff = 0.931034; errup = 0.0327143; errdown = 0.0511775;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && mu_pt> 20 && mu_pt<= 25) {eff = 0.949749; errup = 0.0154346; errdown = 0.0206706;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && mu_pt> 20 && mu_pt<= 25) {eff = 0.826087; errup = 0.081293; errdown = 0.116303;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.0485397;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && mu_pt> 20 && mu_pt<= 25) {eff = 0.927273; errup = 0.024774; errdown = 0.0339108;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.184992;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.0923495;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && mu_pt> 20 && mu_pt<= 25) {eff = 0.974026; errup = 0.0167592; errdown = 0.0332329;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.205568;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.108691;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.0263287;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.458642;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.168149;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.0267106;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && mu_pt> 25 && mu_pt<= 30) {eff = 0.450425; errup = 0.0194919; errdown = 0.0193462;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && mu_pt> 25 && mu_pt<= 30) {eff = 0.878104; errup = 0.0157539; errdown = 0.0175824;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && mu_pt> 25 && mu_pt<= 30) {eff = 0.882236; errup = 0.010281; errdown = 0.0110809;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && mu_pt> 25 && mu_pt<= 30) {eff = 0.520408; errup = 0.0380202; errdown = 0.0382426;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && mu_pt> 25 && mu_pt<= 30) {eff = 0.878453; errup = 0.0247057; errdown = 0.0293469;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && mu_pt> 25 && mu_pt<= 30) {eff = 0.907115; errup = 0.0130289; errdown = 0.0147593;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && mu_pt> 25 && mu_pt<= 30) {eff = 0.679012; errup = 0.0552249; errdown = 0.060131;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && mu_pt> 25 && mu_pt<= 30) {eff = 0.89916; errup = 0.0279396; errdown = 0.0356263;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && mu_pt> 25 && mu_pt<= 30) {eff = 0.920245; errup = 0.0151284; errdown = 0.0179649;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && mu_pt> 25 && mu_pt<= 30) {eff = 0.888889; errup = 0.0471424; errdown = 0.068179;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && mu_pt> 25 && mu_pt<= 30) {eff = 0.947368; errup = 0.0285079; errdown = 0.0485563;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && mu_pt> 25 && mu_pt<= 30) {eff = 0.973404; errup = 0.0114406; errdown = 0.017591;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && mu_pt> 25 && mu_pt<= 30) {eff = 0.928571; errup = 0.0591648; errdown = 0.145681;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.042887;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && mu_pt> 25 && mu_pt<= 30) {eff = 0.953271; errup = 0.0200375; errdown = 0.0303749;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.168149;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.0923495;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && mu_pt> 25 && mu_pt<= 30) {eff = 0.97619; errup = 0.0153639; errdown = 0.0305413;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.168149;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.0879414;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.0230346;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.368878;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.0972223;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.0267106;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && mu_pt> 30 && mu_pt<= 50) {eff = 0.621662; errup = 0.0134823; errdown = 0.0136678;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && mu_pt> 30 && mu_pt<= 50) {eff = 0.905734; errup = 0.00918056; errdown = 0.0100108;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && mu_pt> 30 && mu_pt<= 50) {eff = 0.927173; errup = 0.00516472; errdown = 0.0055119;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && mu_pt> 30 && mu_pt<= 50) {eff = 0.758157; errup = 0.0191837; errdown = 0.0202242;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && mu_pt> 30 && mu_pt<= 50) {eff = 0.916955; errup = 0.0115716; errdown = 0.0131216;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && mu_pt> 30 && mu_pt<= 50) {eff = 0.939535; errup = 0.00617068; errdown = 0.00678616;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && mu_pt> 30 && mu_pt<= 50) {eff = 0.809091; errup = 0.0272025; errdown = 0.0302448;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && mu_pt> 30 && mu_pt<= 50) {eff = 0.947945; errup = 0.0116499; errdown = 0.0143892;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && mu_pt> 30 && mu_pt<= 50) {eff = 0.94718; errup = 0.00671774; errdown = 0.00757159;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && mu_pt> 30 && mu_pt<= 50) {eff = 0.930769; errup = 0.0222845; errdown = 0.0300159;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && mu_pt> 30 && mu_pt<= 50) {eff = 0.964912; errup = 0.0138311; errdown = 0.0203696;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && mu_pt> 30 && mu_pt<= 50) {eff = 0.956391; errup = 0.00793292; errdown = 0.00943465;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && mu_pt> 30 && mu_pt<= 50) {eff = 0.983871; errup = 0.0133466; errdown = 0.0361115;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && mu_pt> 30 && mu_pt<= 50) {eff = 0.992308; errup = 0.00636432; errdown = 0.0174652;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && mu_pt> 30 && mu_pt<= 50) {eff = 0.988506; errup = 0.00495606; errdown = 0.0077009;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && mu_pt> 30 && mu_pt<= 50) {eff = 0.972973; errup = 0.0223689; errdown = 0.0594217;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && mu_pt> 30 && mu_pt<= 50) {eff = 0.975; errup = 0.0161313; errdown = 0.0320234;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && mu_pt> 30 && mu_pt<= 50) {eff = 0.98513; errup = 0.00710325; errdown = 0.0116011;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && mu_pt> 30 && mu_pt<= 50) {eff = 1; errup = 0; errdown = 0.0498539;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && mu_pt> 30 && mu_pt<= 50) {eff = 1; errup = 0; errdown = 0.0236258;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && mu_pt> 30 && mu_pt<= 50) {eff = 0.989011; errup = 0.00597477; errdown = 0.0105736;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && mu_pt> 30 && mu_pt<= 50) {eff = 1; errup = 0; errdown = 0.0923495;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && mu_pt> 30 && mu_pt<= 50) {eff = 1; errup = 0; errdown = 0.0271039;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && mu_pt> 30 && mu_pt<= 50) {eff = 1; errup = 0; errdown = 0.00687149;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.924414; errup = 0.00783875; errdown = 0.00861697;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.957343; errup = 0.00535719; errdown = 0.00603846;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.961172; errup = 0.00288315; errdown = 0.00309567;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.965184; errup = 0.0080457; errdown = 0.010059;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.969662; errup = 0.0058528; errdown = 0.00705733;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.971147; errup = 0.00308722; errdown = 0.00342464;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.960656; errup = 0.0110845; errdown = 0.0145429;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.974227; errup = 0.00653261; errdown = 0.00837367;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.971173; errup = 0.00373281; errdown = 0.00423228;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.964072; errup = 0.0141603; errdown = 0.0208431;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.973333; errup = 0.00823767; errdown = 0.0111617;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.986519; errup = 0.00322468; errdown = 0.00409027;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.98913; errup = 0.00899357; errdown = 0.0245495;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.995833; errup = 0.00344712; errdown = 0.00951566;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.991337; errup = 0.00318952; errdown = 0.00463508;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0368748;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.993289; errup = 0.00555266; errdown = 0.0152629;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.998252; errup = 0.00144628; errdown = 0.00400857;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.978261; errup = 0.0179907; errdown = 0.0482195;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.988095; errup = 0.00768569; errdown = 0.0154855;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.00312609;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0419109;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0118073;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.00300859;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_2el_trigeff2016APV("get_2el_trigeff2016APV", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.; // Not used, but for reference
  float eff = 1., el_pt = Higfuncs::lead_signal_lepton_pt.GetScalar(b);
  errup+=errdown; //suppress unused warning
  if (el_pt> 40 && el_pt<= 45) {eff = 0.974093; errup = 0.0111454; errdown = 0.0171454;}
  else if (el_pt> 45 && el_pt<= 50) {eff = 0.961832; errup = 0.0117579; errdown = 0.0158414;}
  else if (el_pt> 50 && el_pt<= 55) {eff = 0.971154; errup = 0.00937306; errdown = 0.0128965;}
  else if (el_pt> 55 && el_pt<= 60) {eff = 0.988732; errup = 0.0053849; errdown = 0.00881935;}
  else if (el_pt> 60 && el_pt<= 65) {eff = 0.966555; errup = 0.0103147; errdown = 0.0139295;}
  else if (el_pt> 65 && el_pt<= 70) {eff = 0.972318; errup = 0.00952322; errdown = 0.0133685;}
  else if (el_pt> 70 && el_pt<= 75) {eff = 0.986063; errup = 0.00665853; errdown = 0.0108827;}
  else if (el_pt> 75 && el_pt<= 80) {eff = 0.977099; errup = 0.009047; errdown = 0.0134278;}
  else if (el_pt> 80 && el_pt<= 85) {eff = 1; errup = 0; errdown = 0.00730791;}
  else if (el_pt> 85 && el_pt<= 90) {eff = 0.995935; errup = 0.00336304; errdown = 0.00928513;}
  else if (el_pt> 90 && el_pt<= 95) {eff = 0.986667; errup = 0.00724787; errdown = 0.0127994;}
  else if (el_pt> 95 && el_pt<= 100) {eff = 0.981818; errup = 0.0086817; errdown = 0.0141424;}
  else if (el_pt> 100 && el_pt<= 105) {eff = 0.985075; errup = 0.00811214; errdown = 0.014305;}
  else if (el_pt> 105 && el_pt<= 110) {eff = 0.979058; errup = 0.00999636; errdown = 0.0162488;}
  else if (el_pt> 110 && el_pt<= 9999) {eff = 0.997333; errup = 0.0022061; errdown = 0.00610514;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_2mu_trigeff2016APV("get_2mu_trigeff2016APV", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.; // Not used, but for reference
  float eff = 1., mu_pt = Higfuncs::lead_signal_lepton_pt.GetScalar(b);
  errup+=errdown; //suppress unused warning
  if (mu_pt> 40 && mu_pt<= 45) {eff = 0.980769; errup = 0.00828196; errdown = 0.0127999;}
  else if (mu_pt> 45 && mu_pt<= 50) {eff = 0.992322; errup = 0.00367083; errdown = 0.00602884;}
  else if (mu_pt> 50 && mu_pt<= 9999) {eff = 0.994026; errup = 0.00185445; errdown = 0.00253809;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

}
