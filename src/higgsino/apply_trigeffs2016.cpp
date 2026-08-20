#include "higgsino/apply_trigeffs2016.hpp"

#include "core/baby.hpp"
#include "higgsino/apply_trigeffs2016APV.hpp"
#include "higgsino/apply_trigeffs2016postVFP.hpp"

namespace Higfuncs {
namespace {
NamedFunc::VectorType select_2016_efficiency(const Baby &b,
                                             const NamedFunc &apv_efficiency,
                                             const NamedFunc &postvfp_efficiency) {
  if (b.SampleTypeString().Contains("2016APV")) {
    return apv_efficiency.GetVector(b);
  }
  return postvfp_efficiency.GetVector(b);
}
}

const NamedFunc get_0l_trigeff2016(
    "get_0l_trigeff2016", [](const Baby &b) -> NamedFunc::VectorType {
      return select_2016_efficiency(
          b, get_0l_trigeff2016APV, get_0l_trigeff2016postVFP);
    });

const NamedFunc get_0l_trigeff2016_mettru(
    "get_0l_trigeff2016_mettru", [](const Baby &b) -> NamedFunc::VectorType {
      return select_2016_efficiency(
          b, get_0l_trigeff2016APV_mettru,
          get_0l_trigeff2016postVFP_mettru);
    });

const NamedFunc get_0l_fakemet_trigeff2016(
    "get_0l_fakemet_trigeff2016",
    [](const Baby &b) -> NamedFunc::VectorType {
      return select_2016_efficiency(
          b, get_0l_fakemet_trigeff2016APV,
          get_0l_fakemet_trigeff2016postVFP);
    });

const NamedFunc get_1el_trigeff2016(
    "get_1el_trigeff2016", [](const Baby &b) -> NamedFunc::VectorType {
      return select_2016_efficiency(
          b, get_1el_trigeff2016APV, get_1el_trigeff2016postVFP);
    });

const NamedFunc get_1mu_trigeff2016(
    "get_1mu_trigeff2016", [](const Baby &b) -> NamedFunc::VectorType {
      return select_2016_efficiency(
          b, get_1mu_trigeff2016APV, get_1mu_trigeff2016postVFP);
    });

const NamedFunc get_2el_trigeff2016(
    "get_2el_trigeff2016", [](const Baby &b) -> NamedFunc::VectorType {
      return select_2016_efficiency(
          b, get_2el_trigeff2016APV, get_2el_trigeff2016postVFP);
    });

const NamedFunc get_2mu_trigeff2016(
    "get_2mu_trigeff2016", [](const Baby &b) -> NamedFunc::VectorType {
      return select_2016_efficiency(
          b, get_2mu_trigeff2016APV, get_2mu_trigeff2016postVFP);
    });
}
