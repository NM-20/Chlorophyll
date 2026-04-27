#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatEvent.h>
#include <IcelinSdk.PvZGW2/PVZShared/CriteriaType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869E88
   RuntimeId:        252F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          113B
   VfTable:          0000000142355780
   Address (Base):   00000001430F7F90
*/
#pragma pack(push, 8)
class CriteriaData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 CompletionValue; /* 0x0010 */
  char pad_0014[0x0004];
  FB_HANDLE(class CriteriaGateList) GateList; /* 0x0018 */
  StatEvent Measuring; /* 0x0020 */
  char pad_0024[0x0004];
  FB_HANDLE(class StatsCategoryBaseData) ParamX; /* 0x0028 */
  FB_HANDLE(class StatsCategoryBaseData) ParamY; /* 0x0030 */
  FB_REFARRAY(class StatsCategoryBaseData) OrParamsX; /* 0x0038 */
  FB_CSTRING OrParamsXCode; /* 0x0040 */
  CriteriaType CriteriaType; /* 0x0048 */
  char pad_004C[0x0004];
  FB_CSTRING DescriptionSid; /* 0x0050 */
  FB_FLOAT32 ScaleFactor; /* 0x0058 */
  FB_FLOAT32 Scale; /* 0x005C */
  FB_BOOLEAN ShouldSummarize; /* 0x0060 */
  FB_BOOLEAN ShouldHide; /* 0x0061 */
  FB_BOOLEAN CountEvents; /* 0x0062 */
  char pad_0063[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(CriteriaData) == 104);

}
