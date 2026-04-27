#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/VisualEnvironmentReferenceObjectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EEC0
   RuntimeId:        126F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0983
   VfTable:          00000001422747B8
   Address (Base):   00000001430FC970
*/
#pragma pack(push, 16)
class LogicVisualEnvironmentReferenceObjectData : public VisualEnvironmentReferenceObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(LogicVisualEnvironmentReferenceObjectData) == 176);

}
