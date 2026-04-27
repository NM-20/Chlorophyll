#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853FC8
   RuntimeId:        16E4
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7BC8
*/
enum DensityMap_FilterType
{
  DensityMapFilter_SecondOrderDifference = 0,
  DensityMapFilter_GaussianCurvature = 1,
  DensityMapFilter_MeanCurvature = 2,
  DensityMapFilter_LaplaceBeltrami = 3,
  DensityMapFilter_LaplaceBeltramiNoVoronoi = 4,
};

}
