#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffZoneComponentApplicationMode.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffZoneComponentRootMode.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C048
   RuntimeId:        26BC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D5F
   VfTable:          0000000142366AA8
   Address (Base):   00000001430E4600
*/
#pragma pack(push, 16)
class BuffZoneComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  BuffZoneComponentApplicationMode ApplyMode; /* 0x0070 */
  BuffZoneComponentRootMode RootMode; /* 0x0074 */
  FB_HANDLE(class BuffData) Buff; /* 0x0078 */
  FB_FLOAT32 Radius; /* 0x0080 */
  char pad_0084[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(BuffZoneComponentData) == 144);

}
