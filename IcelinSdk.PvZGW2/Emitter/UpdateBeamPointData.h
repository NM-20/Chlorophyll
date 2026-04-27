#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Emitter/LocationSelection.h>
#include <IcelinSdk.PvZGW2/Emitter/ParamOverrideSelection.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839E58
   RuntimeId:        0720
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08CA
   VfTable:          00000001421FF498
   Address (Base):   0000000143115990
*/
#pragma pack(push, 16)
class UpdateBeamPointData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 NumPoints; /* 0x0030 */
  FB_UINT32 NumCtrlPoints; /* 0x0034 */
  char pad_0038[0x0008];
  Vec4 TaperCoefficients; /* 0x0040 */
  Vec4 AttractorCoefficients; /* 0x0050 */
  Vec4 ParamCoefficients; /* 0x0060 */
  LocationSelection Attractor; /* 0x0070 */
  ParamOverrideSelection ParamOverride; /* 0x0074 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(UpdateBeamPointData) == 128);

}
