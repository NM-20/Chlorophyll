#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F750
   RuntimeId:        12EB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C3A
   VfTable:          0000000142276420
   Address (Base):   00000001430EBE00
*/
#pragma pack(push, 8)
class AnimationProxyBankData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  AntRef ProxyBank; /* 0x001C */
  AntRef ProxyBankPointer; /* 0x0030 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(AnimationProxyBankData) == 72);

}
