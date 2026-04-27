#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428704D8
   RuntimeId:        298B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ECC
   VfTable:          000000014236DAA8
   Address (Base):   00000001430D8C30
*/
#pragma pack(push, 8)
class EORBoasts : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct EORBoast) BoastData; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EORBoasts) == 24);

}
