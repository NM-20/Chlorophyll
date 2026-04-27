#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A098
   RuntimeId:        0744
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430CCC68
*/
enum EvaluatorType
{
  EtNone = 0,
  EtCamProx = 15,
  EtMultiColorInterp = 14,
  EtPolynomialColorInterp = 13,
  EtConstant = 12,
  EtSuperSphere = 11,
  EtSphere = 10,
  EtSampleTexture = 9,
  EtRotateVector = 8,
  EtRandomXYZ = 7,
  EtRandom = 6,
  EtSpline = 5,
  EtPolynomialOperator = 4,
  EtPolynomial = 3,
  EtBox = 2,
  EtDefault = 1,
  EtRandomXYZW = 16,
  EvaluatorTypeCount = 17,
};

}
