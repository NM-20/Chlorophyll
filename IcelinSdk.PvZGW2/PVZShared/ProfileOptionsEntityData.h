#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428654E8
   RuntimeId:        22C5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C51
   VfTable:          00000001423513B8
   Address (Base):   00000001430E57A0
*/
#pragma pack(push, 8)
class ProfileOptionsEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ProfileOptionData) Option; /* 0x0018 */
  FB_INT32 OptionInt; /* 0x0020 */
  FB_FLOAT32 OptionFloat; /* 0x0024 */
  FB_CSTRING OptionString; /* 0x0028 */
  FB_BOOLEAN OptionBool; /* 0x0030 */
  FB_BOOLEAN TriggerOnPropertyChange; /* 0x0031 */
  FB_BOOLEAN ApplyOnPropertyChange; /* 0x0032 */
  FB_BOOLEAN RetrieveValueOnCreate; /* 0x0033 */
  FB_BOOLEAN OverrideWithPrimaryLocalId; /* 0x0034 */
  char pad_0035[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ProfileOptionsEntityData) == 56);

}
