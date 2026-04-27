#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeFloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F678
   RuntimeId:        1DAB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10D0
   VfTable:          000000014231D958
   Address (Base):   000000014310A590
*/
#pragma pack(push, 8)
class FloatProvider_Random : public PVZBTreeFloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Duration; /* 0x0010 */
  char pad_0014[0x0004];
  FB_HANDLE(class FloatProvider) Min; /* 0x0018 */
  FB_HANDLE(class FloatProvider) Max; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_Random) == 40);

}
