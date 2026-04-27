#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Timeline/InfinityType.h>
#include <IcelinSdk.PvZGW2/Timeline/CurveType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854BE8
   RuntimeId:        17AD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F13
   VfTable:          00000001422B5738
   Address (Base):   000000014310DAD0
*/
#pragma pack(push, 8)
class CurveData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  InfinityType PreInfinity; /* 0x0010 */
  InfinityType PostInfinity; /* 0x0014 */
  CurveType CurveType; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(FB_FLOAT32) Time; /* 0x0020 */
  FB_STDARRAY(FB_FLOAT32) Value; /* 0x0028 */
  FB_STDARRAY(FB_FLOAT32) InTanX; /* 0x0030 */
  FB_STDARRAY(FB_FLOAT32) InTanY; /* 0x0038 */
  FB_STDARRAY(FB_FLOAT32) OutTanX; /* 0x0040 */
  FB_STDARRAY(FB_FLOAT32) OutTanY; /* 0x0048 */
  FB_BOOLEAN IsWeighted; /* 0x0050 */
  FB_BOOLEAN IsStatic; /* 0x0051 */
  char pad_0052[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(CurveData) == 88);

}
