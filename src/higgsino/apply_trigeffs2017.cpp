#include <vector>
#include "core/baby.hpp"
#include "core/process.hpp"
#include "core/named_func.hpp"
#include "higgsino/hig_functions.hpp"
#include "higgsino/hig_utilities.hpp"
#include "higgsino/apply_trigeffs2017.hpp"

namespace Higfuncs{

const NamedFunc get_0l_trigeff2017("get_0l_trigeff2017", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.;
  float eff = 1., met = b.met(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 200 && met> 150 && met<= 155) {eff = 0.153846; errup = 0.0655748; errdown = 0.0648185;}
  else if (ht> 0 && ht<= 200 && met> 155 && met<= 160) {eff = 0.242291; errup = 0.101985; errdown = 0.101251;}
  else if (ht> 0 && ht<= 200 && met> 160 && met<= 165) {eff = 0.269663; errup = 0.0981309; errdown = 0.0971001;}
  else if (ht> 0 && ht<= 200 && met> 165 && met<= 170) {eff = 0.283133; errup = 0.103048; errdown = 0.102004;}
  else if (ht> 0 && ht<= 200 && met> 170 && met<= 180) {eff = 0.404878; errup = 0.141198; errdown = 0.14094;}
  else if (ht> 0 && ht<= 200 && met> 180 && met<= 190) {eff = 0.394231; errup = 0.145524; errdown = 0.14472;}
  else if (ht> 0 && ht<= 200 && met> 190 && met<= 200) {eff = 0.530303; errup = 0.194266; errdown = 0.194626;}
  else if (ht> 0 && ht<= 200 && met> 200 && met<= 9999) {eff = 0.676471; errup = 0.127742; errdown = 0.130601;}
  else if (ht> 200 && ht<= 300 && met> 150 && met<= 155) {eff = 0.3125; errup = 0.126436; errdown = 0.126347;}
  else if (ht> 200 && ht<= 300 && met> 155 && met<= 160) {eff = 0.386233; errup = 0.15609; errdown = 0.156025;}
  else if (ht> 200 && ht<= 300 && met> 160 && met<= 165) {eff = 0.410959; errup = 0.140488; errdown = 0.140414;}
  else if (ht> 200 && ht<= 300 && met> 165 && met<= 170) {eff = 0.528846; errup = 0.179769; errdown = 0.17979;}
  else if (ht> 200 && ht<= 300 && met> 170 && met<= 175) {eff = 0.555882; errup = 0.189152; errdown = 0.189204;}
  else if (ht> 200 && ht<= 300 && met> 175 && met<= 180) {eff = 0.598684; errup = 0.203569; errdown = 0.203669;}
  else if (ht> 200 && ht<= 300 && met> 180 && met<= 185) {eff = 0.724014; errup = 0.250026; errdown = 0.250221;}
  else if (ht> 200 && ht<= 300 && met> 185 && met<= 190) {eff = 0.707692; errup = 0.245245; errdown = 0.245572;}
  else if (ht> 200 && ht<= 300 && met> 190 && met<= 195) {eff = 0.742138; errup = 0.257254; errdown = 0.257739;}
  else if (ht> 200 && ht<= 300 && met> 195 && met<= 200) {eff = 0.795; errup = 0.205; errdown = 0.274794;}
  else if (ht> 200 && ht<= 300 && met> 200 && met<= 210) {eff = 0.853571; errup = 0.143455; errdown = 0.143891;}
  else if (ht> 200 && ht<= 300 && met> 210 && met<= 220) {eff = 0.908163; errup = 0.0918367; errdown = 0.153043;}
  else if (ht> 200 && ht<= 300 && met> 220 && met<= 230) {eff = 0.912; errup = 0.088; errdown = 0.15512;}
  else if (ht> 200 && ht<= 300 && met> 230 && met<= 240) {eff = 0.969388; errup = 0.0306122; errdown = 0.062606;}
  else if (ht> 200 && ht<= 300 && met> 240 && met<= 250) {eff = 0.984127; errup = 0.015873; errdown = 0.0666628;}
  else if (ht> 200 && ht<= 300 && met> 250 && met<= 275) {eff = 0.961165; errup = 0.0332687; errdown = 0.0405384;}
  else if (ht> 200 && ht<= 300 && met> 275 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0533969;}
  else if (ht> 300 && ht<= 400 && met> 150 && met<= 155) {eff = 0.417508; errup = 0.140805; errdown = 0.140679;}
  else if (ht> 300 && ht<= 400 && met> 155 && met<= 160) {eff = 0.48505; errup = 0.16257; errdown = 0.16255;}
  else if (ht> 300 && ht<= 400 && met> 160 && met<= 165) {eff = 0.555556; errup = 0.152265; errdown = 0.152361;}
  else if (ht> 300 && ht<= 400 && met> 165 && met<= 170) {eff = 0.603376; errup = 0.164993; errdown = 0.165183;}
  else if (ht> 300 && ht<= 400 && met> 170 && met<= 175) {eff = 0.674877; errup = 0.183968; errdown = 0.184322;}
  else if (ht> 300 && ht<= 400 && met> 175 && met<= 180) {eff = 0.649215; errup = 0.177595; errdown = 0.177944;}
  else if (ht> 300 && ht<= 400 && met> 180 && met<= 185) {eff = 0.701087; errup = 0.0671677; errdown = 0.0684302;}
  else if (ht> 300 && ht<= 400 && met> 185 && met<= 190) {eff = 0.805195; errup = 0.0734823; errdown = 0.0755296;}
  else if (ht> 300 && ht<= 400 && met> 190 && met<= 195) {eff = 0.797546; errup = 0.0727283; errdown = 0.0745954;}
  else if (ht> 300 && ht<= 400 && met> 195 && met<= 200) {eff = 0.89172; errup = 0.0769926; errdown = 0.0790033;}
  else if (ht> 300 && ht<= 400 && met> 200 && met<= 210) {eff = 0.906383; errup = 0.0332792; errdown = 0.0356316;}
  else if (ht> 300 && ht<= 400 && met> 210 && met<= 220) {eff = 0.895; errup = 0.03468; errdown = 0.0376163;}
  else if (ht> 300 && ht<= 400 && met> 220 && met<= 230) {eff = 0.965318; errup = 0.0320066; errdown = 0.0352582;}
  else if (ht> 300 && ht<= 400 && met> 230 && met<= 240) {eff = 0.977273; errup = 0.0227273; errdown = 0.0377415;}
  else if (ht> 300 && ht<= 400 && met> 240 && met<= 250) {eff = 0.991228; errup = 0.00877193; errdown = 0.0371493;}
  else if (ht> 300 && ht<= 400 && met> 250 && met<= 275) {eff = 0.985366; errup = 0.0146341; errdown = 0.032338;}
  else if (ht> 300 && ht<= 400 && met> 275 && met<= 300) {eff = 1; errup = 0; errdown = 0.0337655;}
  else if (ht> 300 && ht<= 400 && met> 300 && met<= 9999) {eff = 0.990566; errup = 0.00943396; errdown = 0.0354976;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 155) {eff = 0.464602; errup = 0.115379; errdown = 0.115344;}
  else if (ht> 400 && ht<= 600 && met> 155 && met<= 160) {eff = 0.469586; errup = 0.116833; errdown = 0.116799;}
  else if (ht> 400 && ht<= 600 && met> 160 && met<= 165) {eff = 0.579634; errup = 0.117924; errdown = 0.118022;}
  else if (ht> 400 && ht<= 600 && met> 165 && met<= 170) {eff = 0.624615; errup = 0.126995; errdown = 0.127175;}
  else if (ht> 400 && ht<= 600 && met> 170 && met<= 175) {eff = 0.664537; errup = 0.134675; errdown = 0.134908;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 180) {eff = 0.755776; errup = 0.152031; errdown = 0.152341;}
  else if (ht> 400 && ht<= 600 && met> 180 && met<= 185) {eff = 0.740072; errup = 0.0604289; errdown = 0.0612826;}
  else if (ht> 400 && ht<= 600 && met> 185 && met<= 190) {eff = 0.831373; errup = 0.0651924; errdown = 0.066277;}
  else if (ht> 400 && ht<= 600 && met> 190 && met<= 195) {eff = 0.841004; errup = 0.0659166; errdown = 0.0671142;}
  else if (ht> 400 && ht<= 600 && met> 195 && met<= 200) {eff = 0.881188; errup = 0.0682959; errdown = 0.0698196;}
  else if (ht> 400 && ht<= 600 && met> 200 && met<= 210) {eff = 0.912371; errup = 0.0627863; errdown = 0.0633601;}
  else if (ht> 400 && ht<= 600 && met> 210 && met<= 220) {eff = 0.948864; errup = 0.0511364; errdown = 0.0651934;}
  else if (ht> 400 && ht<= 600 && met> 220 && met<= 230) {eff = 0.961832; errup = 0.0381679; errdown = 0.0663227;}
  else if (ht> 400 && ht<= 600 && met> 230 && met<= 240) {eff = 0.968; errup = 0.032; errdown = 0.0404511;}
  else if (ht> 400 && ht<= 600 && met> 240 && met<= 250) {eff = 0.983051; errup = 0.0169492; errdown = 0.040213;}
  else if (ht> 400 && ht<= 600 && met> 250 && met<= 275) {eff = 0.988152; errup = 0.0118483; errdown = 0.02978;}
  else if (ht> 400 && ht<= 600 && met> 275 && met<= 300) {eff = 0.996753; errup = 0.00324675; errdown = 0.0298902;}
  else if (ht> 400 && ht<= 600 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.00714549;}
  else if (ht> 600 && ht<= 950 && met> 150 && met<= 155) {eff = 0.402715; errup = 0.108144; errdown = 0.107839;}
  else if (ht> 600 && ht<= 950 && met> 155 && met<= 160) {eff = 0.514423; errup = 0.135541; errdown = 0.135582;}
  else if (ht> 600 && ht<= 950 && met> 160 && met<= 165) {eff = 0.494681; errup = 0.0832326; errdown = 0.0832043;}
  else if (ht> 600 && ht<= 950 && met> 165 && met<= 170) {eff = 0.616162; errup = 0.0985151; errdown = 0.0989852;}
  else if (ht> 600 && ht<= 950 && met> 170 && met<= 175) {eff = 0.610526; errup = 0.098083; errdown = 0.0985633;}
  else if (ht> 600 && ht<= 950 && met> 175 && met<= 180) {eff = 0.729927; errup = 0.11547; errdown = 0.116777;}
  else if (ht> 600 && ht<= 950 && met> 180 && met<= 185) {eff = 0.757143; errup = 0.0740432; errdown = 0.0761659;}
  else if (ht> 600 && ht<= 950 && met> 185 && met<= 190) {eff = 0.774436; errup = 0.0752642; errdown = 0.0776286;}
  else if (ht> 600 && ht<= 950 && met> 190 && met<= 195) {eff = 0.868852; errup = 0.0795143; errdown = 0.0824287;}
  else if (ht> 600 && ht<= 950 && met> 195 && met<= 200) {eff = 0.87619; errup = 0.0807028; errdown = 0.0843515;}
  else if (ht> 600 && ht<= 950 && met> 200 && met<= 210) {eff = 0.922131; errup = 0.0629337; errdown = 0.0641026;}
  else if (ht> 600 && ht<= 950 && met> 210 && met<= 220) {eff = 0.930818; errup = 0.0643314; errdown = 0.0665532;}
  else if (ht> 600 && ht<= 950 && met> 220 && met<= 230) {eff = 0.961538; errup = 0.0384615; errdown = 0.0669128;}
  else if (ht> 600 && ht<= 950 && met> 230 && met<= 240) {eff = 0.927007; errup = 0.044618; errdown = 0.0486304;}
  else if (ht> 600 && ht<= 950 && met> 240 && met<= 250) {eff = 0.977778; errup = 0.0222222; errdown = 0.0459232;}
  else if (ht> 600 && ht<= 950 && met> 250 && met<= 275) {eff = 0.981132; errup = 0.0188679; errdown = 0.0312914;}
  else if (ht> 600 && ht<= 950 && met> 275 && met<= 300) {eff = 0.995192; errup = 0.00480769; errdown = 0.03107;}
  else if (ht> 600 && ht<= 950 && met> 300 && met<= 9999) {eff = 0.987552; errup = 0.0124481; errdown = 0.0252015;}
  else if (ht> 950 && ht<= 9999 && met> 150 && met<= 160) {eff = 0.509434; errup = 0.126147; errdown = 0.126228;}
  else if (ht> 950 && ht<= 9999 && met> 160 && met<= 170) {eff = 0.6; errup = 0.12381; errdown = 0.125032;}
  else if (ht> 950 && ht<= 9999 && met> 170 && met<= 180) {eff = 0.78481; errup = 0.151407; errdown = 0.154188;}
  else if (ht> 950 && ht<= 9999 && met> 180 && met<= 190) {eff = 0.777778; errup = 0.0883612; errdown = 0.0949266;}
  else if (ht> 950 && ht<= 9999 && met> 190 && met<= 200) {eff = 0.869565; errup = 0.0924472; errdown = 0.104238;}
  else if (ht> 950 && ht<= 9999 && met> 200 && met<= 210) {eff = 0.944444; errup = 0.0541037; errdown = 0.0797118;}
  else if (ht> 950 && ht<= 9999 && met> 210 && met<= 220) {eff = 0.95082; errup = 0.0487625; errdown = 0.0611635;}
  else if (ht> 950 && ht<= 9999 && met> 220 && met<= 230) {eff = 1; errup = 0; errdown = 0.0668608;}
  else if (ht> 950 && ht<= 9999 && met> 230 && met<= 240) {eff = 0.96; errup = 0.04; errdown = 0.106317;}
  else if (ht> 950 && ht<= 9999 && met> 240 && met<= 250) {eff = 0.954545; errup = 0.0454545; errdown = 0.115075;}
  else if (ht> 950 && ht<= 9999 && met> 250 && met<= 275) {eff = 1; errup = 0; errdown = 0.0531069;}
  else if (ht> 950 && ht<= 9999 && met> 275 && met<= 300) {eff = 0.972973; errup = 0.027027; errdown = 0.067906;}
  else if (ht> 950 && ht<= 9999 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0405329;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_0l_trigeff2017_mettru("get_0l_trigeff2017_mettru", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.;
  float eff = 1., met = b.met_tru(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 200 && met> 150 && met<= 155) {eff = 0.153846; errup = 0.0655748; errdown = 0.0648185;}
  else if (ht> 0 && ht<= 200 && met> 155 && met<= 160) {eff = 0.242291; errup = 0.101985; errdown = 0.101251;}
  else if (ht> 0 && ht<= 200 && met> 160 && met<= 165) {eff = 0.269663; errup = 0.0981309; errdown = 0.0971001;}
  else if (ht> 0 && ht<= 200 && met> 165 && met<= 170) {eff = 0.283133; errup = 0.103048; errdown = 0.102004;}
  else if (ht> 0 && ht<= 200 && met> 170 && met<= 180) {eff = 0.404878; errup = 0.141198; errdown = 0.14094;}
  else if (ht> 0 && ht<= 200 && met> 180 && met<= 190) {eff = 0.394231; errup = 0.145524; errdown = 0.14472;}
  else if (ht> 0 && ht<= 200 && met> 190 && met<= 200) {eff = 0.530303; errup = 0.194266; errdown = 0.194626;}
  else if (ht> 0 && ht<= 200 && met> 200 && met<= 9999) {eff = 0.676471; errup = 0.127742; errdown = 0.130601;}
  else if (ht> 200 && ht<= 300 && met> 150 && met<= 155) {eff = 0.3125; errup = 0.126436; errdown = 0.126347;}
  else if (ht> 200 && ht<= 300 && met> 155 && met<= 160) {eff = 0.386233; errup = 0.15609; errdown = 0.156025;}
  else if (ht> 200 && ht<= 300 && met> 160 && met<= 165) {eff = 0.410959; errup = 0.140488; errdown = 0.140414;}
  else if (ht> 200 && ht<= 300 && met> 165 && met<= 170) {eff = 0.528846; errup = 0.179769; errdown = 0.17979;}
  else if (ht> 200 && ht<= 300 && met> 170 && met<= 175) {eff = 0.555882; errup = 0.189152; errdown = 0.189204;}
  else if (ht> 200 && ht<= 300 && met> 175 && met<= 180) {eff = 0.598684; errup = 0.203569; errdown = 0.203669;}
  else if (ht> 200 && ht<= 300 && met> 180 && met<= 185) {eff = 0.724014; errup = 0.250026; errdown = 0.250221;}
  else if (ht> 200 && ht<= 300 && met> 185 && met<= 190) {eff = 0.707692; errup = 0.245245; errdown = 0.245572;}
  else if (ht> 200 && ht<= 300 && met> 190 && met<= 195) {eff = 0.742138; errup = 0.257254; errdown = 0.257739;}
  else if (ht> 200 && ht<= 300 && met> 195 && met<= 200) {eff = 0.795; errup = 0.205; errdown = 0.274794;}
  else if (ht> 200 && ht<= 300 && met> 200 && met<= 210) {eff = 0.853571; errup = 0.143455; errdown = 0.143891;}
  else if (ht> 200 && ht<= 300 && met> 210 && met<= 220) {eff = 0.908163; errup = 0.0918367; errdown = 0.153043;}
  else if (ht> 200 && ht<= 300 && met> 220 && met<= 230) {eff = 0.912; errup = 0.088; errdown = 0.15512;}
  else if (ht> 200 && ht<= 300 && met> 230 && met<= 240) {eff = 0.969388; errup = 0.0306122; errdown = 0.062606;}
  else if (ht> 200 && ht<= 300 && met> 240 && met<= 250) {eff = 0.984127; errup = 0.015873; errdown = 0.0666628;}
  else if (ht> 200 && ht<= 300 && met> 250 && met<= 275) {eff = 0.961165; errup = 0.0332687; errdown = 0.0405384;}
  else if (ht> 200 && ht<= 300 && met> 275 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0533969;}
  else if (ht> 300 && ht<= 400 && met> 150 && met<= 155) {eff = 0.417508; errup = 0.140805; errdown = 0.140679;}
  else if (ht> 300 && ht<= 400 && met> 155 && met<= 160) {eff = 0.48505; errup = 0.16257; errdown = 0.16255;}
  else if (ht> 300 && ht<= 400 && met> 160 && met<= 165) {eff = 0.555556; errup = 0.152265; errdown = 0.152361;}
  else if (ht> 300 && ht<= 400 && met> 165 && met<= 170) {eff = 0.603376; errup = 0.164993; errdown = 0.165183;}
  else if (ht> 300 && ht<= 400 && met> 170 && met<= 175) {eff = 0.674877; errup = 0.183968; errdown = 0.184322;}
  else if (ht> 300 && ht<= 400 && met> 175 && met<= 180) {eff = 0.649215; errup = 0.177595; errdown = 0.177944;}
  else if (ht> 300 && ht<= 400 && met> 180 && met<= 185) {eff = 0.701087; errup = 0.0671677; errdown = 0.0684302;}
  else if (ht> 300 && ht<= 400 && met> 185 && met<= 190) {eff = 0.805195; errup = 0.0734823; errdown = 0.0755296;}
  else if (ht> 300 && ht<= 400 && met> 190 && met<= 195) {eff = 0.797546; errup = 0.0727283; errdown = 0.0745954;}
  else if (ht> 300 && ht<= 400 && met> 195 && met<= 200) {eff = 0.89172; errup = 0.0769926; errdown = 0.0790033;}
  else if (ht> 300 && ht<= 400 && met> 200 && met<= 210) {eff = 0.906383; errup = 0.0332792; errdown = 0.0356316;}
  else if (ht> 300 && ht<= 400 && met> 210 && met<= 220) {eff = 0.895; errup = 0.03468; errdown = 0.0376163;}
  else if (ht> 300 && ht<= 400 && met> 220 && met<= 230) {eff = 0.965318; errup = 0.0320066; errdown = 0.0352582;}
  else if (ht> 300 && ht<= 400 && met> 230 && met<= 240) {eff = 0.977273; errup = 0.0227273; errdown = 0.0377415;}
  else if (ht> 300 && ht<= 400 && met> 240 && met<= 250) {eff = 0.991228; errup = 0.00877193; errdown = 0.0371493;}
  else if (ht> 300 && ht<= 400 && met> 250 && met<= 275) {eff = 0.985366; errup = 0.0146341; errdown = 0.032338;}
  else if (ht> 300 && ht<= 400 && met> 275 && met<= 300) {eff = 1; errup = 0; errdown = 0.0337655;}
  else if (ht> 300 && ht<= 400 && met> 300 && met<= 9999) {eff = 0.990566; errup = 0.00943396; errdown = 0.0354976;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 155) {eff = 0.464602; errup = 0.115379; errdown = 0.115344;}
  else if (ht> 400 && ht<= 600 && met> 155 && met<= 160) {eff = 0.469586; errup = 0.116833; errdown = 0.116799;}
  else if (ht> 400 && ht<= 600 && met> 160 && met<= 165) {eff = 0.579634; errup = 0.117924; errdown = 0.118022;}
  else if (ht> 400 && ht<= 600 && met> 165 && met<= 170) {eff = 0.624615; errup = 0.126995; errdown = 0.127175;}
  else if (ht> 400 && ht<= 600 && met> 170 && met<= 175) {eff = 0.664537; errup = 0.134675; errdown = 0.134908;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 180) {eff = 0.755776; errup = 0.152031; errdown = 0.152341;}
  else if (ht> 400 && ht<= 600 && met> 180 && met<= 185) {eff = 0.740072; errup = 0.0604289; errdown = 0.0612826;}
  else if (ht> 400 && ht<= 600 && met> 185 && met<= 190) {eff = 0.831373; errup = 0.0651924; errdown = 0.066277;}
  else if (ht> 400 && ht<= 600 && met> 190 && met<= 195) {eff = 0.841004; errup = 0.0659166; errdown = 0.0671142;}
  else if (ht> 400 && ht<= 600 && met> 195 && met<= 200) {eff = 0.881188; errup = 0.0682959; errdown = 0.0698196;}
  else if (ht> 400 && ht<= 600 && met> 200 && met<= 210) {eff = 0.912371; errup = 0.0627863; errdown = 0.0633601;}
  else if (ht> 400 && ht<= 600 && met> 210 && met<= 220) {eff = 0.948864; errup = 0.0511364; errdown = 0.0651934;}
  else if (ht> 400 && ht<= 600 && met> 220 && met<= 230) {eff = 0.961832; errup = 0.0381679; errdown = 0.0663227;}
  else if (ht> 400 && ht<= 600 && met> 230 && met<= 240) {eff = 0.968; errup = 0.032; errdown = 0.0404511;}
  else if (ht> 400 && ht<= 600 && met> 240 && met<= 250) {eff = 0.983051; errup = 0.0169492; errdown = 0.040213;}
  else if (ht> 400 && ht<= 600 && met> 250 && met<= 275) {eff = 0.988152; errup = 0.0118483; errdown = 0.02978;}
  else if (ht> 400 && ht<= 600 && met> 275 && met<= 300) {eff = 0.996753; errup = 0.00324675; errdown = 0.0298902;}
  else if (ht> 400 && ht<= 600 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.00714549;}
  else if (ht> 600 && ht<= 950 && met> 150 && met<= 155) {eff = 0.402715; errup = 0.108144; errdown = 0.107839;}
  else if (ht> 600 && ht<= 950 && met> 155 && met<= 160) {eff = 0.514423; errup = 0.135541; errdown = 0.135582;}
  else if (ht> 600 && ht<= 950 && met> 160 && met<= 165) {eff = 0.494681; errup = 0.0832326; errdown = 0.0832043;}
  else if (ht> 600 && ht<= 950 && met> 165 && met<= 170) {eff = 0.616162; errup = 0.0985151; errdown = 0.0989852;}
  else if (ht> 600 && ht<= 950 && met> 170 && met<= 175) {eff = 0.610526; errup = 0.098083; errdown = 0.0985633;}
  else if (ht> 600 && ht<= 950 && met> 175 && met<= 180) {eff = 0.729927; errup = 0.11547; errdown = 0.116777;}
  else if (ht> 600 && ht<= 950 && met> 180 && met<= 185) {eff = 0.757143; errup = 0.0740432; errdown = 0.0761659;}
  else if (ht> 600 && ht<= 950 && met> 185 && met<= 190) {eff = 0.774436; errup = 0.0752642; errdown = 0.0776286;}
  else if (ht> 600 && ht<= 950 && met> 190 && met<= 195) {eff = 0.868852; errup = 0.0795143; errdown = 0.0824287;}
  else if (ht> 600 && ht<= 950 && met> 195 && met<= 200) {eff = 0.87619; errup = 0.0807028; errdown = 0.0843515;}
  else if (ht> 600 && ht<= 950 && met> 200 && met<= 210) {eff = 0.922131; errup = 0.0629337; errdown = 0.0641026;}
  else if (ht> 600 && ht<= 950 && met> 210 && met<= 220) {eff = 0.930818; errup = 0.0643314; errdown = 0.0665532;}
  else if (ht> 600 && ht<= 950 && met> 220 && met<= 230) {eff = 0.961538; errup = 0.0384615; errdown = 0.0669128;}
  else if (ht> 600 && ht<= 950 && met> 230 && met<= 240) {eff = 0.927007; errup = 0.044618; errdown = 0.0486304;}
  else if (ht> 600 && ht<= 950 && met> 240 && met<= 250) {eff = 0.977778; errup = 0.0222222; errdown = 0.0459232;}
  else if (ht> 600 && ht<= 950 && met> 250 && met<= 275) {eff = 0.981132; errup = 0.0188679; errdown = 0.0312914;}
  else if (ht> 600 && ht<= 950 && met> 275 && met<= 300) {eff = 0.995192; errup = 0.00480769; errdown = 0.03107;}
  else if (ht> 600 && ht<= 950 && met> 300 && met<= 9999) {eff = 0.987552; errup = 0.0124481; errdown = 0.0252015;}
  else if (ht> 950 && ht<= 9999 && met> 150 && met<= 160) {eff = 0.509434; errup = 0.126147; errdown = 0.126228;}
  else if (ht> 950 && ht<= 9999 && met> 160 && met<= 170) {eff = 0.6; errup = 0.12381; errdown = 0.125032;}
  else if (ht> 950 && ht<= 9999 && met> 170 && met<= 180) {eff = 0.78481; errup = 0.151407; errdown = 0.154188;}
  else if (ht> 950 && ht<= 9999 && met> 180 && met<= 190) {eff = 0.777778; errup = 0.0883612; errdown = 0.0949266;}
  else if (ht> 950 && ht<= 9999 && met> 190 && met<= 200) {eff = 0.869565; errup = 0.0924472; errdown = 0.104238;}
  else if (ht> 950 && ht<= 9999 && met> 200 && met<= 210) {eff = 0.944444; errup = 0.0541037; errdown = 0.0797118;}
  else if (ht> 950 && ht<= 9999 && met> 210 && met<= 220) {eff = 0.95082; errup = 0.0487625; errdown = 0.0611635;}
  else if (ht> 950 && ht<= 9999 && met> 220 && met<= 230) {eff = 1; errup = 0; errdown = 0.0668608;}
  else if (ht> 950 && ht<= 9999 && met> 230 && met<= 240) {eff = 0.96; errup = 0.04; errdown = 0.106317;}
  else if (ht> 950 && ht<= 9999 && met> 240 && met<= 250) {eff = 0.954545; errup = 0.0454545; errdown = 0.115075;}
  else if (ht> 950 && ht<= 9999 && met> 250 && met<= 275) {eff = 1; errup = 0; errdown = 0.0531069;}
  else if (ht> 950 && ht<= 9999 && met> 275 && met<= 300) {eff = 0.972973; errup = 0.027027; errdown = 0.067906;}
  else if (ht> 950 && ht<= 9999 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0405329;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_0l_fakemet_trigeff2017("get_0l_fakemet_trigeff2017", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.;
  float eff = 1., met = b.met(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 350 && met> 150 && met<= 160) {eff = 0.0658363; errup = 0.012196; errdown = 0.0105212;}
  else if (ht> 0 && ht<= 350 && met> 160 && met<= 170) {eff = 0.118033; errup = 0.0214669; errdown = 0.0187454;}
  else if (ht> 0 && ht<= 350 && met> 170 && met<= 180) {eff = 0.107784; errup = 0.0296066; errdown = 0.0243436;}
  else if (ht> 0 && ht<= 350 && met> 180 && met<= 190) {eff = 0.134454; errup = 0.0388688; errdown = 0.0319379;}
  else if (ht> 0 && ht<= 350 && met> 190 && met<= 200) {eff = 0.253333; errup = 0.0602227; errdown = 0.0528372;}
  else if (ht> 0 && ht<= 350 && met> 200 && met<= 225) {eff = 0.309524; errup = 0.0585688; errdown = 0.0535379;}
  else if (ht> 0 && ht<= 350 && met> 225 && met<= 250) {eff = 0.533333; errup = 0.104384; errdown = 0.106953;}
  else if (ht> 0 && ht<= 350 && met> 250 && met<= 9999) {eff = 0.846154; errup = 0.0592763; errdown = 0.0805729;}
  else if (ht> 350 && ht<= 450 && met> 150 && met<= 155) {eff = 0.191083; errup = 0.0150742; errdown = 0.014252;}
  else if (ht> 350 && ht<= 450 && met> 155 && met<= 160) {eff = 0.193651; errup = 0.0170386; errdown = 0.0160181;}
  else if (ht> 350 && ht<= 450 && met> 160 && met<= 165) {eff = 0.230425; errup = 0.0216534; errdown = 0.0203813;}
  else if (ht> 350 && ht<= 450 && met> 165 && met<= 170) {eff = 0.236908; errup = 0.0231502; errdown = 0.0217631;}
  else if (ht> 350 && ht<= 450 && met> 170 && met<= 175) {eff = 0.235474; errup = 0.0258212; errdown = 0.0241012;}
  else if (ht> 350 && ht<= 450 && met> 175 && met<= 180) {eff = 0.310204; errup = 0.0323577; errdown = 0.0307057;}
  else if (ht> 350 && ht<= 450 && met> 180 && met<= 185) {eff = 0.338235; errup = 0.0363371; errdown = 0.0346391;}
  else if (ht> 350 && ht<= 450 && met> 185 && met<= 190) {eff = 0.411392; errup = 0.0427749; errdown = 0.0415675;}
  else if (ht> 350 && ht<= 450 && met> 190 && met<= 195) {eff = 0.402985; errup = 0.0467055; errdown = 0.0451375;}
  else if (ht> 350 && ht<= 450 && met> 195 && met<= 200) {eff = 0.452174; errup = 0.0509725; errdown = 0.0500679;}
  else if (ht> 350 && ht<= 450 && met> 200 && met<= 210) {eff = 0.537143; errup = 0.0401978; errdown = 0.0406528;}
  else if (ht> 350 && ht<= 450 && met> 210 && met<= 220) {eff = 0.6; errup = 0.0540569; errdown = 0.0563666;}
  else if (ht> 350 && ht<= 450 && met> 220 && met<= 230) {eff = 0.628571; errup = 0.0623522; errdown = 0.0664412;}
  else if (ht> 350 && ht<= 450 && met> 230 && met<= 240) {eff = 0.585366; errup = 0.0855378; errdown = 0.0902831;}
  else if (ht> 350 && ht<= 450 && met> 240 && met<= 250) {eff = 0.744681; errup = 0.0674757; errdown = 0.0794545;}
  else if (ht> 350 && ht<= 450 && met> 250 && met<= 300) {eff = 0.838384; errup = 0.038049; errdown = 0.0457667;}
  else if (ht> 350 && ht<= 450 && met> 300 && met<= 9999) {eff = 0.921569; errup = 0.0371575; errdown = 0.0576808;}
  else if (ht> 450 && ht<= 550 && met> 150 && met<= 155) {eff = 0.214445; errup = 0.0117885; errdown = 0.0113494;}
  else if (ht> 450 && ht<= 550 && met> 155 && met<= 160) {eff = 0.267123; errup = 0.0145593; errdown = 0.0140878;}
  else if (ht> 450 && ht<= 550 && met> 160 && met<= 165) {eff = 0.318402; errup = 0.0170329; errdown = 0.0165771;}
  else if (ht> 450 && ht<= 550 && met> 165 && met<= 170) {eff = 0.357698; errup = 0.0198954; errdown = 0.019435;}
  else if (ht> 450 && ht<= 550 && met> 170 && met<= 175) {eff = 0.373106; errup = 0.0222243; errdown = 0.0217226;}
  else if (ht> 450 && ht<= 550 && met> 175 && met<= 180) {eff = 0.390187; errup = 0.0249861; errdown = 0.0244483;}
  else if (ht> 450 && ht<= 550 && met> 180 && met<= 185) {eff = 0.465875; errup = 0.0287189; errdown = 0.0285057;}
  else if (ht> 450 && ht<= 550 && met> 185 && met<= 190) {eff = 0.464286; errup = 0.0301118; errdown = 0.0298671;}
  else if (ht> 450 && ht<= 550 && met> 190 && met<= 195) {eff = 0.509259; errup = 0.0361944; errdown = 0.0362857;}
  else if (ht> 450 && ht<= 550 && met> 195 && met<= 200) {eff = 0.486339; errup = 0.0396433; errdown = 0.0394836;}
  else if (ht> 450 && ht<= 550 && met> 200 && met<= 210) {eff = 0.66343; errup = 0.0278948; errdown = 0.029014;}
  else if (ht> 450 && ht<= 550 && met> 210 && met<= 220) {eff = 0.649573; errup = 0.0325733; errdown = 0.0339356;}
  else if (ht> 450 && ht<= 550 && met> 220 && met<= 230) {eff = 0.73125; errup = 0.0364939; errdown = 0.0396297;}
  else if (ht> 450 && ht<= 550 && met> 230 && met<= 240) {eff = 0.773438; errup = 0.0384207; errdown = 0.0431205;}
  else if (ht> 450 && ht<= 550 && met> 240 && met<= 250) {eff = 0.835052; errup = 0.0387903; errdown = 0.0465903;}
  else if (ht> 450 && ht<= 550 && met> 250 && met<= 300) {eff = 0.891892; errup = 0.0195585; errdown = 0.0228796;}
  else if (ht> 450 && ht<= 550 && met> 300 && met<= 400) {eff = 0.95; errup = 0.0196559; errdown = 0.0286707;}
  else if (ht> 450 && ht<= 550 && met> 400 && met<= 9999) {eff = 0.947368; errup = 0.0435805; errdown = 0.110836;}
  else if (ht> 550 && ht<= 650 && met> 150 && met<= 155) {eff = 0.267707; errup = 0.0112881; errdown = 0.0110017;}
  else if (ht> 550 && ht<= 650 && met> 155 && met<= 160) {eff = 0.318389; errup = 0.0133589; errdown = 0.0130749;}
  else if (ht> 550 && ht<= 650 && met> 160 && met<= 165) {eff = 0.336014; errup = 0.014712; errdown = 0.0144098;}
  else if (ht> 550 && ht<= 650 && met> 165 && met<= 170) {eff = 0.375862; errup = 0.0171334; errdown = 0.0168383;}
  else if (ht> 550 && ht<= 650 && met> 170 && met<= 175) {eff = 0.436519; errup = 0.0195249; errdown = 0.019337;}
  else if (ht> 550 && ht<= 650 && met> 175 && met<= 180) {eff = 0.45045; errup = 0.0220927; errdown = 0.0219067;}
  else if (ht> 550 && ht<= 650 && met> 180 && met<= 185) {eff = 0.5; errup = 0.0242621; errdown = 0.0242621;}
  else if (ht> 550 && ht<= 650 && met> 185 && met<= 190) {eff = 0.553699; errup = 0.0253127; errdown = 0.0255813;}
  else if (ht> 550 && ht<= 650 && met> 190 && met<= 195) {eff = 0.595611; errup = 0.0286823; errdown = 0.0293147;}
  else if (ht> 550 && ht<= 650 && met> 195 && met<= 200) {eff = 0.612795; errup = 0.0294954; errdown = 0.0302985;}
  else if (ht> 550 && ht<= 650 && met> 200 && met<= 210) {eff = 0.676471; errup = 0.0229389; errdown = 0.0237769;}
  else if (ht> 550 && ht<= 650 && met> 210 && met<= 220) {eff = 0.715942; errup = 0.0250322; errdown = 0.0263564;}
  else if (ht> 550 && ht<= 650 && met> 220 && met<= 230) {eff = 0.712329; errup = 0.031763; errdown = 0.0338408;}
  else if (ht> 550 && ht<= 650 && met> 230 && met<= 240) {eff = 0.8125; errup = 0.0289439; errdown = 0.0324884;}
  else if (ht> 550 && ht<= 650 && met> 240 && met<= 250) {eff = 0.821429; errup = 0.0303611; errdown = 0.0345572;}
  else if (ht> 550 && ht<= 650 && met> 250 && met<= 275) {eff = 0.866109; errup = 0.0224264; errdown = 0.0257723;}
  else if (ht> 550 && ht<= 650 && met> 275 && met<= 300) {eff = 0.833333; errup = 0.0306198; errdown = 0.035333;}
  else if (ht> 550 && ht<= 650 && met> 300 && met<= 400) {eff = 0.933579; errup = 0.0152008; errdown = 0.0187828;}
  else if (ht> 550 && ht<= 650 && met> 400 && met<= 9999) {eff = 0.967742; errup = 0.0110867; errdown = 0.0155242;}
  else if (ht> 650 && ht<= 800 && met> 150 && met<= 155) {eff = 0.352055; errup = 0.00866312; errdown = 0.00856858;}
  else if (ht> 650 && ht<= 800 && met> 155 && met<= 160) {eff = 0.358687; errup = 0.00967109; errdown = 0.00955976;}
  else if (ht> 650 && ht<= 800 && met> 160 && met<= 165) {eff = 0.41226; errup = 0.0109216; errdown = 0.0108377;}
  else if (ht> 650 && ht<= 800 && met> 165 && met<= 170) {eff = 0.46046; errup = 0.0121037; errdown = 0.0120584;}
  else if (ht> 650 && ht<= 800 && met> 170 && met<= 175) {eff = 0.490404; errup = 0.0131934; errdown = 0.0131804;}
  else if (ht> 650 && ht<= 800 && met> 175 && met<= 180) {eff = 0.545455; errup = 0.0142889; errdown = 0.0143621;}
  else if (ht> 650 && ht<= 800 && met> 180 && met<= 185) {eff = 0.602089; errup = 0.0154512; errdown = 0.0156511;}
  else if (ht> 650 && ht<= 800 && met> 185 && met<= 190) {eff = 0.607104; errup = 0.0164339; errdown = 0.0166721;}
  else if (ht> 650 && ht<= 800 && met> 190 && met<= 195) {eff = 0.680801; errup = 0.0163579; errdown = 0.0167992;}
  else if (ht> 650 && ht<= 800 && met> 195 && met<= 200) {eff = 0.637795; errup = 0.0196197; errdown = 0.0200712;}
  else if (ht> 650 && ht<= 800 && met> 200 && met<= 210) {eff = 0.739619; errup = 0.0131207; errdown = 0.0135489;}
  else if (ht> 650 && ht<= 800 && met> 210 && met<= 220) {eff = 0.765816; errup = 0.0143505; errdown = 0.0149634;}
  else if (ht> 650 && ht<= 800 && met> 220 && met<= 230) {eff = 0.793914; errup = 0.0153022; errdown = 0.0161519;}
  else if (ht> 650 && ht<= 800 && met> 230 && met<= 240) {eff = 0.827586; errup = 0.0155539; errdown = 0.0166863;}
  else if (ht> 650 && ht<= 800 && met> 240 && met<= 250) {eff = 0.84739; errup = 0.0163702; errdown = 0.0178505;}
  else if (ht> 650 && ht<= 800 && met> 250 && met<= 275) {eff = 0.877307; errup = 0.0109223; errdown = 0.0117823;}
  else if (ht> 650 && ht<= 800 && met> 275 && met<= 300) {eff = 0.91678; errup = 0.0102808; errdown = 0.0114931;}
  else if (ht> 650 && ht<= 800 && met> 300 && met<= 350) {eff = 0.93597; errup = 0.00755031; errdown = 0.00842238;}
  else if (ht> 650 && ht<= 800 && met> 350 && met<= 400) {eff = 0.952258; errup = 0.00768082; errdown = 0.00894541;}
  else if (ht> 650 && ht<= 800 && met> 400 && met<= 450) {eff = 0.966728; errup = 0.00769236; errdown = 0.00962265;}
  else if (ht> 650 && ht<= 800 && met> 450 && met<= 500) {eff = 0.987775; errup = 0.00527053; errdown = 0.00818538;}
  else if (ht> 650 && ht<= 800 && met> 500 && met<= 9999) {eff = 0.970588; errup = 0.0083078; errdown = 0.0109486;}
  else if (ht> 800 && ht<= 1000 && met> 150 && met<= 155) {eff = 0.523438; errup = 0.0044516; errdown = 0.00445529;}
  else if (ht> 800 && ht<= 1000 && met> 155 && met<= 160) {eff = 0.557723; errup = 0.0048272; errdown = 0.00483803;}
  else if (ht> 800 && ht<= 1000 && met> 160 && met<= 165) {eff = 0.594887; errup = 0.00515275; errdown = 0.00517352;}
  else if (ht> 800 && ht<= 1000 && met> 165 && met<= 170) {eff = 0.62544; errup = 0.00537993; errdown = 0.00541075;}
  else if (ht> 800 && ht<= 1000 && met> 170 && met<= 175) {eff = 0.65553; errup = 0.00575146; errdown = 0.00579682;}
  else if (ht> 800 && ht<= 1000 && met> 175 && met<= 180) {eff = 0.693931; errup = 0.00594361; errdown = 0.00600793;}
  else if (ht> 800 && ht<= 1000 && met> 180 && met<= 185) {eff = 0.713487; errup = 0.00622332; errdown = 0.00630405;}
  else if (ht> 800 && ht<= 1000 && met> 185 && met<= 190) {eff = 0.74276; errup = 0.00643202; errdown = 0.00653712;}
  else if (ht> 800 && ht<= 1000 && met> 190 && met<= 195) {eff = 0.774328; errup = 0.00658975; errdown = 0.00672639;}
  else if (ht> 800 && ht<= 1000 && met> 195 && met<= 200) {eff = 0.78909; errup = 0.00675877; errdown = 0.00691803;}
  else if (ht> 800 && ht<= 1000 && met> 200 && met<= 210) {eff = 0.801604; errup = 0.00508122; errdown = 0.00517949;}
  else if (ht> 800 && ht<= 1000 && met> 210 && met<= 220) {eff = 0.82528; errup = 0.00539926; errdown = 0.00553157;}
  else if (ht> 800 && ht<= 1000 && met> 220 && met<= 230) {eff = 0.855199; errup = 0.0055181; errdown = 0.00569449;}
  else if (ht> 800 && ht<= 1000 && met> 230 && met<= 240) {eff = 0.881129; errup = 0.00561133; errdown = 0.00584385;}
  else if (ht> 800 && ht<= 1000 && met> 240 && met<= 250) {eff = 0.893457; errup = 0.00586764; errdown = 0.00615755;}
  else if (ht> 800 && ht<= 1000 && met> 250 && met<= 275) {eff = 0.905706; errup = 0.0039934; errdown = 0.0041472;}
  else if (ht> 800 && ht<= 1000 && met> 275 && met<= 300) {eff = 0.920328; errup = 0.00442355; errdown = 0.00465272;}
  else if (ht> 800 && ht<= 1000 && met> 300 && met<= 350) {eff = 0.93582; errup = 0.00374259; errdown = 0.00395079;}
  else if (ht> 800 && ht<= 1000 && met> 350 && met<= 400) {eff = 0.956754; errup = 0.00430584; errdown = 0.00473416;}
  else if (ht> 800 && ht<= 1000 && met> 400 && met<= 450) {eff = 0.962089; errup = 0.00555209; errdown = 0.00638952;}
  else if (ht> 800 && ht<= 1000 && met> 450 && met<= 500) {eff = 0.957317; errup = 0.00790369; errdown = 0.00943137;}
  else if (ht> 800 && ht<= 1000 && met> 500 && met<= 9999) {eff = 0.962209; errup = 0.00727233; errdown = 0.00874917;}
  else if (ht> 1000 && ht<= 9999 && met> 150 && met<= 155) {eff = 0.407117; errup = 0.00164542; errdown = 0.00164335;}
  else if (ht> 1000 && ht<= 9999 && met> 155 && met<= 160) {eff = 0.436794; errup = 0.00179822; errdown = 0.00179657;}
  else if (ht> 1000 && ht<= 9999 && met> 160 && met<= 165) {eff = 0.471253; errup = 0.00196082; errdown = 0.00195994;}
  else if (ht> 1000 && ht<= 9999 && met> 165 && met<= 170) {eff = 0.498883; errup = 0.00212236; errdown = 0.00212232;}
  else if (ht> 1000 && ht<= 9999 && met> 170 && met<= 175) {eff = 0.526785; errup = 0.00227516; errdown = 0.00227627;}
  else if (ht> 1000 && ht<= 9999 && met> 175 && met<= 180) {eff = 0.559639; errup = 0.0024371; errdown = 0.00243996;}
  else if (ht> 1000 && ht<= 9999 && met> 180 && met<= 185) {eff = 0.584776; errup = 0.00260725; errdown = 0.00261198;}
  else if (ht> 1000 && ht<= 9999 && met> 185 && met<= 190) {eff = 0.6114; errup = 0.00276363; errdown = 0.00277077;}
  else if (ht> 1000 && ht<= 9999 && met> 190 && met<= 195) {eff = 0.636594; errup = 0.00295203; errdown = 0.00296229;}
  else if (ht> 1000 && ht<= 9999 && met> 195 && met<= 200) {eff = 0.661472; errup = 0.00309364; errdown = 0.00310741;}
  else if (ht> 1000 && ht<= 9999 && met> 200 && met<= 210) {eff = 0.692136; errup = 0.00236; errdown = 0.00237003;}
  else if (ht> 1000 && ht<= 9999 && met> 210 && met<= 220) {eff = 0.728352; errup = 0.00259203; errdown = 0.00260753;}
  else if (ht> 1000 && ht<= 9999 && met> 220 && met<= 230) {eff = 0.765431; errup = 0.0027919; errdown = 0.00281495;}
  else if (ht> 1000 && ht<= 9999 && met> 230 && met<= 240) {eff = 0.791763; errup = 0.00299613; errdown = 0.00302795;}
  else if (ht> 1000 && ht<= 9999 && met> 240 && met<= 250) {eff = 0.81432; errup = 0.00319753; errdown = 0.00324016;}
  else if (ht> 1000 && ht<= 9999 && met> 250 && met<= 275) {eff = 0.843864; errup = 0.0022398; errdown = 0.00226607;}
  else if (ht> 1000 && ht<= 9999 && met> 275 && met<= 300) {eff = 0.876421; errup = 0.00254562; errdown = 0.00259094;}
  else if (ht> 1000 && ht<= 9999 && met> 300 && met<= 350) {eff = 0.902322; errup = 0.00218411; errdown = 0.002228;}
  else if (ht> 1000 && ht<= 9999 && met> 350 && met<= 400) {eff = 0.919113; errup = 0.00287238; errdown = 0.00296666;}
  else if (ht> 1000 && ht<= 9999 && met> 400 && met<= 450) {eff = 0.931809; errup = 0.00366339; errdown = 0.00384978;}
  else if (ht> 1000 && ht<= 9999 && met> 450 && met<= 500) {eff = 0.950037; errup = 0.00418836; errdown = 0.00453352;}
  else if (ht> 1000 && ht<= 9999 && met> 500 && met<= 9999) {eff = 0.957692; errup = 0.00395713; errdown = 0.00432629;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_1el_trigeff2017("get_1el_trigeff2017", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.; // Not used, but for reference
  float eff = 1., el_pt = Higfuncs::lead_signal_lepton_pt.GetScalar(b), met = b.met(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 20 && el_pt<= 25) {eff = 0.00940228; errup = 0.00322351; errdown = 0.00247625;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 20 && el_pt<= 25) {eff = 0.256979; errup = 0.0131327; errdown = 0.0127207;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 20 && el_pt<= 25) {eff = 0.468439; errup = 0.0212047; errdown = 0.0210957;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 20 && el_pt<= 25) {eff = 0.0122549; errup = 0.00820524; errdown = 0.00528342;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 20 && el_pt<= 25) {eff = 0.254237; errup = 0.0232412; errdown = 0.0219857;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 20 && el_pt<= 25) {eff = 0.476596; errup = 0.0347357; errdown = 0.0345241;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 20 && el_pt<= 25) {eff = 0.0409836; errup = 0.0267736; errdown = 0.0175899;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 20 && el_pt<= 25) {eff = 0.361702; errup = 0.0383894; errdown = 0.0368119;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 20 && el_pt<= 25) {eff = 0.561983; errup = 0.0484607; errdown = 0.0495731;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 20 && el_pt<= 25) {eff = 0.0769231; errup = 0.056653; errdown = 0.0364503;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 20 && el_pt<= 25) {eff = 0.352941; errup = 0.0592709; errdown = 0.0554477;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 20 && el_pt<= 25) {eff = 0.593023; errup = 0.0572279; errdown = 0.0596105;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 20 && el_pt<= 25) {eff = 0.275862; errup = 0.107524; errdown = 0.089299;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 20 && el_pt<= 25) {eff = 0.611111; errup = 0.072514; errdown = 0.0771459;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 20 && el_pt<= 25) {eff = 0.8; errup = 0.0706632; errdown = 0.0910146;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 20 && el_pt<= 25) {eff = 0.4375; errup = 0.154118; errdown = 0.144762;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 20 && el_pt<= 25) {eff = 0.789474; errup = 0.0978662; errdown = 0.135427;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 20 && el_pt<= 25) {eff = 0.875; errup = 0.0672375; errdown = 0.106829;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 20 && el_pt<= 25) {eff = 0.909091; errup = 0.0753269; errdown = 0.179295;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 20 && el_pt<= 25) {eff = 0.952381; errup = 0.0394264; errdown = 0.101134;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 20 && el_pt<= 25) {eff = 0.95; errup = 0.0413995; errdown = 0.105764;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 20 && el_pt<= 25) {eff = 1; errup = 0; errdown = 0.23126;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 20 && el_pt<= 25) {eff = 0.888889; errup = 0.0598486; errdown = 0.0963981;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 20 && el_pt<= 25) {eff = 1; errup = 0; errdown = 0.0636358;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 25 && el_pt<= 30) {eff = 0.0505768; errup = 0.00740157; errdown = 0.00655018;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 25 && el_pt<= 30) {eff = 0.3275; errup = 0.0174307; errdown = 0.0169835;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 25 && el_pt<= 30) {eff = 0.479419; errup = 0.0258127; errdown = 0.0257083;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 25 && el_pt<= 30) {eff = 0.0870968; errup = 0.0190965; errdown = 0.01617;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 25 && el_pt<= 30) {eff = 0.401216; errup = 0.0288142; errdown = 0.0281811;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 25 && el_pt<= 30) {eff = 0.581921; errup = 0.039284; errdown = 0.0402766;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 25 && el_pt<= 30) {eff = 0.185484; errup = 0.041638; errdown = 0.0360086;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 25 && el_pt<= 30) {eff = 0.444444; errup = 0.0423566; errdown = 0.0416194;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 25 && el_pt<= 30) {eff = 0.625; errup = 0.050699; errdown = 0.0533298;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 25 && el_pt<= 30) {eff = 0.237288; errup = 0.0684316; errdown = 0.0582799;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 25 && el_pt<= 30) {eff = 0.571429; errup = 0.0614164; errdown = 0.0634677;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 25 && el_pt<= 30) {eff = 0.711864; errup = 0.0627981; errdown = 0.0709196;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 25 && el_pt<= 30) {eff = 0.227273; errup = 0.12452; errdown = 0.0944237;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 25 && el_pt<= 30) {eff = 0.625; errup = 0.0764236; errdown = 0.0823251;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 25 && el_pt<= 30) {eff = 0.810811; errup = 0.0670146; errdown = 0.0869581;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 25 && el_pt<= 30) {eff = 0.333333; errup = 0.221361; errdown = 0.17521;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 25 && el_pt<= 30) {eff = 0.724138; errup = 0.089299; errdown = 0.107524;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 25 && el_pt<= 30) {eff = 0.956522; errup = 0.0359954; errdown = 0.0929875;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 25 && el_pt<= 30) {eff = 0.857143; errup = 0.0917089; errdown = 0.158271;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 25 && el_pt<= 30) {eff = 0.95; errup = 0.0413995; errdown = 0.105764;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 25 && el_pt<= 30) {eff = 0.967742; errup = 0.0267009; errdown = 0.0703044;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 25 && el_pt<= 30) {eff = 1; errup = 0; errdown = 0.23126;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 25 && el_pt<= 30) {eff = 1; errup = 0; errdown = 0.0738409;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 25 && el_pt<= 30) {eff = 1; errup = 0; errdown = 0.108691;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 30 && el_pt<= 40) {eff = 0.243003; errup = 0.011301; errdown = 0.0109645;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 30 && el_pt<= 40) {eff = 0.449145; errup = 0.0154131; errdown = 0.0153188;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 30 && el_pt<= 40) {eff = 0.583955; errup = 0.0220384; errdown = 0.022365;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 30 && el_pt<= 40) {eff = 0.384449; errup = 0.0239231; errdown = 0.0234009;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 30 && el_pt<= 40) {eff = 0.573196; errup = 0.0233076; errdown = 0.0236228;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 30 && el_pt<= 40) {eff = 0.664062; errup = 0.0307306; errdown = 0.0320937;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 30 && el_pt<= 40) {eff = 0.490909; errup = 0.0359341; errdown = 0.0358461;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 30 && el_pt<= 40) {eff = 0.638132; errup = 0.0312871; errdown = 0.032429;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 30 && el_pt<= 40) {eff = 0.745455; errup = 0.0352277; errdown = 0.0384563;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 30 && el_pt<= 40) {eff = 0.589286; errup = 0.0498381; errdown = 0.0515755;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 30 && el_pt<= 40) {eff = 0.724138; errup = 0.0434998; errdown = 0.0477419;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 30 && el_pt<= 40) {eff = 0.804598; errup = 0.0440934; errdown = 0.0519821;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 30 && el_pt<= 40) {eff = 0.793651; errup = 0.053193; errdown = 0.0638518;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 30 && el_pt<= 40) {eff = 0.785714; errup = 0.0573947; errdown = 0.0691177;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 30 && el_pt<= 40) {eff = 0.884615; errup = 0.0448006; errdown = 0.0625569;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 30 && el_pt<= 40) {eff = 0.782609; errup = 0.0904893; errdown = 0.120324;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 30 && el_pt<= 40) {eff = 0.955556; errup = 0.0286549; errdown = 0.0556317;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 30 && el_pt<= 40) {eff = 0.930233; errup = 0.037729; errdown = 0.0632358;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 30 && el_pt<= 40) {eff = 1; errup = 0; errdown = 0.0923495;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 30 && el_pt<= 40) {eff = 0.976744; errup = 0.0192463; errdown = 0.0514534;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 30 && el_pt<= 40) {eff = 0.983333; errup = 0.0137916; errdown = 0.0372819;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 30 && el_pt<= 40) {eff = 0.96875; errup = 0.025866; errdown = 0.0682225;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 30 && el_pt<= 40) {eff = 0.977273; errup = 0.0188087; errdown = 0.0503283;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 30 && el_pt<= 40) {eff = 1; errup = 0; errdown = 0.0302177;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 40 && el_pt<= 110) {eff = 0.375831; errup = 0.00550094; errdown = 0.00546945;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 40 && el_pt<= 110) {eff = 0.590867; errup = 0.00755993; errdown = 0.00760249;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 40 && el_pt<= 110) {eff = 0.676444; errup = 0.0100028; errdown = 0.0101631;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 40 && el_pt<= 110) {eff = 0.489083; errup = 0.0101607; errdown = 0.0101519;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 40 && el_pt<= 110) {eff = 0.692926; errup = 0.0108378; errdown = 0.0110497;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 40 && el_pt<= 110) {eff = 0.731369; errup = 0.0132692; errdown = 0.0136833;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 40 && el_pt<= 110) {eff = 0.587316; errup = 0.0152953; errdown = 0.0154606;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 40 && el_pt<= 110) {eff = 0.758799; errup = 0.0139985; errdown = 0.0145541;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 40 && el_pt<= 110) {eff = 0.790476; errup = 0.0152711; errdown = 0.0160966;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 40 && el_pt<= 110) {eff = 0.755647; errup = 0.019929; errdown = 0.0210329;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 40 && el_pt<= 110) {eff = 0.818692; errup = 0.0169527; errdown = 0.0182095;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 40 && el_pt<= 110) {eff = 0.825059; errup = 0.0188236; errdown = 0.0204566;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 40 && el_pt<= 110) {eff = 0.795539; errup = 0.0252333; errdown = 0.0275912;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 40 && el_pt<= 110) {eff = 0.861199; errup = 0.0197526; errdown = 0.0222118;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 40 && el_pt<= 110) {eff = 0.883065; errup = 0.0207173; errdown = 0.0241033;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 40 && el_pt<= 110) {eff = 0.892617; errup = 0.0257285; errdown = 0.0316699;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 40 && el_pt<= 110) {eff = 0.943878; errup = 0.0164283; errdown = 0.021643;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 40 && el_pt<= 110) {eff = 0.931034; errup = 0.0192767; errdown = 0.0249509;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 40 && el_pt<= 110) {eff = 0.968992; errup = 0.0147818; errdown = 0.0238382;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 40 && el_pt<= 110) {eff = 0.97549; errup = 0.0105468; errdown = 0.0162403;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 40 && el_pt<= 110) {eff = 0.968182; errup = 0.0116609; errdown = 0.0167178;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 40 && el_pt<= 110) {eff = 0.991597; errup = 0.0069527; errdown = 0.0190572;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 40 && el_pt<= 110) {eff = 0.995261; errup = 0.00392093; errdown = 0.0108133;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 40 && el_pt<= 110) {eff = 0.997191; errup = 0.00232384; errdown = 0.00642946;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 110 && el_pt<= 120) {eff = 0.394089; errup = 0.0159304; errdown = 0.0157152;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 110 && el_pt<= 120) {eff = 0.609756; errup = 0.0263994; errdown = 0.0270249;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 110 && el_pt<= 120) {eff = 0.697479; errup = 0.0309262; errdown = 0.0326981;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 110 && el_pt<= 120) {eff = 0.488189; errup = 0.0333123; errdown = 0.0332137;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 110 && el_pt<= 120) {eff = 0.683908; errup = 0.0368747; errdown = 0.0391525;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 110 && el_pt<= 120) {eff = 0.717172; errup = 0.047646; errdown = 0.0524908;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 110 && el_pt<= 120) {eff = 0.586207; errup = 0.0489993; errdown = 0.0506166;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 110 && el_pt<= 120) {eff = 0.783505; errup = 0.0435071; errdown = 0.050029;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 110 && el_pt<= 120) {eff = 0.771429; errup = 0.0525767; errdown = 0.0613516;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 110 && el_pt<= 120) {eff = 0.829268; errup = 0.0607368; errdown = 0.0798016;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 110 && el_pt<= 120) {eff = 0.891892; errup = 0.0510106; errdown = 0.077259;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 110 && el_pt<= 120) {eff = 0.842105; errup = 0.0607858; errdown = 0.0823864;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 110 && el_pt<= 120) {eff = 0.875; errup = 0.0672375; errdown = 0.106829;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 110 && el_pt<= 120) {eff = 0.866667; errup = 0.0626915; errdown = 0.0929362;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 110 && el_pt<= 120) {eff = 0.846154; errup = 0.0721243; errdown = 0.105033;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 110 && el_pt<= 120) {eff = 0.8; errup = 0.106751; errdown = 0.157061;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 110 && el_pt<= 120) {eff = 0.916667; errup = 0.0536391; errdown = 0.0995072;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 110 && el_pt<= 120) {eff = 0.92; errup = 0.051501; errdown = 0.0959187;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 110 && el_pt<= 120) {eff = 0.941176; errup = 0.048713; errdown = 0.12258;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.0636358;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 110 && el_pt<= 120) {eff = 0.965517; errup = 0.0285434; errdown = 0.0748731;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.23126;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.108691;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.0512411;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 120 && el_pt<= 9999) {eff = 0.72511; errup = 0.00863914; errdown = 0.00880743;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 120 && el_pt<= 9999) {eff = 0.779679; errup = 0.0137728; errdown = 0.0143942;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 120 && el_pt<= 9999) {eff = 0.815081; errup = 0.0167417; errdown = 0.0179335;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 120 && el_pt<= 9999) {eff = 0.7503; errup = 0.0152772; errdown = 0.0159018;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 120 && el_pt<= 9999) {eff = 0.786571; errup = 0.0205171; errdown = 0.0219715;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 120 && el_pt<= 9999) {eff = 0.85098; errup = 0.0227437; errdown = 0.0257312;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 120 && el_pt<= 9999) {eff = 0.823708; errup = 0.0214542; errdown = 0.0235604;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 120 && el_pt<= 9999) {eff = 0.845771; errup = 0.026042; errdown = 0.0298067;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 120 && el_pt<= 9999) {eff = 0.884058; errup = 0.0277044; errdown = 0.0339808;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 120 && el_pt<= 9999) {eff = 0.878261; errup = 0.0310448; errdown = 0.0385184;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 120 && el_pt<= 9999) {eff = 0.926606; errup = 0.0249976; errdown = 0.0342037;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 120 && el_pt<= 9999) {eff = 0.959184; errup = 0.0194331; errdown = 0.0310967;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 120 && el_pt<= 9999) {eff = 0.962963; errup = 0.0238864; errdown = 0.0467709;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 120 && el_pt<= 9999) {eff = 0.944444; errup = 0.0300835; errdown = 0.0511001;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 120 && el_pt<= 9999) {eff = 0.982456; errup = 0.0145177; errdown = 0.0391869;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0449824;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 120 && el_pt<= 9999) {eff = 0.956522; errup = 0.0280331; errdown = 0.0544852;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 120 && el_pt<= 9999) {eff = 0.945455; errup = 0.0295393; errdown = 0.0502232;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0576587;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 120 && el_pt<= 9999) {eff = 0.980392; errup = 0.0162262; errdown = 0.0436469;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 120 && el_pt<= 9999) {eff = 0.985714; errup = 0.0118208; errdown = 0.0320826;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.102638;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0263287;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 120 && el_pt<= 9999) {eff = 0.991228; errup = 0.00725769; errdown = 0.0198809;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_1mu_trigeff2017("get_1mu_trigeff2017", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.; // Not used, but for reference
  float eff = 1., mu_pt = Higfuncs::lead_signal_lepton_pt.GetScalar(b), met = b.met(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && mu_pt> 20 && mu_pt<= 25) {eff = 0.0740452; errup = 0.00805133; errdown = 0.00735222;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && mu_pt> 20 && mu_pt<= 25) {eff = 0.424552; errup = 0.0149178; errdown = 0.0147854;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && mu_pt> 20 && mu_pt<= 25) {eff = 0.756007; errup = 0.0188783; errdown = 0.0198709;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && mu_pt> 20 && mu_pt<= 25) {eff = 0.0892857; errup = 0.0168202; errdown = 0.0145426;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && mu_pt> 20 && mu_pt<= 25) {eff = 0.433121; errup = 0.0240155; errdown = 0.0237187;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && mu_pt> 20 && mu_pt<= 25) {eff = 0.809339; errup = 0.0251171; errdown = 0.0277093;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && mu_pt> 20 && mu_pt<= 25) {eff = 0.150376; errup = 0.0376133; errdown = 0.0317467;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && mu_pt> 20 && mu_pt<= 25) {eff = 0.416667; errup = 0.0351521; errdown = 0.0343742;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && mu_pt> 20 && mu_pt<= 25) {eff = 0.785276; errup = 0.0332342; errdown = 0.0370534;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && mu_pt> 20 && mu_pt<= 25) {eff = 0.345455; errup = 0.075666; errdown = 0.0693269;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && mu_pt> 20 && mu_pt<= 25) {eff = 0.557522; errup = 0.0503497; errdown = 0.0514578;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && mu_pt> 20 && mu_pt<= 25) {eff = 0.875; errup = 0.0359227; errdown = 0.0457434;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && mu_pt> 20 && mu_pt<= 25) {eff = 0.5; errup = 0.114647; errdown = 0.114647;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && mu_pt> 20 && mu_pt<= 25) {eff = 0.725806; errup = 0.0600884; errdown = 0.0683201;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && mu_pt> 20 && mu_pt<= 25) {eff = 0.887097; errup = 0.0406864; errdown = 0.055509;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && mu_pt> 20 && mu_pt<= 25) {eff = 0.785714; errup = 0.1142; errdown = 0.165474;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && mu_pt> 20 && mu_pt<= 25) {eff = 0.8; errup = 0.0763181; errdown = 0.100306;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.0659133;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && mu_pt> 20 && mu_pt<= 25) {eff = 0.857143; errup = 0.0917089; errdown = 0.158271;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && mu_pt> 20 && mu_pt<= 25) {eff = 0.933333; errup = 0.0429421; errdown = 0.0812434;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && mu_pt> 20 && mu_pt<= 25) {eff = 0.972973; errup = 0.0223689; errdown = 0.0594217;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.184992;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.108691;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.0472931;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && mu_pt> 25 && mu_pt<= 30) {eff = 0.293671; errup = 0.0170983; errdown = 0.016556;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && mu_pt> 25 && mu_pt<= 30) {eff = 0.558824; errup = 0.0196715; errdown = 0.0198511;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && mu_pt> 25 && mu_pt<= 30) {eff = 0.791176; errup = 0.0225767; errdown = 0.0244005;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && mu_pt> 25 && mu_pt<= 30) {eff = 0.389262; errup = 0.0302641; errdown = 0.0294784;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && mu_pt> 25 && mu_pt<= 30) {eff = 0.58651; errup = 0.0278246; errdown = 0.0283589;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && mu_pt> 25 && mu_pt<= 30) {eff = 0.806763; errup = 0.0281991; errdown = 0.0314141;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && mu_pt> 25 && mu_pt<= 30) {eff = 0.460784; errup = 0.0543869; errdown = 0.053547;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && mu_pt> 25 && mu_pt<= 30) {eff = 0.746193; errup = 0.032121; errdown = 0.0348164;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && mu_pt> 25 && mu_pt<= 30) {eff = 0.918519; errup = 0.0236939; errdown = 0.0308342;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && mu_pt> 25 && mu_pt<= 30) {eff = 0.645161; errup = 0.0656115; errdown = 0.070859;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && mu_pt> 25 && mu_pt<= 30) {eff = 0.866667; errup = 0.033881; errdown = 0.0418175;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && mu_pt> 25 && mu_pt<= 30) {eff = 0.828571; errup = 0.0465308; errdown = 0.0573029;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && mu_pt> 25 && mu_pt<= 30) {eff = 0.785714; errup = 0.081517; errdown = 0.105994;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && mu_pt> 25 && mu_pt<= 30) {eff = 0.84375; errup = 0.0466891; errdown = 0.0591468;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.0542609;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && mu_pt> 25 && mu_pt<= 30) {eff = 0.809524; errup = 0.0888157; errdown = 0.125184;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && mu_pt> 25 && mu_pt<= 30) {eff = 0.916667; errup = 0.0450072; errdown = 0.0744674;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.0636358;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && mu_pt> 25 && mu_pt<= 30) {eff = 0.888889; errup = 0.0714316; errdown = 0.128174;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && mu_pt> 25 && mu_pt<= 30) {eff = 0.967742; errup = 0.0267009; errdown = 0.0703044;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && mu_pt> 25 && mu_pt<= 30) {eff = 0.931034; errup = 0.0444185; errdown = 0.0838105;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.168149;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.0802771;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && mu_pt> 25 && mu_pt<= 30) {eff = 0.976744; errup = 0.0192463; errdown = 0.0514534;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && mu_pt> 30 && mu_pt<= 50) {eff = 0.438251; errup = 0.0119031; errdown = 0.0118341;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && mu_pt> 30 && mu_pt<= 50) {eff = 0.701923; errup = 0.0117651; errdown = 0.0120311;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && mu_pt> 30 && mu_pt<= 50) {eff = 0.880519; errup = 0.0118155; errdown = 0.0128579;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && mu_pt> 30 && mu_pt<= 50) {eff = 0.579976; errup = 0.0177448; errdown = 0.0179469;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && mu_pt> 30 && mu_pt<= 50) {eff = 0.779888; errup = 0.0140768; errdown = 0.014727;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && mu_pt> 30 && mu_pt<= 50) {eff = 0.887379; errup = 0.0140955; errdown = 0.0157029;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && mu_pt> 30 && mu_pt<= 50) {eff = 0.680101; errup = 0.0241622; errdown = 0.0251168;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && mu_pt> 30 && mu_pt<= 50) {eff = 0.822785; errup = 0.0165172; errdown = 0.0177482;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && mu_pt> 30 && mu_pt<= 50) {eff = 0.907514; errup = 0.0157376; errdown = 0.0183073;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && mu_pt> 30 && mu_pt<= 50) {eff = 0.794872; errup = 0.033377; errdown = 0.0375152;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && mu_pt> 30 && mu_pt<= 50) {eff = 0.88172; errup = 0.0196248; errdown = 0.0226082;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && mu_pt> 30 && mu_pt<= 50) {eff = 0.933649; errup = 0.0171994; errdown = 0.0218641;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && mu_pt> 30 && mu_pt<= 50) {eff = 0.925532; errup = 0.0270554; errdown = 0.0378062;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && mu_pt> 30 && mu_pt<= 50) {eff = 0.940789; errup = 0.0191044; errdown = 0.0258704;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && mu_pt> 30 && mu_pt<= 50) {eff = 0.963768; errup = 0.0155622; errdown = 0.0237669;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && mu_pt> 30 && mu_pt<= 50) {eff = 0.983333; errup = 0.0137916; errdown = 0.0372819;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && mu_pt> 30 && mu_pt<= 50) {eff = 0.990196; errup = 0.00811169; errdown = 0.0221818;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && mu_pt> 30 && mu_pt<= 50) {eff = 0.990654; errup = 0.00773258; errdown = 0.0211614;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && mu_pt> 30 && mu_pt<= 50) {eff = 1; errup = 0; errdown = 0.0384134;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && mu_pt> 30 && mu_pt<= 50) {eff = 0.980583; errup = 0.0125321; errdown = 0.0250365;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && mu_pt> 30 && mu_pt<= 50) {eff = 1; errup = 0; errdown = 0.0167483;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && mu_pt> 30 && mu_pt<= 50) {eff = 1; errup = 0; errdown = 0.0461088;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && mu_pt> 30 && mu_pt<= 50) {eff = 1; errup = 0; errdown = 0.02275;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && mu_pt> 30 && mu_pt<= 50) {eff = 0.992958; errup = 0.00582642; errdown = 0.0160065;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.897746; errup = 0.00715191; errdown = 0.00760602;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.927841; errup = 0.00603427; errdown = 0.00651559;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.922031; errup = 0.00812455; errdown = 0.00893237;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.931965; errup = 0.0083218; errdown = 0.00931507;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.934893; errup = 0.00791056; errdown = 0.00885208;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.938931; errup = 0.009403; errdown = 0.0108514;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.935484; errup = 0.0110916; errdown = 0.0130059;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.948052; errup = 0.00897137; errdown = 0.0105567;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.961759; errup = 0.00837985; errdown = 0.0103449;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.951493; errup = 0.0131074; errdown = 0.0169468;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.98481; errup = 0.00600904; errdown = 0.00896244;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.968927; errup = 0.00915408; errdown = 0.0122037;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.987097; errup = 0.00832996; errdown = 0.0167647;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.983673; errup = 0.00779764; errdown = 0.0127207;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.963964; errup = 0.0123751; errdown = 0.017292;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.961538; errup = 0.0183176; errdown = 0.0293664;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.987013; errup = 0.00838402; errdown = 0.0168719;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.988439; errup = 0.00746367; errdown = 0.015044;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.986111; errup = 0.0114924; errdown = 0.031212;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0119607;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.993902; errup = 0.00504474; errdown = 0.013881;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0376284;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0117321;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.00594029;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_2el_trigeff2017("get_2el_trigeff2017", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.; // Not used, but for reference
  float eff = 1., el_pt = Higfuncs::lead_signal_lepton_pt.GetScalar(b);
  errup+=errdown; //suppress unused warning
  if (el_pt> 40 && el_pt<= 45) {eff = 0.88024; errup = 0.0255535; errdown = 0.0306305;}
  else if (el_pt> 45 && el_pt<= 50) {eff = 0.954357; errup = 0.0133967; errdown = 0.0177375;}
  else if (el_pt> 50 && el_pt<= 55) {eff = 0.935252; errup = 0.0148258; errdown = 0.018331;}
  else if (el_pt> 55 && el_pt<= 60) {eff = 0.931408; errup = 0.0152711; errdown = 0.0187485;}
  else if (el_pt> 60 && el_pt<= 65) {eff = 0.92236; errup = 0.0150299; errdown = 0.017921;}
  else if (el_pt> 65 && el_pt<= 70) {eff = 0.934866; errup = 0.0153415; errdown = 0.0190829;}
  else if (el_pt> 70 && el_pt<= 75) {eff = 0.951049; errup = 0.012752; errdown = 0.0163306;}
  else if (el_pt> 75 && el_pt<= 80) {eff = 0.951311; errup = 0.0131559; errdown = 0.017008;}
  else if (el_pt> 80 && el_pt<= 85) {eff = 0.941441; errup = 0.0157797; errdown = 0.0203119;}
  else if (el_pt> 85 && el_pt<= 90) {eff = 0.951456; errup = 0.0149164; errdown = 0.0199936;}
  else if (el_pt> 90 && el_pt<= 95) {eff = 0.957219; errup = 0.0146698; errdown = 0.0204219;}
  else if (el_pt> 95 && el_pt<= 100) {eff = 0.948276; errup = 0.0167182; errdown = 0.0227292;}
  else if (el_pt> 100 && el_pt<= 105) {eff = 0.984772; errup = 0.00827663; errdown = 0.0145911;}
  else if (el_pt> 105 && el_pt<= 110) {eff = 0.947059; errup = 0.0171067; errdown = 0.0232424;}
  else if (el_pt> 110 && el_pt<= 9999) {eff = 0.96679; errup = 0.0107803; errdown = 0.0147992;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_2mu_trigeff2017("get_2mu_trigeff2017", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.; // Not used, but for reference
  float eff = 1., mu_pt = Higfuncs::lead_signal_lepton_pt.GetScalar(b);
  errup+=errdown; //suppress unused warning
  if (mu_pt> 40 && mu_pt<= 45) {eff = 0.958015; errup = 0.0123344; errdown = 0.0163593;}
  else if (mu_pt> 45 && mu_pt<= 50) {eff = 0.965812; errup = 0.00837454; errdown = 0.0106157;}
  else if (mu_pt> 50 && mu_pt<= 9999) {eff = 0.980937; errup = 0.00384039; errdown = 0.00468287;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

}
