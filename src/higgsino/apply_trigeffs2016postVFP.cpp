#include <vector>
#include "core/baby.hpp"
#include "core/process.hpp"
#include "core/named_func.hpp"
#include "higgsino/hig_functions.hpp"
#include "higgsino/hig_utilities.hpp"
#include "higgsino/apply_trigeffs2016postVFP.hpp"

namespace Higfuncs{

const NamedFunc get_0l_trigeff2016postVFP("get_0l_trigeff2016postVFP", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.;
  float eff = 1., met = b.met(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 200 && met> 150 && met<= 155) {eff = 0.527919; errup = 0.143584; errdown = 0.143665;}
  else if (ht> 0 && ht<= 200 && met> 155 && met<= 160) {eff = 0.544828; errup = 0.14965; errdown = 0.149849;}
  else if (ht> 0 && ht<= 200 && met> 160 && met<= 165) {eff = 0.638095; errup = 0.16728; errdown = 0.168163;}
  else if (ht> 0 && ht<= 200 && met> 165 && met<= 170) {eff = 0.674419; errup = 0.177091; errdown = 0.178505;}
  else if (ht> 0 && ht<= 200 && met> 170 && met<= 180) {eff = 0.618644; errup = 0.161944; errdown = 0.162601;}
  else if (ht> 0 && ht<= 200 && met> 180 && met<= 190) {eff = 0.850575; errup = 0.108919; errdown = 0.112559;}
  else if (ht> 0 && ht<= 200 && met> 190 && met<= 200) {eff = 0.891304; errup = 0.108696; errdown = 0.125723;}
  else if (ht> 0 && ht<= 200 && met> 200 && met<= 9999) {eff = 0.933333; errup = 0.0646027; errdown = 0.0809186;}
  else if (ht> 200 && ht<= 300 && met> 150 && met<= 155) {eff = 0.639205; errup = 0.169793; errdown = 0.169925;}
  else if (ht> 200 && ht<= 300 && met> 155 && met<= 160) {eff = 0.67341; errup = 0.178593; errdown = 0.17875;}
  else if (ht> 200 && ht<= 300 && met> 160 && met<= 165) {eff = 0.787975; errup = 0.198548; errdown = 0.198788;}
  else if (ht> 200 && ht<= 300 && met> 165 && met<= 170) {eff = 0.779553; errup = 0.196513; errdown = 0.196755;}
  else if (ht> 200 && ht<= 300 && met> 170 && met<= 175) {eff = 0.84466; errup = 0.15534; errdown = 0.213368;}
  else if (ht> 200 && ht<= 300 && met> 175 && met<= 180) {eff = 0.90625; errup = 0.09375; errdown = 0.227972;}
  else if (ht> 200 && ht<= 300 && met> 180 && met<= 185) {eff = 0.907514; errup = 0.0924855; errdown = 0.111868;}
  else if (ht> 200 && ht<= 300 && met> 185 && met<= 190) {eff = 0.906475; errup = 0.0935252; errdown = 0.112815;}
  else if (ht> 200 && ht<= 300 && met> 190 && met<= 195) {eff = 0.911765; errup = 0.0882353; errdown = 0.113379;}
  else if (ht> 200 && ht<= 300 && met> 195 && met<= 200) {eff = 0.918182; errup = 0.0818182; errdown = 0.115178;}
  else if (ht> 200 && ht<= 300 && met> 200 && met<= 210) {eff = 0.947917; errup = 0.0520833; errdown = 0.0584912;}
  else if (ht> 200 && ht<= 300 && met> 210 && met<= 220) {eff = 0.969466; errup = 0.0305344; errdown = 0.0604257;}
  else if (ht> 200 && ht<= 300 && met> 220 && met<= 230) {eff = 0.981818; errup = 0.0181818; errdown = 0.0610772;}
  else if (ht> 200 && ht<= 300 && met> 230 && met<= 240) {eff = 1; errup = 0; errdown = 0.0744248;}
  else if (ht> 200 && ht<= 300 && met> 240 && met<= 250) {eff = 1; errup = 0; errdown = 0.0767662;}
  else if (ht> 200 && ht<= 300 && met> 250 && met<= 275) {eff = 1; errup = 0; errdown = 0.0377844;}
  else if (ht> 200 && ht<= 300 && met> 275 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0518995;}
  else if (ht> 300 && ht<= 400 && met> 150 && met<= 155) {eff = 0.677193; errup = 0.167406; errdown = 0.167637;}
  else if (ht> 300 && ht<= 400 && met> 155 && met<= 160) {eff = 0.705179; errup = 0.174309; errdown = 0.174616;}
  else if (ht> 300 && ht<= 400 && met> 160 && met<= 165) {eff = 0.755365; errup = 0.149764; errdown = 0.150239;}
  else if (ht> 300 && ht<= 400 && met> 165 && met<= 170) {eff = 0.821101; errup = 0.161902; errdown = 0.162458;}
  else if (ht> 300 && ht<= 400 && met> 170 && met<= 175) {eff = 0.835165; errup = 0.164835; errdown = 0.1656;}
  else if (ht> 300 && ht<= 400 && met> 175 && met<= 180) {eff = 0.908629; errup = 0.0913706; errdown = 0.178539;}
  else if (ht> 300 && ht<= 400 && met> 180 && met<= 185) {eff = 0.916129; errup = 0.077263; errdown = 0.0792577;}
  else if (ht> 300 && ht<= 400 && met> 185 && met<= 190) {eff = 0.946667; errup = 0.0533333; errdown = 0.0804617;}
  else if (ht> 300 && ht<= 400 && met> 190 && met<= 195) {eff = 0.954198; errup = 0.0458015; errdown = 0.0813898;}
  else if (ht> 300 && ht<= 400 && met> 195 && met<= 200) {eff = 0.944954; errup = 0.0550459; errdown = 0.0824822;}
  else if (ht> 300 && ht<= 400 && met> 200 && met<= 210) {eff = 0.982063; errup = 0.0179372; errdown = 0.0370783;}
  else if (ht> 300 && ht<= 400 && met> 210 && met<= 220) {eff = 0.969231; errup = 0.0307692; errdown = 0.0383504;}
  else if (ht> 300 && ht<= 400 && met> 220 && met<= 230) {eff = 1; errup = 0; errdown = 0.0365459;}
  else if (ht> 300 && ht<= 400 && met> 230 && met<= 240) {eff = 1; errup = 0; errdown = 0.070079;}
  else if (ht> 300 && ht<= 400 && met> 240 && met<= 250) {eff = 1; errup = 0; errdown = 0.0700269;}
  else if (ht> 300 && ht<= 400 && met> 250 && met<= 275) {eff = 0.994764; errup = 0.0052356; errdown = 0.0175857;}
  else if (ht> 300 && ht<= 400 && met> 275 && met<= 300) {eff = 1; errup = 0; errdown = 0.0192996;}
  else if (ht> 300 && ht<= 400 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0236258;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 155) {eff = 0.659091; errup = 0.113368; errdown = 0.113592;}
  else if (ht> 400 && ht<= 600 && met> 155 && met<= 160) {eff = 0.67658; errup = 0.117044; errdown = 0.117405;}
  else if (ht> 400 && ht<= 600 && met> 160 && met<= 165) {eff = 0.746094; errup = 0.128119; errdown = 0.128585;}
  else if (ht> 400 && ht<= 600 && met> 165 && met<= 170) {eff = 0.825328; errup = 0.140646; errdown = 0.141241;}
  else if (ht> 400 && ht<= 600 && met> 170 && met<= 175) {eff = 0.880658; errup = 0.119342; errdown = 0.149579;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 180) {eff = 0.892857; errup = 0.107143; errdown = 0.151986;}
  else if (ht> 400 && ht<= 600 && met> 180 && met<= 185) {eff = 0.887006; errup = 0.0633039; errdown = 0.0653203;}
  else if (ht> 400 && ht<= 600 && met> 185 && met<= 190) {eff = 0.918367; errup = 0.0637062; errdown = 0.0653552;}
  else if (ht> 400 && ht<= 600 && met> 190 && met<= 195) {eff = 0.933775; errup = 0.0648417; errdown = 0.0672194;}
  else if (ht> 400 && ht<= 600 && met> 195 && met<= 200) {eff = 0.932432; errup = 0.0648851; errdown = 0.0673475;}
  else if (ht> 400 && ht<= 600 && met> 200 && met<= 210) {eff = 0.984906; errup = 0.0150943; errdown = 0.0361254;}
  else if (ht> 400 && ht<= 600 && met> 210 && met<= 220) {eff = 0.96789; errup = 0.0321101; errdown = 0.0375629;}
  else if (ht> 400 && ht<= 600 && met> 220 && met<= 230) {eff = 0.989247; errup = 0.0107527; errdown = 0.0370525;}
  else if (ht> 400 && ht<= 600 && met> 230 && met<= 240) {eff = 0.99422; errup = 0.00578035; errdown = 0.0694649;}
  else if (ht> 400 && ht<= 600 && met> 240 && met<= 250) {eff = 1; errup = 0; errdown = 0.0697848;}
  else if (ht> 400 && ht<= 600 && met> 250 && met<= 275) {eff = 0.996633; errup = 0.003367; errdown = 0.0135314;}
  else if (ht> 400 && ht<= 600 && met> 275 && met<= 300) {eff = 1; errup = 0; errdown = 0.0143306;}
  else if (ht> 400 && ht<= 600 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.00705671;}
  else if (ht> 600 && ht<= 950 && met> 150 && met<= 155) {eff = 0.726562; errup = 0.100809; errdown = 0.102452;}
  else if (ht> 600 && ht<= 950 && met> 155 && met<= 160) {eff = 0.681416; errup = 0.0979144; errdown = 0.099624;}
  else if (ht> 600 && ht<= 950 && met> 160 && met<= 165) {eff = 0.705882; errup = 0.146649; errdown = 0.149501;}
  else if (ht> 600 && ht<= 950 && met> 165 && met<= 170) {eff = 0.808824; errup = 0.161732; errdown = 0.165207;}
  else if (ht> 600 && ht<= 950 && met> 170 && met<= 175) {eff = 0.72973; errup = 0.149224; errdown = 0.151905;}
  else if (ht> 600 && ht<= 950 && met> 175 && met<= 180) {eff = 0.783333; errup = 0.159162; errdown = 0.163254;}
  else if (ht> 600 && ht<= 950 && met> 180 && met<= 185) {eff = 1; errup = 0; errdown = 0.0961367;}
  else if (ht> 600 && ht<= 950 && met> 185 && met<= 190) {eff = 0.893939; errup = 0.0881151; errdown = 0.0951311;}
  else if (ht> 600 && ht<= 950 && met> 190 && met<= 195) {eff = 0.904762; errup = 0.0920823; errdown = 0.105842;}
  else if (ht> 600 && ht<= 950 && met> 195 && met<= 200) {eff = 0.921053; errup = 0.0789474; errdown = 0.108213;}
  else if (ht> 600 && ht<= 950 && met> 200 && met<= 210) {eff = 0.976744; errup = 0.0232558; errdown = 0.0442222;}
  else if (ht> 600 && ht<= 950 && met> 210 && met<= 220) {eff = 0.956522; errup = 0.0397047; errdown = 0.0515779;}
  else if (ht> 600 && ht<= 950 && met> 220 && met<= 230) {eff = 0.984127; errup = 0.015873; errdown = 0.0484226;}
  else if (ht> 600 && ht<= 950 && met> 230 && met<= 240) {eff = 0.980392; errup = 0.0196078; errdown = 0.0804603;}
  else if (ht> 600 && ht<= 950 && met> 240 && met<= 250) {eff = 0.981481; errup = 0.0185185; errdown = 0.0792742;}
  else if (ht> 600 && ht<= 950 && met> 250 && met<= 275) {eff = 0.990385; errup = 0.00961538; errdown = 0.0245281;}
  else if (ht> 600 && ht<= 950 && met> 275 && met<= 300) {eff = 1; errup = 0; errdown = 0.0249688;}
  else if (ht> 600 && ht<= 950 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0182632;}
  else if (ht> 950 && ht<= 9999 && met> 150 && met<= 160) {eff = 0.541667; errup = 0.290301; errdown = 0.29085;}
  else if (ht> 950 && ht<= 9999 && met> 160 && met<= 170) {eff = 0.681818; errup = 0.150139; errdown = 0.164985;}
  else if (ht> 950 && ht<= 9999 && met> 170 && met<= 180) {eff = 0.592593; errup = 0.139347; errdown = 0.145558;}
  else if (ht> 950 && ht<= 9999 && met> 180 && met<= 190) {eff = 0.894737; errup = 0.105263; errdown = 0.15881;}
  else if (ht> 950 && ht<= 9999 && met> 190 && met<= 200) {eff = 0.884615; errup = 0.115385; errdown = 0.141267;}
  else if (ht> 950 && ht<= 9999 && met> 200 && met<= 210) {eff = 0.875; errup = 0.0869096; errdown = 0.14553;}
  else if (ht> 950 && ht<= 9999 && met> 210 && met<= 220) {eff = 0.952381; errup = 0.047619; errdown = 0.107403;}
  else if (ht> 950 && ht<= 9999 && met> 220 && met<= 230) {eff = 1; errup = 0; errdown = 0.109434;}
  else if (ht> 950 && ht<= 9999 && met> 230 && met<= 240) {eff = 0.875; errup = 0.125; errdown = 0.243982;}
  else if (ht> 950 && ht<= 9999 && met> 240 && met<= 250) {eff = 1; errup = 0; errdown = 0.203763;}
  else if (ht> 950 && ht<= 9999 && met> 250 && met<= 275) {eff = 1; errup = 0; errdown = 0.142465;}
  else if (ht> 950 && ht<= 9999 && met> 275 && met<= 300) {eff = 1; errup = 0; errdown = 0.0843342;}
  else if (ht> 950 && ht<= 9999 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0879414;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_0l_trigeff2016postVFP_mettru("get_0l_trigeff2016postVFP_mettru", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.;
  float eff = 1., met = b.met_tru(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 200 && met> 150 && met<= 155) {eff = 0.527919; errup = 0.143584; errdown = 0.143665;}
  else if (ht> 0 && ht<= 200 && met> 155 && met<= 160) {eff = 0.544828; errup = 0.14965; errdown = 0.149849;}
  else if (ht> 0 && ht<= 200 && met> 160 && met<= 165) {eff = 0.638095; errup = 0.16728; errdown = 0.168163;}
  else if (ht> 0 && ht<= 200 && met> 165 && met<= 170) {eff = 0.674419; errup = 0.177091; errdown = 0.178505;}
  else if (ht> 0 && ht<= 200 && met> 170 && met<= 180) {eff = 0.618644; errup = 0.161944; errdown = 0.162601;}
  else if (ht> 0 && ht<= 200 && met> 180 && met<= 190) {eff = 0.850575; errup = 0.108919; errdown = 0.112559;}
  else if (ht> 0 && ht<= 200 && met> 190 && met<= 200) {eff = 0.891304; errup = 0.108696; errdown = 0.125723;}
  else if (ht> 0 && ht<= 200 && met> 200 && met<= 9999) {eff = 0.933333; errup = 0.0646027; errdown = 0.0809186;}
  else if (ht> 200 && ht<= 300 && met> 150 && met<= 155) {eff = 0.639205; errup = 0.169793; errdown = 0.169925;}
  else if (ht> 200 && ht<= 300 && met> 155 && met<= 160) {eff = 0.67341; errup = 0.178593; errdown = 0.17875;}
  else if (ht> 200 && ht<= 300 && met> 160 && met<= 165) {eff = 0.787975; errup = 0.198548; errdown = 0.198788;}
  else if (ht> 200 && ht<= 300 && met> 165 && met<= 170) {eff = 0.779553; errup = 0.196513; errdown = 0.196755;}
  else if (ht> 200 && ht<= 300 && met> 170 && met<= 175) {eff = 0.84466; errup = 0.15534; errdown = 0.213368;}
  else if (ht> 200 && ht<= 300 && met> 175 && met<= 180) {eff = 0.90625; errup = 0.09375; errdown = 0.227972;}
  else if (ht> 200 && ht<= 300 && met> 180 && met<= 185) {eff = 0.907514; errup = 0.0924855; errdown = 0.111868;}
  else if (ht> 200 && ht<= 300 && met> 185 && met<= 190) {eff = 0.906475; errup = 0.0935252; errdown = 0.112815;}
  else if (ht> 200 && ht<= 300 && met> 190 && met<= 195) {eff = 0.911765; errup = 0.0882353; errdown = 0.113379;}
  else if (ht> 200 && ht<= 300 && met> 195 && met<= 200) {eff = 0.918182; errup = 0.0818182; errdown = 0.115178;}
  else if (ht> 200 && ht<= 300 && met> 200 && met<= 210) {eff = 0.947917; errup = 0.0520833; errdown = 0.0584912;}
  else if (ht> 200 && ht<= 300 && met> 210 && met<= 220) {eff = 0.969466; errup = 0.0305344; errdown = 0.0604257;}
  else if (ht> 200 && ht<= 300 && met> 220 && met<= 230) {eff = 0.981818; errup = 0.0181818; errdown = 0.0610772;}
  else if (ht> 200 && ht<= 300 && met> 230 && met<= 240) {eff = 1; errup = 0; errdown = 0.0744248;}
  else if (ht> 200 && ht<= 300 && met> 240 && met<= 250) {eff = 1; errup = 0; errdown = 0.0767662;}
  else if (ht> 200 && ht<= 300 && met> 250 && met<= 275) {eff = 1; errup = 0; errdown = 0.0377844;}
  else if (ht> 200 && ht<= 300 && met> 275 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0518995;}
  else if (ht> 300 && ht<= 400 && met> 150 && met<= 155) {eff = 0.677193; errup = 0.167406; errdown = 0.167637;}
  else if (ht> 300 && ht<= 400 && met> 155 && met<= 160) {eff = 0.705179; errup = 0.174309; errdown = 0.174616;}
  else if (ht> 300 && ht<= 400 && met> 160 && met<= 165) {eff = 0.755365; errup = 0.149764; errdown = 0.150239;}
  else if (ht> 300 && ht<= 400 && met> 165 && met<= 170) {eff = 0.821101; errup = 0.161902; errdown = 0.162458;}
  else if (ht> 300 && ht<= 400 && met> 170 && met<= 175) {eff = 0.835165; errup = 0.164835; errdown = 0.1656;}
  else if (ht> 300 && ht<= 400 && met> 175 && met<= 180) {eff = 0.908629; errup = 0.0913706; errdown = 0.178539;}
  else if (ht> 300 && ht<= 400 && met> 180 && met<= 185) {eff = 0.916129; errup = 0.077263; errdown = 0.0792577;}
  else if (ht> 300 && ht<= 400 && met> 185 && met<= 190) {eff = 0.946667; errup = 0.0533333; errdown = 0.0804617;}
  else if (ht> 300 && ht<= 400 && met> 190 && met<= 195) {eff = 0.954198; errup = 0.0458015; errdown = 0.0813898;}
  else if (ht> 300 && ht<= 400 && met> 195 && met<= 200) {eff = 0.944954; errup = 0.0550459; errdown = 0.0824822;}
  else if (ht> 300 && ht<= 400 && met> 200 && met<= 210) {eff = 0.982063; errup = 0.0179372; errdown = 0.0370783;}
  else if (ht> 300 && ht<= 400 && met> 210 && met<= 220) {eff = 0.969231; errup = 0.0307692; errdown = 0.0383504;}
  else if (ht> 300 && ht<= 400 && met> 220 && met<= 230) {eff = 1; errup = 0; errdown = 0.0365459;}
  else if (ht> 300 && ht<= 400 && met> 230 && met<= 240) {eff = 1; errup = 0; errdown = 0.070079;}
  else if (ht> 300 && ht<= 400 && met> 240 && met<= 250) {eff = 1; errup = 0; errdown = 0.0700269;}
  else if (ht> 300 && ht<= 400 && met> 250 && met<= 275) {eff = 0.994764; errup = 0.0052356; errdown = 0.0175857;}
  else if (ht> 300 && ht<= 400 && met> 275 && met<= 300) {eff = 1; errup = 0; errdown = 0.0192996;}
  else if (ht> 300 && ht<= 400 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0236258;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 155) {eff = 0.659091; errup = 0.113368; errdown = 0.113592;}
  else if (ht> 400 && ht<= 600 && met> 155 && met<= 160) {eff = 0.67658; errup = 0.117044; errdown = 0.117405;}
  else if (ht> 400 && ht<= 600 && met> 160 && met<= 165) {eff = 0.746094; errup = 0.128119; errdown = 0.128585;}
  else if (ht> 400 && ht<= 600 && met> 165 && met<= 170) {eff = 0.825328; errup = 0.140646; errdown = 0.141241;}
  else if (ht> 400 && ht<= 600 && met> 170 && met<= 175) {eff = 0.880658; errup = 0.119342; errdown = 0.149579;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 180) {eff = 0.892857; errup = 0.107143; errdown = 0.151986;}
  else if (ht> 400 && ht<= 600 && met> 180 && met<= 185) {eff = 0.887006; errup = 0.0633039; errdown = 0.0653203;}
  else if (ht> 400 && ht<= 600 && met> 185 && met<= 190) {eff = 0.918367; errup = 0.0637062; errdown = 0.0653552;}
  else if (ht> 400 && ht<= 600 && met> 190 && met<= 195) {eff = 0.933775; errup = 0.0648417; errdown = 0.0672194;}
  else if (ht> 400 && ht<= 600 && met> 195 && met<= 200) {eff = 0.932432; errup = 0.0648851; errdown = 0.0673475;}
  else if (ht> 400 && ht<= 600 && met> 200 && met<= 210) {eff = 0.984906; errup = 0.0150943; errdown = 0.0361254;}
  else if (ht> 400 && ht<= 600 && met> 210 && met<= 220) {eff = 0.96789; errup = 0.0321101; errdown = 0.0375629;}
  else if (ht> 400 && ht<= 600 && met> 220 && met<= 230) {eff = 0.989247; errup = 0.0107527; errdown = 0.0370525;}
  else if (ht> 400 && ht<= 600 && met> 230 && met<= 240) {eff = 0.99422; errup = 0.00578035; errdown = 0.0694649;}
  else if (ht> 400 && ht<= 600 && met> 240 && met<= 250) {eff = 1; errup = 0; errdown = 0.0697848;}
  else if (ht> 400 && ht<= 600 && met> 250 && met<= 275) {eff = 0.996633; errup = 0.003367; errdown = 0.0135314;}
  else if (ht> 400 && ht<= 600 && met> 275 && met<= 300) {eff = 1; errup = 0; errdown = 0.0143306;}
  else if (ht> 400 && ht<= 600 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.00705671;}
  else if (ht> 600 && ht<= 950 && met> 150 && met<= 155) {eff = 0.726562; errup = 0.100809; errdown = 0.102452;}
  else if (ht> 600 && ht<= 950 && met> 155 && met<= 160) {eff = 0.681416; errup = 0.0979144; errdown = 0.099624;}
  else if (ht> 600 && ht<= 950 && met> 160 && met<= 165) {eff = 0.705882; errup = 0.146649; errdown = 0.149501;}
  else if (ht> 600 && ht<= 950 && met> 165 && met<= 170) {eff = 0.808824; errup = 0.161732; errdown = 0.165207;}
  else if (ht> 600 && ht<= 950 && met> 170 && met<= 175) {eff = 0.72973; errup = 0.149224; errdown = 0.151905;}
  else if (ht> 600 && ht<= 950 && met> 175 && met<= 180) {eff = 0.783333; errup = 0.159162; errdown = 0.163254;}
  else if (ht> 600 && ht<= 950 && met> 180 && met<= 185) {eff = 1; errup = 0; errdown = 0.0961367;}
  else if (ht> 600 && ht<= 950 && met> 185 && met<= 190) {eff = 0.893939; errup = 0.0881151; errdown = 0.0951311;}
  else if (ht> 600 && ht<= 950 && met> 190 && met<= 195) {eff = 0.904762; errup = 0.0920823; errdown = 0.105842;}
  else if (ht> 600 && ht<= 950 && met> 195 && met<= 200) {eff = 0.921053; errup = 0.0789474; errdown = 0.108213;}
  else if (ht> 600 && ht<= 950 && met> 200 && met<= 210) {eff = 0.976744; errup = 0.0232558; errdown = 0.0442222;}
  else if (ht> 600 && ht<= 950 && met> 210 && met<= 220) {eff = 0.956522; errup = 0.0397047; errdown = 0.0515779;}
  else if (ht> 600 && ht<= 950 && met> 220 && met<= 230) {eff = 0.984127; errup = 0.015873; errdown = 0.0484226;}
  else if (ht> 600 && ht<= 950 && met> 230 && met<= 240) {eff = 0.980392; errup = 0.0196078; errdown = 0.0804603;}
  else if (ht> 600 && ht<= 950 && met> 240 && met<= 250) {eff = 0.981481; errup = 0.0185185; errdown = 0.0792742;}
  else if (ht> 600 && ht<= 950 && met> 250 && met<= 275) {eff = 0.990385; errup = 0.00961538; errdown = 0.0245281;}
  else if (ht> 600 && ht<= 950 && met> 275 && met<= 300) {eff = 1; errup = 0; errdown = 0.0249688;}
  else if (ht> 600 && ht<= 950 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0182632;}
  else if (ht> 950 && ht<= 9999 && met> 150 && met<= 160) {eff = 0.541667; errup = 0.290301; errdown = 0.29085;}
  else if (ht> 950 && ht<= 9999 && met> 160 && met<= 170) {eff = 0.681818; errup = 0.150139; errdown = 0.164985;}
  else if (ht> 950 && ht<= 9999 && met> 170 && met<= 180) {eff = 0.592593; errup = 0.139347; errdown = 0.145558;}
  else if (ht> 950 && ht<= 9999 && met> 180 && met<= 190) {eff = 0.894737; errup = 0.105263; errdown = 0.15881;}
  else if (ht> 950 && ht<= 9999 && met> 190 && met<= 200) {eff = 0.884615; errup = 0.115385; errdown = 0.141267;}
  else if (ht> 950 && ht<= 9999 && met> 200 && met<= 210) {eff = 0.875; errup = 0.0869096; errdown = 0.14553;}
  else if (ht> 950 && ht<= 9999 && met> 210 && met<= 220) {eff = 0.952381; errup = 0.047619; errdown = 0.107403;}
  else if (ht> 950 && ht<= 9999 && met> 220 && met<= 230) {eff = 1; errup = 0; errdown = 0.109434;}
  else if (ht> 950 && ht<= 9999 && met> 230 && met<= 240) {eff = 0.875; errup = 0.125; errdown = 0.243982;}
  else if (ht> 950 && ht<= 9999 && met> 240 && met<= 250) {eff = 1; errup = 0; errdown = 0.203763;}
  else if (ht> 950 && ht<= 9999 && met> 250 && met<= 275) {eff = 1; errup = 0; errdown = 0.142465;}
  else if (ht> 950 && ht<= 9999 && met> 275 && met<= 300) {eff = 1; errup = 0; errdown = 0.0843342;}
  else if (ht> 950 && ht<= 9999 && met> 300 && met<= 9999) {eff = 1; errup = 0; errdown = 0.0879414;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_0l_fakemet_trigeff2016postVFP("get_0l_fakemet_trigeff2016postVFP", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.;
  float eff = 1., met = b.met(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 350 && met> 150 && met<= 160) {eff = 0.189655; errup = 0.0344748; errdown = 0.0305769;}
  else if (ht> 0 && ht<= 350 && met> 160 && met<= 170) {eff = 0.259259; errup = 0.0578662; errdown = 0.0512228;}
  else if (ht> 0 && ht<= 350 && met> 170 && met<= 180) {eff = 0.377358; errup = 0.0778401; errdown = 0.0726227;}
  else if (ht> 0 && ht<= 350 && met> 180 && met<= 190) {eff = 0.259259; errup = 0.111462; errdown = 0.0902739;}
  else if (ht> 0 && ht<= 350 && met> 190 && met<= 200) {eff = 0.6875; errup = 0.127615; errdown = 0.156063;}
  else if (ht> 0 && ht<= 350 && met> 200 && met<= 225) {eff = 0.423077; errup = 0.116981; errdown = 0.110076;}
  else if (ht> 0 && ht<= 350 && met> 225 && met<= 250) {eff = 0.5; errup = 0.314699; errdown = 0.314699;}
  else if (ht> 0 && ht<= 350 && met> 250 && met<= 9999) {eff = 0.75; errup = 0.132707; errdown = 0.1849;}
  else if (ht> 350 && ht<= 450 && met> 150 && met<= 155) {eff = 0.252427; errup = 0.033918; errdown = 0.0313296;}
  else if (ht> 350 && ht<= 450 && met> 155 && met<= 160) {eff = 0.226667; errup = 0.0394045; errdown = 0.0354217;}
  else if (ht> 350 && ht<= 450 && met> 160 && met<= 165) {eff = 0.333333; errup = 0.0419701; errdown = 0.0396614;}
  else if (ht> 350 && ht<= 450 && met> 165 && met<= 170) {eff = 0.401709; errup = 0.050285; errdown = 0.0484565;}
  else if (ht> 350 && ht<= 450 && met> 170 && met<= 175) {eff = 0.387387; errup = 0.0516075; errdown = 0.0493938;}
  else if (ht> 350 && ht<= 450 && met> 175 && met<= 180) {eff = 0.421687; errup = 0.0608737; errdown = 0.0587935;}
  else if (ht> 350 && ht<= 450 && met> 180 && met<= 185) {eff = 0.526316; errup = 0.0736536; errdown = 0.0746873;}
  else if (ht> 350 && ht<= 450 && met> 185 && met<= 190) {eff = 0.628571; errup = 0.0901926; errdown = 0.0986578;}
  else if (ht> 350 && ht<= 450 && met> 190 && met<= 195) {eff = 0.545455; errup = 0.0984686; errdown = 0.101639;}
  else if (ht> 350 && ht<= 450 && met> 195 && met<= 200) {eff = 0.571429; errup = 0.106113; errdown = 0.112042;}
  else if (ht> 350 && ht<= 450 && met> 200 && met<= 210) {eff = 0.528302; errup = 0.0765768; errdown = 0.0777765;}
  else if (ht> 350 && ht<= 450 && met> 210 && met<= 220) {eff = 0.793103; errup = 0.0788325; errdown = 0.103077;}
  else if (ht> 350 && ht<= 450 && met> 220 && met<= 230) {eff = 0.724138; errup = 0.089299; errdown = 0.107524;}
  else if (ht> 350 && ht<= 450 && met> 230 && met<= 240) {eff = 0.722222; errup = 0.114258; errdown = 0.144222;}
  else if (ht> 350 && ht<= 450 && met> 240 && met<= 250) {eff = 0.777778; errup = 0.103117; errdown = 0.141145;}
  else if (ht> 350 && ht<= 450 && met> 250 && met<= 300) {eff = 0.744681; errup = 0.0674757; errdown = 0.0794545;}
  else if (ht> 350 && ht<= 450 && met> 300 && met<= 9999) {eff = 0.818182; errup = 0.0848885; errdown = 0.120589;}
  else if (ht> 450 && ht<= 550 && met> 150 && met<= 155) {eff = 0.318841; errup = 0.0245438; errdown = 0.0236239;}
  else if (ht> 450 && ht<= 550 && met> 155 && met<= 160) {eff = 0.32133; errup = 0.0264506; errdown = 0.0254068;}
  else if (ht> 450 && ht<= 550 && met> 160 && met<= 165) {eff = 0.304965; errup = 0.0298745; errdown = 0.0284051;}
  else if (ht> 450 && ht<= 550 && met> 165 && met<= 170) {eff = 0.369748; errup = 0.0339029; errdown = 0.032738;}
  else if (ht> 450 && ht<= 550 && met> 170 && met<= 175) {eff = 0.490291; errup = 0.0372111; errdown = 0.0371105;}
  else if (ht> 450 && ht<= 550 && met> 175 && met<= 180) {eff = 0.421429; errup = 0.0457381; errdown = 0.0445252;}
  else if (ht> 450 && ht<= 550 && met> 180 && met<= 185) {eff = 0.394958; errup = 0.0497554; errdown = 0.0478349;}
  else if (ht> 450 && ht<= 550 && met> 185 && met<= 190) {eff = 0.528571; errup = 0.0453635; errdown = 0.0458042;}
  else if (ht> 450 && ht<= 550 && met> 190 && met<= 195) {eff = 0.505376; errup = 0.05682; errdown = 0.0569467;}
  else if (ht> 450 && ht<= 550 && met> 195 && met<= 200) {eff = 0.516129; errup = 0.0566695; errdown = 0.0570497;}
  else if (ht> 450 && ht<= 550 && met> 200 && met<= 210) {eff = 0.603053; errup = 0.0455233; errdown = 0.0472287;}
  else if (ht> 450 && ht<= 550 && met> 210 && met<= 220) {eff = 0.62766; errup = 0.0533775; errdown = 0.0563626;}
  else if (ht> 450 && ht<= 550 && met> 220 && met<= 230) {eff = 0.678571; errup = 0.0670668; errdown = 0.0742702;}
  else if (ht> 450 && ht<= 550 && met> 230 && met<= 240) {eff = 0.642857; errup = 0.0693838; errdown = 0.0751284;}
  else if (ht> 450 && ht<= 550 && met> 240 && met<= 250) {eff = 0.575; errup = 0.0872414; errdown = 0.0915181;}
  else if (ht> 450 && ht<= 550 && met> 250 && met<= 300) {eff = 0.73; errup = 0.046619; errdown = 0.0517038;}
  else if (ht> 450 && ht<= 550 && met> 300 && met<= 400) {eff = 0.674419; errup = 0.0774087; errdown = 0.0866936;}
  else if (ht> 450 && ht<= 550 && met> 400 && met<= 9999) {eff = 0.882353; errup = 0.0756114; errdown = 0.134601;}
  else if (ht> 550 && ht<= 650 && met> 150 && met<= 155) {eff = 0.313341; errup = 0.0170674; errdown = 0.0165936;}
  else if (ht> 550 && ht<= 650 && met> 155 && met<= 160) {eff = 0.352679; errup = 0.0193896; errdown = 0.0189339;}
  else if (ht> 550 && ht<= 650 && met> 160 && met<= 165) {eff = 0.347594; errup = 0.0212618; errdown = 0.020695;}
  else if (ht> 550 && ht<= 650 && met> 165 && met<= 170) {eff = 0.401376; errup = 0.0248301; errdown = 0.0243562;}
  else if (ht> 550 && ht<= 650 && met> 170 && met<= 175) {eff = 0.447721; errup = 0.0271969; errdown = 0.0269025;}
  else if (ht> 550 && ht<= 650 && met> 175 && met<= 180) {eff = 0.454006; errup = 0.0287041; errdown = 0.0284168;}
  else if (ht> 550 && ht<= 650 && met> 180 && met<= 185) {eff = 0.534591; errup = 0.0293802; errdown = 0.0296096;}
  else if (ht> 550 && ht<= 650 && met> 185 && met<= 190) {eff = 0.573034; errup = 0.0317912; errdown = 0.0323708;}
  else if (ht> 550 && ht<= 650 && met> 190 && met<= 195) {eff = 0.599138; errup = 0.0337985; errdown = 0.0347079;}
  else if (ht> 550 && ht<= 650 && met> 195 && met<= 200) {eff = 0.524324; errup = 0.0391653; errdown = 0.0394467;}
  else if (ht> 550 && ht<= 650 && met> 200 && met<= 210) {eff = 0.585616; errup = 0.0301762; errdown = 0.0307961;}
  else if (ht> 550 && ht<= 650 && met> 210 && met<= 220) {eff = 0.576577; errup = 0.034963; errdown = 0.0356977;}
  else if (ht> 550 && ht<= 650 && met> 220 && met<= 230) {eff = 0.682081; errup = 0.037051; errdown = 0.0393194;}
  else if (ht> 550 && ht<= 650 && met> 230 && met<= 240) {eff = 0.604478; errup = 0.0449456; errdown = 0.0466345;}
  else if (ht> 550 && ht<= 650 && met> 240 && met<= 250) {eff = 0.699029; errup = 0.0476823; errdown = 0.0519351;}
  else if (ht> 550 && ht<= 650 && met> 250 && met<= 275) {eff = 0.666667; errup = 0.0355983; errdown = 0.0374612;}
  else if (ht> 550 && ht<= 650 && met> 275 && met<= 300) {eff = 0.704918; errup = 0.043372; errdown = 0.0470452;}
  else if (ht> 550 && ht<= 650 && met> 300 && met<= 400) {eff = 0.760736; errup = 0.0346478; errdown = 0.038127;}
  else if (ht> 550 && ht<= 650 && met> 400 && met<= 9999) {eff = 0.890909; errup = 0.0301555; errdown = 0.0383004;}
  else if (ht> 650 && ht<= 800 && met> 150 && met<= 155) {eff = 0.287205; errup = 0.00802654; errdown = 0.00789721;}
  else if (ht> 650 && ht<= 800 && met> 155 && met<= 160) {eff = 0.334996; errup = 0.00914685; errdown = 0.00902692;}
  else if (ht> 650 && ht<= 800 && met> 160 && met<= 165) {eff = 0.364026; errup = 0.0102288; errdown = 0.0101099;}
  else if (ht> 650 && ht<= 800 && met> 165 && met<= 170) {eff = 0.407; errup = 0.01128; errdown = 0.0111849;}
  else if (ht> 650 && ht<= 800 && met> 170 && met<= 175) {eff = 0.428246; errup = 0.0121314; errdown = 0.0120478;}
  else if (ht> 650 && ht<= 800 && met> 175 && met<= 180) {eff = 0.448061; errup = 0.0134651; errdown = 0.0133913;}
  else if (ht> 650 && ht<= 800 && met> 180 && met<= 185) {eff = 0.481052; errup = 0.0142911; errdown = 0.014261;}
  else if (ht> 650 && ht<= 800 && met> 185 && met<= 190) {eff = 0.519285; errup = 0.0157683; errdown = 0.0158057;}
  else if (ht> 650 && ht<= 800 && met> 190 && met<= 195) {eff = 0.538226; errup = 0.0163779; errdown = 0.0164583;}
  else if (ht> 650 && ht<= 800 && met> 195 && met<= 200) {eff = 0.542579; errup = 0.0179196; errdown = 0.0180267;}
  else if (ht> 650 && ht<= 800 && met> 200 && met<= 210) {eff = 0.577011; errup = 0.0139928; errdown = 0.0141141;}
  else if (ht> 650 && ht<= 800 && met> 210 && met<= 220) {eff = 0.63128; errup = 0.0151921; errdown = 0.0154488;}
  else if (ht> 650 && ht<= 800 && met> 220 && met<= 230) {eff = 0.661137; errup = 0.0166775; errdown = 0.017073;}
  else if (ht> 650 && ht<= 800 && met> 230 && met<= 240) {eff = 0.695385; errup = 0.018495; errdown = 0.0191212;}
  else if (ht> 650 && ht<= 800 && met> 240 && met<= 250) {eff = 0.746741; errup = 0.0192002; errdown = 0.0201637;}
  else if (ht> 650 && ht<= 800 && met> 250 && met<= 275) {eff = 0.759101; errup = 0.0142337; errdown = 0.0148094;}
  else if (ht> 650 && ht<= 800 && met> 275 && met<= 300) {eff = 0.80155; errup = 0.0159803; errdown = 0.0169606;}
  else if (ht> 650 && ht<= 800 && met> 300 && met<= 350) {eff = 0.829677; errup = 0.013698; errdown = 0.0145887;}
  else if (ht> 650 && ht<= 800 && met> 350 && met<= 400) {eff = 0.889435; errup = 0.015739; errdown = 0.0178009;}
  else if (ht> 650 && ht<= 800 && met> 400 && met<= 450) {eff = 0.961089; errup = 0.0119845; errdown = 0.0161408;}
  else if (ht> 650 && ht<= 800 && met> 450 && met<= 500) {eff = 0.952381; errup = 0.0173963; errdown = 0.0247073;}
  else if (ht> 650 && ht<= 800 && met> 500 && met<= 9999) {eff = 0.98895; errup = 0.00713393; errdown = 0.0143876;}
  else if (ht> 800 && ht<= 1000 && met> 150 && met<= 155) {eff = 0.308295; errup = 0.00385795; errdown = 0.00383161;}
  else if (ht> 800 && ht<= 1000 && met> 155 && met<= 160) {eff = 0.351742; errup = 0.00442896; errdown = 0.00440383;}
  else if (ht> 800 && ht<= 1000 && met> 160 && met<= 165) {eff = 0.396055; errup = 0.00494128; errdown = 0.00492036;}
  else if (ht> 800 && ht<= 1000 && met> 165 && met<= 170) {eff = 0.428144; errup = 0.00548089; errdown = 0.0054635;}
  else if (ht> 800 && ht<= 1000 && met> 170 && met<= 175) {eff = 0.469915; errup = 0.00600601; errdown = 0.00599741;}
  else if (ht> 800 && ht<= 1000 && met> 175 && met<= 180) {eff = 0.514054; errup = 0.00658525; errdown = 0.00659007;}
  else if (ht> 800 && ht<= 1000 && met> 180 && met<= 185) {eff = 0.55783; errup = 0.00698571; errdown = 0.00700835;}
  else if (ht> 800 && ht<= 1000 && met> 185 && met<= 190) {eff = 0.599503; errup = 0.00745374; errdown = 0.00749938;}
  else if (ht> 800 && ht<= 1000 && met> 190 && met<= 195) {eff = 0.623747; errup = 0.00786148; errdown = 0.00792613;}
  else if (ht> 800 && ht<= 1000 && met> 195 && met<= 200) {eff = 0.653134; errup = 0.00832509; errdown = 0.00841815;}
  else if (ht> 800 && ht<= 1000 && met> 200 && met<= 210) {eff = 0.697239; errup = 0.00624584; errdown = 0.00631852;}
  else if (ht> 800 && ht<= 1000 && met> 210 && met<= 220) {eff = 0.731533; errup = 0.00679355; errdown = 0.00690226;}
  else if (ht> 800 && ht<= 1000 && met> 220 && met<= 230) {eff = 0.773541; errup = 0.00723242; errdown = 0.00739616;}
  else if (ht> 800 && ht<= 1000 && met> 230 && met<= 240) {eff = 0.800143; errup = 0.00762934; errdown = 0.00784899;}
  else if (ht> 800 && ht<= 1000 && met> 240 && met<= 250) {eff = 0.818576; errup = 0.00810251; errdown = 0.00838646;}
  else if (ht> 800 && ht<= 1000 && met> 250 && met<= 275) {eff = 0.850149; errup = 0.00566168; errdown = 0.00583953;}
  else if (ht> 800 && ht<= 1000 && met> 275 && met<= 300) {eff = 0.865429; errup = 0.00675846; errdown = 0.00704916;}
  else if (ht> 800 && ht<= 1000 && met> 300 && met<= 350) {eff = 0.915629; errup = 0.00519317; errdown = 0.00549017;}
  else if (ht> 800 && ht<= 1000 && met> 350 && met<= 400) {eff = 0.932515; errup = 0.00698279; errdown = 0.00768249;}
  else if (ht> 800 && ht<= 1000 && met> 400 && met<= 450) {eff = 0.945783; errup = 0.00882162; errdown = 0.0102782;}
  else if (ht> 800 && ht<= 1000 && met> 450 && met<= 500) {eff = 0.969863; errup = 0.0088803; errdown = 0.0118439;}
  else if (ht> 800 && ht<= 1000 && met> 500 && met<= 9999) {eff = 0.990506; errup = 0.00516244; errdown = 0.0091484;}
  else if (ht> 1000 && ht<= 9999 && met> 150 && met<= 155) {eff = 0.228095; errup = 0.00234702; errdown = 0.00233024;}
  else if (ht> 1000 && ht<= 9999 && met> 155 && met<= 160) {eff = 0.256356; errup = 0.00266033; errdown = 0.00264248;}
  else if (ht> 1000 && ht<= 9999 && met> 160 && met<= 165) {eff = 0.285183; errup = 0.0029988; errdown = 0.0029801;}
  else if (ht> 1000 && ht<= 9999 && met> 165 && met<= 170) {eff = 0.31316; errup = 0.00330052; errdown = 0.00328185;}
  else if (ht> 1000 && ht<= 9999 && met> 170 && met<= 175) {eff = 0.339648; errup = 0.00364849; errdown = 0.00362971;}
  else if (ht> 1000 && ht<= 9999 && met> 175 && met<= 180) {eff = 0.367469; errup = 0.00403482; errdown = 0.0040165;}
  else if (ht> 1000 && ht<= 9999 && met> 180 && met<= 185) {eff = 0.38774; errup = 0.00440169; errdown = 0.00438361;}
  else if (ht> 1000 && ht<= 9999 && met> 185 && met<= 190) {eff = 0.411257; errup = 0.00474545; errdown = 0.00472915;}
  else if (ht> 1000 && ht<= 9999 && met> 190 && met<= 195) {eff = 0.448074; errup = 0.00514581; errdown = 0.00513483;}
  else if (ht> 1000 && ht<= 9999 && met> 195 && met<= 200) {eff = 0.473435; errup = 0.00549329; errdown = 0.00548694;}
  else if (ht> 1000 && ht<= 9999 && met> 200 && met<= 210) {eff = 0.506419; errup = 0.00429358; errdown = 0.00429452;}
  else if (ht> 1000 && ht<= 9999 && met> 210 && met<= 220) {eff = 0.536992; errup = 0.00485612; errdown = 0.00486309;}
  else if (ht> 1000 && ht<= 9999 && met> 220 && met<= 230) {eff = 0.58469; errup = 0.0054214; errdown = 0.00544175;}
  else if (ht> 1000 && ht<= 9999 && met> 230 && met<= 240) {eff = 0.612422; errup = 0.00601017; errdown = 0.00604416;}
  else if (ht> 1000 && ht<= 9999 && met> 240 && met<= 250) {eff = 0.647926; errup = 0.00650565; errdown = 0.00656023;}
  else if (ht> 1000 && ht<= 9999 && met> 250 && met<= 275) {eff = 0.691356; errup = 0.00468385; errdown = 0.00472311;}
  else if (ht> 1000 && ht<= 9999 && met> 275 && met<= 300) {eff = 0.738055; errup = 0.00548933; errdown = 0.0055635;}
  else if (ht> 1000 && ht<= 9999 && met> 300 && met<= 350) {eff = 0.770948; errup = 0.00496402; errdown = 0.00503974;}
  else if (ht> 1000 && ht<= 9999 && met> 350 && met<= 400) {eff = 0.822325; errup = 0.00654036; errdown = 0.0067304;}
  else if (ht> 1000 && ht<= 9999 && met> 400 && met<= 450) {eff = 0.854026; errup = 0.00811657; errdown = 0.00849615;}
  else if (ht> 1000 && ht<= 9999 && met> 450 && met<= 500) {eff = 0.897143; errup = 0.00945371; errdown = 0.0102482;}
  else if (ht> 1000 && ht<= 9999 && met> 500 && met<= 9999) {eff = 0.908444; errup = 0.00926992; errdown = 0.0101464;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_1el_trigeff2016postVFP("get_1el_trigeff2016postVFP", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.; // Not used, but for reference
  float eff = 1., el_pt = Higfuncs::lead_signal_lepton_pt.GetScalar(b), met = b.met(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 20 && el_pt<= 25) {eff = 0.0996819; errup = 0.0107334; errdown = 0.0098388;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 20 && el_pt<= 25) {eff = 0.477396; errup = 0.0221663; errdown = 0.0220812;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 20 && el_pt<= 25) {eff = 0.439773; errup = 0.0173611; errdown = 0.0172197;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 20 && el_pt<= 25) {eff = 0.162304; errup = 0.0311877; errdown = 0.0273175;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 20 && el_pt<= 25) {eff = 0.551724; errup = 0.040132; errdown = 0.0407695;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 20 && el_pt<= 25) {eff = 0.483146; errup = 0.027898; errdown = 0.0277985;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 20 && el_pt<= 25) {eff = 0.176471; errup = 0.0701055; errdown = 0.0552897;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 20 && el_pt<= 25) {eff = 0.588235; errup = 0.0577422; errdown = 0.0600294;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 20 && el_pt<= 25) {eff = 0.617021; errup = 0.0373411; errdown = 0.0386748;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 20 && el_pt<= 25) {eff = 0.25; errup = 0.133748; errdown = 0.103407;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 20 && el_pt<= 25) {eff = 0.714286; errup = 0.0922305; errdown = 0.110282;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 20 && el_pt<= 25) {eff = 0.747368; errup = 0.0467106; errdown = 0.0524932;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 20 && el_pt<= 25) {eff = 0.625; errup = 0.196076; errdown = 0.234946;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 20 && el_pt<= 25) {eff = 0.826087; errup = 0.081293; errdown = 0.116303;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 20 && el_pt<= 25) {eff = 0.8; errup = 0.0706632; errdown = 0.0910146;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 20 && el_pt<= 25) {eff = 0.8; errup = 0.166039; errdown = 0.324251;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 20 && el_pt<= 25) {eff = 0.9; errup = 0.082873; errdown = 0.194135;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 20 && el_pt<= 25) {eff = 0.866667; errup = 0.0626915; errdown = 0.0929362;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 20 && el_pt<= 25) {eff = 1; errup = 0; errdown = 0.458642;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 20 && el_pt<= 25) {eff = 0.923077; errup = 0.0637222; errdown = 0.155415;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 20 && el_pt<= 25) {eff = 0.965517; errup = 0.0285434; errdown = 0.0748731;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 20 && el_pt<= 25) {eff = 1; errup = 0; errdown = 0.205568;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 20 && el_pt<= 25) {eff = 1; errup = 0; errdown = 0.184992;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 20 && el_pt<= 25) {eff = 1; errup = 0; errdown = 0.0542609;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 25 && el_pt<= 30) {eff = 0.199313; errup = 0.0179507; errdown = 0.016865;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 25 && el_pt<= 30) {eff = 0.504043; errup = 0.0272555; errdown = 0.0272784;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 25 && el_pt<= 30) {eff = 0.510067; errup = 0.0212794; errdown = 0.0213145;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 25 && el_pt<= 30) {eff = 0.237762; errup = 0.0409827; errdown = 0.0369729;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 25 && el_pt<= 30) {eff = 0.595588; errup = 0.0448213; errdown = 0.0463426;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 25 && el_pt<= 30) {eff = 0.59375; errup = 0.0286618; errdown = 0.0292799;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 25 && el_pt<= 30) {eff = 0.411765; errup = 0.0798111; errdown = 0.0759102;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 25 && el_pt<= 30) {eff = 0.706897; errup = 0.0637545; errdown = 0.0718242;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 25 && el_pt<= 30) {eff = 0.737805; errup = 0.0357174; errdown = 0.0388626;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 25 && el_pt<= 30) {eff = 0.555556; errup = 0.136424; errdown = 0.143767;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 25 && el_pt<= 30) {eff = 0.833333; errup = 0.0640469; errdown = 0.0862613;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 25 && el_pt<= 30) {eff = 0.826667; errup = 0.0451559; errdown = 0.0551063;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 25 && el_pt<= 30) {eff = 0.8125; errup = 0.100212; errdown = 0.149399;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 25 && el_pt<= 30) {eff = 0.95; errup = 0.0413995; errdown = 0.105764;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 25 && el_pt<= 30) {eff = 0.78; errup = 0.0614916; errdown = 0.0744258;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 25 && el_pt<= 30) {eff = 1; errup = 0; errdown = 0.601684;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 25 && el_pt<= 30) {eff = 1; errup = 0; errdown = 0.168149;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 25 && el_pt<= 30) {eff = 0.942857; errup = 0.0368224; errdown = 0.0704444;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 25 && el_pt<= 30) {eff = 1; errup = 0; errdown = 0.23126;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 25 && el_pt<= 30) {eff = 1; errup = 0; errdown = 0.132046;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 25 && el_pt<= 30) {eff = 0.961538; errup = 0.0318392; errdown = 0.0829559;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 25 && el_pt<= 30) {eff = 1; errup = -1; errdown = -1;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 25 && el_pt<= 30) {eff = 0.923077; errup = 0.0637222; errdown = 0.155415;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 25 && el_pt<= 30) {eff = 0.972973; errup = 0.0223689; errdown = 0.0594217;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 30 && el_pt<= 40) {eff = 0.319277; errup = 0.0170005; errdown = 0.0165491;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 30 && el_pt<= 40) {eff = 0.631229; errup = 0.0202508; errdown = 0.0207047;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 30 && el_pt<= 40) {eff = 0.612805; errup = 0.0159101; errdown = 0.0161468;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 30 && el_pt<= 40) {eff = 0.5; errup = 0.0349016; errdown = 0.0349016;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 30 && el_pt<= 40) {eff = 0.785408; errup = 0.0276734; errdown = 0.0303116;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 30 && el_pt<= 40) {eff = 0.653061; errup = 0.0221744; errdown = 0.022828;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 30 && el_pt<= 40) {eff = 0.65; errup = 0.0507763; errdown = 0.0540693;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 30 && el_pt<= 40) {eff = 0.77686; errup = 0.0393116; errdown = 0.0443603;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 30 && el_pt<= 40) {eff = 0.816254; errup = 0.0235582; errdown = 0.0259595;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 30 && el_pt<= 40) {eff = 0.829787; errup = 0.0566616; errdown = 0.073172;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 30 && el_pt<= 40) {eff = 0.816901; errup = 0.0475533; errdown = 0.0577528;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 30 && el_pt<= 40) {eff = 0.834437; errup = 0.0310421; errdown = 0.0359358;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 30 && el_pt<= 40) {eff = 0.653846; errup = 0.103143; errdown = 0.11704;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 30 && el_pt<= 40) {eff = 0.903226; errup = 0.052199; errdown = 0.0852576;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 30 && el_pt<= 40) {eff = 0.9; errup = 0.0303323; errdown = 0.0396026;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 30 && el_pt<= 40) {eff = 0.833333; errup = 0.106875; errdown = 0.17901;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 30 && el_pt<= 40) {eff = 0.909091; errup = 0.0584962; errdown = 0.107544;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 30 && el_pt<= 40) {eff = 0.985294; errup = 0.0121686; errdown = 0.0330032;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 30 && el_pt<= 40) {eff = 1; errup = 0; errdown = 0.132046;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 30 && el_pt<= 40) {eff = 0.956522; errup = 0.0359954; errdown = 0.0929875;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 30 && el_pt<= 40) {eff = 1; errup = 0; errdown = 0.0292574;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 30 && el_pt<= 40) {eff = 1; errup = 0; errdown = 0.168149;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 30 && el_pt<= 40) {eff = 1; errup = 0; errdown = 0.108691;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 30 && el_pt<= 40) {eff = 1; errup = 0; errdown = 0.0292574;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 40 && el_pt<= 110) {eff = 0.466989; errup = 0.00831541; errdown = 0.00829741;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 40 && el_pt<= 110) {eff = 0.718583; errup = 0.00887928; errdown = 0.00904933;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 40 && el_pt<= 110) {eff = 0.727714; errup = 0.00580673; errdown = 0.00588414;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 40 && el_pt<= 110) {eff = 0.603068; errup = 0.0155195; errdown = 0.0157233;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 40 && el_pt<= 110) {eff = 0.755024; errup = 0.0135245; errdown = 0.0140299;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 40 && el_pt<= 110) {eff = 0.788055; errup = 0.00787275; errdown = 0.0080874;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 40 && el_pt<= 110) {eff = 0.766839; errup = 0.0220618; errdown = 0.0235253;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 40 && el_pt<= 110) {eff = 0.849174; errup = 0.0165256; errdown = 0.0180582;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 40 && el_pt<= 110) {eff = 0.81678; errup = 0.00971332; errdown = 0.0101166;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 40 && el_pt<= 110) {eff = 0.848168; errup = 0.0265437; errdown = 0.0305437;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 40 && el_pt<= 110) {eff = 0.880878; errup = 0.0184018; errdown = 0.0209912;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 40 && el_pt<= 110) {eff = 0.855222; errup = 0.0114463; errdown = 0.0122141;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 40 && el_pt<= 110) {eff = 0.95; errup = 0.0214289; errdown = 0.0324086;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 40 && el_pt<= 110) {eff = 0.927835; errup = 0.0186752; errdown = 0.0236812;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 40 && el_pt<= 110) {eff = 0.932526; errup = 0.0104962; errdown = 0.0121154;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 40 && el_pt<= 110) {eff = 0.930556; errup = 0.0296691; errdown = 0.044248;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 40 && el_pt<= 110) {eff = 0.971631; errup = 0.0135284; errdown = 0.0218622;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 40 && el_pt<= 110) {eff = 0.963824; errup = 0.00945772; errdown = 0.0121768;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 40 && el_pt<= 110) {eff = 1; errup = 0; errdown = 0.0297298;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 40 && el_pt<= 110) {eff = 0.991525; errup = 0.00701163; errdown = 0.0192164;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 40 && el_pt<= 110) {eff = 0.977064; errup = 0.00709149; errdown = 0.0096262;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 40 && el_pt<= 110) {eff = 1; errup = 0; errdown = 0.0409781;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 40 && el_pt<= 110) {eff = 1; errup = 0; errdown = 0.0170586;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 40 && el_pt<= 110) {eff = 0.997712; errup = 0.00189309; errdown = 0.00524224;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 110 && el_pt<= 120) {eff = 0.6841; errup = 0.0218831; errdown = 0.0226903;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 110 && el_pt<= 120) {eff = 0.771429; errup = 0.0258053; errdown = 0.0278774;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 110 && el_pt<= 120) {eff = 0.789337; errup = 0.0149553; errdown = 0.0157405;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 110 && el_pt<= 120) {eff = 0.711538; errup = 0.0467619; errdown = 0.0512421;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 110 && el_pt<= 120) {eff = 0.815534; errup = 0.0394863; errdown = 0.0463477;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 110 && el_pt<= 120) {eff = 0.856; errup = 0.0184346; errdown = 0.0204696;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 110 && el_pt<= 120) {eff = 0.828571; errup = 0.0658118; errdown = 0.0883336;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 110 && el_pt<= 120) {eff = 0.846154; errup = 0.0514205; errdown = 0.0670816;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 110 && el_pt<= 120) {eff = 0.850515; errup = 0.0261571; errdown = 0.0301216;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 110 && el_pt<= 120) {eff = 0.904762; errup = 0.0612701; errdown = 0.112063;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 110 && el_pt<= 120) {eff = 0.933333; errup = 0.0429421; errdown = 0.0812434;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 110 && el_pt<= 120) {eff = 0.942623; errup = 0.0209196; errdown = 0.0295375;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.15411;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.102638;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 110 && el_pt<= 120) {eff = 0.988235; errup = 0.00973437; errdown = 0.0265318;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.23126;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.0923495;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 110 && el_pt<= 120) {eff = 0.960784; errup = 0.0252892; errdown = 0.0493939;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.368878;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.115502;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.0297298;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.458642;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.0839348;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 110 && el_pt<= 120) {eff = 1; errup = 0; errdown = 0.0312433;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && el_pt> 120 && el_pt<= 9999) {eff = 0.812933; errup = 0.0109527; errdown = 0.0114514;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && el_pt> 120 && el_pt<= 9999) {eff = 0.890411; errup = 0.0102342; errdown = 0.0110992;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && el_pt> 120 && el_pt<= 9999) {eff = 0.892363; errup = 0.0065919; errdown = 0.00695424;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && el_pt> 120 && el_pt<= 9999) {eff = 0.829268; errup = 0.0212048; errdown = 0.0233558;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && el_pt> 120 && el_pt<= 9999) {eff = 0.882682; errup = 0.0172439; errdown = 0.0195534;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && el_pt> 120 && el_pt<= 9999) {eff = 0.894908; errup = 0.0101854; errdown = 0.0110864;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && el_pt> 120 && el_pt<= 9999) {eff = 0.861702; errup = 0.0364186; errdown = 0.0452016;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && el_pt> 120 && el_pt<= 9999) {eff = 0.935829; errup = 0.0179599; errdown = 0.0232981;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && el_pt> 120 && el_pt<= 9999) {eff = 0.93763; errup = 0.0110824; errdown = 0.0130713;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && el_pt> 120 && el_pt<= 9999) {eff = 0.957447; errup = 0.0274377; errdown = 0.0533848;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && el_pt> 120 && el_pt<= 9999) {eff = 0.963415; errup = 0.0198457; errdown = 0.0343095;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && el_pt> 120 && el_pt<= 9999) {eff = 0.942177; errup = 0.0136499; errdown = 0.0170267;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0879414;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && el_pt> 120 && el_pt<= 9999) {eff = 0.972973; errup = 0.0174378; errdown = 0.0345372;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && el_pt> 120 && el_pt<= 9999) {eff = 0.978836; errup = 0.0101019; errdown = 0.0164175;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.142229;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0527078;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && el_pt> 120 && el_pt<= 9999) {eff = 0.984962; errup = 0.00970701; errdown = 0.019489;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.115502;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0498539;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && el_pt> 120 && el_pt<= 9999) {eff = 0.985714; errup = 0.00922194; errdown = 0.0185309;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.308024;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0485397;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && el_pt> 120 && el_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0108986;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_1mu_trigeff2016postVFP("get_1mu_trigeff2016postVFP", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.; // Not used, but for reference
  float eff = 1., mu_pt = Higfuncs::lead_signal_lepton_pt.GetScalar(b), met = b.met(), ht = b.ht();
  errup+=errdown; //suppress unused warning
  if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && mu_pt> 20 && mu_pt<= 25) {eff = 0.293461; errup = 0.019312; errdown = 0.018625;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && mu_pt> 20 && mu_pt<= 25) {eff = 0.888889; errup = 0.0144255; errdown = 0.0161393;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && mu_pt> 20 && mu_pt<= 25) {eff = 0.896287; errup = 0.0110132; errdown = 0.0120868;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && mu_pt> 20 && mu_pt<= 25) {eff = 0.293413; errup = 0.0394557; errdown = 0.0367817;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && mu_pt> 20 && mu_pt<= 25) {eff = 0.90625; errup = 0.019693; errdown = 0.0237247;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && mu_pt> 20 && mu_pt<= 25) {eff = 0.892857; errup = 0.0164138; errdown = 0.0187514;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && mu_pt> 20 && mu_pt<= 25) {eff = 0.295082; errup = 0.069826; errdown = 0.0622477;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && mu_pt> 20 && mu_pt<= 25) {eff = 0.884615; errup = 0.0367254; errdown = 0.0482331;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && mu_pt> 20 && mu_pt<= 25) {eff = 0.898477; errup = 0.021796; errdown = 0.0263042;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && mu_pt> 20 && mu_pt<= 25) {eff = 0.695652; errup = 0.10473; errdown = 0.124968;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && mu_pt> 20 && mu_pt<= 25) {eff = 0.866667; errup = 0.051586; errdown = 0.0711416;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && mu_pt> 20 && mu_pt<= 25) {eff = 0.92381; errup = 0.0259336; errdown = 0.0354277;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && mu_pt> 20 && mu_pt<= 25) {eff = 0.6; errup = 0.180009; errdown = 0.204597;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.115502;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && mu_pt> 20 && mu_pt<= 25) {eff = 0.963636; errup = 0.0234528; errdown = 0.0459572;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && mu_pt> 20 && mu_pt<= 25) {eff = 0.714286; errup = 0.182129; errdown = 0.259938;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.205568;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && mu_pt> 20 && mu_pt<= 25) {eff = 0.911765; errup = 0.0476324; errdown = 0.0784416;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.184992;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.123222;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && mu_pt> 20 && mu_pt<= 25) {eff = 0.972973; errup = 0.0223689; errdown = 0.0594217;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.264229;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.184992;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && mu_pt> 20 && mu_pt<= 25) {eff = 1; errup = 0; errdown = 0.0512411;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && mu_pt> 25 && mu_pt<= 30) {eff = 0.412651; errup = 0.0287579; errdown = 0.0282034;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && mu_pt> 25 && mu_pt<= 30) {eff = 0.912121; errup = 0.0157371; errdown = 0.0184726;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && mu_pt> 25 && mu_pt<= 30) {eff = 0.900356; errup = 0.012763; errdown = 0.0142866;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && mu_pt> 25 && mu_pt<= 30) {eff = 0.620155; errup = 0.0454081; errdown = 0.0474297;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && mu_pt> 25 && mu_pt<= 30) {eff = 0.93985; errup = 0.0205473; errdown = 0.0283269;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && mu_pt> 25 && mu_pt<= 30) {eff = 0.938567; errup = 0.0140813; errdown = 0.0174322;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && mu_pt> 25 && mu_pt<= 30) {eff = 0.745455; errup = 0.0621403; errdown = 0.0723219;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && mu_pt> 25 && mu_pt<= 30) {eff = 0.930233; errup = 0.0273265; errdown = 0.039347;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && mu_pt> 25 && mu_pt<= 30) {eff = 0.911917; errup = 0.0205997; errdown = 0.0253945;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && mu_pt> 25 && mu_pt<= 30) {eff = 0.84375; errup = 0.0657753; errdown = 0.0918894;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && mu_pt> 25 && mu_pt<= 30) {eff = 0.926829; errup = 0.0395567; errdown = 0.0660858;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && mu_pt> 25 && mu_pt<= 30) {eff = 0.966942; errup = 0.015755; errdown = 0.0253664;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && mu_pt> 25 && mu_pt<= 30) {eff = 0.9375; errup = 0.051761; errdown = 0.129429;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && mu_pt> 25 && mu_pt<= 30) {eff = 0.96; errup = 0.0331137; errdown = 0.0860512;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && mu_pt> 25 && mu_pt<= 30) {eff = 0.982456; errup = 0.0145177; errdown = 0.0391869;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.308024;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.205568;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && mu_pt> 25 && mu_pt<= 30) {eff = 0.970588; errup = 0.0243437; errdown = 0.0644074;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.205568;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.115502;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.0485397;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.458642;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.132046;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && mu_pt> 25 && mu_pt<= 30) {eff = 1; errup = 0; errdown = 0.042887;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && mu_pt> 30 && mu_pt<= 50) {eff = 0.630901; errup = 0.0187595; errdown = 0.0191484;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && mu_pt> 30 && mu_pt<= 50) {eff = 0.91989; errup = 0.0101634; errdown = 0.0114018;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && mu_pt> 30 && mu_pt<= 50) {eff = 0.93968; errup = 0.00644671; errdown = 0.00712171;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && mu_pt> 30 && mu_pt<= 50) {eff = 0.708207; errup = 0.0258745; errdown = 0.0272144;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && mu_pt> 30 && mu_pt<= 50) {eff = 0.956098; errup = 0.0101175; errdown = 0.012607;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && mu_pt> 30 && mu_pt<= 50) {eff = 0.942029; errup = 0.00815788; errdown = 0.00930424;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && mu_pt> 30 && mu_pt<= 50) {eff = 0.810651; errup = 0.0310145; errdown = 0.0350366;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && mu_pt> 30 && mu_pt<= 50) {eff = 0.954545; errup = 0.013342; errdown = 0.0176666;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && mu_pt> 30 && mu_pt<= 50) {eff = 0.965289; errup = 0.00743308; errdown = 0.00914054;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && mu_pt> 30 && mu_pt<= 50) {eff = 0.891892; errup = 0.0365297; errdown = 0.0489863;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && mu_pt> 30 && mu_pt<= 50) {eff = 0.985401; errup = 0.00942376; errdown = 0.0189297;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && mu_pt> 30 && mu_pt<= 50) {eff = 0.968571; errup = 0.00925788; errdown = 0.01234;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && mu_pt> 30 && mu_pt<= 50) {eff = 0.96875; errup = 0.025866; errdown = 0.0682225;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && mu_pt> 30 && mu_pt<= 50) {eff = 0.975309; errup = 0.0159324; errdown = 0.0316396;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && mu_pt> 30 && mu_pt<= 50) {eff = 0.991416; errup = 0.00554236; errdown = 0.0112089;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && mu_pt> 30 && mu_pt<= 50) {eff = 1; errup = 0; errdown = 0.0972223;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && mu_pt> 30 && mu_pt<= 50) {eff = 0.977273; errup = 0.0188087; errdown = 0.0503283;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && mu_pt> 30 && mu_pt<= 50) {eff = 0.987342; errup = 0.00817188; errdown = 0.0164511;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && mu_pt> 30 && mu_pt<= 50) {eff = 1; errup = 0; errdown = 0.0839348;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && mu_pt> 30 && mu_pt<= 50) {eff = 0.982143; errup = 0.014777; errdown = 0.0398659;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && mu_pt> 30 && mu_pt<= 50) {eff = 1; errup = 0; errdown = 0.0118073;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && mu_pt> 30 && mu_pt<= 50) {eff = 1; errup = 0; errdown = 0.0923495;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && mu_pt> 30 && mu_pt<= 50) {eff = 1; errup = 0; errdown = 0.040086;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && mu_pt> 30 && mu_pt<= 50) {eff = 1; errup = 0; errdown = 0.0118073;}
  else if (ht> 0 && ht<= 400 && met> 0 && met<= 50 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.947438; errup = 0.00811914; errdown = 0.00938969;}
  else if (ht> 400 && ht<= 600 && met> 0 && met<= 50 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.973631; errup = 0.00509378; errdown = 0.00614949;}
  else if (ht> 600 && ht<= 9999 && met> 0 && met<= 50 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.967153; errup = 0.00359435; errdown = 0.00399457;}
  else if (ht> 0 && ht<= 400 && met> 50 && met<= 75 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.954802; errup = 0.0110358; errdown = 0.0139291;}
  else if (ht> 400 && ht<= 600 && met> 50 && met<= 75 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.965909; errup = 0.00787981; errdown = 0.00985418;}
  else if (ht> 600 && ht<= 9999 && met> 50 && met<= 75 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.969904; errup = 0.00447027; errdown = 0.0051621;}
  else if (ht> 0 && ht<= 400 && met> 75 && met<= 100 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.940594; errup = 0.0166476; errdown = 0.0216431;}
  else if (ht> 400 && ht<= 600 && met> 75 && met<= 100 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.980337; errup = 0.00722355; errdown = 0.0104304;}
  else if (ht> 600 && ht<= 9999 && met> 75 && met<= 100 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.973123; errup = 0.00491733; errdown = 0.00587645;}
  else if (ht> 0 && ht<= 400 && met> 100 && met<= 125 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.965812; errup = 0.0162912; errdown = 0.0262064;}
  else if (ht> 400 && ht<= 600 && met> 100 && met<= 125 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.99095; errup = 0.00584319; errdown = 0.0118111;}
  else if (ht> 600 && ht<= 9999 && met> 100 && met<= 125 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.97654; errup = 0.00576462; errdown = 0.00733767;}
  else if (ht> 0 && ht<= 400 && met> 125 && met<= 150 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0297298;}
  else if (ht> 400 && ht<= 600 && met> 125 && met<= 150 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.980892; errup = 0.0103817; errdown = 0.0182377;}
  else if (ht> 600 && ht<= 9999 && met> 125 && met<= 150 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.981092; errup = 0.00615758; errdown = 0.00851584;}
  else if (ht> 0 && ht<= 400 && met> 150 && met<= 175 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.90625; errup = 0.0505826; errdown = 0.0828591;}
  else if (ht> 400 && ht<= 600 && met> 150 && met<= 175 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.989247; errup = 0.00889684; errdown = 0.0242902;}
  else if (ht> 600 && ht<= 9999 && met> 150 && met<= 175 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.996656; errup = 0.00276688; errdown = 0.00764837;}
  else if (ht> 0 && ht<= 400 && met> 175 && met<= 215 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0923495;}
  else if (ht> 400 && ht<= 600 && met> 175 && met<= 215 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0222013;}
  else if (ht> 600 && ht<= 9999 && met> 175 && met<= 215 && mu_pt> 50 && mu_pt<= 9999) {eff = 0.994475; errup = 0.00356776; errdown = 0.00724029;}
  else if (ht> 0 && ht<= 400 && met> 215 && met<= 9999 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0839348;}
  else if (ht> 400 && ht<= 600 && met> 215 && met<= 9999 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.0175464;}
  else if (ht> 600 && ht<= 9999 && met> 215 && met<= 9999 && mu_pt> 50 && mu_pt<= 9999) {eff = 1; errup = 0; errdown = 0.00544808;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_2el_trigeff2016postVFP("get_2el_trigeff2016postVFP", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.; // Not used, but for reference
  float eff = 1., el_pt = Higfuncs::lead_signal_lepton_pt.GetScalar(b);
  errup+=errdown; //suppress unused warning
  if (el_pt> 40 && el_pt<= 45) {eff = 0.924528; errup = 0.0256931; errdown = 0.0351136;}
  else if (el_pt> 45 && el_pt<= 50) {eff = 0.935673; errup = 0.0187901; errdown = 0.0246571;}
  else if (el_pt> 50 && el_pt<= 55) {eff = 0.943878; errup = 0.0164283; errdown = 0.021643;}
  else if (el_pt> 55 && el_pt<= 60) {eff = 0.954545; errup = 0.0139777; errdown = 0.0187643;}
  else if (el_pt> 60 && el_pt<= 65) {eff = 0.969543; errup = 0.0120157; errdown = 0.0177485;}
  else if (el_pt> 65 && el_pt<= 70) {eff = 0.966019; errup = 0.012448; errdown = 0.0178234;}
  else if (el_pt> 70 && el_pt<= 75) {eff = 0.952096; errup = 0.0164082; errdown = 0.0227768;}
  else if (el_pt> 75 && el_pt<= 80) {eff = 0.993464; errup = 0.00540748; errdown = 0.0148681;}
  else if (el_pt> 80 && el_pt<= 85) {eff = 0.989305; errup = 0.00690513; errdown = 0.0139317;}
  else if (el_pt> 85 && el_pt<= 90) {eff = 0.9375; errup = 0.0201501; errdown = 0.0272388;}
  else if (el_pt> 90 && el_pt<= 95) {eff = 0.968944; errup = 0.0133499; errdown = 0.0204626;}
  else if (el_pt> 95 && el_pt<= 100) {eff = 0.984848; errup = 0.0097805; errdown = 0.0196341;}
  else if (el_pt> 100 && el_pt<= 105) {eff = 1; errup = 0; errdown = 0.0139553;}
  else if (el_pt> 105 && el_pt<= 110) {eff = 0.977273; errup = 0.0123439; errdown = 0.0216133;}
  else if (el_pt> 110 && el_pt<= 9999) {eff = 0.995261; errup = 0.00392093; errdown = 0.0108133;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

const NamedFunc get_2mu_trigeff2016postVFP("get_2mu_trigeff2016postVFP", [](const Baby &b) -> NamedFunc::VectorType{
  float errup=0., errdown=0.; // Not used, but for reference
  float eff = 1., mu_pt = Higfuncs::lead_signal_lepton_pt.GetScalar(b);
  errup+=errdown; //suppress unused warning
  if (mu_pt> 40 && mu_pt<= 45) {eff = 0.971098; errup = 0.0124281; errdown = 0.0190785;}
  else if (mu_pt> 45 && mu_pt<= 50) {eff = 0.990354; errup = 0.00524536; errdown = 0.00929407;}
  else if (mu_pt> 50 && mu_pt<= 9999) {eff = 0.995758; errup = 0.00202898; errdown = 0.00334119;}
  std::vector<double> ret = {eff, errup, errdown};
  return ret;
});

}
